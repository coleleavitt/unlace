// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112B70
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112B70 jmp     cs:strlen_ptr
//
// Resolved target: strlen
// Target address:  0x8D4210
// GOT/IAT slot:    0x8A0258
// Slot symbol:     strlen_ptr
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

