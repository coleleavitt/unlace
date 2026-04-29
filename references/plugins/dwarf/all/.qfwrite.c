// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB80
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB80 jmp     cs:off_CA5A8
//
// Resolved target: qfwrite
// Target address:  0xD0F00
// GOT/IAT slot:    0xCA5A8
// Slot symbol:     off_CA5A8
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

