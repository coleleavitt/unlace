void __fastcall sub_22C80D0(_QWORD *a1)
{
  __int64 v1; // rax
  char *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 i; // rbx
  char *v6; // rsi

  v1 = a1[22];
  if ( v1 != a1[23] )
    a1[23] = v1;
  v2 = (char *)a1[15];
  if ( v2 != (char *)a1[16] )
    a1[16] = v2;
  v3 = a1[18];
  v4 = a1[19];
  if ( v3 != v4 )
  {
    for ( i = v3 + 24; ; i += 24 )
    {
      if ( (char *)a1[17] == v2 )
      {
        sub_1250420((__int64)(a1 + 15), v2, (__int64 *)(i - 16));
        if ( v4 == i )
          return;
      }
      else
      {
        v6 = v2 + 8;
        *((_QWORD *)v6 - 1) = *(_QWORD *)(i - 16);
        a1[16] = v6;
        if ( v4 == i )
          return;
      }
      v2 = (char *)a1[16];
    }
  }
}
