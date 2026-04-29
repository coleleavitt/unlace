// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7F0
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7F0 jmp     cs:off_4DABE0
//
// Resolved target: update_func
// Target address:  0x4DD5F0
// GOT/IAT slot:    0x4DABE0
// Slot symbol:     off_4DABE0
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

