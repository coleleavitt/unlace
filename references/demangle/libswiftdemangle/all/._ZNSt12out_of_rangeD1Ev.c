// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA420
// Name:            ._ZNSt12out_of_rangeD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA420 jmp     cs:off_48210
//
// Resolved target: _ZNSt12out_of_rangeD1Ev
// Target address:  0x484F8
// GOT/IAT slot:    0x48210
// Slot symbol:     off_48210
// Target type:     void(std::out_of_range *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt12out_of_rangeD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt12out_of_rangeD1Ev via GOT/IAT indirection
    return _ZNSt12out_of_rangeD1Ev(/* forwarded args */);
}

