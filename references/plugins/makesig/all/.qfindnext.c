// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3430
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3430 jmp     cs:off_20200
//
// Resolved target: qfindnext
// Target address:  0x21B20
// GOT/IAT slot:    0x20200
// Slot symbol:     off_20200
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

