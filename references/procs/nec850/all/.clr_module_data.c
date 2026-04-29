// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9110
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9110 jmp     cs:off_2E070
//
// Resolved target: clr_module_data
// Target address:  0x2E6E0
// GOT/IAT slot:    0x2E070
// Slot symbol:     off_2E070
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

