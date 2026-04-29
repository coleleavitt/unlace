// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193C0
// Name:            .delete_switch_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193C0 jmp     cs:off_751C8
//
// Resolved target: delete_switch_table
// Target address:  0x75A18
// GOT/IAT slot:    0x751C8
// Slot symbol:     off_751C8
// Target type:     <no type info>
// ============================================================

void .delete_switch_table(/* see target signature */)
{
    // Tail-call to delete_switch_table via GOT/IAT indirection
    return delete_switch_table(/* forwarded args */);
}

