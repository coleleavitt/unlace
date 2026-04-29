// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA360
// Name:            ._ZGTtNSt16invalid_argumentD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA360 jmp     cs:off_481B0
//
// Resolved target: _ZGTtNSt16invalid_argumentD2Ev
// Target address:  0x33A20
// GOT/IAT slot:    0x481B0
// Slot symbol:     off_481B0
// Target type:     <no type info>
// ============================================================

void ._ZGTtNSt16invalid_argumentD2Ev(/* see target signature */)
{
    // Tail-call to _ZGTtNSt16invalid_argumentD2Ev via GOT/IAT indirection
    return _ZGTtNSt16invalid_argumentD2Ev(/* forwarded args */);
}

