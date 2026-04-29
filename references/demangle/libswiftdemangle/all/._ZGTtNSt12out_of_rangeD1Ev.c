// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA600
// Name:            ._ZGTtNSt12out_of_rangeD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA600 jmp     cs:off_48300
//
// Resolved target: _ZGTtNSt12out_of_rangeD1Ev
// Target address:  0x33D00
// GOT/IAT slot:    0x48300
// Slot symbol:     off_48300
// Target type:     <no type info>
// ============================================================

void ._ZGTtNSt12out_of_rangeD1Ev(/* see target signature */)
{
    // Tail-call to _ZGTtNSt12out_of_rangeD1Ev via GOT/IAT indirection
    return _ZGTtNSt12out_of_rangeD1Ev(/* forwarded args */);
}

