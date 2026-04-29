// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E250
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E250 jmp     cs:off_4E9910
//
// Resolved target: get_sreg
// Target address:  0x4EC330
// GOT/IAT slot:    0x4E9910
// Slot symbol:     off_4E9910
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

