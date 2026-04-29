// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC80
// Name:            .get_first_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC80 jmp     cs:off_4ED628
//
// Resolved target: get_first_fcref_from
// Target address:  0x4F1938
// GOT/IAT slot:    0x4ED628
// Slot symbol:     off_4ED628
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_from(/* see target signature */)
{
    // Tail-call to get_first_fcref_from via GOT/IAT indirection
    return get_first_fcref_from(/* forwarded args */);
}

