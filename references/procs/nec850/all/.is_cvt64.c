// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99C0
// Name:            .is_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99C0 jmp     cs:off_2E4C8
//
// Resolved target: is_cvt64
// Target address:  0x2EB58
// GOT/IAT slot:    0x2E4C8
// Slot symbol:     off_2E4C8
// Target type:     <no type info>
// ============================================================

void .is_cvt64(/* see target signature */)
{
    // Tail-call to is_cvt64 via GOT/IAT indirection
    return is_cvt64(/* forwarded args */);
}

