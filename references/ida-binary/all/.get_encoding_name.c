// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B970
// Name:            .get_encoding_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B970 jmp     cs:get_encoding_name_ptr
//
// Resolved target: get_encoding_name
// Target address:  0x8D9C18
// GOT/IAT slot:    0x8A4958
// Slot symbol:     get_encoding_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_encoding_name(/* see target signature */)
{
    // Tail-call to get_encoding_name via GOT/IAT indirection
    return get_encoding_name(/* forwarded args */);
}

