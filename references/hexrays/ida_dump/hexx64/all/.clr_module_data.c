// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B380
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B380 jmp     cs:off_4ED1A8
//
// Resolved target: clr_module_data
// Target address:  0x4F14A0
// GOT/IAT slot:    0x4ED1A8
// Slot symbol:     off_4ED1A8
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

