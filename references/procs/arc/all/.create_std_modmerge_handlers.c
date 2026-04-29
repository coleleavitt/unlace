// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86E0
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86E0 jmp     cs:off_2A358
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x2BD78
// GOT/IAT slot:    0x2A358
// Slot symbol:     off_2A358
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

