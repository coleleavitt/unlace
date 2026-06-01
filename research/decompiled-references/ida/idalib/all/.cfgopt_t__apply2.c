// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8520
// Name:            .cfgopt_t__apply2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8520 jmp     cs:off_2C79A78
//
// Resolved target: cfgopt_t__apply2
// Target address:  0x748080
// GOT/IAT slot:    0x2C79A78
// Slot symbol:     off_2C79A78
// Target type:     <no type info>
// ============================================================

void .cfgopt_t__apply2(/* see target signature */)
{
    // Tail-call to cfgopt_t__apply2 via GOT/IAT indirection
    return cfgopt_t__apply2(/* forwarded args */);
}

