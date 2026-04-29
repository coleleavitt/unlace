// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C0
// Name:            .get_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C0 jmp     cs:off_4B9BC8
//
// Resolved target: get_radix
// Target address:  0x4BC5D8
// GOT/IAT slot:    0x4B9BC8
// Slot symbol:     off_4B9BC8
// Target type:     <no type info>
// ============================================================

void .get_radix(/* see target signature */)
{
    // Tail-call to get_radix via GOT/IAT indirection
    return get_radix(/* forwarded args */);
}

