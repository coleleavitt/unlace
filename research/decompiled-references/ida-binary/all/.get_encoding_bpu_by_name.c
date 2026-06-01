// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1176E0
// Name:            .get_encoding_bpu_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1176E0 jmp     cs:get_encoding_bpu_by_name_ptr
//
// Resolved target: get_encoding_bpu_by_name
// Target address:  0x8D7248
// GOT/IAT slot:    0x8A2810
// Slot symbol:     get_encoding_bpu_by_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_encoding_bpu_by_name(/* see target signature */)
{
    // Tail-call to get_encoding_bpu_by_name via GOT/IAT indirection
    return get_encoding_bpu_by_name(/* forwarded args */);
}

