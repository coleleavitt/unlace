// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C610
// Name:            .back_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C610 jmp     cs:off_4EDAF0
//
// Resolved target: back_char
// Target address:  0x4F1E18
// GOT/IAT slot:    0x4EDAF0
// Slot symbol:     off_4EDAF0
// Target type:     <no type info>
// ============================================================

void .back_char(/* see target signature */)
{
    // Tail-call to back_char via GOT/IAT indirection
    return back_char(/* forwarded args */);
}

