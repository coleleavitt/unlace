// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67A0
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67A0 jmp     cs:off_243B8
//
// Resolved target: stristr
// Target address:  0x261A8
// GOT/IAT slot:    0x243B8
// Slot symbol:     off_243B8
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

