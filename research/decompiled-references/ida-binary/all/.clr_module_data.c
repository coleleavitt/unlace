// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119D60
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119D60 jmp     cs:clr_module_data_ptr
//
// Resolved target: clr_module_data
// Target address:  0x8D8A48
// GOT/IAT slot:    0x8A3B50
// Slot symbol:     clr_module_data_ptr
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

