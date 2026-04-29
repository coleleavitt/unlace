// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF50
// Name:            .destroy_moddata_merge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF50 jmp     cs:off_4ED790
//
// Resolved target: destroy_moddata_merge_handlers
// Target address:  0x4F1AA0
// GOT/IAT slot:    0x4ED790
// Slot symbol:     off_4ED790
// Target type:     <no type info>
// ============================================================

void .destroy_moddata_merge_handlers(/* see target signature */)
{
    // Tail-call to destroy_moddata_merge_handlers via GOT/IAT indirection
    return destroy_moddata_merge_handlers(/* forwarded args */);
}

