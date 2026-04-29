// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D230
// Name:            .is_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D230 jmp     cs:off_4EE100
//
// Resolved target: is_cvt64
// Target address:  0x4F2458
// GOT/IAT slot:    0x4EE100
// Slot symbol:     off_4EE100
// Target type:     <no type info>
// ============================================================

void .is_cvt64(/* see target signature */)
{
    // Tail-call to is_cvt64 via GOT/IAT indirection
    return is_cvt64(/* forwarded args */);
}

