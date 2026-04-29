// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5570
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5570 jmp     cs:off_152A0
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x16340
// GOT/IAT slot:    0x152A0
// Slot symbol:     off_152A0
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

