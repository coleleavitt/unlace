// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA40
// Name:            .towlower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA40 jmp     cs:off_2C7BD08
//
// Resolved target: towlower
// Target address:  0x2D11E68
// GOT/IAT slot:    0x2C7BD08
// Slot symbol:     off_2C7BD08
// Target type:     wint_t(wint_t wc)
// ============================================================

/* see target sig */ .towlower(/* see target signature */)
{
    // Tail-call to towlower via GOT/IAT indirection
    return towlower(/* forwarded args */);
}

