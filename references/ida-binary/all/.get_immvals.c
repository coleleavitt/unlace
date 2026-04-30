// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1196E0
// Name:            .get_immvals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1196E0 jmp     cs:get_immvals_ptr
//
// Resolved target: get_immvals
// Target address:  0x8D8670
// GOT/IAT slot:    0x8A3810
// Slot symbol:     get_immvals_ptr
// Target type:     <no type info>
// ============================================================

void .get_immvals(/* see target signature */)
{
    // Tail-call to get_immvals via GOT/IAT indirection
    return get_immvals(/* forwarded args */);
}

