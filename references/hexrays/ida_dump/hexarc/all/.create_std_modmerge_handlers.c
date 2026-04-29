// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A0
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A0 jmp     cs:off_4B9CB8
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x4BC6D8
// GOT/IAT slot:    0x4B9CB8
// Slot symbol:     off_4B9CB8
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

