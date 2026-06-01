// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC350
// Name:            .get_default_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC350 jmp     cs:off_2C7B990
//
// Resolved target: get_default_radix
// Target address:  0x3C4320
// GOT/IAT slot:    0x2C7B990
// Slot symbol:     off_2C7B990
// Target type:     <no type info>
// ============================================================

void .get_default_radix(/* see target signature */)
{
    // Tail-call to get_default_radix via GOT/IAT indirection
    return get_default_radix(/* forwarded args */);
}

