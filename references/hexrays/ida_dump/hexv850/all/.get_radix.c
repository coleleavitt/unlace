// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7F0
// Name:            .get_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7F0 jmp     cs:off_4C0BE0
//
// Resolved target: get_radix
// Target address:  0x4C3BE8
// GOT/IAT slot:    0x4C0BE0
// Slot symbol:     off_4C0BE0
// Target type:     <no type info>
// ============================================================

void .get_radix(/* see target signature */)
{
    // Tail-call to get_radix via GOT/IAT indirection
    return get_radix(/* forwarded args */);
}

