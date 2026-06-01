void __fastcall sub_20E350(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 i; // rsi
  __int64 *v6; // rdx
  __int64 v7; // rax

  for ( i = *a1; *a2 != i; *a1 = i )
  {
    while ( 1 )
    {
      sub_20DD80(a3, i);
      i = *a1 + 32;
      *a1 = i;
      if ( i == a1[2] )
        break;
      a3 += 32;
      if ( *a2 == i )
        return;
    }
    a3 += 32;
    v6 = (__int64 *)(a1[3] + 8);
    a1[3] = (__int64)v6;
    i = *v6;
    v7 = *v6 + 512;
    a1[1] = *v6;
    a1[2] = v7;
  }
}
