// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62F0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62F0 jmp     cs:off_24160
//
// Resolved target: op_offset
// Target address:  0x25F30
// GOT/IAT slot:    0x24160
// Slot symbol:     off_24160
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

