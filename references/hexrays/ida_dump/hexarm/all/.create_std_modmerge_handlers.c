// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA00
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA00 jmp     cs:off_4E9CE8
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x4EC728
// GOT/IAT slot:    0x4E9CE8
// Slot symbol:     off_4E9CE8
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

