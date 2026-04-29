// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0D0
// Name:            .is_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0D0 jmp     cs:off_4DB050
//
// Resolved target: is_cvt64
// Target address:  0x4DDA88
// GOT/IAT slot:    0x4DB050
// Slot symbol:     off_4DB050
// Target type:     <no type info>
// ============================================================

void .is_cvt64(/* see target signature */)
{
    // Tail-call to is_cvt64 via GOT/IAT indirection
    return is_cvt64(/* forwarded args */);
}

