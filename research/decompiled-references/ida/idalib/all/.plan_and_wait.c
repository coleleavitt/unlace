// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7AF0
// Name:            .plan_and_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7AF0 jmp     cs:off_2C79560
//
// Resolved target: plan_and_wait
// Target address:  0x3A9480
// GOT/IAT slot:    0x2C79560
// Slot symbol:     off_2C79560
// Target type:     <no type info>
// ============================================================

void .plan_and_wait(/* see target signature */)
{
    // Tail-call to plan_and_wait via GOT/IAT indirection
    return plan_and_wait(/* forwarded args */);
}

