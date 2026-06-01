// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A72E0
// Name:            .get_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A72E0 jmp     cs:off_2C79158
//
// Resolved target: get_radix
// Target address:  0x3C4410
// GOT/IAT slot:    0x2C79158
// Slot symbol:     off_2C79158
// Target type:     <no type info>
// ============================================================

void .get_radix(/* see target signature */)
{
    // Tail-call to get_radix via GOT/IAT indirection
    return get_radix(/* forwarded args */);
}

