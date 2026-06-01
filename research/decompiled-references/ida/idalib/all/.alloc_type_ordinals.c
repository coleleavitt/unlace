// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB9F0
// Name:            .alloc_type_ordinals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB9F0 jmp     cs:off_2C7B4E0
//
// Resolved target: alloc_type_ordinals
// Target address:  0x64CEB0
// GOT/IAT slot:    0x2C7B4E0
// Slot symbol:     off_2C7B4E0
// Target type:     <no type info>
// ============================================================

void .alloc_type_ordinals(/* see target signature */)
{
    // Tail-call to alloc_type_ordinals via GOT/IAT indirection
    return alloc_type_ordinals(/* forwarded args */);
}

