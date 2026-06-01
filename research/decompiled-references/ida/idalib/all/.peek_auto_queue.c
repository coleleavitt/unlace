// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8340
// Name:            .peek_auto_queue
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8340 jmp     cs:off_2C79988
//
// Resolved target: peek_auto_queue
// Target address:  0x3A1E60
// GOT/IAT slot:    0x2C79988
// Slot symbol:     off_2C79988
// Target type:     <no type info>
// ============================================================

void .peek_auto_queue(/* see target signature */)
{
    // Tail-call to peek_auto_queue via GOT/IAT indirection
    return peek_auto_queue(/* forwarded args */);
}

