// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19560
// Name:            .revert_ida_decisions
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19560 jmp     cs:off_75298
//
// Resolved target: revert_ida_decisions
// Target address:  0x75AE8
// GOT/IAT slot:    0x75298
// Slot symbol:     off_75298
// Target type:     <no type info>
// ============================================================

void .revert_ida_decisions(/* see target signature */)
{
    // Tail-call to revert_ida_decisions via GOT/IAT indirection
    return revert_ida_decisions(/* forwarded args */);
}

