/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97DB0
// Address: 0x0000000000097DB0

//----- (0000000000097DB0) ----------------------------------------------------
__int64 **__fastcall sub_97DB0(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // x8
  __int64 **v4; // x20
  __int64 v5; // x8
  __int64 *v6; // x9
  __int64 **v7; // t1
  __int64 *v8; // x8
  void *v9; // x0
  void *v10; // x0

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
  v9 = (void *)a2[7];
  if ( v9 )
  {
    a2[8] = 0;
    qfree(v9);
    a2[7] = 0;
    a2[9] = 0;
  }
  v10 = (void *)a2[4];
  if ( v10 )
  {
    a2[5] = 0;
    qfree(v10);
    a2[4] = 0;
    a2[6] = 0;
  }
  operator delete(a2);
  return v4;
}
