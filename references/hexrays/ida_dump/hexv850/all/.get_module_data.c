// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA20
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA20 jmp     cs:off_4C0CF8
//
// Resolved target: get_module_data
// Target address:  0x4C3D10
// GOT/IAT slot:    0x4C0CF8
// Slot symbol:     off_4C0CF8
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

