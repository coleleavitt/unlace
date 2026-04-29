// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7080
// Name:            .check_spoiled_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7080 jmp     cs:off_19028
//
// Resolved target: check_spoiled_jpt
// Target address:  0x19558
// GOT/IAT slot:    0x19028
// Slot symbol:     off_19028
// Target type:     <no type info>
// ============================================================

void .check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to check_spoiled_jpt via GOT/IAT indirection
    return check_spoiled_jpt(/* forwarded args */);
}

