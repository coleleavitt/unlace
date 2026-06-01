// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115070
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115070 jmp     cs:qfwrite_ptr
//
// Resolved target: qfwrite
// Target address:  0x8D5A10
// GOT/IAT slot:    0x8A14D8
// Slot symbol:     qfwrite_ptr
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

