// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA1B0
// Name:            .lsite_create_merge_actor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA1B0 jmp     cs:off_2C7A8C0
//
// Resolved target: lsite_create_merge_actor
// Target address:  0x8CFC70
// GOT/IAT slot:    0x2C7A8C0
// Slot symbol:     off_2C7A8C0
// Target type:     <no type info>
// ============================================================

void .lsite_create_merge_actor(/* see target signature */)
{
    // Tail-call to lsite_create_merge_actor via GOT/IAT indirection
    return lsite_create_merge_actor(/* forwarded args */);
}

