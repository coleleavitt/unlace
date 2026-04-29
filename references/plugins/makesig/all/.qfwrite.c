// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35A0
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35A0 jmp     cs:off_202B8
//
// Resolved target: qfwrite
// Target address:  0x21BF0
// GOT/IAT slot:    0x202B8
// Slot symbol:     off_202B8
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

