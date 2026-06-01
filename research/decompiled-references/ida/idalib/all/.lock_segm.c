// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A70
// Name:            .lock_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A70 jmp     cs:off_2C79520
//
// Resolved target: lock_segm
// Target address:  0x50E360
// GOT/IAT slot:    0x2C79520
// Slot symbol:     off_2C79520
// Target type:     <no type info>
// ============================================================

void .lock_segm(/* see target signature */)
{
    // Tail-call to lock_segm via GOT/IAT indirection
    return lock_segm(/* forwarded args */);
}

