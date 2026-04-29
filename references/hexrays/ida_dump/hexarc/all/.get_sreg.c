// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A220
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A220 jmp     cs:off_4B98F8
//
// Resolved target: get_sreg
// Target address:  0x4BC2F8
// GOT/IAT slot:    0x4B98F8
// Slot symbol:     off_4B98F8
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

