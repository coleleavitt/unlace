// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA280
// Name:            ._ZGTtNSt12length_errorD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA280 jmp     cs:off_48140
//
// Resolved target: _ZGTtNSt12length_errorD2Ev
// Target address:  0x33B90
// GOT/IAT slot:    0x48140
// Slot symbol:     off_48140
// Target type:     <no type info>
// ============================================================

void ._ZGTtNSt12length_errorD2Ev(/* see target signature */)
{
    // Tail-call to _ZGTtNSt12length_errorD2Ev via GOT/IAT indirection
    return _ZGTtNSt12length_errorD2Ev(/* forwarded args */);
}

