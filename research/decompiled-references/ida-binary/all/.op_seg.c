// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116160
// Name:            .op_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116160 jmp     cs:op_seg_ptr
//
// Resolved target: op_seg
// Target address:  0x8D64B8
// GOT/IAT slot:    0x8A1D50
// Slot symbol:     op_seg_ptr
// Target type:     <no type info>
// ============================================================

void .op_seg(/* see target signature */)
{
    // Tail-call to op_seg via GOT/IAT indirection
    return op_seg(/* forwarded args */);
}

