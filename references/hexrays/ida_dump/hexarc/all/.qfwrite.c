// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD0
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD0 jmp     cs:off_4B9E50
//
// Resolved target: qfwrite
// Target address:  0x4BC880
// GOT/IAT slot:    0x4B9E50
// Slot symbol:     off_4B9E50
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

