// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B4F0
// Name:            .get_original_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B4F0 jmp     cs:get_original_byte_ptr
//
// Resolved target: get_original_byte
// Target address:  0x8D9970
// GOT/IAT slot:    0x8A4718
// Slot symbol:     get_original_byte_ptr
// Target type:     <no type info>
// ============================================================

void .get_original_byte(/* see target signature */)
{
    // Tail-call to get_original_byte via GOT/IAT indirection
    return get_original_byte(/* forwarded args */);
}

