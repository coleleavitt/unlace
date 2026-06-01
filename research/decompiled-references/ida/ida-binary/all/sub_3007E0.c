double __fastcall sub_3007E0(__int64 *a1, const char *a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  double result; // xmm0_8
  __int64 v9; // rdi

  if ( *((_BYTE *)a1 + 132) )
    sub_533CA0();
  v3 = a1[11];
  while ( v3 )
  {
    sub_2FFDC0(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    a2 = (const char *)&dword_30;
    operator delete(v4, 0x30u);
  }
  v5 = a1[5];
  while ( v5 )
  {
    v6 = (_QWORD *)v5;
    sub_3002A0(*(_QWORD **)(v5 + 24), a2);
    v7 = *(_QWORD *)(v5 + 32);
    v5 = *(_QWORD *)(v5 + 16);
    if ( v7 )
    {
      v6[5] = 0;
      result = qfree(v7, a2);
    }
    a2 = (_BYTE *)dword_40;
    operator delete(v6, 0x40u);
  }
  v9 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v9, a2);
  }
  return result;
}
