// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D920
// Name:            .register_cfgopts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D920 jmp     cs:off_4E9478
//
// Resolved target: register_cfgopts
// Target address:  0x4EBE78
// GOT/IAT slot:    0x4E9478
// Slot symbol:     off_4E9478
// Target type:     <no type info>
// ============================================================

void .register_cfgopts(/* see target signature */)
{
    // Tail-call to register_cfgopts via GOT/IAT indirection
    return register_cfgopts(/* forwarded args */);
}

