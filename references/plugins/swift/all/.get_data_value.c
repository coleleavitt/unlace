// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41C0
// Name:            .get_data_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41C0 jmp     cs:off_280C8
//
// Resolved target: get_data_value
// Target address:  0x29A60
// GOT/IAT slot:    0x280C8
// Slot symbol:     off_280C8
// Target type:     <no type info>
// ============================================================

void .get_data_value(/* see target signature */)
{
    // Tail-call to get_data_value via GOT/IAT indirection
    return get_data_value(/* forwarded args */);
}

