// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CF70
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CF70 jmp     cs:off_4EDFA0
//
// Resolved target: stristr
// Target address:  0x4F22F0
// GOT/IAT slot:    0x4EDFA0
// Slot symbol:     off_4EDFA0
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

