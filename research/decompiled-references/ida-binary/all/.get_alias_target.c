// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114060
// Name:            .get_alias_target
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114060 jmp     cs:get_alias_target_ptr
//
// Resolved target: get_alias_target
// Target address:  0x8D4FA8
// GOT/IAT slot:    0x8A0CD0
// Slot symbol:     get_alias_target_ptr
// Target type:     <no type info>
// ============================================================

void .get_alias_target(/* see target signature */)
{
    // Tail-call to get_alias_target via GOT/IAT indirection
    return get_alias_target(/* forwarded args */);
}

