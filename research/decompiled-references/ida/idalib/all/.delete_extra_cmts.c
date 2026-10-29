// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7850
// Name:            .delete_extra_cmts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7850 jmp     cs:off_2C79410
//
// Resolved target: delete_extra_cmts
// Target address:  0x63D580
// GOT/IAT slot:    0x2C79410
// Slot symbol:     off_2C79410
// Target type:     <no type info>
// ============================================================

void .delete_extra_cmts(/* see target signature */)
{
    // Tail-call to delete_extra_cmts via GOT/IAT indirection
    return delete_extra_cmts(/* forwarded args */);
}

