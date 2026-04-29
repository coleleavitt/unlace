// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9820
// Name:            .cfgopt_t__apply3
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9820 jmp     cs:off_2E3F8
//
// Resolved target: cfgopt_t__apply3
// Target address:  0x2EA78
// GOT/IAT slot:    0x2E3F8
// Slot symbol:     off_2E3F8
// Target type:     <no type info>
// ============================================================

void .cfgopt_t__apply3(/* see target signature */)
{
    // Tail-call to cfgopt_t__apply3 via GOT/IAT indirection
    return cfgopt_t__apply3(/* forwarded args */);
}

