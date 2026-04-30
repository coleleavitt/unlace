unsigned __int64 __fastcall sub_2C3F80(
        __int64 *a1,
        int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rax
  void (*v16)(void); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  const __m128i *v20; // rax
  const __m128i *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rcx
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v31; // [rsp+0h] [rbp-A8h]
  __m128i v32; // [rsp+0h] [rbp-A8h]
  int v33; // [rsp+8h] [rbp-A0h]
  QT::QFont *v34[2]; // [rsp+10h] [rbp-98h] BYREF
  int v35[2]; // [rsp+20h] [rbp-88h]
  __int64 v36; // [rsp+28h] [rbp-80h]
  __m128i v37; // [rsp+30h] [rbp-78h] BYREF
  __m128i v38; // [rsp+40h] [rbp-68h]
  __int64 v39; // [rsp+50h] [rbp-58h]
  int v40; // [rsp+58h] [rbp-50h]
  __int64 v41; // [rsp+60h] [rbp-48h]
  int v42[2]; // [rsp+78h] [rbp-30h]

  v14 = *a1;
  *(_QWORD *)v42 = __readfsqword(0x28u);
  v16 = *(void (**)(void))(v14 + 312);
  if ( (char *)v16 == (char *)sub_2B2520 )
    a7.m128_u64[0] = *(_QWORD *)sub_1EA6C0(
                                  a1[2] + 384,
                                  (__int64)a2,
                                  (__int64)sub_2B2520,
                                  a4,
                                  a5,
                                  a6,
                                  a7,
                                  a8,
                                  a9,
                                  a10,
                                  a11,
                                  a12,
                                  a13,
                                  a14,
                                  v31,
                                  v33,
                                  (int)v34[0],
                                  (int)v34[1],
                                  *(__int64 *)v35,
                                  v36,
                                  v37.m128i_i64[0],
                                  v37.m128i_i32[2],
                                  v38.m128i_i32[0],
                                  v38.m128i_i32[2],
                                  v39,
                                  v40,
                                  v41);
  else
    v16();
  *(_OWORD *)v34 = 0;
  *(_QWORD *)v35 = 0;
  sub_2B6E80((__int64)a1, (double *)v34, a2, a3, *(double *)a7.m128_u64);
  if ( (a3 & 2) != 0 )
  {
    sub_2B4480((__int64)&v37, (__int64)a1, (__int64)v34, v18);
    sub_2C29E0((__int64)a1, (__int64)&v37, 0, v28, *(double *)a7.m128_u64, (__m128)0LL, a9, a10, v29, v30, a13, a14);
  }
  else
  {
    v19 = *(_QWORD *)v35;
    v32 = *(__m128i *)v34;
    v20 = (const __m128i *)sub_1EA6A0(a1[2] + 384, (__int64)v34, v17, v18, *(double *)v34);
    v21 = (const __m128i *)(a1[2] + 384);
    v37 = _mm_loadu_si128(v20);
    v38 = _mm_loadu_si128(v20 + 1);
    v22 = v20[2].m128i_i64[0];
    v38.m128i_i64[0] = v19;
    v39 = v22;
    v37 = v32;
    sub_1F14A0(v21, &v37, v23, v24, v25, v26);
  }
  return *(_QWORD *)v42 - __readfsqword(0x28u);
}
