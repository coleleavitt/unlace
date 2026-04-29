// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5430
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5430 jmp     cs:off_15200
//
// Resolved target: get_sreg
// Target address:  0x16290
// GOT/IAT slot:    0x15200
// Slot symbol:     off_15200
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

