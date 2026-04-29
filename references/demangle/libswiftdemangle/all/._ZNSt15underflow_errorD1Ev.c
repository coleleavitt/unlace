// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA650
// Name:            ._ZNSt15underflow_errorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA650 jmp     cs:off_48328
//
// Resolved target: _ZNSt15underflow_errorD1Ev
// Target address:  0x485D8
// GOT/IAT slot:    0x48328
// Slot symbol:     off_48328
// Target type:     void(std::underflow_error *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt15underflow_errorD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt15underflow_errorD1Ev via GOT/IAT indirection
    return _ZNSt15underflow_errorD1Ev(/* forwarded args */);
}

