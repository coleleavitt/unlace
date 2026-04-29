// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C2E0
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C2E0 jmp     cs:off_4ED958
//
// Resolved target: get_sreg
// Target address:  0x4F1C78
// GOT/IAT slot:    0x4ED958
// Slot symbol:     off_4ED958
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

