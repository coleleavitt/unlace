// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8CFD20
// Name:            j_.lsite_create_merge_actor
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x8CFD20 jmp     _lsite_create_merge_actor
//
// Resolved target: .lsite_create_merge_actor
// Target address:  0x2AA1B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.lsite_create_merge_actor(/* see target signature */)
{
    // Tail-call to .lsite_create_merge_actor via direct jump indirection
    return .lsite_create_merge_actor(/* forwarded args */);
}

