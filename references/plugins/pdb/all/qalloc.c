// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xB3A30
// Name:     qalloc
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to qalloc are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void qalloc(/* see import library declaration */);

