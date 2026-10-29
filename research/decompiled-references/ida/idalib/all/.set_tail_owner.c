// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA470
// Name:            .set_tail_owner
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA470 jmp     cs:off_2C7AA20
//
// Resolved target: set_tail_owner
// Target address:  0x5CB3B0
// GOT/IAT slot:    0x2C7AA20
// Slot symbol:     off_2C7AA20
// Target type:     <no type info>
// ============================================================

void .set_tail_owner(/* see target signature */)
{
    // Tail-call to set_tail_owner via GOT/IAT indirection
    return set_tail_owner(/* forwarded args */);
}

