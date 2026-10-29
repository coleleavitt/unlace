/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059588
// Address: 0x0000000100059588

//----- (0000000100059588) ----------------------------------------------------
__int64 *__fastcall sub_100059588(__int64 **a1, __int64 *a2)
{
  __int64 *v3; // x8
  __int64 *v4; // x20
  __int64 *v5; // x8
  bool v6; // zf
  __int64 *v7; // x8
  void *v8; // x0
  __int64 v9; // x21
  __int64 v10; // x22

  v3 = (__int64 *)a2[1];
  if ( v3 )
  {
    do
    {
      v4 = v3;
      v3 = (__int64 *)*v3;
    }
    while ( v3 );
  }
  else
  {
    v5 = a2;
    do
    {
      v4 = (__int64 *)v5[2];
      v6 = *v4 == (_QWORD)v5;
      v5 = v4;
    }
    while ( !v6 );
  }
  if ( *a1 == a2 )
    *a1 = v4;
  v7 = a1[1];
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  sub_10000B570(v7, a2);
  v8 = (void *)a2[5];
  if ( v8 )
  {
    v9 = a2[6];
    if ( v9 )
    {
      v10 = 0;
      do
      {
        sub_100009150((char **)(a2[5] + v10));
        v10 += 48;
        --v9;
      }
      while ( v9 );
      v8 = (void *)a2[5];
    }
    a2[6] = 0;
    qfree(v8);
  }
  operator delete(a2);
  return v4;
}
