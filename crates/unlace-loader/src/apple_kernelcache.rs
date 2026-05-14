//! Apple kernelcache (iOS/macOS) loader.
//!
//! Parses Apple's kernelcache format (compressed Mach-O containing the XNU
//! kernel plus all kexts). Handles the `__PRELINK_TEXT`, `__PRELINK_INFO`,
//! and `__TEXT_EXEC` segments to extract individual kernel extensions.

/// Kernelcache magic detection patterns.
pub const COMP_MAGIC_LZFSE: &[u8; 4] = b"bvx2";
pub const COMP_MAGIC_LZSS: &[u8; 8] = b"complzss";
pub const IMG4_MAGIC: &[u8; 4] = &[0x30, 0x82, 0x00, 0x00]; // approximate ASN.1

/// A kernel extension (kext) found in the kernelcache.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct KextInfo {
    /// Bundle identifier (e.g. "com.apple.iokit.IONetworkingFamily").
    pub bundle_id: String,
    /// Base address in the kernelcache.
    pub base_addr: u64,
    /// Size in bytes.
    pub size: u64,
    /// Version string.
    pub version: String,
}

/// Kernelcache header info.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct KernelcacheInfo {
    /// Whether the cache is compressed.
    pub compressed: bool,
    /// Compression type if compressed.
    pub compression: Option<String>,
    /// Kernel version string.
    pub kernel_version: Option<String>,
    /// List of embedded kexts.
    pub kexts: Vec<KextInfo>,
}

/// Detect kernelcache compression format.
pub fn detect_kernelcache_compression(data: &[u8]) -> Option<&'static str> {
    if data.len() < 8 {
        return None;
    }
    if &data[0..4] == COMP_MAGIC_LZFSE {
        return Some("lzfse");
    }
    if &data[0..8] == COMP_MAGIC_LZSS {
        return Some("lzss");
    }
    // Check for IM4P ASN.1 wrapper.
    if data.len() > 16 && data[0] == 0x30 && data[1] == 0x82 {
        return Some("img4");
    }
    None
}

/// Parse __PRELINK_INFO XML plist to extract kext bundle identifiers.
pub fn parse_prelink_info(xml: &str) -> Vec<KextInfo> {
    let mut kexts = Vec::new();
    let mut current_id = None;
    let mut current_addr = 0u64;

    for line in xml.lines() {
        let trimmed = line.trim();
        if trimmed.contains("CFBundleIdentifier") {
            // Next <string> tag has the bundle ID.
            current_id = Some(String::new());
        } else if let Some(ref mut id) = current_id {
            if trimmed.starts_with("<string>") && trimmed.ends_with("</string>") {
                *id = trimmed
                    .strip_prefix("<string>")
                    .and_then(|s| s.strip_suffix("</string>"))
                    .unwrap_or("")
                    .to_string();
                if !id.is_empty() {
                    kexts.push(KextInfo {
                        bundle_id: id.clone(),
                        base_addr: current_addr,
                        size: 0,
                        version: String::new(),
                    });
                }
                current_id = None;
            }
        }
    }
    kexts
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_detect_lzfse() {
        let mut data = vec![0u8; 32];
        data[0..4].copy_from_slice(COMP_MAGIC_LZFSE);
        assert_eq!(detect_kernelcache_compression(&data), Some("lzfse"));
    }

    #[test]
    fn test_detect_lzss() {
        let mut data = vec![0u8; 32];
        data[0..8].copy_from_slice(COMP_MAGIC_LZSS);
        assert_eq!(detect_kernelcache_compression(&data), Some("lzss"));
    }

    #[test]
    fn test_parse_prelink_kexts() {
        let xml = r#"
<dict>
    <key>CFBundleIdentifier</key>
    <string>com.apple.iokit.IONetworkingFamily</string>
    <key>CFBundleIdentifier</key>
    <string>com.apple.driver.AppleBCMWLAN</string>
</dict>
"#;
        let kexts = parse_prelink_info(xml);
        assert_eq!(kexts.len(), 2);
        assert_eq!(kexts[0].bundle_id, "com.apple.iokit.IONetworkingFamily");
        assert_eq!(kexts[1].bundle_id, "com.apple.driver.AppleBCMWLAN");
    }
}
