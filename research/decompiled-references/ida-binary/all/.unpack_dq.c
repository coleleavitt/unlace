// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119CF0
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119CF0 jmp     cs:unpack_dq_ptr
//
// Resolved target: unpack_dq
// Target address:  0x8D8A10
// GOT/IAT slot:    0x8A3B18
// Slot symbol:     unpack_dq_ptr
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

