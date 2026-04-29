// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE40
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE40 jmp     cs:off_4BFF08
//
// Resolved target: stristr
// Target address:  0x4C3430
// GOT/IAT slot:    0x4BFF08
// Slot symbol:     off_4BFF08
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

