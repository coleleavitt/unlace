// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC450
// Name:            .plan_to_apply_idasgn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC450 jmp     cs:off_2C7BA10
//
// Resolved target: plan_to_apply_idasgn
// Target address:  0x68A330
// GOT/IAT slot:    0x2C7BA10
// Slot symbol:     off_2C7BA10
// Target type:     <no type info>
// ============================================================

void .plan_to_apply_idasgn(/* see target signature */)
{
    // Tail-call to plan_to_apply_idasgn via GOT/IAT indirection
    return plan_to_apply_idasgn(/* forwarded args */);
}

