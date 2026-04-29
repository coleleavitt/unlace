// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B560
// Name:            .back_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B560 jmp     cs:off_4CDA98
//
// Resolved target: back_char
// Target address:  0x4D04B8
// GOT/IAT slot:    0x4CDA98
// Slot symbol:     off_4CDA98
// Target type:     <no type info>
// ============================================================

void .back_char(/* see target signature */)
{
    // Tail-call to back_char via GOT/IAT indirection
    return back_char(/* forwarded args */);
}

