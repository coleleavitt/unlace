// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52B0
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52B0 jmp     cs:off_1A140
//
// Resolved target: netnode_supfirst
// Target address:  0x1A4C8
// GOT/IAT slot:    0x1A140
// Slot symbol:     off_1A140
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

