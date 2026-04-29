// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x160C0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x160C0 jmp     cs:off_4F048
//
// Resolved target: qvsnprintf
// Target address:  0x4FE70
// GOT/IAT slot:    0x4F048
// Slot symbol:     off_4F048
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

