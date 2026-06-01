// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111890
// Name:            .get_vault_filter_explanations
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111890 jmp     cs:get_vault_filter_explanations_ptr
//
// Resolved target: get_vault_filter_explanations
// Target address:  0x8D3628
// GOT/IAT slot:    0x89F8E8
// Slot symbol:     get_vault_filter_explanations_ptr
// Target type:     <no type info>
// ============================================================

void .get_vault_filter_explanations(/* see target signature */)
{
    // Tail-call to get_vault_filter_explanations via GOT/IAT indirection
    return get_vault_filter_explanations(/* forwarded args */);
}

