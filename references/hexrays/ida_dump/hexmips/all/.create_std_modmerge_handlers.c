// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9D0
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9D0 jmp     cs:off_4CDCD0
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x4D0710
// GOT/IAT slot:    0x4CDCD0
// Slot symbol:     off_4CDCD0
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

