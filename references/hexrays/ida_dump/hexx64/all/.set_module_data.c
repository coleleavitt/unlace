// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE70
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE70 jmp     cs:off_4ED720
//
// Resolved target: set_module_data
// Target address:  0x4F1A30
// GOT/IAT slot:    0x4ED720
// Slot symbol:     off_4ED720
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

