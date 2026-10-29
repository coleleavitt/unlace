// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D10
// Name:            .destroy_moddata_merge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D10 jmp     cs:off_2C79670
//
// Resolved target: destroy_moddata_merge_handlers
// Target address:  0x459170
// GOT/IAT slot:    0x2C79670
// Slot symbol:     off_2C79670
// Target type:     <no type info>
// ============================================================

void .destroy_moddata_merge_handlers(/* see target signature */)
{
    // Tail-call to destroy_moddata_merge_handlers via GOT/IAT indirection
    return destroy_moddata_merge_handlers(/* forwarded args */);
}

