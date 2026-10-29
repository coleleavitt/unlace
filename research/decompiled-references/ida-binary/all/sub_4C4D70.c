void __fastcall DockArea::orderedDocks(void *a1)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)a1 = &DockArea::orderedDocks;
  v1 = *((volatile signed __int32 **)a1 + 1);
  if ( v1 && !_InterlockedSub(v1, 1u) )
  {
    free(*((void **)a1 + 1));
    operator delete(a1, 0x20u);
  }
  else
  {
    operator delete(a1, 0x20u);
  }
}
