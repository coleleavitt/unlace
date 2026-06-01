// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E80
// Name:            .get_name_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E80 jmp     cs:off_2C79728
//
// Resolved target: get_name_value
// Target address:  0x4D4C50
// GOT/IAT slot:    0x2C79728
// Slot symbol:     off_2C79728
// Target type:     <no type info>
// ============================================================

void .get_name_value(/* see target signature */)
{
    // Tail-call to get_name_value via GOT/IAT indirection
    return get_name_value(/* forwarded args */);
}

