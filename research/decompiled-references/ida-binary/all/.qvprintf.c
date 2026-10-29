// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119740
// Name:            .qvprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119740 jmp     cs:qvprintf_ptr
//
// Resolved target: qvprintf
// Target address:  0x8D86B8
// GOT/IAT slot:    0x8A3840
// Slot symbol:     qvprintf_ptr
// Target type:     <no type info>
// ============================================================

void .qvprintf(/* see target signature */)
{
    // Tail-call to qvprintf via GOT/IAT indirection
    return qvprintf(/* forwarded args */);
}

