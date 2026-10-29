unsigned __int64 __fastcall sub_3766E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  const __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rcx
  double v17; // xmm4_8
  double v18; // xmm5_8
  __m128i v20; // [rsp+0h] [rbp-48h] BYREF
  __m128i v21; // [rsp+10h] [rbp-38h]
  __int64 v22; // [rsp+20h] [rbp-28h]
  unsigned __int64 v23; // [rsp+28h] [rbp-20h]

  v12 = *(_QWORD *)(a1 + 16);
  v23 = __readfsqword(0x28u);
  v13 = (const __m128i *)sub_1EA6A0(v12 + 384, a2, a3, a4, a5);
  v20 = _mm_loadu_si128(v13);
  v14 = _mm_loadu_si128(v13 + 1);
  v21 = v14;
  v15 = v13[2].m128i_i64[0];
  v21.m128i_i32[2] = a2;
  v22 = v15;
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 952LL) |= 0x1000000u;
  sub_2004D0(*(_QWORD *)(a1 + 16), v20.m128i_i8, 0, v16, *(double *)v14.m128i_i64, a6, a7, a8, v17, v18, a11, a12);
  return v23 - __readfsqword(0x28u);
}
