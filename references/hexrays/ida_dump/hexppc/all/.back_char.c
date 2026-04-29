// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B550
// Name:            .back_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B550 jmp     cs:off_4DAA90
//
// Resolved target: back_char
// Target address:  0x4DD490
// GOT/IAT slot:    0x4DAA90
// Slot symbol:     off_4DAA90
// Target type:     <no type info>
// ============================================================

void .back_char(/* see target signature */)
{
    // Tail-call to back_char via GOT/IAT indirection
    return back_char(/* forwarded args */);
}

