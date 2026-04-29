// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEB0
// Name:            .qflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEB0 jmp     cs:off_4DAF40
//
// Resolved target: qflush
// Target address:  0x4DD970
// GOT/IAT slot:    0x4DAF40
// Slot symbol:     off_4DAF40
// Target type:     <no type info>
// ============================================================

void .qflush(/* see target signature */)
{
    // Tail-call to qflush via GOT/IAT indirection
    return qflush(/* forwarded args */);
}

