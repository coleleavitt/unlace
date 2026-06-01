unsigned __int64 __fastcall sub_1E4BED0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbx

  v10 = sub_1E4BB20((__int64 *)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v15 = v10;
  if ( v10 )
    sub_B94AD0(*(__m128i **)(a1 + 24), v10, v11, v12, v13, v14);
  return v15;
}
