// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D490
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D490 jmp     cs:off_B3230
//
// Resolved target: netnode_supnext
// Target address:  0xB39D0
// GOT/IAT slot:    0xB3230
// Slot symbol:     off_B3230
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

