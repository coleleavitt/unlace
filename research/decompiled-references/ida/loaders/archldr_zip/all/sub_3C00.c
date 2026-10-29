__int64 __fastcall sub_3C00(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // r12d
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( qlread(a2, (char *)a1 + 58, 1) != 1 )
    return 0;
  if ( qlread(a2, a1 + 7, 2) != 2 )
    return 0;
  v4 = *((unsigned __int16 *)a1 + 28);
  if ( !(_WORD)v4 )
    return 0;
  v5 = a1[1];
  v6 = v4 - 1;
  if ( v5 < v6 )
  {
    v7 = *a1;
    if ( a1[2] < v6 )
    {
      v8 = qvector_reserve(a1, v7, v6, 1);
      v5 = a1[1];
      *a1 = v8;
      v7 = v8;
    }
    memset((void *)(v7 + v5), 0, v6 - v5);
    a1[1] = v6;
  }
  else if ( v6 != v5 )
  {
    a1[1] = v6;
  }
  if ( v6 != qlread(a2, *a1, v6) )
    return 0;
  result = qlread(a2, (char *)a1 + 59, 1);
  if ( result != 1 )
    return 0;
  a1[6] = 0;
  return result;
}

