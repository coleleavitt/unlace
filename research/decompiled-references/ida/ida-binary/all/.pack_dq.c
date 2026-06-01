// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A6F0
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A6F0 jmp     cs:pack_dq_ptr
//
// Resolved target: pack_dq
// Target address:  0x8D9070
// GOT/IAT slot:    0x8A4018
// Slot symbol:     pack_dq_ptr
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

