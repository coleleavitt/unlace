// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112D40
// Name:            .flush_buffers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112D40 jmp     cs:flush_buffers_ptr
//
// Resolved target: flush_buffers
// Target address:  0x8D4358
// GOT/IAT slot:    0x8A0340
// Slot symbol:     flush_buffers_ptr
// Target type:     <no type info>
// ============================================================

void .flush_buffers(/* see target signature */)
{
    // Tail-call to flush_buffers via GOT/IAT indirection
    return flush_buffers(/* forwarded args */);
}

