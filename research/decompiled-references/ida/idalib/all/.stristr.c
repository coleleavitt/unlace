// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC00
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC00 jmp     cs:off_2C7BDE8
//
// Resolved target: stristr
// Target address:  0x84E7A0
// GOT/IAT slot:    0x2C7BDE8
// Slot symbol:     off_2C7BDE8
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

