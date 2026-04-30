// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A1D0
// Name:            .vault_get_action_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A1D0 jmp     cs:vault_get_action_name_ptr
//
// Resolved target: vault_get_action_name
// Target address:  0x8D8D30
// GOT/IAT slot:    0x8A3D88
// Slot symbol:     vault_get_action_name_ptr
// Target type:     <no type info>
// ============================================================

void .vault_get_action_name(/* see target signature */)
{
    // Tail-call to vault_get_action_name via GOT/IAT indirection
    return vault_get_action_name(/* forwarded args */);
}

