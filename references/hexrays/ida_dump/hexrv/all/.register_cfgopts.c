// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A910
// Name:            .register_cfgopts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A910 jmp     cs:off_4BF470
//
// Resolved target: register_cfgopts
// Target address:  0x4C2948
// GOT/IAT slot:    0x4BF470
// Slot symbol:     off_4BF470
// Target type:     <no type info>
// ============================================================

void .register_cfgopts(/* see target signature */)
{
    // Tail-call to register_cfgopts via GOT/IAT indirection
    return register_cfgopts(/* forwarded args */);
}

