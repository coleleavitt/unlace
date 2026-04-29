// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA600
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA600 jmp     cs:off_352E8
//
// Resolved target: get_sreg
// Target address:  0x35938
// GOT/IAT slot:    0x352E8
// Slot symbol:     off_352E8
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

