// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D540
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D540 jmp     cs:off_B3288
//
// Resolved target: netnode_supfirst
// Target address:  0xB3A28
// GOT/IAT slot:    0xB3288
// Slot symbol:     off_B3288
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

