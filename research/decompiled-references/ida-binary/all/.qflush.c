// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AC10
// Name:            .qflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AC10 jmp     cs:qflush_ptr
//
// Resolved target: qflush
// Target address:  0x8D93C8
// GOT/IAT slot:    0x8A42A8
// Slot symbol:     qflush_ptr
// Target type:     <no type info>
// ============================================================

void .qflush(/* see target signature */)
{
    // Tail-call to qflush via GOT/IAT indirection
    return qflush(/* forwarded args */);
}

