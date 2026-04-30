// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119440
// Name:            .wcslen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119440 jmp     cs:wcslen_ptr
//
// Resolved target: wcslen
// Target address:  0x8D8480
// GOT/IAT slot:    0x8A36C0
// Slot symbol:     wcslen_ptr
// Target type:     size_t(const wchar_t *s)
// ============================================================

/* see target sig */ .wcslen(/* see target signature */)
{
    // Tail-call to wcslen via GOT/IAT indirection
    return wcslen(/* forwarded args */);
}

