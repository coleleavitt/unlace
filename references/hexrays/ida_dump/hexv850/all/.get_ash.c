// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE00
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE00 jmp     cs:off_4C0EE8
//
// Resolved target: get_ash
// Target address:  0x4C3F10
// GOT/IAT slot:    0x4C0EE8
// Slot symbol:     off_4C0EE8
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

