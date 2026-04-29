// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29EE0
// Name:            .destroy_moddata_merge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29EE0 jmp     cs:off_4B9758
//
// Resolved target: destroy_moddata_merge_handlers
// Target address:  0x4BC150
// GOT/IAT slot:    0x4B9758
// Slot symbol:     off_4B9758
// Target type:     <no type info>
// ============================================================

void .destroy_moddata_merge_handlers(/* see target signature */)
{
    // Tail-call to destroy_moddata_merge_handlers via GOT/IAT indirection
    return destroy_moddata_merge_handlers(/* forwarded args */);
}

