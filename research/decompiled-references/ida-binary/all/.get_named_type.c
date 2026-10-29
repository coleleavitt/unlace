// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113100
// Name:            .get_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113100 jmp     cs:get_named_type_ptr
//
// Resolved target: get_named_type
// Target address:  0x8D45C8
// GOT/IAT slot:    0x8A0520
// Slot symbol:     get_named_type_ptr
// Target type:     <no type info>
// ============================================================

void .get_named_type(/* see target signature */)
{
    // Tail-call to get_named_type via GOT/IAT indirection
    return get_named_type(/* forwarded args */);
}

