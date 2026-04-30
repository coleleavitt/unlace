// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115930
// Name:            ._ZSt20__throw_future_errori
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115930 jmp     cs:_ZSt20__throw_future_errori_ptr
//
// Resolved target: _ZSt20__throw_future_errori
// Target address:  0x8D5F80
// GOT/IAT slot:    0x8A1938
// Slot symbol:     _ZSt20__throw_future_errori_ptr
// Target type:     _QWORD(int)
// ============================================================

/* see target sig */ ._ZSt20__throw_future_errori(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_future_errori via GOT/IAT indirection
    return _ZSt20__throw_future_errori(/* forwarded args */);
}

