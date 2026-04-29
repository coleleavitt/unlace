// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9060
// Name:            .import_module
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9060 jmp     cs:off_89018
//
// Resolved target: import_module
// Target address:  0x8C318
// GOT/IAT slot:    0x89018
// Slot symbol:     off_89018
// Target type:     <no type info>
// ============================================================

void .import_module(/* see target signature */)
{
    // Tail-call to import_module via GOT/IAT indirection
    return import_module(/* forwarded args */);
}

