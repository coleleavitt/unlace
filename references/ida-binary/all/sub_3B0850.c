__int64 __fastcall sub_3B0850(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax

  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 != 25 && v9 != 58 )
    return 0;
  v11 = *(_QWORD *)(a1 + 208);
  v12 = *(_QWORD *)(v11 + 32);
  if ( v12 == -1 )
  {
    v13 = *(_QWORD *)(v11 + 16);
    if ( v13 != -1 )
    {
      if ( *(_BYTE *)(v11 + 31) != 13 )
      {
        if ( v13 != -2 )
          return 0;
        return sub_3AB3F0(a2, a3, a4, a5, a6, a7, a8, a9, a1, v11 + 8, -1);
      }
      if ( v13 == -2 )
        return sub_3AB3F0(a2, a3, a4, a5, a6, a7, a8, a9, a1, v11 + 8, -1);
    }
  }
  return sub_3B01E0(a1, v11 + 8, v12, a2, a3, a4, a5, a6, a7, a8, a9);
}
