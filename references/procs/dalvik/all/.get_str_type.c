// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5570
// Name:            .get_str_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5570 jmp     cs:off_1A2A0
//
// Resolved target: get_str_type
// Target address:  0x1A648
// GOT/IAT slot:    0x1A2A0
// Slot symbol:     off_1A2A0
// Target type:     <no type info>
// ============================================================

void .get_str_type(/* see target signature */)
{
    // Tail-call to get_str_type via GOT/IAT indirection
    return get_str_type(/* forwarded args */);
}

