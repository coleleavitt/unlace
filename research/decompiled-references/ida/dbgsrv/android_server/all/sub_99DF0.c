/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99DF0
// Address: 0x0000000000099DF0

//----- (0000000000099DF0) ----------------------------------------------------
__int64 __fastcall sub_99DF0(__int64 *a1)
{
  void **v2; // x20
  __int64 v3; // x21
  void *v4; // t1
  void *v5; // x0
  void *v6; // x0
  _QWORD *v7; // x1
  __int64 v8; // x8

  a1[61] = 0;
  sub_3967C(a1 + 47, 0);
  sub_39B38(a1 + 6, 0);
  if ( a1[10] )
  {
    v2 = (void **)a1[12];
    v3 = 8 * a1[13];
    if ( v3 )
    {
      do
      {
        v4 = *v2++;
        qfree(v4);
        v3 -= 8;
      }
      while ( v3 );
      v2 = (void **)a1[12];
    }
    if ( v2 )
    {
      a1[13] = 0;
      qfree(v2);
      a1[12] = 0;
      a1[14] = 0;
    }
    v5 = (void *)a1[9];
    if ( v5 )
    {
      a1[10] = 0;
      qfree(v5);
      a1[9] = 0;
      a1[11] = 0;
    }
  }
  v6 = (void *)a1[44];
  if ( v6 )
  {
    a1[45] = 0;
    qfree(v6);
    a1[44] = 0;
    a1[46] = 0;
  }
  sub_3971C((__int64)(a1 + 41), (_QWORD *)a1[42]);
  v7 = (_QWORD *)a1[64];
  a1[42] = 0;
  a1[43] = 0;
  a1[41] = (__int64)(a1 + 42);
  sub_39604((__int64)(a1 + 63), v7);
  v8 = *a1;
  a1[65] = 0;
  a1[63] = (__int64)(a1 + 64);
  a1[64] = 0;
  *((_DWORD *)a1 + 132) = 0;
  *((_BYTE *)a1 + 733) = 0;
  return (*(__int64 (__fastcall **)(__int64 *))(v8 + 600))(a1);
}
