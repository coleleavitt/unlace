// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6790
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6790 jmp     cs:off_243B0
//
// Resolved target: get_ash
// Target address:  0x26198
// GOT/IAT slot:    0x243B0
// Slot symbol:     off_243B0
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

