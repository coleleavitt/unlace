// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7170
// Name:            sub_7170
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x7170 endbr64
//   0x7174 jmp     sub_70F0
//
// Resolved target: sub_70F0
// Target address:  0x70F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_7170(/* see target signature */)
{
    // Tail-call to sub_70F0 via direct jump indirection
    return sub_70F0(/* forwarded args */);
}

