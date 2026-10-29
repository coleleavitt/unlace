// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111C90
// Name:            .add_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111C90 jmp     cs:add_hidden_range_ptr
//
// Resolved target: add_hidden_range
// Target address:  0x8D38A8
// GOT/IAT slot:    0x89FAE8
// Slot symbol:     add_hidden_range_ptr
// Target type:     <no type info>
// ============================================================

void .add_hidden_range(/* see target signature */)
{
    // Tail-call to add_hidden_range via GOT/IAT indirection
    return add_hidden_range(/* forwarded args */);
}

