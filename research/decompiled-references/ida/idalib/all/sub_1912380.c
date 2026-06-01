void __fastcall sub_1912380(
        __int64 a1,
        double a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  __int128 v11; // [rsp+10h] [rbp-38h] BYREF
  char v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v8 = *(__int64 **)a1;
  v10 = *(_QWORD *)(a1 + 8);
  v9 = *v8;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  sub_1911C50((__int64)&v11, v9, (__int64)v8, a6, a7, a8, _mm_loadh_ps((const double *)&v10), a3);
}
