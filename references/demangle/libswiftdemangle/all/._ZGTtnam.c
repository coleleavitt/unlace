// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA630
// Name:            ._ZGTtnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA630 jmp     cs:off_48318
//
// Resolved target: _ZGTtnam
// Target address:  0x48670
// GOT/IAT slot:    0x48318
// Slot symbol:     off_48318
// Target type:     <no type info>
// ============================================================

void ._ZGTtnam(/* see target signature */)
{
    // Tail-call to _ZGTtnam via GOT/IAT indirection
    return _ZGTtnam(/* forwarded args */);
}

