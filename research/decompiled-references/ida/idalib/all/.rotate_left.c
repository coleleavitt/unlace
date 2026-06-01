// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF80
// Name:            .rotate_left
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF80 jmp     cs:off_2C7AFA8
//
// Resolved target: rotate_left
// Target address:  0x826A50
// GOT/IAT slot:    0x2C7AFA8
// Slot symbol:     off_2C7AFA8
// Target type:     <no type info>
// ============================================================

void .rotate_left(/* see target signature */)
{
    // Tail-call to rotate_left via GOT/IAT indirection
    return rotate_left(/* forwarded args */);
}

