// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115B10
// Name:            .vault_is_valid_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115B10 jmp     cs:vault_is_valid_name_ptr
//
// Resolved target: vault_is_valid_name
// Target address:  0x8D60B8
// GOT/IAT slot:    0x8A1A28
// Slot symbol:     vault_is_valid_name_ptr
// Target type:     <no type info>
// ============================================================

void .vault_is_valid_name(/* see target signature */)
{
    // Tail-call to vault_is_valid_name via GOT/IAT indirection
    return vault_is_valid_name(/* forwarded args */);
}

