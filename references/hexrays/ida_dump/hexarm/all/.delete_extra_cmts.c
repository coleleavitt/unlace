// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E160
// Name:            .delete_extra_cmts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E160 jmp     cs:off_4E9898
//
// Resolved target: delete_extra_cmts
// Target address:  0x4EC2B8
// GOT/IAT slot:    0x4E9898
// Slot symbol:     off_4E9898
// Target type:     <no type info>
// ============================================================

void .delete_extra_cmts(/* see target signature */)
{
    // Tail-call to delete_extra_cmts via GOT/IAT indirection
    return delete_extra_cmts(/* forwarded args */);
}

