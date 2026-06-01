// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9260
// Name:            .get_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9260 jmp     cs:off_2C7A118
//
// Resolved target: get_hidden_range
// Target address:  0x3C7690
// GOT/IAT slot:    0x2C7A118
// Slot symbol:     off_2C7A118
// Target type:     <no type info>
// ============================================================

void .get_hidden_range(/* see target signature */)
{
    // Tail-call to get_hidden_range via GOT/IAT indirection
    return get_hidden_range(/* forwarded args */);
}

