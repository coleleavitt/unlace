// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA050
// Name:            .netnode_hashdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA050 jmp     cs:off_2C7A810
//
// Resolved target: netnode_hashdel
// Target address:  0x7BF550
// GOT/IAT slot:    0x2C7A810
// Slot symbol:     off_2C7A810
// Target type:     <no type info>
// ============================================================

void .netnode_hashdel(/* see target signature */)
{
    // Tail-call to netnode_hashdel via GOT/IAT indirection
    return netnode_hashdel(/* forwarded args */);
}

