// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29370
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29370 jmp     cs:off_4B91A0
//
// Resolved target: clr_module_data
// Target address:  0x4BBB70
// GOT/IAT slot:    0x4B91A0
// Slot symbol:     off_4B91A0
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

