// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31B0
// Name:            .get_root_filename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31B0 jmp     cs:off_130C0
//
// Resolved target: get_root_filename
// Target address:  0x137B0
// GOT/IAT slot:    0x130C0
// Slot symbol:     off_130C0
// Target type:     <no type info>
// ============================================================

void .get_root_filename(/* see target signature */)
{
    // Tail-call to get_root_filename via GOT/IAT indirection
    return get_root_filename(/* forwarded args */);
}

