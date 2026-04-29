// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B140
// Name:            .delete_extra_cmts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B140 jmp     cs:off_4CD888
//
// Resolved target: delete_extra_cmts
// Target address:  0x4D02A8
// GOT/IAT slot:    0x4CD888
// Slot symbol:     off_4CD888
// Target type:     <no type info>
// ============================================================

void .delete_extra_cmts(/* see target signature */)
{
    // Tail-call to delete_extra_cmts via GOT/IAT indirection
    return delete_extra_cmts(/* forwarded args */);
}

