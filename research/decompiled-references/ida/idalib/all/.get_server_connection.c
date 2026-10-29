// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD280
// Name:            .get_server_connection
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD280 jmp     cs:off_2C7C128
//
// Resolved target: get_server_connection
// Target address:  0x7D8450
// GOT/IAT slot:    0x2C7C128
// Slot symbol:     off_2C7C128
// Target type:     <no type info>
// ============================================================

void .get_server_connection(/* see target signature */)
{
    // Tail-call to get_server_connection via GOT/IAT indirection
    return get_server_connection(/* forwarded args */);
}

