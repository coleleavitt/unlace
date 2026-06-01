// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113550
// Name:            .get_import_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113550 jmp     cs:get_import_entry_ptr
//
// Resolved target: get_import_entry
// Target address:  0x8D4898
// GOT/IAT slot:    0x8A0748
// Slot symbol:     get_import_entry_ptr
// Target type:     <no type info>
// ============================================================

void .get_import_entry(/* see target signature */)
{
    // Tail-call to get_import_entry via GOT/IAT indirection
    return get_import_entry(/* forwarded args */);
}

