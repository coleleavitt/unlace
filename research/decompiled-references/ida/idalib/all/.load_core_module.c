// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF60
// Name:            .load_core_module
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF60 jmp     cs:off_2C7B798
//
// Resolved target: load_core_module
// Target address:  0x63FBB0
// GOT/IAT slot:    0x2C7B798
// Slot symbol:     off_2C7B798
// Target type:     <no type info>
// ============================================================

void .load_core_module(/* see target signature */)
{
    // Tail-call to load_core_module via GOT/IAT indirection
    return load_core_module(/* forwarded args */);
}

