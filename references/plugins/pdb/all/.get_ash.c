// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA90
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA90 jmp     cs:off_B3530
//
// Resolved target: get_ash
// Target address:  0xB3CF8
// GOT/IAT slot:    0xB3530
// Slot symbol:     off_B3530
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

