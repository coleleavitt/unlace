// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC3E0
// Name:            .get_first_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC3E0 jmp     cs:off_2C7B9D8
//
// Resolved target: get_first_seg
// Target address:  0x50E2B0
// GOT/IAT slot:    0x2C7B9D8
// Slot symbol:     off_2C7B9D8
// Target type:     <no type info>
// ============================================================

void .get_first_seg(/* see target signature */)
{
    // Tail-call to get_first_seg via GOT/IAT indirection
    return get_first_seg(/* forwarded args */);
}

