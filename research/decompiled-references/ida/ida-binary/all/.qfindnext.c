// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1168E0
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1168E0 jmp     cs:qfindnext_ptr
//
// Resolved target: qfindnext
// Target address:  0x8D6980
// GOT/IAT slot:    0x8A2110
// Slot symbol:     qfindnext_ptr
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

