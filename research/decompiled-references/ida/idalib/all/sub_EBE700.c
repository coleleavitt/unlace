unsigned __int64 __fastcall sub_EBE700(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13)
{
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  unsigned __int64 v17; // rbx
  __m128i v19; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h]
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v19.m128i_i64[0] = a5;
  v20 = a4;
  v19 = (__m128i)_mm_loadh_ps((const double *)v19.m128i_i64);
  v15 = sub_EBD890((__int64 *)(a1 + 2352), 8 * a13 + 72, 3u);
  v16 = _mm_load_si128(&v19);
  *(_DWORD *)v15 = a2;
  v17 = v15;
  *(_DWORD *)(v15 + 12) = a3;
  *(_DWORD *)(v15 + 4) = a11;
  *(_DWORD *)(v15 + 8) = 7;
  *(_DWORD *)(v15 + 52) = a7;
  *(_DWORD *)(v15 + 16) = a13;
  *(_DWORD *)(v15 + 56) = a9;
  *(_DWORD *)(v15 + 40) = a6;
  *(_DWORD *)(v15 + 60) = a8;
  *(_QWORD *)(v15 + 44) = 2;
  *(_DWORD *)(v15 + 64) = a10;
  *(__m128i *)(v15 + 24) = v16;
  v21[0] = a12;
  v21[1] = a13;
  sub_EB8020((__int64)v21, (char *)(v15 + 72));
  return v17;
}
