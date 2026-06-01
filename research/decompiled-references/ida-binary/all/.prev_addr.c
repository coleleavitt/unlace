// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118030
// Name:            .prev_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118030 jmp     cs:prev_addr_ptr
//
// Resolved target: prev_addr
// Target address:  0x8D7840
// GOT/IAT slot:    0x8A2CB8
// Slot symbol:     prev_addr_ptr
// Target type:     <no type info>
// ============================================================

void .prev_addr(/* see target signature */)
{
    // Tail-call to prev_addr via GOT/IAT indirection
    return prev_addr(/* forwarded args */);
}

