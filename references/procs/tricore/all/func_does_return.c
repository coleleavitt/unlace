// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x25FB8
// Name:     func_does_return
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to func_does_return are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void func_does_return(/* see import library declaration */);

