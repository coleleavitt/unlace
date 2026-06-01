// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7840
// Name:            .add_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7840 jmp     cs:off_2C79408
//
// Resolved target: add_hidden_range
// Target address:  0x3C7B30
// GOT/IAT slot:    0x2C79408
// Slot symbol:     off_2C79408
// Target type:     <no type info>
// ============================================================

void .add_hidden_range(/* see target signature */)
{
    // Tail-call to add_hidden_range via GOT/IAT indirection
    return add_hidden_range(/* forwarded args */);
}

