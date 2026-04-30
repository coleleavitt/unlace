// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1197A0
// Name:            .htonl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1197A0 jmp     cs:htonl_ptr
//
// Resolved target: htonl
// Target address:  0x8D86E8
// GOT/IAT slot:    0x8A3870
// Slot symbol:     htonl_ptr
// Target type:     uint32_t(uint32_t hostlong)
// ============================================================

/* see target sig */ .htonl(/* see target signature */)
{
    // Tail-call to htonl via GOT/IAT indirection
    return htonl(/* forwarded args */);
}

