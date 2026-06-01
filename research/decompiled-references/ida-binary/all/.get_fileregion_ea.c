// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119A00
// Name:            .get_fileregion_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119A00 jmp     cs:get_fileregion_ea_ptr
//
// Resolved target: get_fileregion_ea
// Target address:  0x8D8860
// GOT/IAT slot:    0x8A39A0
// Slot symbol:     get_fileregion_ea_ptr
// Target type:     <no type info>
// ============================================================

void .get_fileregion_ea(/* see target signature */)
{
    // Tail-call to get_fileregion_ea via GOT/IAT indirection
    return get_fileregion_ea(/* forwarded args */);
}

