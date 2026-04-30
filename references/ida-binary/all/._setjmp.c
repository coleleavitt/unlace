// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117100
// Name:            ._setjmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117100 jmp     cs:_setjmp_ptr
//
// Resolved target: _setjmp
// Target address:  0x8D6E78
// GOT/IAT slot:    0x8A2520
// Slot symbol:     _setjmp_ptr
// Target type:     int(jmp_buf env)
// ============================================================

/* see target sig */ ._setjmp(/* see target signature */)
{
    // Tail-call to _setjmp via GOT/IAT indirection
    return _setjmp(/* forwarded args */);
}

