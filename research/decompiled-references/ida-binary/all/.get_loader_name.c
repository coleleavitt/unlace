// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A8C0
// Name:            .get_loader_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A8C0 jmp     cs:get_loader_name_ptr
//
// Resolved target: get_loader_name
// Target address:  0x8D91C8
// GOT/IAT slot:    0x8A4100
// Slot symbol:     get_loader_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_loader_name(/* see target signature */)
{
    // Tail-call to get_loader_name via GOT/IAT indirection
    return get_loader_name(/* forwarded args */);
}

