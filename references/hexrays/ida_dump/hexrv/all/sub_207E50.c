bool __fastcall sub_207E50(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // rsi

  v1 = a1[1];
  if ( v1 > 1 )
  {
    while ( 1 )
    {
      v5 = *a1;
      if ( *(_BYTE *)(*a1 + v1 - 2) != 95 )
        return v1 > 1;
      v2 = v1 - 1;
      if ( (__int64)(v1 - 1) > 1 )
        break;
      if ( v5 )
      {
        a1[1] = 0;
        qfree(v5);
        v1 = a1[1];
        *a1 = 0;
        a1[2] = 0;
        if ( v1 <= 1 )
          return v1 > 1;
      }
      else
      {
LABEL_6:
        if ( v1 <= 1 )
          return v1 > 1;
      }
    }
    if ( a1[2] < v2 )
    {
      v4 = qvector_reserve(a1, v5, v1 - 1, 1);
      *a1 = v4;
      v5 = v4;
    }
    a1[1] = v2;
    *(_BYTE *)(v5 + v1 - 2) = 0;
    v1 = a1[1];
    goto LABEL_6;
  }
  return v1 > 1;
}
