// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA530
// Name:            ._ZNSt13runtime_errorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA530 jmp     cs:off_48298
//
// Resolved target: _ZNSt13runtime_errorD1Ev
// Target address:  0x48560
// GOT/IAT slot:    0x48298
// Slot symbol:     off_48298
// Target type:     void(std::runtime_error *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt13runtime_errorD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt13runtime_errorD1Ev via GOT/IAT indirection
    return _ZNSt13runtime_errorD1Ev(/* forwarded args */);
}

