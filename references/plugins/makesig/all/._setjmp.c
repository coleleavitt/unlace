// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3480
// Name:            ._setjmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3480 jmp     cs:off_20228
//
// Resolved target: _setjmp
// Target address:  0x21B50
// GOT/IAT slot:    0x20228
// Slot symbol:     off_20228
// Target type:     int(jmp_buf env)
// ============================================================

/* see target sig */ ._setjmp(/* see target signature */)
{
    // Tail-call to _setjmp via GOT/IAT indirection
    return _setjmp(/* forwarded args */);
}

