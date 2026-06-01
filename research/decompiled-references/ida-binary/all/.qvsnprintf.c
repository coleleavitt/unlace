// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1111E0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1111E0 jmp     cs:qvsnprintf_ptr
//
// Resolved target: qvsnprintf
// Target address:  0x8D3198
// GOT/IAT slot:    0x89F590
// Slot symbol:     qvsnprintf_ptr
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

