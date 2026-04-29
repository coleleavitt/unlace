// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30A0
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30A0 jmp     cs:off_13038
//
// Resolved target: clr_module_data
// Target address:  0x133B0
// GOT/IAT slot:    0x13038
// Slot symbol:     off_13038
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

