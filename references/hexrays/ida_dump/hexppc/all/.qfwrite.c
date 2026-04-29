// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCF0
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCF0 jmp     cs:off_4DAE60
//
// Resolved target: qfwrite
// Target address:  0x4DD890
// GOT/IAT slot:    0x4DAE60
// Slot symbol:     off_4DAE60
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

