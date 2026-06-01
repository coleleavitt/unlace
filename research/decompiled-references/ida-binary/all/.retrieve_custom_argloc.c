// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113060
// Name:            .retrieve_custom_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113060 jmp     cs:retrieve_custom_argloc_ptr
//
// Resolved target: retrieve_custom_argloc
// Target address:  0x8D4560
// GOT/IAT slot:    0x8A04D0
// Slot symbol:     retrieve_custom_argloc_ptr
// Target type:     <no type info>
// ============================================================

void .retrieve_custom_argloc(/* see target signature */)
{
    // Tail-call to retrieve_custom_argloc via GOT/IAT indirection
    return retrieve_custom_argloc(/* forwarded args */);
}

