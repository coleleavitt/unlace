__int64 __fastcall sub_50F30(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rsi
  int v13; // ecx
  __int64 result; // rax

  v10 = *(_DWORD *)(a2 + 832);
  if ( v10 )
    result = sub_4F8B0(a1, a2, 1, v10, *(_DWORD *)(a2 + 836) != 0, a3, a4, a5, a6, a7, a8, a9, a10);
  v11 = *(_DWORD *)(a2 + 836);
  if ( v11 )
    result = sub_4F8B0(a1, a2, 2, v11, 0, a3, a4, a5, a6, a7, a8, a9, a10);
  v12 = *(_QWORD *)(a1 + 568);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 832);
    if ( v13 )
      return sub_4F8B0(a1, v12, 1, v13, *(_DWORD *)(v12 + 836) != 0, a3, a4, a5, a6, a7, a8, a9, a10);
  }
  return result;
}

