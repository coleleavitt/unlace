// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29E10
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29E10 jmp     cs:off_4B96F0
//
// Resolved target: set_module_data
// Target address:  0x4BC0E8
// GOT/IAT slot:    0x4B96F0
// Slot symbol:     off_4B96F0
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

