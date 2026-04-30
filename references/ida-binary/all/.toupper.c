// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111B40
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111B40 jmp     cs:toupper_ptr
//
// Resolved target: toupper
// Target address:  0x8D37C0
// GOT/IAT slot:    0x89FA40
// Slot symbol:     toupper_ptr
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

