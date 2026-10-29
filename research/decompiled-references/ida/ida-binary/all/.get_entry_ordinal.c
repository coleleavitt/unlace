// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A5A0
// Name:            .get_entry_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A5A0 jmp     cs:get_entry_ordinal_ptr
//
// Resolved target: get_entry_ordinal
// Target address:  0x8D8F98
// GOT/IAT slot:    0x8A3F70
// Slot symbol:     get_entry_ordinal_ptr
// Target type:     <no type info>
// ============================================================

void .get_entry_ordinal(/* see target signature */)
{
    // Tail-call to get_entry_ordinal via GOT/IAT indirection
    return get_entry_ordinal(/* forwarded args */);
}

