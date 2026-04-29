// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D0
// Name:            .update_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D0 jmp     cs:off_4B9BD0
//
// Resolved target: update_func
// Target address:  0x4BC5E0
// GOT/IAT slot:    0x4B9BD0
// Slot symbol:     off_4B9BD0
// Target type:     <no type info>
// ============================================================

void .update_func(/* see target signature */)
{
    // Tail-call to update_func via GOT/IAT indirection
    return update_func(/* forwarded args */);
}

