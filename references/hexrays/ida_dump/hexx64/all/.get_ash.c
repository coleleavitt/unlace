// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CF20
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CF20 jmp     cs:off_4EDF78
//
// Resolved target: get_ash
// Target address:  0x4F22C8
// GOT/IAT slot:    0x4EDF78
// Slot symbol:     off_4EDF78
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

