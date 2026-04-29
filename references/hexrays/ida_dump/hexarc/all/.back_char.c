// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A540
// Name:            .back_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A540 jmp     cs:off_4B9A88
//
// Resolved target: back_char
// Target address:  0x4BC488
// GOT/IAT slot:    0x4B9A88
// Slot symbol:     off_4B9A88
// Target type:     <no type info>
// ============================================================

void .back_char(/* see target signature */)
{
    // Tail-call to back_char via GOT/IAT indirection
    return back_char(/* forwarded args */);
}

