// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .import_module
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_B010
//
// Resolved target: import_module
// Target address:  0xB2A8
// GOT/IAT slot:    0xB010
// Slot symbol:     off_B010
// Target type:     <no type info>
// ============================================================

void .import_module(/* see target signature */)
{
    // Tail-call to import_module via GOT/IAT indirection
    return import_module(/* forwarded args */);
}

