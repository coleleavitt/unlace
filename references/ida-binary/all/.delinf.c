// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1171D0
// Name:            .delinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1171D0 jmp     cs:delinf_ptr
//
// Resolved target: delinf
// Target address:  0x8D6EF8
// GOT/IAT slot:    0x8A2588
// Slot symbol:     delinf_ptr
// Target type:     <no type info>
// ============================================================

void .delinf(/* see target signature */)
{
    // Tail-call to delinf via GOT/IAT indirection
    return delinf(/* forwarded args */);
}

