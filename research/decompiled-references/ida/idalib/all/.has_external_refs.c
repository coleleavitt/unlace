// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC590
// Name:            .has_external_refs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC590 jmp     cs:off_2C7BAB0
//
// Resolved target: has_external_refs
// Target address:  0x3E4F90
// GOT/IAT slot:    0x2C7BAB0
// Slot symbol:     off_2C7BAB0
// Target type:     <no type info>
// ============================================================

void .has_external_refs(/* see target signature */)
{
    // Tail-call to has_external_refs via GOT/IAT indirection
    return has_external_refs(/* forwarded args */);
}

