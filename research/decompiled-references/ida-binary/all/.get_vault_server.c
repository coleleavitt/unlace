// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112EB0
// Name:            .get_vault_server
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112EB0 jmp     cs:get_vault_server_ptr
//
// Resolved target: get_vault_server
// Target address:  0x8D4440
// GOT/IAT slot:    0x8A03F8
// Slot symbol:     get_vault_server_ptr
// Target type:     <no type info>
// ============================================================

void .get_vault_server(/* see target signature */)
{
    // Tail-call to get_vault_server via GOT/IAT indirection
    return get_vault_server(/* forwarded args */);
}

