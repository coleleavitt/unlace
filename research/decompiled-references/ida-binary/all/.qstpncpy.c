// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118EF0
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118EF0 jmp     cs:qstpncpy_ptr
//
// Resolved target: qstpncpy
// Target address:  0x8D8118
// GOT/IAT slot:    0x8A3418
// Slot symbol:     qstpncpy_ptr
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

