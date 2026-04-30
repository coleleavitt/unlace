// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119940
// Name:            .has_external_refs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119940 jmp     cs:has_external_refs_ptr
//
// Resolved target: has_external_refs
// Target address:  0x8D87D8
// GOT/IAT slot:    0x8A3940
// Slot symbol:     has_external_refs_ptr
// Target type:     <no type info>
// ============================================================

void .has_external_refs(/* see target signature */)
{
    // Tail-call to has_external_refs via GOT/IAT indirection
    return has_external_refs(/* forwarded args */);
}

