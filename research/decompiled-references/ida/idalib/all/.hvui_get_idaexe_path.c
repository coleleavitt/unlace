// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA50
// Name:            .hvui_get_idaexe_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA50 jmp     cs:off_2C7C510
//
// Resolved target: hvui_get_idaexe_path
// Target address:  0x8FEF10
// GOT/IAT slot:    0x2C7C510
// Slot symbol:     off_2C7C510
// Target type:     <no type info>
// ============================================================

void .hvui_get_idaexe_path(/* see target signature */)
{
    // Tail-call to hvui_get_idaexe_path via GOT/IAT indirection
    return hvui_get_idaexe_path(/* forwarded args */);
}

