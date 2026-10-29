/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005964C
// Address: 0x000000010005964C

//----- (000000010005964C) ----------------------------------------------------
__int64 *__fastcall sub_10005964C(__int64 **a1, __int64 *a2)
{
  __int64 *v3; // x8
  __int64 *v4; // x20
  __int64 *v5; // x8
  bool v6; // zf
  __int64 *v7; // x8
  void *v8; // x0
  void *v9; // x0

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
  v8 = (void *)a2[10];
  if ( v8 )
  {
    a2[11] = 0;
    qfree(v8);
    a2[10] = 0;
    a2[12] = 0;
  }
  v9 = (void *)a2[6];
  if ( v9 )
  {
    a2[7] = 0;
    qfree(v9);
  }
  operator delete(a2);
  return v4;
}
