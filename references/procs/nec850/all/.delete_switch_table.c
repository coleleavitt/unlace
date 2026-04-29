// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92E0
// Name:            .delete_switch_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92E0 jmp     cs:off_2E158
//
// Resolved target: delete_switch_table
// Target address:  0x2E7C8
// GOT/IAT slot:    0x2E158
// Slot symbol:     off_2E158
// Target type:     <no type info>
// ============================================================

void .delete_switch_table(/* see target signature */)
{
    // Tail-call to delete_switch_table via GOT/IAT indirection
    return delete_switch_table(/* forwarded args */);
}

