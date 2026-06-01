// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114880
// Name:            .get_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114880 jmp     cs:get_entry_ptr
//
// Resolved target: get_entry
// Target address:  0x8D54E0
// GOT/IAT slot:    0x8A10E0
// Slot symbol:     get_entry_ptr
// Target type:     <no type info>
// ============================================================

void .get_entry(/* see target signature */)
{
    // Tail-call to get_entry via GOT/IAT indirection
    return get_entry(/* forwarded args */);
}

