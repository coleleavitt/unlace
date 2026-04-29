// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA810
// Name:            .get_name_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA810 jmp     cs:off_CA3F0
//
// Resolved target: get_name_value
// Target address:  0xD0D28
// GOT/IAT slot:    0xCA3F0
// Slot symbol:     off_CA3F0
// Target type:     <no type info>
// ============================================================

void .get_name_value(/* see target signature */)
{
    // Tail-call to get_name_value via GOT/IAT indirection
    return get_name_value(/* forwarded args */);
}

