// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA660
// Name:            ._ZGTtNSt13runtime_errorD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA660 jmp     cs:off_48330
//
// Resolved target: _ZGTtNSt13runtime_errorD2Ev
// Target address:  0x33E70
// GOT/IAT slot:    0x48330
// Slot symbol:     off_48330
// Target type:     <no type info>
// ============================================================

void ._ZGTtNSt13runtime_errorD2Ev(/* see target signature */)
{
    // Tail-call to _ZGTtNSt13runtime_errorD2Ev via GOT/IAT indirection
    return _ZGTtNSt13runtime_errorD2Ev(/* forwarded args */);
}

