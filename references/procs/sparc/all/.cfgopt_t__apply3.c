// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7660
// Name:            .cfgopt_t__apply3
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7660 jmp     cs:off_19318
//
// Resolved target: cfgopt_t__apply3
// Target address:  0x19858
// GOT/IAT slot:    0x19318
// Slot symbol:     off_19318
// Target type:     <no type info>
// ============================================================

void .cfgopt_t__apply3(/* see target signature */)
{
    // Tail-call to cfgopt_t__apply3 via GOT/IAT indirection
    return cfgopt_t__apply3(/* forwarded args */);
}

