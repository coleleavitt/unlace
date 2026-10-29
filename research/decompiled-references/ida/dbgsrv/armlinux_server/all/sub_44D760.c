/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D760
// Address: 0x000000000044D760

//----- (000000000044D760) ----------------------------------------------------
__int64 __fastcall sub_44D760(_QWORD *a1)
{
  __int64 v2; // x22
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  unsigned int v6; // w19
  __int64 v8; // x1
  __int64 v9; // x0
  void *ptr; // [xsp+30h] [xbp-40h] BYREF
  __int64 v11; // [xsp+38h] [xbp-38h]
  __int64 v12; // [xsp+40h] [xbp-30h]
  __int64 v13[4]; // [xsp+48h] [xbp-28h] BYREF

  ptr = nullptr;
  v11 = 0;
  v12 = 0;
  v2 = sub_44A6A8((__int64)a1, (__int64 *)&ptr);
  if ( v2 )
  {
    v4 = a1[3];
    v3 = a1[4];
    memset(&v13[1], 0, 24);
    LOBYTE(v13[0]) = 2;
    sub_4488B8(v13, (__int64 *)(v4 + 32 * v3 - 32));
    v5 = a1[4];
    if ( v5 )
    {
      v8 = v5 - 1;
      v9 = a1[3];
      a1[4] = v8;
      sub_448310((__int64 *)(v9 + 32 * v8));
    }
    sub_448310(v13);
    v6 = (unsigned __int8)sub_44CED8((__int64)a1, v2, (const char **)&ptr, (__int64 *)(a1[3] + 32LL * a1[4] - 32));
  }
  else
  {
    sub_44D6D0(a1);
    v6 = 0;
  }
  if ( ptr )
  {
    v11 = 0;
    j__free(ptr);
  }
  return v6;
}
