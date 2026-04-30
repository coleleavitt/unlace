// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113740
// Name:            .get_reftype_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113740 jmp     cs:get_reftype_by_size_ptr
//
// Resolved target: get_reftype_by_size
// Target address:  0x8D49C8
// GOT/IAT slot:    0x8A0840
// Slot symbol:     get_reftype_by_size_ptr
// Target type:     <no type info>
// ============================================================

void .get_reftype_by_size(/* see target signature */)
{
    // Tail-call to get_reftype_by_size via GOT/IAT indirection
    return get_reftype_by_size(/* forwarded args */);
}

