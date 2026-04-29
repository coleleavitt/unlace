// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0C0
// Name:            .fopenWT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0C0 jmp     cs:off_4C1048
//
// Resolved target: fopenWT
// Target address:  0x4C4070
// GOT/IAT slot:    0x4C1048
// Slot symbol:     off_4C1048
// Target type:     <no type info>
// ============================================================

void .fopenWT(/* see target signature */)
{
    // Tail-call to fopenWT via GOT/IAT indirection
    return fopenWT(/* forwarded args */);
}

