// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119C40
// Name:            .init_plugins
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119C40 jmp     cs:init_plugins_ptr
//
// Resolved target: init_plugins
// Target address:  0x8D89B0
// GOT/IAT slot:    0x8A3AC0
// Slot symbol:     init_plugins_ptr
// Target type:     <no type info>
// ============================================================

void .init_plugins(/* see target signature */)
{
    // Tail-call to init_plugins via GOT/IAT indirection
    return init_plugins(/* forwarded args */);
}

