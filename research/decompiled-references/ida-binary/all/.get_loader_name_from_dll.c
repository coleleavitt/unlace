// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1183D0
// Name:            .get_loader_name_from_dll
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1183D0 jmp     cs:get_loader_name_from_dll_ptr
//
// Resolved target: get_loader_name_from_dll
// Target address:  0x8D7A68
// GOT/IAT slot:    0x8A2E88
// Slot symbol:     get_loader_name_from_dll_ptr
// Target type:     <no type info>
// ============================================================

void .get_loader_name_from_dll(/* see target signature */)
{
    // Tail-call to get_loader_name_from_dll via GOT/IAT indirection
    return get_loader_name_from_dll(/* forwarded args */);
}

