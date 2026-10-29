// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112EA0
// Name:            .isalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112EA0 jmp     cs:isalnum_ptr
//
// Resolved target: isalnum
// Target address:  0x8D4438
// GOT/IAT slot:    0x8A03F0
// Slot symbol:     isalnum_ptr
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalnum(/* see target signature */)
{
    // Tail-call to isalnum via GOT/IAT indirection
    return isalnum(/* forwarded args */);
}

