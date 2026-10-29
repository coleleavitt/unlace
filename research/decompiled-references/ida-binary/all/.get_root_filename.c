// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1144A0
// Name:            .get_root_filename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1144A0 jmp     cs:get_root_filename_ptr
//
// Resolved target: get_root_filename
// Target address:  0x8D5228
// GOT/IAT slot:    0x8A0EF0
// Slot symbol:     get_root_filename_ptr
// Target type:     <no type info>
// ============================================================

void .get_root_filename(/* see target signature */)
{
    // Tail-call to get_root_filename via GOT/IAT indirection
    return get_root_filename(/* forwarded args */);
}

