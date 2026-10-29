// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119010
// Name:            .get_server_connection2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119010 jmp     cs:get_server_connection2_ptr
//
// Resolved target: get_server_connection2
// Target address:  0x8D81D0
// GOT/IAT slot:    0x8A34A8
// Slot symbol:     get_server_connection2_ptr
// Target type:     <no type info>
// ============================================================

void .get_server_connection2(/* see target signature */)
{
    // Tail-call to get_server_connection2 via GOT/IAT indirection
    return get_server_connection2(/* forwarded args */);
}

