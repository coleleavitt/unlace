// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA080
// Name:            ._ZNSt11logic_errorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA080 jmp     cs:off_48040
//
// Resolved target: _ZNSt11logic_errorD1Ev
// Target address:  0x483E0
// GOT/IAT slot:    0x48040
// Slot symbol:     off_48040
// Target type:     void(std::logic_error *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt11logic_errorD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt11logic_errorD1Ev via GOT/IAT indirection
    return _ZNSt11logic_errorD1Ev(/* forwarded args */);
}

