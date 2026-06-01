// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117B30
// Name:            .hexplace_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117B30 jmp     cs:hexplace_t__rebase_ptr
//
// Resolved target: hexplace_t__rebase
// Target address:  0x8D74E8
// GOT/IAT slot:    0x8A2A38
// Slot symbol:     hexplace_t__rebase_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__rebase(/* see target signature */)
{
    // Tail-call to hexplace_t__rebase via GOT/IAT indirection
    return hexplace_t__rebase(/* forwarded args */);
}

