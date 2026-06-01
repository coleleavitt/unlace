// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB870
// Name:            .get_loader_name_from_dll
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB870 jmp     cs:off_2C7B420
//
// Resolved target: get_loader_name_from_dll
// Target address:  0x641EF0
// GOT/IAT slot:    0x2C7B420
// Slot symbol:     off_2C7B420
// Target type:     <no type info>
// ============================================================

void .get_loader_name_from_dll(/* see target signature */)
{
    // Tail-call to get_loader_name_from_dll via GOT/IAT indirection
    return get_loader_name_from_dll(/* forwarded args */);
}

