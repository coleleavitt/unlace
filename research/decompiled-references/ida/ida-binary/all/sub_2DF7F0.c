void __fastcall sub_2DF7F0(__int64 a1, const char *a2)
{
  __int64 v2; // rax

  *(_QWORD *)(a1 - 104) = &IDAView___vtable;
  *(_QWORD *)(a1 - 88) = IDAView___vtable_at__16;
  *(_QWORD *)a1 = IDAView___vtable_at__104;
  v2 = *(int *)(a1 + 928);
  *(_QWORD *)(a1 - 64) = IDAView___vtable_at__40;
  if ( (_DWORD)v2 != -1 && (qword_8CD320[v2] = 0, a1 - 104 == qword_8CD7E8) )
  {
    qword_8CD7E8 = 0;
    EAView__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 104), a2);
  }
  else
  {
    EAView__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 104), a2);
  }
}
