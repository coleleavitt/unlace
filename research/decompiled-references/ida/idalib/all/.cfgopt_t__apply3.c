// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABDF0
// Name:            .cfgopt_t__apply3
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABDF0 jmp     cs:off_2C7B6E0
//
// Resolved target: cfgopt_t__apply3
// Target address:  0x747D70
// GOT/IAT slot:    0x2C7B6E0
// Slot symbol:     off_2C7B6E0
// Target type:     <no type info>
// ============================================================

void .cfgopt_t__apply3(/* see target signature */)
{
    // Tail-call to cfgopt_t__apply3 via GOT/IAT indirection
    return cfgopt_t__apply3(/* forwarded args */);
}

