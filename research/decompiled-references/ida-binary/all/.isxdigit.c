// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A410
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A410 jmp     cs:isxdigit_ptr
//
// Resolved target: isxdigit
// Target address:  0x8D8EA8
// GOT/IAT slot:    0x8A3EA8
// Slot symbol:     isxdigit_ptr
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

