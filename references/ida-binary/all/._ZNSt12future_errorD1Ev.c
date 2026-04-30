// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115E10
// Name:            ._ZNSt12future_errorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115E10 jmp     cs:_ZNSt12future_errorD1Ev_ptr
//
// Resolved target: _ZNSt12future_errorD1Ev
// Target address:  0x8D6278
// GOT/IAT slot:    0x8A1BA8
// Slot symbol:     _ZNSt12future_errorD1Ev_ptr
// Target type:     void(std::future_error *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt12future_errorD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt12future_errorD1Ev via GOT/IAT indirection
    return _ZNSt12future_errorD1Ev(/* forwarded args */);
}

