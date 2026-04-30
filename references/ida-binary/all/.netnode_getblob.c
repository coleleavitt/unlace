// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114FE0
// Name:            .netnode_getblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114FE0 jmp     cs:netnode_getblob_ptr
//
// Resolved target: netnode_getblob
// Target address:  0x8D59B0
// GOT/IAT slot:    0x8A1490
// Slot symbol:     netnode_getblob_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_getblob(/* see target signature */)
{
    // Tail-call to netnode_getblob via GOT/IAT indirection
    return netnode_getblob(/* forwarded args */);
}

