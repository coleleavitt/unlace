// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3750
// Name:            .get_str_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3750 jmp     cs:off_28390
//
// Resolved target: get_str_type
// Target address:  0x28858
// GOT/IAT slot:    0x28390
// Slot symbol:     off_28390
// Target type:     <no type info>
// ============================================================

void .get_str_type(/* see target signature */)
{
    // Tail-call to get_str_type via GOT/IAT indirection
    return get_str_type(/* forwarded args */);
}

