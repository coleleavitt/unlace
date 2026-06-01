// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC720
// Name:            .init_plugins
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC720 jmp     cs:off_2C7BB78
//
// Resolved target: init_plugins
// Target address:  0x4F1540
// GOT/IAT slot:    0x2C7BB78
// Slot symbol:     off_2C7BB78
// Target type:     <no type info>
// ============================================================

void .init_plugins(/* see target signature */)
{
    // Tail-call to init_plugins via GOT/IAT indirection
    return init_plugins(/* forwarded args */);
}

