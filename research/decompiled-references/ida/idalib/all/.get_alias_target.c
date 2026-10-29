// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9000
// Name:            .get_alias_target
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9000 jmp     cs:off_2C79FE8
//
// Resolved target: get_alias_target
// Target address:  0x64DDF0
// GOT/IAT slot:    0x2C79FE8
// Slot symbol:     off_2C79FE8
// Target type:     <no type info>
// ============================================================

void .get_alias_target(/* see target signature */)
{
    // Tail-call to get_alias_target via GOT/IAT indirection
    return get_alias_target(/* forwarded args */);
}

