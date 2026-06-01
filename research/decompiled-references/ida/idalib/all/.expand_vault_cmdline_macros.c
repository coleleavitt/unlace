// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A80B0
// Name:            .expand_vault_cmdline_macros
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A80B0 jmp     cs:off_2C79840
//
// Resolved target: expand_vault_cmdline_macros
// Target address:  0x8CEAA0
// GOT/IAT slot:    0x2C79840
// Slot symbol:     off_2C79840
// Target type:     <no type info>
// ============================================================

void .expand_vault_cmdline_macros(/* see target signature */)
{
    // Tail-call to expand_vault_cmdline_macros via GOT/IAT indirection
    return expand_vault_cmdline_macros(/* forwarded args */);
}

