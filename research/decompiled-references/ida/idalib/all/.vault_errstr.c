// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD140
// Name:            .vault_errstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD140 jmp     cs:off_2C7C088
//
// Resolved target: vault_errstr
// Target address:  0x8FF1E0
// GOT/IAT slot:    0x2C7C088
// Slot symbol:     off_2C7C088
// Target type:     <no type info>
// ============================================================

void .vault_errstr(/* see target signature */)
{
    // Tail-call to vault_errstr via GOT/IAT indirection
    return vault_errstr(/* forwarded args */);
}

