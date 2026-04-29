// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19570
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19570 jmp     cs:off_752A0
//
// Resolved target: set_module_data
// Target address:  0x75AF0
// GOT/IAT slot:    0x752A0
// Slot symbol:     off_752A0
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

