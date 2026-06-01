// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1118D0
// Name:            .tiplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1118D0 jmp     cs:tiplace_t__beginning_ptr
//
// Resolved target: tiplace_t__beginning
// Target address:  0x8D3648
// GOT/IAT slot:    0x89F908
// Slot symbol:     tiplace_t__beginning_ptr
// Target type:     <no type info>
// ============================================================

void .tiplace_t__beginning(/* see target signature */)
{
    // Tail-call to tiplace_t__beginning via GOT/IAT indirection
    return tiplace_t__beginning(/* forwarded args */);
}

