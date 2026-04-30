// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114A70
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114A70 jmp     cs:get_file_ext_ptr
//
// Resolved target: get_file_ext
// Target address:  0x8D5648
// GOT/IAT slot:    0x8A11D8
// Slot symbol:     get_file_ext_ptr
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

