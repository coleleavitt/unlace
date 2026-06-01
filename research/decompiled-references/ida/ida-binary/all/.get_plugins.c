// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1175C0
// Name:            .get_plugins
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1175C0 jmp     cs:get_plugins_ptr
//
// Resolved target: get_plugins
// Target address:  0x8D7198
// GOT/IAT slot:    0x8A2780
// Slot symbol:     get_plugins_ptr
// Target type:     <no type info>
// ============================================================

void .get_plugins(/* see target signature */)
{
    // Tail-call to get_plugins via GOT/IAT indirection
    return get_plugins(/* forwarded args */);
}

