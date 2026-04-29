// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA240
// Name:            ._ZGTtNSt11range_errorD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA240 jmp     cs:off_48120
//
// Resolved target: _ZGTtNSt11range_errorD2Ev
// Target address:  0x34000
// GOT/IAT slot:    0x48120
// Slot symbol:     off_48120
// Target type:     <no type info>
// ============================================================

void ._ZGTtNSt11range_errorD2Ev(/* see target signature */)
{
    // Tail-call to _ZGTtNSt11range_errorD2Ev via GOT/IAT indirection
    return _ZGTtNSt11range_errorD2Ev(/* forwarded args */);
}

