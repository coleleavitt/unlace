// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACFC0
// Name:            .qmutex_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACFC0 jmp     cs:off_2C7BFC8
//
// Resolved target: qmutex_create
// Target address:  0x842A60
// GOT/IAT slot:    0x2C7BFC8
// Slot symbol:     off_2C7BFC8
// Target type:     <no type info>
// ============================================================

void .qmutex_create(/* see target signature */)
{
    // Tail-call to qmutex_create via GOT/IAT indirection
    return qmutex_create(/* forwarded args */);
}

