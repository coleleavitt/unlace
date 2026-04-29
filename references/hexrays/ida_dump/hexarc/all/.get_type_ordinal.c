// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29A30
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29A30 jmp     cs:off_4B9500
//
// Resolved target: get_type_ordinal
// Target address:  0x4BBEE8
// GOT/IAT slot:    0x4B9500
// Slot symbol:     off_4B9500
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

