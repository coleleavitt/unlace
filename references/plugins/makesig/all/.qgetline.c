// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3200
// Name:            .qgetline
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3200 jmp     cs:off_200E8
//
// Resolved target: qgetline
// Target address:  0x219F8
// GOT/IAT slot:    0x200E8
// Slot symbol:     off_200E8
// Target type:     <no type info>
// ============================================================

void .qgetline(/* see target signature */)
{
    // Tail-call to qgetline via GOT/IAT indirection
    return qgetline(/* forwarded args */);
}

