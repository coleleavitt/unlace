// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117500
// Name:            ._ZNSt13__future_base12_Result_baseD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117500 jmp     cs:_ZNSt13__future_base12_Result_baseD2Ev_ptr
//
// Resolved target: _ZNSt13__future_base12_Result_baseD2Ev
// Target address:  0x8D7118
// GOT/IAT slot:    0x8A2720
// Slot symbol:     _ZNSt13__future_base12_Result_baseD2Ev_ptr
// Target type:     void(std::__future_base::_Result_base *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt13__future_base12_Result_baseD2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt13__future_base12_Result_baseD2Ev via GOT/IAT indirection
    return _ZNSt13__future_base12_Result_baseD2Ev(/* forwarded args */);
}

