// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_5098
//
// Resolved target: qvsnprintf
// Target address:  0x51B0
// GOT/IAT slot:    0x5098
// Slot symbol:     off_5098
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

