// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8BF0
// Name:            .copy_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8BF0 jmp     cs:off_2C79DE0
//
// Resolved target: copy_idcv
// Target address:  0x796440
// GOT/IAT slot:    0x2C79DE0
// Slot symbol:     off_2C79DE0
// Target type:     <no type info>
// ============================================================

void .copy_idcv(/* see target signature */)
{
    // Tail-call to copy_idcv via GOT/IAT indirection
    return copy_idcv(/* forwarded args */);
}

