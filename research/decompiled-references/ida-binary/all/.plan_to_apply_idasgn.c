// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119690
// Name:            .plan_to_apply_idasgn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119690 jmp     cs:plan_to_apply_idasgn_ptr
//
// Resolved target: plan_to_apply_idasgn
// Target address:  0x8D8648
// GOT/IAT slot:    0x8A37E8
// Slot symbol:     plan_to_apply_idasgn_ptr
// Target type:     <no type info>
// ============================================================

void .plan_to_apply_idasgn(/* see target signature */)
{
    // Tail-call to plan_to_apply_idasgn via GOT/IAT indirection
    return plan_to_apply_idasgn(/* forwarded args */);
}

