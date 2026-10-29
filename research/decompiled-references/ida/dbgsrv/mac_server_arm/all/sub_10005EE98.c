/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005EE98
// Address: 0x000000010005EE98

//----- (000000010005EE98) ----------------------------------------------------
__int64 __fastcall sub_10005EE98(__int64 a1, _QWORD **a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // x20
  unsigned int v7; // w0
  size_t v8; // x21
  void *v9; // x22
  char *v11; // x1
  unsigned int v13; // w20
  size_t v14; // [xsp+8h] [xbp-58h] BYREF
  void *v15; // [xsp+10h] [xbp-50h] BYREF
  char *v16; // [xsp+18h] [xbp-48h] BYREF
  unsigned __int64 v17; // [xsp+20h] [xbp-40h]

  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  v16 = (char *)a3;
  v17 = a4;
  v6 = unpack_dd((unsigned __int64 *)&v16, a4);
  v7 = unpack_dd((unsigned __int64 *)&v16, v17);
  v8 = v7;
  if ( v7 )
  {
    v9 = qalloc((void *)v7);
    if ( !v9 )
      return 2;
  }
  else
  {
    v9 = nullptr;
  }
  v11 = v16;
  if ( &v16[v8] < v16 || (unsigned __int64)&v16[v8] > v17 )
    return 1;
  v16 += v8;
  memcpy(v9, v11, v8);
  if ( !v9 )
    return 1;
  v14 = 0;
  v15 = nullptr;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, void *, size_t, void **, size_t *))(a1 + 40))(
          a1,
          v6,
          v9,
          v8,
          &v15,
          &v14);
  qfree(v9);
  sub_10002CF84(a2, v13);
  sub_100050A38(a2, v15, v14);
  qfree(v15);
  return 0;
}
