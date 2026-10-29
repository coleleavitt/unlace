void __fastcall sub_819100(__int64 *a1)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rsi

  if ( a1 )
  {
    v1 = a1[1];
    if ( v1 > 1 )
    {
      v2 = *a1;
      if ( *(_BYTE *)(*a1 + v1 - 2) != 10 )
      {
        if ( a1[2] < v1 + 1 )
        {
          v2 = qvector_reserve(a1, v2, v1 + 1, 1);
          *a1 = v2;
        }
        a1[1] = v1 + 1;
        *(_BYTE *)(v2 + v1 - 1) = 10;
        *(_BYTE *)(*a1 + v1) = 0;
      }
    }
    sub_357460(a1);
  }
}

