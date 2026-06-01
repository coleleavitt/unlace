// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C40
// Name:            .back_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C40 jmp     cs:off_2C79E08
//
// Resolved target: back_char
// Target address:  0x8B8100
// GOT/IAT slot:    0x2C79E08
// Slot symbol:     off_2C79E08
// Target type:     <no type info>
// ============================================================

void .back_char(/* see target signature */)
{
    // Tail-call to back_char via GOT/IAT indirection
    return back_char(/* forwarded args */);
}

