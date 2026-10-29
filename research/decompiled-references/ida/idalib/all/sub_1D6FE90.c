__int64 __fastcall sub_1D6FE90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 *a7,
        __int64 *a8)
{
  __m128i v9; // [rsp+8h] [rbp-28h] BYREF
  char v10; // [rsp+20h] [rbp-10h]

  v9.m128i_i64[1] = a4;
  v10 = 0;
  v9.m128i_i64[0] = v9.m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
  return def_1D6C8B3(a1, a2, a3, &v9, *(_QWORD *)(a4 + 8), a5, a6, a7, a8);
}
