// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x24B0
// Name:            ._setjmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x24B0 jmp     cs:off_B240
//
// Resolved target: _setjmp
// Target address:  0xB6E0
// GOT/IAT slot:    0xB240
// Slot symbol:     off_B240
// Target type:     int(jmp_buf env)
// ============================================================

/* see target sig */ ._setjmp(/* see target signature */)
{
    // Tail-call to _setjmp via GOT/IAT indirection
    return _setjmp(/* forwarded args */);
}

