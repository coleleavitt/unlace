// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6910
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6910 jmp     cs:off_2F470
//
// Resolved target: get_ash
// Target address:  0x2FAF8
// GOT/IAT slot:    0x2F470
// Slot symbol:     off_2F470
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

