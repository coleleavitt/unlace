// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112CF0
// Name:            .qmkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112CF0 jmp     cs:qmkdir_ptr
//
// Resolved target: qmkdir
// Target address:  0x8D4328
// GOT/IAT slot:    0x8A0318
// Slot symbol:     qmkdir_ptr
// Target type:     <no type info>
// ============================================================

void .qmkdir(/* see target signature */)
{
    // Tail-call to qmkdir via GOT/IAT indirection
    return qmkdir(/* forwarded args */);
}

