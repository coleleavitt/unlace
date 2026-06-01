__int64 __fastcall sub_510290(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(unsigned __int64 *, __int64),
        __int64 a4)
{
  _QWORD *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 *v10; // rax
  __int64 result; // rax
  unsigned __int64 j; // rsi
  unsigned __int64 *v13; // rax
  unsigned __int64 *v14; // rbx
  __int64 v15; // r13
  unsigned __int64 *i; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // r10
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]

  if ( a2 == -1 )
    return -1;
  v6 = *(_QWORD **)(*(_QWORD *)a1 + 1760LL);
  v7 = v6[16];
  if ( !v7 )
  {
    v15 = a1 + 1624;
    for ( i = sub_506150(a1 + 1624); i; i = sub_505EB0(v15, *i) )
    {
      v17 = v6[16];
      v18 = i[6];
      v19 = v6[15];
      if ( v6[17] < (unsigned __int64)(v17 + 1) )
      {
        v22 = i[6];
        v20 = qvector_reserve(v6 + 15, v19, v17 + 1, 8);
        v18 = v22;
        v6[15] = v20;
        v19 = v20;
        v17 = v6[16];
      }
      *(_QWORD *)(v19 + 8 * v17) = v18;
      ++v6[16];
    }
    v7 = v6[16];
    if ( !v7 )
    {
      for ( j = -1; ; j = *v14 )
      {
        v13 = sub_5060F0(v15, j);
        v14 = v13;
        if ( !v13 )
          break;
        if ( v13[6] == a2 )
        {
          result = a3(v13, a4);
          if ( result != -1 )
            return result;
        }
      }
      return -1;
    }
  }
  v8 = v7 - 1;
  if ( v8 < 0 )
    return -1;
  while ( 1 )
  {
    if ( *(_QWORD *)(v6[15] + 8 * v8) == a2 )
    {
      v10 = sub_505DE0(a1 + 1624, v8);
      result = a3(v10, a4);
      if ( result != -1 )
        break;
    }
    if ( v8-- == 0 )
      return -1;
  }
  return result;
}
