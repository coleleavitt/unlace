// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111480
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111480 jmp     cs:qunlink_ptr
//
// Resolved target: qunlink
// Target address:  0x8D3368
// GOT/IAT slot:    0x89F6E0
// Slot symbol:     qunlink_ptr
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

