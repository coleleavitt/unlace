// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50D0
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50D0 jmp     cs:off_15050
//
// Resolved target: clr_module_data
// Target address:  0x160E0
// GOT/IAT slot:    0x15050
// Slot symbol:     off_15050
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

