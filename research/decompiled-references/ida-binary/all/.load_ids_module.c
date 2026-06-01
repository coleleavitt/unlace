// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1182A0
// Name:            .load_ids_module
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1182A0 jmp     cs:load_ids_module_ptr
//
// Resolved target: load_ids_module
// Target address:  0x8D79C0
// GOT/IAT slot:    0x8A2DF0
// Slot symbol:     load_ids_module_ptr
// Target type:     <no type info>
// ============================================================

void .load_ids_module(/* see target signature */)
{
    // Tail-call to load_ids_module via GOT/IAT indirection
    return load_ids_module(/* forwarded args */);
}

