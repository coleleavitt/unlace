// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A70F0
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A70F0 jmp     cs:off_2C79060
//
// Resolved target: get_flags_by_size
// Target address:  0x60BAE0
// GOT/IAT slot:    0x2C79060
// Slot symbol:     off_2C79060
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

