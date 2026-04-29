// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A910
// Name:            .register_cfgopts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A910 jmp     cs:off_4DA470
//
// Resolved target: register_cfgopts
// Target address:  0x4DCE50
// GOT/IAT slot:    0x4DA470
// Slot symbol:     off_4DA470
// Target type:     <no type info>
// ============================================================

void .register_cfgopts(/* see target signature */)
{
    // Tail-call to register_cfgopts via GOT/IAT indirection
    return register_cfgopts(/* forwarded args */);
}

