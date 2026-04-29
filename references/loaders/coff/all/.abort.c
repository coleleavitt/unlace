// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4250
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4250 jmp     cs:off_23110
//
// Resolved target: abort
// Target address:  0x23530
// GOT/IAT slot:    0x23110
// Slot symbol:     off_23110
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

