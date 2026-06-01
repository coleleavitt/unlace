// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8500
// Name:            .retrieve_custom_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8500 jmp     cs:off_2C79A68
//
// Resolved target: retrieve_custom_argloc
// Target address:  0x6B1FA0
// GOT/IAT slot:    0x2C79A68
// Slot symbol:     off_2C79A68
// Target type:     <no type info>
// ============================================================

void .retrieve_custom_argloc(/* see target signature */)
{
    // Tail-call to retrieve_custom_argloc via GOT/IAT indirection
    return retrieve_custom_argloc(/* forwarded args */);
}

