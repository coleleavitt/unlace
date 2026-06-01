__int64 __fastcall text_addenc_ah_t__::vfunc_4(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int v15; // eax
  unsigned int v16; // edx

  v15 = sub_1C7560(0, a1, a2, a3, a4, a5, a6, a7, a8, a10, (__int64)a11, a12, a13, a14);
  v16 = 0;
  if ( v15 > 0 )
  {
    *(_DWORD *)(a11[91] + 48LL) = v15;
    (*(void (__fastcall **)(_QWORD *))(*a11 + 664LL))(a11);
    return 1;
  }
  return v16;
}
