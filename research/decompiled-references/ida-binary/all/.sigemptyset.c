// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114A50
// Name:            .sigemptyset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114A50 jmp     cs:sigemptyset_ptr
//
// Resolved target: sigemptyset
// Target address:  0x8D5638
// GOT/IAT slot:    0x8A11C8
// Slot symbol:     sigemptyset_ptr
// Target type:     int(sigset_t *set)
// ============================================================

/* see target sig */ .sigemptyset(/* see target signature */)
{
    // Tail-call to sigemptyset via GOT/IAT indirection
    return sigemptyset(/* forwarded args */);
}

