/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D06C
// Address: 0x000000010001D06C

//----- (000000010001D06C) ----------------------------------------------------
__int64 __fastcall sub_10001D06C(__int64 a1)
{
  void *v2; // x20
  __int64 v3; // x22
  __int64 v4; // x21
  void *v5; // x0
  void *v6; // x0
  void *v8; // [xsp+0h] [xbp-40h] BYREF
  __int64 v9; // [xsp+8h] [xbp-38h]
  __int64 v10; // [xsp+10h] [xbp-30h]

  *(_QWORD *)sub_1000017A4(a1, 13) = &off_10009D898;
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  v8 = qvector_reserve(&v8, nullptr, 4u, 1u);
  bzero((char *)v8 + v9, 4 - v9);
  v9 = 4;
  *(_DWORD *)v8 = -736100352;
  v2 = v8;
  v3 = v9;
  v4 = v10;
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  v5 = *(void **)(a1 + 408);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    qfree(v5);
    v6 = v8;
    *(_QWORD *)(a1 + 408) = v2;
    *(_QWORD *)(a1 + 416) = v3;
    *(_QWORD *)(a1 + 424) = v4;
    if ( v6 )
    {
      v9 = 0;
      qfree(v6);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 408) = v2;
    *(_QWORD *)(a1 + 416) = v3;
    *(_QWORD *)(a1 + 424) = v4;
  }
  *(_BYTE *)(a1 + 1929) = 1;
  return a1;
}
// 10009D898: using guessed type __int64 (__fastcall *off_10009D898)(__int64, __int64);
