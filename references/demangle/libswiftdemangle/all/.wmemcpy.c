// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA090
// Name:            .wmemcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA090 jmp     cs:off_48048
//
// Resolved target: wmemcpy
// Target address:  0x483E8
// GOT/IAT slot:    0x48048
// Slot symbol:     off_48048
// Target type:     wchar_t *(wchar_t *s1, const wchar_t *s2, size_t n)
// ============================================================

/* see target sig */ .wmemcpy(/* see target signature */)
{
    // Tail-call to wmemcpy via GOT/IAT indirection
    return wmemcpy(/* forwarded args */);
}

