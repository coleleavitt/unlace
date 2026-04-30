// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119FF0
// Name:            .generate_deref_chain
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119FF0 jmp     cs:generate_deref_chain_ptr
//
// Resolved target: generate_deref_chain
// Target address:  0x8D8C00
// GOT/IAT slot:    0x8A3C98
// Slot symbol:     generate_deref_chain_ptr
// Target type:     <no type info>
// ============================================================

void .generate_deref_chain(/* see target signature */)
{
    // Tail-call to generate_deref_chain via GOT/IAT indirection
    return generate_deref_chain(/* forwarded args */);
}

