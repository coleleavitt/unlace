// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAAF0
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAAF0 jmp     cs:off_CA560
//
// Resolved target: get_name_ea
// Target address:  0xD0EB0
// GOT/IAT slot:    0xCA560
// Slot symbol:     off_CA560
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

