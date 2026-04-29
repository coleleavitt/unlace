// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E590
// Name:            .back_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E590 jmp     cs:off_4E9AB0
//
// Resolved target: back_char
// Target address:  0x4EC4D0
// GOT/IAT slot:    0x4E9AB0
// Slot symbol:     off_4E9AB0
// Target type:     <no type info>
// ============================================================

void .back_char(/* see target signature */)
{
    // Tail-call to back_char via GOT/IAT indirection
    return back_char(/* forwarded args */);
}

