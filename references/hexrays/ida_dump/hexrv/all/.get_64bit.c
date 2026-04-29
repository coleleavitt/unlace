// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B580
// Name:            .get_64bit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B580 jmp     cs:off_4BFAA8
//
// Resolved target: get_64bit
// Target address:  0x4C2FA0
// GOT/IAT slot:    0x4BFAA8
// Slot symbol:     off_4BFAA8
// Target type:     <no type info>
// ============================================================

void .get_64bit(/* see target signature */)
{
    // Tail-call to get_64bit via GOT/IAT indirection
    return get_64bit(/* forwarded args */);
}

