// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA110
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA110 jmp     cs:off_48088
//
// Resolved target: abort
// Target address:  0x48400
// GOT/IAT slot:    0x48088
// Slot symbol:     off_48088
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

