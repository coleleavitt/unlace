// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5320
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5320 jmp     cs:off_15178
//
// Resolved target: set_module_data
// Target address:  0x16208
// GOT/IAT slot:    0x15178
// Slot symbol:     off_15178
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

