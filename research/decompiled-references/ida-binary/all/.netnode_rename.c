// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111A50
// Name:            .netnode_rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111A50 jmp     cs:netnode_rename_ptr
//
// Resolved target: netnode_rename
// Target address:  0x8D3740
// GOT/IAT slot:    0x89F9C8
// Slot symbol:     netnode_rename_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_rename(/* see target signature */)
{
    // Tail-call to netnode_rename via GOT/IAT indirection
    return netnode_rename(/* forwarded args */);
}

