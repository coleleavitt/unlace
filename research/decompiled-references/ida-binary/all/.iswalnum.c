// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113C00
// Name:            .iswalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113C00 jmp     cs:iswalnum_ptr
//
// Resolved target: iswalnum
// Target address:  0x8D4CE0
// GOT/IAT slot:    0x8A0AA0
// Slot symbol:     iswalnum_ptr
// Target type:     int(wint_t wc)
// ============================================================

/* see target sig */ .iswalnum(/* see target signature */)
{
    // Tail-call to iswalnum via GOT/IAT indirection
    return iswalnum(/* forwarded args */);
}

