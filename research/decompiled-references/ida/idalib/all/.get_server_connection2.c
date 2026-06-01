// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC060
// Name:            .get_server_connection2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC060 jmp     cs:off_2C7B818
//
// Resolved target: get_server_connection2
// Target address:  0x7D83E0
// GOT/IAT slot:    0x2C7B818
// Slot symbol:     off_2C7B818
// Target type:     <no type info>
// ============================================================

void .get_server_connection2(/* see target signature */)
{
    // Tail-call to get_server_connection2 via GOT/IAT indirection
    return get_server_connection2(/* forwarded args */);
}

