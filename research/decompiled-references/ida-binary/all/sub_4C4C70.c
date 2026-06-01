void __fastcall DockArea::closeEvent(__int64 a1)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)a1 = &DockArea::closeEvent;
  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    if ( !_InterlockedSub(v1, 1u) )
      free(*(void **)(a1 + 8));
  }
}
