unsigned __int64 __fastcall sub_6254D0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int8 a5,
        double a6,
        __m128i a7,
        double a8)
{
  unsigned int *v10; // rbp
  unsigned int *v12; // rax
  unsigned int *v13; // r12
  unsigned int v15; // eax
  double v16; // [rsp+8h] [rbp-60h]
  _QWORD v17[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v10 = (unsigned int *)(a1 + 2672);
  v18 = __readfsqword(0x28u);
  v12 = sub_4EE820(a1 + 2672, a2);
  if ( v12 )
  {
    v13 = v12;
    if ( *v12 != (_DWORD)a2 )
    {
      a7 = _mm_cvtsi32_si128(v12[1]);
      *(_QWORD *)&v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), a7).m128i_u64[0];
      v15 = sub_4EC9F0((__int64)v10, (unsigned int)a2);
      sub_4EEC40((__int64)v10, v15, a2, v16, *(double *)a7.m128i_i64, a8);
      a6 = v16;
      v17[1] = *((_QWORD *)v13 + 1) + (int)(a2 - *v13);
      *(double *)v17 = v16;
      sub_4EE3F0((__int64)v10, (unsigned int *)v17, v16, *(double *)a7.m128i_i64);
      sub_4ED600(v10);
    }
  }
  sub_4F0F80((__int64)v10, a2, a3, a4, a5, nullptr, a6, *(double *)a7.m128i_i64, a8, 0);
  return v18 - __readfsqword(0x28u);
}

