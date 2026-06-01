void __fastcall sub_54A520(__int64 a1)
{
  QT::QWidget *v1; // rbp
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rax

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = &DockSplitter___vtable;
  *(_QWORD *)a1 = DockSplitter___vtable_at__16;
  v2 = *(volatile signed __int32 **)(a1 + 64);
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(*(void **)(a1 + 64));
  v3 = *(volatile signed __int32 **)(a1 + 40);
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(*(void **)(a1 + 40));
  *(_QWORD *)(a1 - 16) = &ComplexDockWidget___vtable;
  *(_QWORD *)a1 = &unk_8993C0;
  sub_4CE5B0(v1);
  operator delete(v1, 0x70u);
}
