// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115E50
// Name:            .lsite_create_merge_actor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115E50 jmp     cs:lsite_create_merge_actor_ptr
//
// Resolved target: lsite_create_merge_actor
// Target address:  0x8D62A0
// GOT/IAT slot:    0x8A1BC8
// Slot symbol:     lsite_create_merge_actor_ptr
// Target type:     <no type info>
// ============================================================

void .lsite_create_merge_actor(/* see target signature */)
{
    // Tail-call to lsite_create_merge_actor via GOT/IAT indirection
    return lsite_create_merge_actor(/* forwarded args */);
}

