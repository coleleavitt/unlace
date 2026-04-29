// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3A0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3A0 jmp     cs:off_351B8
//
// Resolved target: op_offset
// Target address:  0x35808
// GOT/IAT slot:    0x351B8
// Slot symbol:     off_351B8
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

