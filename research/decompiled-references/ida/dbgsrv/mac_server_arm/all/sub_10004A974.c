/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A974
// Address: 0x000000010004A974

//----- (000000010004A974) ----------------------------------------------------
bool __fastcall sub_10004A974(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  unsigned __int64 v17; // x8
  size_t v18; // x21
  const void *v19; // x22
  int v20; // w19
  void *v21; // [xsp+0h] [xbp-50h] BYREF
  size_t v22; // [xsp+8h] [xbp-48h]
  __int64 v23; // [xsp+10h] [xbp-40h]

  if ( (sub_10004A7A4(a1, a2, a3, a4, a5, a6, a7, a8) & 1) != 0 )
    return 1;
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  if ( a4 && &v21 != (void **)a4 )
  {
    v17 = *(_QWORD *)(a4 + 8);
    v18 = v17 ? v17 - 1 : 0LL;
    if ( v17 >= 2 )
    {
      v19 = *(const void **)a4;
      v21 = qvector_reserve(&v21, nullptr, v18 + 1, 1u);
      v22 = v18 + 1;
      memmove(v21, v19, v18);
      *((_BYTE *)v21 + v18) = 0;
    }
  }
  v20 = sub_10004AAA0(a2, a3, (unsigned __int8 **)&v21, v11, v12, v13, v14, v15);
  if ( v21 )
  {
    v22 = 0;
    qfree(v21);
  }
  return v20 >= 0;
}
// 10004AA28: variable 'v11' is possibly undefined
// 10004AA28: variable 'v12' is possibly undefined
// 10004AA28: variable 'v13' is possibly undefined
// 10004AA28: variable 'v14' is possibly undefined
// 10004AA28: variable 'v15' is possibly undefined
