// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA880
// Name:            .cfgopt_t__apply3
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA880 jmp     cs:off_35428
//
// Resolved target: cfgopt_t__apply3
// Target address:  0x35A88
// GOT/IAT slot:    0x35428
// Slot symbol:     off_35428
// Target type:     <no type info>
// ============================================================

void .cfgopt_t__apply3(/* see target signature */)
{
    // Tail-call to cfgopt_t__apply3 via GOT/IAT indirection
    return cfgopt_t__apply3(/* forwarded args */);
}

