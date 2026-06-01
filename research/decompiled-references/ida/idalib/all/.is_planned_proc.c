// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F90
// Name:            .is_planned_proc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F90 jmp     cs:off_2C7A7B0
//
// Resolved target: is_planned_proc
// Target address:  0x3A2100
// GOT/IAT slot:    0x2C7A7B0
// Slot symbol:     off_2C7A7B0
// Target type:     <no type info>
// ============================================================

void .is_planned_proc(/* see target signature */)
{
    // Tail-call to is_planned_proc via GOT/IAT indirection
    return is_planned_proc(/* forwarded args */);
}

