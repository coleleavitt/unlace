// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114BC0
// Name:            .get_str_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114BC0 jmp     cs:get_str_type_ptr
//
// Resolved target: get_str_type
// Target address:  0x8D5740
// GOT/IAT slot:    0x8A1280
// Slot symbol:     get_str_type_ptr
// Target type:     <no type info>
// ============================================================

void .get_str_type(/* see target signature */)
{
    // Tail-call to get_str_type via GOT/IAT indirection
    return get_str_type(/* forwarded args */);
}

