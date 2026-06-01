// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BAA0
// Name:            .hvui_get_idaexe_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BAA0 jmp     cs:hvui_get_idaexe_path_ptr
//
// Resolved target: hvui_get_idaexe_path
// Target address:  0x8D9CD8
// GOT/IAT slot:    0x8A49F0
// Slot symbol:     hvui_get_idaexe_path_ptr
// Target type:     <no type info>
// ============================================================

void .hvui_get_idaexe_path(/* see target signature */)
{
    // Tail-call to hvui_get_idaexe_path via GOT/IAT indirection
    return hvui_get_idaexe_path(/* forwarded args */);
}

