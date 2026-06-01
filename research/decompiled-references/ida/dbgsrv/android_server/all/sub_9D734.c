/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D734
// Address: 0x000000000009D734

//----- (000000000009D734) ----------------------------------------------------
__int64 **__fastcall sub_9D734(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // x8
  __int64 **v4; // x20
  __int64 v5; // x8
  __int64 *v6; // x9
  __int64 **v7; // t1
  __int64 *v8; // x8
  char **v9; // x0
  __int64 v10; // x21
  __int64 v11; // x21
  __int64 v12; // x22

  v2 = (__int64 *)a2[1];
  if ( v2 )
  {
    do
    {
      v4 = (__int64 **)v2;
      v2 = (__int64 *)*v2;
    }
    while ( v2 );
  }
  else
  {
    v5 = (__int64)(a2 + 2);
    v4 = (__int64 **)a2[2];
    if ( *v4 != a2 )
    {
      do
      {
        v6 = *(__int64 **)v5;
        v7 = *(__int64 ***)(*(_QWORD *)v5 + 16LL);
        v5 = *(_QWORD *)v5 + 16LL;
        v4 = v7;
      }
      while ( *v7 != v6 );
    }
  }
  if ( *a1 == a2 )
    *a1 = (__int64 *)v4;
  v8 = a1[1];
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  sub_4AD74(v8, a2);
  v9 = (char **)a2[5];
  if ( v9 )
  {
    v10 = a2[6];
    if ( v10 )
    {
      sub_931CC(v9);
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = 48;
        do
        {
          sub_931CC((char **)(a2[5] + v12));
          --v11;
          v12 += 48;
        }
        while ( v11 );
      }
      v9 = (char **)a2[5];
    }
    a2[6] = 0;
    qfree(v9);
    a2[5] = 0;
    a2[7] = 0;
  }
  operator delete(a2);
  return v4;
}
