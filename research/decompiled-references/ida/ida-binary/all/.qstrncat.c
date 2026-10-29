// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E90
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E90 jmp     cs:qstrncat_ptr
//
// Resolved target: qstrncat
// Target address:  0x8D58F8
// GOT/IAT slot:    0x8A13E8
// Slot symbol:     qstrncat_ptr
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

