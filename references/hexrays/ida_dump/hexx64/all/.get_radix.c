// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8C0
// Name:            .get_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C8C0 jmp     cs:off_4EDC48
//
// Resolved target: get_radix
// Target address:  0x4F1F80
// GOT/IAT slot:    0x4EDC48
// Slot symbol:     off_4EDC48
// Target type:     <no type info>
// ============================================================

void .get_radix(/* see target signature */)
{
    // Tail-call to get_radix via GOT/IAT indirection
    return get_radix(/* forwarded args */);
}

