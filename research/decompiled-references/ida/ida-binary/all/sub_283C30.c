__int64 __fastcall sub_283C30(
        QT::QCoreApplication *a1,
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  const __m128i *v12; // rax
  __int64 v13; // rcx
  double v14; // xmm4_8
  double v15; // xmm5_8
  __m128i v16; // xmm0
  unsigned int v17; // edx
  __int16 v18; // ax
  __int64 v19; // rdi
  __m128i v21; // [rsp+0h] [rbp-48h] BYREF
  __m128i v22; // [rsp+10h] [rbp-38h]
  __int64 v23; // [rsp+20h] [rbp-28h]
  unsigned __int64 v24; // [rsp+28h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  sub_176E70(a1);
  v12 = (const __m128i *)sub_1EA6A0(*((_QWORD *)a1 + 2) + 384LL, a2, v10, v11, a3);
  v21 = _mm_loadu_si128(v12);
  v16 = _mm_loadu_si128(v12 + 1);
  v22 = v16;
  v23 = v12[2].m128i_i64[0];
  if ( !(_BYTE)a2 )
  {
    v18 = v16.m128i_i16[6] + 1;
    goto LABEL_5;
  }
  v17 = 0;
  if ( v16.m128i_i16[6] > 0 )
  {
    v18 = v16.m128i_i16[6] - 1;
LABEL_5:
    v19 = *((_QWORD *)a1 + 2);
    v22.m128i_i16[6] = v18;
    sub_2004D0(v19, v21.m128i_i8, 0, v13, *(double *)v16.m128i_i64, a4, a5, a6, v14, v15, a9, a10);
    return 1;
  }
  return v17;
}
