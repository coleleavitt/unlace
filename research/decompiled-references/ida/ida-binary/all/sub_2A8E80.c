__int64 __fastcall sub_2A8E80(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // r13
  void *v9; // rax

  v4 = a2;
  sub_2B4AD0((QT::QCoreApplication *)a1);
  *(_DWORD *)(a1 + 520) = a3;
  *(_QWORD *)a1 = &IDAGraphRenderer___vtable;
  if ( a2 )
  {
    v5 = qalloc_or_throw(24);
    *(_QWORD *)v5 = 0;
    v6 = (_QWORD *)v5;
    *(_OWORD *)(v5 + 8) = 0;
    v7 = a2[1];
    if ( v7 )
    {
      v9 = (void *)qalloc_or_throw(16 * v7);
      *v6 = v9;
      v6[2] = v7;
      v4 = v6;
      memcpy(v9, (const void *)*a2, 16 * v7);
      v6[1] = v7;
    }
    else
    {
      v4 = (_QWORD *)v5;
    }
  }
  *(_QWORD *)(a1 + 528) = v4;
  sub_2B5A20(a1, 2, 2, 2, 2);
  return sub_2B5A00(a1, 18);
}
