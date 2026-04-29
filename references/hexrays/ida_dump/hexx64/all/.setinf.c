// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B310
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B310 jmp     cs:off_4ED170
//
// Resolved target: setinf
// Target address:  0x4F1468
// GOT/IAT slot:    0x4ED170
// Slot symbol:     off_4ED170
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

