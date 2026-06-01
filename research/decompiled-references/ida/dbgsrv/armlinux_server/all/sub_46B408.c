/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B408
// Address: 0x000000000046B408

//----- (000000000046B408) ----------------------------------------------------
bool __fastcall sub_46B408(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BOOL4 v7; // w20
  unsigned __int64 v8; // x24
  __int64 *v9; // x0
  unsigned __int64 v11; // x2
  const void *v12; // x21
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  unsigned __int64 v14; // [xsp+48h] [xbp-18h]
  __int64 v15; // [xsp+50h] [xbp-10h]

  v7 = sub_46B2D0(a1, a2, a3);
  if ( !v7 )
  {
    ptr = nullptr;
    v14 = 0;
    v15 = 0;
    if ( !a4
      || (v8 = *(_QWORD *)(a4 + 8), v8 <= 1)
      || (v11 = *(_QWORD *)(a4 + 8),
          v12 = *(const void **)a4,
          ptr = sub_491288((__int64)&ptr, nullptr, v11, 1u),
          v14 = v8,
          memmove(ptr, v12, v8 - 1),
          *((_BYTE *)ptr + v8 - 1) = 0,
          v14 <= 1) )
    {
      v9 = sub_461A30();
      sub_466FE8((__int64)&ptr, (char *)v9);
    }
    v7 = (int)sub_46AE30(a2, a3, (__int64)&ptr) >= 0;
    if ( ptr )
    {
      v14 = 0;
      j__free(ptr);
    }
  }
  return v7;
}
