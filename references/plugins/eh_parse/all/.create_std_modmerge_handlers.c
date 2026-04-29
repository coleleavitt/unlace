// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67E0
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67E0 jmp     cs:off_2F3D8
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x2FA58
// GOT/IAT slot:    0x2F3D8
// Slot symbol:     off_2F3D8
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

