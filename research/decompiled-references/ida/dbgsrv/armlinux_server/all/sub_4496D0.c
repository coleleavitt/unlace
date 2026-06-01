/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4496D0
// Address: 0x00000000004496D0

//----- (00000000004496D0) ----------------------------------------------------
__int64 __fastcall sub_4496D0(__int64 *a1, __int64 *a2)
{
  int v3; // w0
  unsigned int v4; // w1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11[4]; // [xsp+28h] [xbp-28h] BYREF

  v3 = sub_449520(a2, (__int64 *)(*a1 + 32 * a1[1] - 32));
  v4 = 0;
  if ( !v3 )
  {
    memset(&v11[1], 0, 24);
    v7 = *a1;
    v6 = a1[1];
    LOBYTE(v11[0]) = 2;
    sub_4488B8(v11, (__int64 *)(v7 + 32 * v6 - 32));
    v8 = a1[1];
    if ( v8 )
    {
      v9 = v8 - 1;
      v10 = *a1;
      a1[1] = v9;
      sub_448310((__int64 *)(v10 + 32 * v9));
    }
    sub_448310(v11);
    return 1;
  }
  return v4;
}
