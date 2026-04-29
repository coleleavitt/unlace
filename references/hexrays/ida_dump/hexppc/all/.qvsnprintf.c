// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B710
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B710 jmp     cs:off_4DAB70
//
// Resolved target: qvsnprintf
// Target address:  0x4DD578
// GOT/IAT slot:    0x4DAB70
// Slot symbol:     off_4DAB70
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

