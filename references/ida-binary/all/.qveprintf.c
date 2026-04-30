// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112670
// Name:            .qveprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112670 jmp     cs:qveprintf_ptr
//
// Resolved target: qveprintf
// Target address:  0x8D3F10
// GOT/IAT slot:    0x89FFD8
// Slot symbol:     qveprintf_ptr
// Target type:     <no type info>
// ============================================================

void .qveprintf(/* see target signature */)
{
    // Tail-call to qveprintf via GOT/IAT indirection
    return qveprintf(/* forwarded args */);
}

