// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C150
// Name:            .get_str_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C150 jmp     cs:off_4CE090
//
// Resolved target: get_str_type
// Target address:  0x4D0AE8
// GOT/IAT slot:    0x4CE090
// Slot symbol:     off_4CE090
// Target type:     <no type info>
// ============================================================

void .get_str_type(/* see target signature */)
{
    // Tail-call to get_str_type via GOT/IAT indirection
    return get_str_type(/* forwarded args */);
}

