// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6080
// Name:            .check_spoiled_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6080 jmp     cs:off_24028
//
// Resolved target: check_spoiled_jpt
// Target address:  0x25DF8
// GOT/IAT slot:    0x24028
// Slot symbol:     off_24028
// Target type:     <no type info>
// ============================================================

void .check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to check_spoiled_jpt via GOT/IAT indirection
    return check_spoiled_jpt(/* forwarded args */);
}

