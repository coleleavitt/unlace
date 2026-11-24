//! The PE resource directory as a flat record list: every leaf of the
//! three-level tree (type, name, language) with its RVA and size. Walked with
//! `object`'s `ResourceDirectory` API, depth-capped at 8 and bounded at 65536
//! records, so a hostile directory cannot recurse or allocate without limit.
//! Named (string) type, name or language entries read as id 0.

use object::endian::LittleEndian;
use object::read::pe::{
    ImageNtHeaders, PeFile, ResourceDirectory, ResourceDirectoryEntryData, ResourceDirectoryTable,
    ResourceNameOrId,
};

const MAX_DEPTH: u8 = 8;
const MAX_RECORDS: usize = 65536;

/// One leaf of the resource tree: its type, name and language ids, and where
/// its data sits (RVA and byte size).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PeResourceEntry {
    pub type_id: u32,
    pub name_id: u32,
    pub language: u32,
    pub rva: u32,
    pub size: u32,
}

/// Parse `IMAGE_DIRECTORY_ENTRY_RESOURCE` of `file` into flat records. `data`
/// is the whole file image the `file` was parsed from. Empty when the file has
/// no resource directory or it is unreadable.
pub fn resource_entries<'data, Pe: ImageNtHeaders>(
    file: &PeFile<'data, Pe>,
    data: &'data [u8],
) -> Vec<PeResourceEntry> {
    let section_table = file.section_table();
    let rsrc_dir = match file
        .data_directories()
        .resource_directory(data, &section_table)
    {
        Ok(Some(d)) => d,
        Ok(None) | Err(_) => return Vec::new(),
    };
    let Ok(root) = rsrc_dir.root() else {
        return Vec::new();
    };
    let mut out = Vec::new();
    walk_resource_table(rsrc_dir, &root, 0, [0; 3], &mut out);
    out
}

/// Walk one table. `ids` holds the (type, name, language) ids chosen so far;
/// the entry at `depth` fills the slot for that level.
fn walk_resource_table<'data>(
    dir: ResourceDirectory<'data>,
    table: &ResourceDirectoryTable<'data>,
    depth: u8,
    ids: [u32; 3],
    out: &mut Vec<PeResourceEntry>,
) {
    if depth > MAX_DEPTH {
        return;
    }
    for entry in table.entries {
        if out.len() >= MAX_RECORDS {
            return;
        }
        let entry_id = match entry.name_or_id() {
            ResourceNameOrId::Id(id) => u32::from(id),
            ResourceNameOrId::Name(_) => 0,
        };
        let mut next = ids;
        match depth {
            0 => next[0] = entry_id,
            1 => next[1] = entry_id,
            _ => next[2] = entry_id,
        }
        match entry.data(dir) {
            Ok(ResourceDirectoryEntryData::Table(sub)) => {
                walk_resource_table(dir, &sub, depth.saturating_add(1), next, out);
            }
            Ok(ResourceDirectoryEntryData::Data(leaf)) => {
                out.push(PeResourceEntry {
                    type_id: next[0],
                    name_id: next[1],
                    language: next[2],
                    rva: leaf.offset_to_data.get(LittleEndian),
                    size: leaf.size.get(LittleEndian),
                });
            }
            Err(_) => {}
        }
    }
}
