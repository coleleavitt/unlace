// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0F0
// Name:            ._ZSt24__throw_out_of_range_fmtPKcz
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0F0 jmp     cs:off_48078
//
// Resolved target: _ZSt24__throw_out_of_range_fmtPKcz
// Target address:  0x32810
// GOT/IAT slot:    0x48078
// Slot symbol:     off_48078
// Target type:     void __noreturn(const char *s, ...)
// ============================================================

/* see target sig */ ._ZSt24__throw_out_of_range_fmtPKcz(/* see target signature */)
{
    // Tail-call to _ZSt24__throw_out_of_range_fmtPKcz via GOT/IAT indirection
    return _ZSt24__throw_out_of_range_fmtPKcz(/* forwarded args */);
}

