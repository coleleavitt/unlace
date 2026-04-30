// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115BE0
// Name:            .netnode_hashdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115BE0 jmp     cs:netnode_hashdel_ptr
//
// Resolved target: netnode_hashdel
// Target address:  0x8D6138
// GOT/IAT slot:    0x8A1A90
// Slot symbol:     netnode_hashdel_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_hashdel(/* see target signature */)
{
    // Tail-call to netnode_hashdel via GOT/IAT indirection
    return netnode_hashdel(/* forwarded args */);
}

