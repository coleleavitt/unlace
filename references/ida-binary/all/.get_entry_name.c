// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BC50
// Name:            .get_entry_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BC50 jmp     cs:get_entry_name_ptr
//
// Resolved target: get_entry_name
// Target address:  0x8D9DF0
// GOT/IAT slot:    0x8A4AC8
// Slot symbol:     get_entry_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_entry_name(/* see target signature */)
{
    // Tail-call to get_entry_name via GOT/IAT indirection
    return get_entry_name(/* forwarded args */);
}

