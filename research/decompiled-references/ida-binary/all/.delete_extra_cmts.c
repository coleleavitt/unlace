// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111CC0
// Name:            .delete_extra_cmts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111CC0 jmp     cs:delete_extra_cmts_ptr
//
// Resolved target: delete_extra_cmts
// Target address:  0x8D38C8
// GOT/IAT slot:    0x89FB00
// Slot symbol:     delete_extra_cmts_ptr
// Target type:     <no type info>
// ============================================================

void .delete_extra_cmts(/* see target signature */)
{
    // Tail-call to delete_extra_cmts via GOT/IAT indirection
    return delete_extra_cmts(/* forwarded args */);
}

