// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A40
// Name:            .create_switch_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A40 jmp     cs:off_95508
//
// Resolved target: create_switch_table
// Target address:  0x95F40
// GOT/IAT slot:    0x95508
// Slot symbol:     off_95508
// Target type:     <no type info>
// ============================================================

void .create_switch_table(/* see target signature */)
{
    // Tail-call to create_switch_table via GOT/IAT indirection
    return create_switch_table(/* forwarded args */);
}

