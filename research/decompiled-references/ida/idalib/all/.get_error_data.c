// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A97C0
// Name:            .get_error_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A97C0 jmp     cs:off_2C7A3C8
//
// Resolved target: get_error_data
// Target address:  0x82EFE0
// GOT/IAT slot:    0x2C7A3C8
// Slot symbol:     off_2C7A3C8
// Target type:     <no type info>
// ============================================================

void .get_error_data(/* see target signature */)
{
    // Tail-call to get_error_data via GOT/IAT indirection
    return get_error_data(/* forwarded args */);
}

