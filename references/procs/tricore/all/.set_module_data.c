// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6370
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6370 jmp     cs:off_241A0
//
// Resolved target: set_module_data
// Target address:  0x25F70
// GOT/IAT slot:    0x241A0
// Slot symbol:     off_241A0
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

