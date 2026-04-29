// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3D0
// Name:            ._ZGTtNSt12domain_errorD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3D0 jmp     cs:off_481E8
//
// Resolved target: _ZGTtNSt12domain_errorD2Ev
// Target address:  0x338B0
// GOT/IAT slot:    0x481E8
// Slot symbol:     off_481E8
// Target type:     <no type info>
// ============================================================

void ._ZGTtNSt12domain_errorD2Ev(/* see target signature */)
{
    // Tail-call to _ZGTtNSt12domain_errorD2Ev via GOT/IAT indirection
    return _ZGTtNSt12domain_errorD2Ev(/* forwarded args */);
}

