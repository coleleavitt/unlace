// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A4B0
// Name:            .dbg_get_input_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A4B0 jmp     cs:dbg_get_input_path_ptr
//
// Resolved target: dbg_get_input_path
// Target address:  0x8D8F10
// GOT/IAT slot:    0x8A3EF8
// Slot symbol:     dbg_get_input_path_ptr
// Target type:     <no type info>
// ============================================================

void .dbg_get_input_path(/* see target signature */)
{
    // Tail-call to dbg_get_input_path via GOT/IAT indirection
    return dbg_get_input_path(/* forwarded args */);
}

