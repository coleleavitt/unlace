// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117490
// Name:            .qustrlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117490 jmp     cs:qustrlen_ptr
//
// Resolved target: qustrlen
// Target address:  0x8D70D8
// GOT/IAT slot:    0x8A26E8
// Slot symbol:     qustrlen_ptr
// Target type:     <no type info>
// ============================================================

void .qustrlen(/* see target signature */)
{
    // Tail-call to qustrlen via GOT/IAT indirection
    return qustrlen(/* forwarded args */);
}

