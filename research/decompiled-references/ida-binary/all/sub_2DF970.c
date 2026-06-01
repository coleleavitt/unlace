void __fastcall sub_2DF970(__int64 a1, const char *a2)
{
  void *v2; // rbx
  __int64 v3; // rax

  v2 = (void *)(a1 - 104);
  *(_QWORD *)(a1 - 104) = &IDAView___vtable;
  *(_QWORD *)(a1 - 88) = IDAView___vtable_at__16;
  *(_QWORD *)a1 = IDAView___vtable_at__104;
  v3 = *(int *)(a1 + 928);
  *(_QWORD *)(a1 - 64) = IDAView___vtable_at__40;
  if ( (_DWORD)v3 != -1 )
  {
    qword_8CD320[v3] = 0;
    if ( v2 == (void *)qword_8CD7E8 )
      qword_8CD7E8 = 0;
  }
  EAView__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 104), a2);
  operator delete(v2, 0x410u);
}
