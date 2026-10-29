// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8AA0
// Name:            .ediv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8AA0 jmp     cs:off_2C79D38
//
// Resolved target: ediv
// Target address:  0x831720
// GOT/IAT slot:    0x2C79D38
// Slot symbol:     off_2C79D38
// Target type:     <no type info>
// ============================================================

void .ediv(/* see target signature */)
{
    // Tail-call to ediv via GOT/IAT indirection
    return ediv(/* forwarded args */);
}

