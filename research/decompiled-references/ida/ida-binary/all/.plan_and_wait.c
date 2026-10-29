// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120A0
// Name:            .plan_and_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120A0 jmp     cs:plan_and_wait_ptr
//
// Resolved target: plan_and_wait
// Target address:  0x8D3B28
// GOT/IAT slot:    0x89FCF0
// Slot symbol:     plan_and_wait_ptr
// Target type:     <no type info>
// ============================================================

void .plan_and_wait(/* see target signature */)
{
    // Tail-call to plan_and_wait via GOT/IAT indirection
    return plan_and_wait(/* forwarded args */);
}

