// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A85F0
// Name:            .qwait_timed
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A85F0 jmp     cs:off_2C79AE0
//
// Resolved target: qwait_timed
// Target address:  0x843410
// GOT/IAT slot:    0x2C79AE0
// Slot symbol:     off_2C79AE0
// Target type:     <no type info>
// ============================================================

void .qwait_timed(/* see target signature */)
{
    // Tail-call to qwait_timed via GOT/IAT indirection
    return qwait_timed(/* forwarded args */);
}

