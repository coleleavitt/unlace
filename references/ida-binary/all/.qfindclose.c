// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1146A0
// Name:            .qfindclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1146A0 jmp     cs:qfindclose_ptr
//
// Resolved target: qfindclose
// Target address:  0x8D5398
// GOT/IAT slot:    0x8A0FF0
// Slot symbol:     qfindclose_ptr
// Target type:     <no type info>
// ============================================================

void .qfindclose(/* see target signature */)
{
    // Tail-call to qfindclose via GOT/IAT indirection
    return qfindclose(/* forwarded args */);
}

