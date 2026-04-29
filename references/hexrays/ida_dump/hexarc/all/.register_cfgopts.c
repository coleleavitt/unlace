// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29910
// Name:            .register_cfgopts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29910 jmp     cs:off_4B9470
//
// Resolved target: register_cfgopts
// Target address:  0x4BBE50
// GOT/IAT slot:    0x4B9470
// Slot symbol:     off_4B9470
// Target type:     <no type info>
// ============================================================

void .register_cfgopts(/* see target signature */)
{
    // Tail-call to register_cfgopts via GOT/IAT indirection
    return register_cfgopts(/* forwarded args */);
}

