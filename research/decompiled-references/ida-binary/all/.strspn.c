// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118A60
// Name:            .strspn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118A60 jmp     cs:strspn_ptr
//
// Resolved target: strspn
// Target address:  0x8D7E68
// GOT/IAT slot:    0x8A31D0
// Slot symbol:     strspn_ptr
// Target type:     size_t(const char *s, const char *accept)
// ============================================================

/* see target sig */ .strspn(/* see target signature */)
{
    // Tail-call to strspn via GOT/IAT indirection
    return strspn(/* forwarded args */);
}

