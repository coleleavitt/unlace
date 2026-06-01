__int64 *__fastcall sub_9F610(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx

  *a1 = a10;
  a1[1] = a11;
  a1[2] = a12;
  a1[3] = a13;
  while ( a6 != a2 )
  {
    while ( 1 )
    {
      sub_9F100(*a1, a2);
      a2 += 32;
      if ( a2 == a4 )
      {
        a2 = *(_QWORD *)(a5 + 8);
        a5 += 8;
        a4 = a2 + 512;
      }
      v17 = *a1 + 32;
      *a1 = v17;
      if ( v17 != a1[2] )
        break;
      v18 = (__int64 *)(a1[3] + 8);
      a1[3] = (__int64)v18;
      v19 = *v18;
      v20 = *v18 + 512;
      a1[1] = v19;
      a1[2] = v20;
      *a1 = v19;
      if ( a6 == a2 )
        return a1;
    }
  }
  return a1;
}

