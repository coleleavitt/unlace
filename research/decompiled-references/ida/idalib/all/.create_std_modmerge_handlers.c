// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE30
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE30 jmp     cs:off_2C7BF00
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x461EA0
// GOT/IAT slot:    0x2C7BF00
// Slot symbol:     off_2C7BF00
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

