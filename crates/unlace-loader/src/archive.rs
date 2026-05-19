//! Unix ar archive (.a) reader.
//!
//! Parses standard ar format: 8-byte magic "!<arch>\n" followed by 60-byte
//! file headers + payloads. Supports BSD-style long filenames (`#1/NN`) and
//! GNU-style long filename table (member `//`).
//!
//! Thin archives use magic "!<thin>\n" and reference external files by name
//! instead of embedding their contents.

const AR_MAGIC: &[u8] = b"!<arch>\n";
const AR_THIN_MAGIC: &[u8] = b"!<thin>\n";
const HEADER_SIZE: usize = 60;

/// A single member of an archive.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ArchiveMember {
    pub name: String,
    pub offset: usize,
    pub size: u64,
}

/// Parsed archive: magic kind + member list.
#[derive(Clone, Debug)]
pub struct Archive {
    pub is_thin: bool,
    pub members: Vec<ArchiveMember>,
}

/// Detect whether a byte slice looks like an ar archive.
pub fn is_archive(bytes: &[u8]) -> bool {
    bytes.len() >= 8 && (bytes.starts_with(AR_MAGIC) || bytes.starts_with(AR_THIN_MAGIC))
}

/// Parse an archive header at `offset`. Returns the member name, payload
/// offset, and payload size, plus the offset of the next header.
fn parse_header(bytes: &[u8], offset: usize, long_names: Option<&[u8]>) -> Option<(ArchiveMember, usize)> {
    if offset + HEADER_SIZE > bytes.len() {
        return None;
    }
    let hdr = &bytes[offset..offset + HEADER_SIZE];
    let name_field = std::str::from_utf8(&hdr[..16]).ok()?.trim_end();
    let size_field = std::str::from_utf8(&hdr[48..58]).ok()?.trim();
    let end_marker = &hdr[58..60];
    if end_marker != b"`\n" {
        return None;
    }
    let size: u64 = size_field.parse().ok()?;
    let mut payload_offset = offset + HEADER_SIZE;
    let mut payload_size = size;

    // BSD long filename: "#1/N" means next N bytes of payload are the name.
    let mut resolved_name = name_field.trim_end_matches('/').to_string();
    if let Some(stripped) = name_field.strip_prefix("#1/") {
        if let Ok(name_len) = stripped.parse::<usize>() {
            if payload_offset + name_len <= bytes.len() {
                resolved_name =
                    String::from_utf8_lossy(&bytes[payload_offset..payload_offset + name_len])
                        .trim_end_matches('\0')
                        .to_string();
                payload_offset += name_len;
                payload_size -= name_len as u64;
            }
        }
    }
    // GNU long filename: "/N" indexes into the long-names table at member "//".
    if let Some(stripped) = name_field.strip_prefix('/') {
        if let Ok(idx) = stripped.parse::<usize>() {
            if let Some(table) = long_names {
                if let Some(slash) = table[idx..].iter().position(|&b| b == b'\n' || b == b'/') {
                    resolved_name = String::from_utf8_lossy(&table[idx..idx + slash]).to_string();
                }
            }
        }
    }

    let next = payload_offset + payload_size as usize;
    // Members are 2-byte aligned.
    let next_aligned = (next + 1) & !1;

    Some((
        ArchiveMember {
            name: resolved_name,
            offset: payload_offset,
            size: payload_size,
        },
        next_aligned,
    ))
}

/// Parse a full archive. Returns the members in order.
pub fn parse_archive(bytes: &[u8]) -> Option<Archive> {
    if !is_archive(bytes) {
        return None;
    }
    let is_thin = bytes.starts_with(AR_THIN_MAGIC);
    let mut offset = 8;
    let mut long_names: Option<Vec<u8>> = None;
    let mut members = Vec::new();

    while offset < bytes.len() {
        let (member, next) = parse_header(bytes, offset, long_names.as_deref())?;
        // Skip the special GNU symbol table "/" and long-names "//".
        if member.name == "/" || member.name.is_empty() {
            // Symbol table — skip.
        } else if member.name == "//" {
            // Long names table — store for later resolution.
            let start = member.offset;
            let end = (start + member.size as usize).min(bytes.len());
            long_names = Some(bytes[start..end].to_vec());
        } else {
            members.push(member);
        }
        if next <= offset {
            break; // safety: don't infinite-loop on malformed input
        }
        offset = next;
    }

    Some(Archive { is_thin, members })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn make_test_archive() -> Vec<u8> {
        let mut out = Vec::new();
        out.extend_from_slice(AR_MAGIC);
        // First member header.
        let name = b"foo.o           ";
        let mtime = b"0           ";
        let owner = b"0     ";
        let group = b"0     ";
        let mode = b"100644  ";
        let size = b"8         ";
        let term = b"`\n";
        out.extend_from_slice(name);
        out.extend_from_slice(mtime);
        out.extend_from_slice(owner);
        out.extend_from_slice(group);
        out.extend_from_slice(mode);
        out.extend_from_slice(size);
        out.extend_from_slice(term);
        out.extend_from_slice(b"foopaylo"); // 8 bytes
        out
    }

    #[test]
    fn test_archive_magic_detection() {
        let bytes = make_test_archive();
        assert!(is_archive(&bytes));
        assert!(!is_archive(b"ELF\x02\x01"));
    }

    #[test]
    fn test_archive_thin_magic_detection() {
        // Build a thin archive with a real header.
        let mut bytes = AR_THIN_MAGIC.to_vec();
        let name = b"foo.o           ";
        let mtime = b"0           ";
        let owner = b"0     ";
        let group = b"0     ";
        let mode = b"100644  ";
        let size = b"0         ";
        let term = b"`\n";
        bytes.extend_from_slice(name);
        bytes.extend_from_slice(mtime);
        bytes.extend_from_slice(owner);
        bytes.extend_from_slice(group);
        bytes.extend_from_slice(mode);
        bytes.extend_from_slice(size);
        bytes.extend_from_slice(term);
        assert!(is_archive(&bytes));
        let arch = parse_archive(&bytes).unwrap();
        assert!(arch.is_thin);
    }

    #[test]
    fn test_archive_parses_member() {
        let bytes = make_test_archive();
        let arch = parse_archive(&bytes).unwrap();
        assert!(!arch.is_thin);
        assert_eq!(arch.members.len(), 1);
        assert_eq!(arch.members[0].name, "foo.o");
        assert_eq!(arch.members[0].size, 8);
    }

    #[test]
    fn test_archive_rejects_non_archive() {
        let arch = parse_archive(b"not an archive");
        assert!(arch.is_none());
    }

    #[test]
    fn test_archive_member_payload_offset_correct() {
        let bytes = make_test_archive();
        let arch = parse_archive(&bytes).unwrap();
        let m = &arch.members[0];
        let payload = &bytes[m.offset..m.offset + m.size as usize];
        assert_eq!(payload, b"foopaylo");
    }
}
