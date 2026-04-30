void __fastcall sub_54A2A0(__int64 a1)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rax

  *(_QWORD *)(a1 - 16) = &DockSplitter___vtable;
  *(_QWORD *)a1 = DockSplitter___vtable_at__16;
  v1 = *(volatile signed __int32 **)(a1 + 64);
  if ( v1 && !_InterlockedSub(v1, 1u) )
    free(*(void **)(a1 + 64));
  v2 = *(volatile signed __int32 **)(a1 + 40);
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(*(void **)(a1 + 40));
  *(_QWORD *)(a1 - 16) = &ComplexDockWidget___vtable;
  *(_QWORD *)a1 = &unk_8993C0;
  sub_4CE5B0((QT::QWidget *)(a1 - 16));
}
