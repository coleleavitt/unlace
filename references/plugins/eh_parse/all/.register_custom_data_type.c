// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62F0
// Name:            .register_custom_data_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62F0 jmp     cs:off_2F160
//
// Resolved target: register_custom_data_type
// Target address:  0x2F7D0
// GOT/IAT slot:    0x2F160
// Slot symbol:     off_2F160
// Target type:     <no type info>
// ============================================================

void .register_custom_data_type(/* see target signature */)
{
    // Tail-call to register_custom_data_type via GOT/IAT indirection
    return register_custom_data_type(/* forwarded args */);
}

