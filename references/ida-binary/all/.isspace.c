// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114520
// Name:            .isspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114520 jmp     cs:isspace_ptr
//
// Resolved target: isspace
// Target address:  0x8D5298
// GOT/IAT slot:    0x8A0F30
// Slot symbol:     isspace_ptr
// Target type:     int(int)
// ============================================================

/* see target sig */ .isspace(/* see target signature */)
{
    // Tail-call to isspace via GOT/IAT indirection
    return isspace(/* forwarded args */);
}

