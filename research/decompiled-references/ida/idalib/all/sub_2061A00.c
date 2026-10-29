__int64 __fastcall sub_2061A00(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v6; // rsi
  __int64 *v7; // rbp
  __int64 *v8; // rbx

  v2 = *(__int64 **)a1;
  result = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1 + 8 * result;
  if ( *(_QWORD *)a1 != v4 )
  {
    do
    {
      v6 = *v2;
      *a2 = *v2;
      if ( v6 )
      {
        sub_20B3430(v2, v6, a2);
        *v2 = 0;
      }
      ++v2;
      ++a2;
    }
    while ( (__int64 *)v4 != v2 );
    v7 = *(__int64 **)a1;
    result = *(unsigned int *)(a1 + 8);
    v8 = (__int64 *)(*(_QWORD *)a1 + 8 * result);
    if ( *(__int64 **)a1 != v8 )
    {
      do
      {
        while ( *--v8 )
        {
          result = sub_20A0850(v8);
          if ( v8 == v7 )
            return result;
        }
      }
      while ( v8 != v7 );
    }
  }
  return result;
}
