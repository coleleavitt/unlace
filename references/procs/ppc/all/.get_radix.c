// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B20
// Name:            .get_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B20 jmp     cs:off_95578
//
// Resolved target: get_radix
// Target address:  0x95FB8
// GOT/IAT slot:    0x95578
// Slot symbol:     off_95578
// Target type:     <no type info>
// ============================================================

void .get_radix(/* see target signature */)
{
    // Tail-call to get_radix via GOT/IAT indirection
    return get_radix(/* forwarded args */);
}

