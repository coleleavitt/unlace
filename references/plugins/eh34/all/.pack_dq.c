// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6760
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6760 jmp     cs:off_8D398
//
// Resolved target: pack_dq
// Target address:  0x8D960
// GOT/IAT slot:    0x8D398
// Slot symbol:     off_8D398
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

