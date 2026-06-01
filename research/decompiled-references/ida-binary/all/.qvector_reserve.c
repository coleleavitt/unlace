// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A7A0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A7A0 jmp     cs:qvector_reserve_ptr
//
// Resolved target: qvector_reserve
// Target address:  0x8D9110
// GOT/IAT slot:    0x8A4070
// Slot symbol:     qvector_reserve_ptr
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

