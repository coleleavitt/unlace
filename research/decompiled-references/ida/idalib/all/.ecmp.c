// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA700
// Name:            .ecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA700 jmp     cs:off_2C7AB68
//
// Resolved target: ecmp
// Target address:  0x831500
// GOT/IAT slot:    0x2C7AB68
// Slot symbol:     off_2C7AB68
// Target type:     <no type info>
// ============================================================

void .ecmp(/* see target signature */)
{
    // Tail-call to ecmp via GOT/IAT indirection
    return ecmp(/* forwarded args */);
}

