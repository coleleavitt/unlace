// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA4A0
// Name:            .is_numop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA4A0 jmp     cs:off_2C7AA38
//
// Resolved target: is_numop
// Target address:  0x3C45E0
// GOT/IAT slot:    0x2C7AA38
// Slot symbol:     off_2C7AA38
// Target type:     <no type info>
// ============================================================

void .is_numop(/* see target signature */)
{
    // Tail-call to is_numop via GOT/IAT indirection
    return is_numop(/* forwarded args */);
}

