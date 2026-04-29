// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64D0
// Name:            .get_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64D0 jmp     cs:off_1D250
//
// Resolved target: get_radix
// Target address:  0x1D748
// GOT/IAT slot:    0x1D250
// Slot symbol:     off_1D250
// Target type:     <no type info>
// ============================================================

void .get_radix(/* see target signature */)
{
    // Tail-call to get_radix via GOT/IAT indirection
    return get_radix(/* forwarded args */);
}

