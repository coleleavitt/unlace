__int64 __fastcall sub_1E43BA0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v10 = *(_QWORD *)(a2 + 40);
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v10 & 7) != 0 )
    v11 = 0;
  v12 = sub_B79540(*(_QWORD *)(*a1 + 248), a1[3], *(_DWORD *)(a2 + 24), v11);
  sub_1E40A90(*a1, (__int64 *)a1[4], a2, v12, a1[5], (_BYTE *)a1[6], a3, a4, a5, a6, v13, v14, a9, a10);
  sub_B94AD0((__m128i *)a1[3], v12, v15, v16, v17, v18);
  return v12;
}
