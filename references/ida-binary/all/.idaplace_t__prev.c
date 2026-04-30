// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A190
// Name:            .idaplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A190 jmp     cs:idaplace_t__prev_ptr
//
// Resolved target: idaplace_t__prev
// Target address:  0x8D8D10
// GOT/IAT slot:    0x8A3D68
// Slot symbol:     idaplace_t__prev_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__prev(/* see target signature */)
{
    // Tail-call to idaplace_t__prev via GOT/IAT indirection
    return idaplace_t__prev(/* forwarded args */);
}

