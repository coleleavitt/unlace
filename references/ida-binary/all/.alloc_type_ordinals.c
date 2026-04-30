// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118710
// Name:            .alloc_type_ordinals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118710 jmp     cs:alloc_type_ordinals_ptr
//
// Resolved target: alloc_type_ordinals
// Target address:  0x8D7C58
// GOT/IAT slot:    0x8A3028
// Slot symbol:     alloc_type_ordinals_ptr
// Target type:     <no type info>
// ============================================================

void .alloc_type_ordinals(/* see target signature */)
{
    // Tail-call to alloc_type_ordinals via GOT/IAT indirection
    return alloc_type_ordinals(/* forwarded args */);
}

