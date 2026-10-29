// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111D50
// Name:            .qgethostname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111D50 jmp     cs:qgethostname_ptr
//
// Resolved target: qgethostname
// Target address:  0x8D3928
// GOT/IAT slot:    0x89FB48
// Slot symbol:     qgethostname_ptr
// Target type:     <no type info>
// ============================================================

void .qgethostname(/* see target signature */)
{
    // Tail-call to qgethostname via GOT/IAT indirection
    return qgethostname(/* forwarded args */);
}

