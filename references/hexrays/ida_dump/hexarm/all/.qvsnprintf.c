// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E750
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E750 jmp     cs:off_4E9B90
//
// Resolved target: qvsnprintf
// Target address:  0x4EC5B8
// GOT/IAT slot:    0x4E9B90
// Slot symbol:     off_4E9B90
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

