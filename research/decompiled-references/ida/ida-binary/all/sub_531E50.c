double __fastcall sub_531E50(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  double result; // xmm0_8
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 i; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi

  v3 = *a1;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  v4 = a1[12];
  if ( v4 )
  {
    a1[13] = 0;
    result = qfree(v4, a2);
  }
  v6 = a1[8];
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_5304B0(*(_QWORD **)(v6 + 24), a2);
    v8 = *(_QWORD *)(v6 + 40);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[6] = 0;
      result = qfree(v8, a2);
    }
    a2 = (_BYTE *)dword_40;
    operator delete(v7, 0x40u);
  }
  v9 = a1[3];
  if ( v9 )
  {
    v10 = a1[4];
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v12 = (__int64 *)(v9 + 24 * i);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13, a2);
          v9 = a1[3];
        }
      }
    }
    a1[4] = 0;
    return qfree(v9, a2);
  }
  return result;
}
