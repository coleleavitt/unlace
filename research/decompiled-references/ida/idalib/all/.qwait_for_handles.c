// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABAF0
// Name:            .qwait_for_handles
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABAF0 jmp     cs:off_2C7B560
//
// Resolved target: qwait_for_handles
// Target address:  0x83BF30
// GOT/IAT slot:    0x2C7B560
// Slot symbol:     off_2C7B560
// Target type:     <no type info>
// ============================================================

void .qwait_for_handles(/* see target signature */)
{
    // Tail-call to qwait_for_handles via GOT/IAT indirection
    return qwait_for_handles(/* forwarded args */);
}

