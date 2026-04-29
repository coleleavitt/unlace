// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CAC0
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CAC0 jmp     cs:off_4EDD48
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x4F2088
// GOT/IAT slot:    0x4EDD48
// Slot symbol:     off_4EDD48
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

