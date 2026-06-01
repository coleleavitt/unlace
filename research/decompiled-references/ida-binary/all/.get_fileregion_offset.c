// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114D50
// Name:            .get_fileregion_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114D50 jmp     cs:get_fileregion_offset_ptr
//
// Resolved target: get_fileregion_offset
// Target address:  0x8D5838
// GOT/IAT slot:    0x8A1348
// Slot symbol:     get_fileregion_offset_ptr
// Target type:     <no type info>
// ============================================================

void .get_fileregion_offset(/* see target signature */)
{
    // Tail-call to get_fileregion_offset via GOT/IAT indirection
    return get_fileregion_offset(/* forwarded args */);
}

