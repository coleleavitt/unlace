// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0C0
// Name:            .alloc_type_ordinals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0C0 jmp     cs:off_CA048
//
// Resolved target: alloc_type_ordinals
// Target address:  0xD0968
// GOT/IAT slot:    0xCA048
// Slot symbol:     off_CA048
// Target type:     <no type info>
// ============================================================

void .alloc_type_ordinals(/* see target signature */)
{
    // Tail-call to alloc_type_ordinals via GOT/IAT indirection
    return alloc_type_ordinals(/* forwarded args */);
}

