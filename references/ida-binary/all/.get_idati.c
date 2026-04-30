// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116C80
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116C80 jmp     cs:get_idati_ptr
//
// Resolved target: get_idati
// Target address:  0x8D6BB0
// GOT/IAT slot:    0x8A22E0
// Slot symbol:     get_idati_ptr
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

