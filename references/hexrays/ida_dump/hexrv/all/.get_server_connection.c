// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C210
// Name:            .get_server_connection
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C210 jmp     cs:off_4C00F0
//
// Resolved target: get_server_connection
// Target address:  0x4C3628
// GOT/IAT slot:    0x4C00F0
// Slot symbol:     off_4C00F0
// Target type:     <no type info>
// ============================================================

void .get_server_connection(/* see target signature */)
{
    // Tail-call to get_server_connection via GOT/IAT indirection
    return get_server_connection(/* forwarded args */);
}

