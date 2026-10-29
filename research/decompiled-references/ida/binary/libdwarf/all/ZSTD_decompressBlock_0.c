unsigned __int64 __fastcall ZSTD_decompressBlock_0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 29888);
  *(_DWORD *)(a1 + 30176) = 0;
  if ( a3 && a2 != v5 )
  {
    *(_QWORD *)(a1 + 29912) = v5;
    v6 = v5 - *(_QWORD *)(a1 + 29896);
    *(_QWORD *)(a1 + 29896) = a2;
    *(_QWORD *)(a1 + 29904) = a2 - v6;
    *(_QWORD *)(a1 + 29888) = a2;
  }
  result = -72;
  if ( a5 <= (unsigned __int64)&loc_20000 )
  {
    result = sub_6CC80(a1, a2, a3, a4, a5, 0);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
      *(_QWORD *)(a1 + 29888) = a2 + result;
  }
  return result;
}

