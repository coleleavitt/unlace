// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B950
// Name:            .register_cfgopts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B950 jmp     cs:off_4ED490
//
// Resolved target: register_cfgopts
// Target address:  0x4F1788
// GOT/IAT slot:    0x4ED490
// Slot symbol:     off_4ED490
// Target type:     <no type info>
// ============================================================

void .register_cfgopts(/* see target signature */)
{
    // Tail-call to register_cfgopts via GOT/IAT indirection
    return register_cfgopts(/* forwarded args */);
}

