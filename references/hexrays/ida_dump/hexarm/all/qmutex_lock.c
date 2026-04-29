// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4EC420
// Name:     qmutex_lock
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to qmutex_lock are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void qmutex_lock(/* see import library declaration */);

