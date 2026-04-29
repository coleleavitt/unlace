// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98D0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98D0 jmp     cs:off_2E450
//
// Resolved target: get_ash
// Target address:  0x2EAD8
// GOT/IAT slot:    0x2E450
// Slot symbol:     off_2E450
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

