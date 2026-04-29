// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50E0
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50E0 jmp     cs:off_1A058
//
// Resolved target: clr_module_data
// Target address:  0x1A3D8
// GOT/IAT slot:    0x1A058
// Slot symbol:     off_1A058
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

