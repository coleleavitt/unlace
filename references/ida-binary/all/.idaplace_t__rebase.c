// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113EB0
// Name:            .idaplace_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113EB0 jmp     cs:idaplace_t__rebase_ptr
//
// Resolved target: idaplace_t__rebase
// Target address:  0x8D4EA8
// GOT/IAT slot:    0x8A0BF8
// Slot symbol:     idaplace_t__rebase_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__rebase(/* see target signature */)
{
    // Tail-call to idaplace_t__rebase via GOT/IAT indirection
    return idaplace_t__rebase(/* forwarded args */);
}

