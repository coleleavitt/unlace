// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9960
// Name:            .update_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9960 jmp     cs:off_2C7A498
//
// Resolved target: update_hidden_range
// Target address:  0x3C7820
// GOT/IAT slot:    0x2C7A498
// Slot symbol:     off_2C7A498
// Target type:     <no type info>
// ============================================================

void .update_hidden_range(/* see target signature */)
{
    // Tail-call to update_hidden_range via GOT/IAT indirection
    return update_hidden_range(/* forwarded args */);
}

