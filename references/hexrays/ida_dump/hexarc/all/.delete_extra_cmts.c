// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A130
// Name:            .delete_extra_cmts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A130 jmp     cs:off_4B9880
//
// Resolved target: delete_extra_cmts
// Target address:  0x4BC280
// GOT/IAT slot:    0x4B9880
// Slot symbol:     off_4B9880
// Target type:     <no type info>
// ============================================================

void .delete_extra_cmts(/* see target signature */)
{
    // Tail-call to delete_extra_cmts via GOT/IAT indirection
    return delete_extra_cmts(/* forwarded args */);
}

