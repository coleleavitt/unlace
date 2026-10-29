/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C1F4
// Address: 0x000000000007C1F4

//----- (000000000007C1F4) ----------------------------------------------------
__int64 **__fastcall sub_7C1F4(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // x8
  __int64 *v4; // x20
  __int64 *v5; // x8
  __int64 v6; // x9
  __int64 *v7; // t1
  __int64 *v8; // x8
  void *v9; // x0

  v2 = (__int64 *)a2[1];
  if ( v2 )
  {
    do
    {
      v4 = v2;
      v2 = (__int64 *)*v2;
    }
    while ( v2 );
  }
  else
  {
    v5 = a2 + 2;
    v4 = (__int64 *)a2[2];
    if ( (__int64 *)*v4 != a2 )
    {
      do
      {
        v6 = *v5;
        v7 = *(__int64 **)(*v5 + 16);
        v5 = (__int64 *)(*v5 + 16);
        v4 = v7;
      }
      while ( *v7 != v6 );
    }
  }
  if ( *a1 == a2 )
    *a1 = v4;
  v8 = a1[1];
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  sub_4AD74(v8, a2);
  free_idcv(a2 + 7);
  v9 = (void *)a2[4];
  if ( v9 )
  {
    a2[5] = 0;
    qfree(v9);
    a2[4] = 0;
    a2[6] = 0;
  }
  operator delete(a2);
  return (__int64 **)v4;
}
