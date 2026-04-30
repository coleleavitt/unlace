// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111330
// Name:            ._ZNSt13__future_base12_Result_baseC2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111330 jmp     cs:_ZNSt13__future_base12_Result_baseC2Ev_ptr
//
// Resolved target: _ZNSt13__future_base12_Result_baseC2Ev
// Target address:  0x8D3268
// GOT/IAT slot:    0x89F638
// Slot symbol:     _ZNSt13__future_base12_Result_baseC2Ev_ptr
// Target type:     _QWORD(std::__future_base::_Result_base *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt13__future_base12_Result_baseC2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt13__future_base12_Result_baseC2Ev via GOT/IAT indirection
    return _ZNSt13__future_base12_Result_baseC2Ev(/* forwarded args */);
}

