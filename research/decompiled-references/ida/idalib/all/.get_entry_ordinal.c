// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD40
// Name:            .get_entry_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD40 jmp     cs:off_2C7BE88
//
// Resolved target: get_entry_ordinal
// Target address:  0x5B4260
// GOT/IAT slot:    0x2C7BE88
// Slot symbol:     off_2C7BE88
// Target type:     <no type info>
// ============================================================

void .get_entry_ordinal(/* see target signature */)
{
    // Tail-call to get_entry_ordinal via GOT/IAT indirection
    return get_entry_ordinal(/* forwarded args */);
}

