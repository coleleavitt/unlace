// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2030
// Name:            .import_module
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2030 jmp     cs:off_8000
//
// Resolved target: import_module
// Target address:  0x86E0
// GOT/IAT slot:    0x8000
// Slot symbol:     off_8000
// Target type:     <no type info>
// ============================================================

void .import_module(/* see target signature */)
{
    // Tail-call to import_module via GOT/IAT indirection
    return import_module(/* forwarded args */);
}

