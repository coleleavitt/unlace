// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119E00
// Name:            .vault_is_valid_email
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119E00 jmp     cs:vault_is_valid_email_ptr
//
// Resolved target: vault_is_valid_email
// Target address:  0x8D8AA0
// GOT/IAT slot:    0x8A3BA0
// Slot symbol:     vault_is_valid_email_ptr
// Target type:     <no type info>
// ============================================================

void .vault_is_valid_email(/* see target signature */)
{
    // Tail-call to vault_is_valid_email via GOT/IAT indirection
    return vault_is_valid_email(/* forwarded args */);
}

