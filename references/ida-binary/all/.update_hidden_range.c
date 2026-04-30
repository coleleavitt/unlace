// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E40
// Name:            .update_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E40 jmp     cs:update_hidden_range_ptr
//
// Resolved target: update_hidden_range
// Target address:  0x8D58C8
// GOT/IAT slot:    0x8A13C0
// Slot symbol:     update_hidden_range_ptr
// Target type:     <no type info>
// ============================================================

void .update_hidden_range(/* see target signature */)
{
    // Tail-call to update_hidden_range via GOT/IAT indirection
    return update_hidden_range(/* forwarded args */);
}

