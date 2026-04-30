// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42A030
// Name:            j_.lsite_create_merge_actor
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x42A030 jmp     _lsite_create_merge_actor
//
// Resolved target: .lsite_create_merge_actor
// Target address:  0x115E50
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.lsite_create_merge_actor(/* see target signature */)
{
    // Tail-call to .lsite_create_merge_actor via direct jump indirection
    return .lsite_create_merge_actor(/* forwarded args */);
}

