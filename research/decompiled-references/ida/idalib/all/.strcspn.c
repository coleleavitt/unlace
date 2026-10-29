// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC6F0
// Name:            .strcspn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC6F0 jmp     cs:off_2C7BB60
//
// Resolved target: strcspn
// Target address:  0x2D11DF0
// GOT/IAT slot:    0x2C7BB60
// Slot symbol:     off_2C7BB60
// Target type:     size_t(const char *s, const char *reject)
// ============================================================

/* see target sig */ .strcspn(/* see target signature */)
{
    // Tail-call to strcspn via GOT/IAT indirection
    return strcspn(/* forwarded args */);
}

