// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E820
// Name:            .get_radix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E820 jmp     cs:off_4E9BF8
//
// Resolved target: get_radix
// Target address:  0x4EC628
// GOT/IAT slot:    0x4E9BF8
// Slot symbol:     off_4E9BF8
// Target type:     <no type info>
// ============================================================

void .get_radix(/* see target signature */)
{
    // Tail-call to get_radix via GOT/IAT indirection
    return get_radix(/* forwarded args */);
}

