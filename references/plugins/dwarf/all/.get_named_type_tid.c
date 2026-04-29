// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB30
// Name:            .get_named_type_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB30 jmp     cs:off_CA580
//
// Resolved target: get_named_type_tid
// Target address:  0xD0ED0
// GOT/IAT slot:    0xCA580
// Slot symbol:     off_CA580
// Target type:     <no type info>
// ============================================================

void .get_named_type_tid(/* see target signature */)
{
    // Tail-call to get_named_type_tid via GOT/IAT indirection
    return get_named_type_tid(/* forwarded args */);
}

