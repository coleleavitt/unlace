// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115390
// Name:            .get_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115390 jmp     cs:get_numbered_type_ptr
//
// Resolved target: get_numbered_type
// Target address:  0x8D5C18
// GOT/IAT slot:    0x8A1668
// Slot symbol:     get_numbered_type_ptr
// Target type:     <no type info>
// ============================================================

void .get_numbered_type(/* see target signature */)
{
    // Tail-call to get_numbered_type via GOT/IAT indirection
    return get_numbered_type(/* forwarded args */);
}

