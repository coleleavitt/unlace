void __fastcall DockSplitter__::vfunc_3(QT::QWidget *this)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rax

  *(_QWORD *)this = &DockSplitter___vtable;
  *((_QWORD *)this + 2) = DockSplitter___vtable_at__16;
  v1 = *((volatile signed __int32 **)this + 10);
  if ( v1 && !_InterlockedSub(v1, 1u) )
    free(*((void **)this + 10));
  v2 = *((volatile signed __int32 **)this + 7);
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(*((void **)this + 7));
  *(_QWORD *)this = &ComplexDockWidget___vtable;
  *((_QWORD *)this + 2) = &unk_8993C0;
  sub_4CE5B0(this);
}
