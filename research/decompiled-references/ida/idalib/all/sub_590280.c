__int64 __fastcall sub_590280(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 **v5; // rbp
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rax

  if ( *a1 != *a2 )
  {
    v5 = (__int64 **)a1[530];
    if ( !(8LL * a1[531]) )
      return 0;
    while ( 1 )
    {
      v6 = *v5;
      if ( a3 )
      {
        v7 = a3[1];
        v8 = *v6;
        v9 = *a3;
        if ( a3[2] < (unsigned __int64)(v7 + 1) )
        {
          v12 = qvector_reserve(a3, v9, v7 + 1, 8);
          *a3 = v12;
          v9 = v12;
          v7 = a3[1];
        }
        *(_QWORD *)(v9 + 8 * v7) = v8;
        ++a3[1];
        if ( (unsigned __int8)sub_590280(v6, a2, a3) )
          return 1;
        v10 = a3[1];
        if ( v10 )
          a3[1] = v10 - 1;
      }
      else if ( (unsigned __int8)sub_590280(*v5, a2, 0) )
      {
        return 1;
      }
      if ( ++v5 == (__int64 **)(a1[530] + 8LL * a1[531]) )
        return 0;
    }
  }
  return 1;
}
