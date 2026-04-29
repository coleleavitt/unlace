// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1F0
// Name:            .delete_extra_cmts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1F0 jmp     cs:off_4ED8E0
//
// Resolved target: delete_extra_cmts
// Target address:  0x4F1C00
// GOT/IAT slot:    0x4ED8E0
// Slot symbol:     off_4ED8E0
// Target type:     <no type info>
// ============================================================

void .delete_extra_cmts(/* see target signature */)
{
    // Tail-call to delete_extra_cmts via GOT/IAT indirection
    return delete_extra_cmts(/* forwarded args */);
}

