// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E380
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E380 jmp     cs:off_4E99A8
//
// Resolved target: qstpncpy
// Target address:  0x4EC3C8
// GOT/IAT slot:    0x4E99A8
// Slot symbol:     off_4E99A8
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

