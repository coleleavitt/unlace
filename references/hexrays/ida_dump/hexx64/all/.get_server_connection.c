// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D390
// Name:            .get_server_connection
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D390 jmp     cs:off_4EE1B0
//
// Resolved target: get_server_connection
// Target address:  0x4F2510
// GOT/IAT slot:    0x4EE1B0
// Slot symbol:     off_4EE1B0
// Target type:     <no type info>
// ============================================================

void .get_server_connection(/* see target signature */)
{
    // Tail-call to get_server_connection via GOT/IAT indirection
    return get_server_connection(/* forwarded args */);
}

