// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACBD0
// Name:            .get_tryblks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACBD0 jmp     cs:off_2C7BDD0
//
// Resolved target: get_tryblks
// Target address:  0x69DDD0
// GOT/IAT slot:    0x2C7BDD0
// Slot symbol:     off_2C7BDD0
// Target type:     <no type info>
// ============================================================

void .get_tryblks(/* see target signature */)
{
    // Tail-call to get_tryblks via GOT/IAT indirection
    return get_tryblks(/* forwarded args */);
}

