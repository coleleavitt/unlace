// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5110
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5110 jmp     cs:off_15070
//
// Resolved target: get_first_seg
// Target address:  0x16100
// GOT/IAT slot:    0x15070
// Slot symbol:     off_15070
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}

