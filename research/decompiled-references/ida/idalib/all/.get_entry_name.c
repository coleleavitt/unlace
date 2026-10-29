// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB50
// Name:            .get_entry_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB50 jmp     cs:off_2C7C590
//
// Resolved target: get_entry_name
// Target address:  0x5B4230
// GOT/IAT slot:    0x2C7C590
// Slot symbol:     off_2C7C590
// Target type:     <no type info>
// ============================================================

void .get_entry_name(/* see target signature */)
{
    // Tail-call to get_entry_name via GOT/IAT indirection
    return get_entry_name(/* forwarded args */);
}

