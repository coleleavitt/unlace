// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117E60
// Name:            .iswspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117E60 jmp     cs:iswspace_ptr
//
// Resolved target: iswspace
// Target address:  0x8D7720
// GOT/IAT slot:    0x8A2BD0
// Slot symbol:     iswspace_ptr
// Target type:     int(wint_t wc)
// ============================================================

/* see target sig */ .iswspace(/* see target signature */)
{
    // Tail-call to iswspace via GOT/IAT indirection
    return iswspace(/* forwarded args */);
}

