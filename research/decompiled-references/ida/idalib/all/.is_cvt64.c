// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB180
// Name:            .is_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB180 jmp     cs:off_2C7B0A8
//
// Resolved target: is_cvt64
// Target address:  0x835580
// GOT/IAT slot:    0x2C7B0A8
// Slot symbol:     off_2C7B0A8
// Target type:     <no type info>
// ============================================================

void .is_cvt64(/* see target signature */)
{
    // Tail-call to is_cvt64 via GOT/IAT indirection
    return is_cvt64(/* forwarded args */);
}

