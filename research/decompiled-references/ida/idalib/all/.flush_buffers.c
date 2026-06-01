// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A82E0
// Name:            .flush_buffers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A82E0 jmp     cs:off_2C79958
//
// Resolved target: flush_buffers
// Target address:  0x595DC0
// GOT/IAT slot:    0x2C79958
// Slot symbol:     off_2C79958
// Target type:     <no type info>
// ============================================================

void .flush_buffers(/* see target signature */)
{
    // Tail-call to flush_buffers via GOT/IAT indirection
    return flush_buffers(/* forwarded args */);
}

