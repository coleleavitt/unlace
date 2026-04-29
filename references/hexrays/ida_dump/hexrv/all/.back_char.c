// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B550
// Name:            .back_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B550 jmp     cs:off_4BFA90
//
// Resolved target: back_char
// Target address:  0x4C2F88
// GOT/IAT slot:    0x4BFA90
// Slot symbol:     off_4BFA90
// Target type:     <no type info>
// ============================================================

void .back_char(/* see target signature */)
{
    // Tail-call to back_char via GOT/IAT indirection
    return back_char(/* forwarded args */);
}

