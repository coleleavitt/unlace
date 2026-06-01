__int64 __fastcall sub_2BBCD0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  QT::QAbstractScrollArea *v12; // rax
  unsigned __int8 v13; // bp
  __int64 (*v14)(void); // rax
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  int v24; // r13d
  const __m128i *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  double v28; // xmm4_8
  double v29; // xmm5_8
  unsigned int v30; // r14d
  const __m128i *v31; // r12
  __m128i v32; // xmm0
  __int16 v33; // ax
  __int64 v34; // rdi
  int v36; // eax
  __int64 v37; // rdx
  __m128i v38; // [rsp+0h] [rbp-58h] BYREF
  __m128i v39; // [rsp+10h] [rbp-48h]
  __int64 v40; // [rsp+20h] [rbp-38h]
  unsigned __int64 v41; // [rsp+28h] [rbp-30h]

  v12 = *(QT::QAbstractScrollArea **)a1;
  v41 = __readfsqword(0x28u);
  v13 = a2;
  v14 = *((__int64 (**)(void))v12 + 63);
  if ( (char *)v14 == (char *)sub_2B36E0 )
  {
    v15 = sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, (__int64)sub_2B36E0, a12, *(double *)a3.m128_u64);
    a2 = a1;
    v16 = *(_DWORD *)(v15 + 32);
    v17 = v15;
    if ( v16 != (unsigned int)sub_1EB540(*(_QWORD **)(a1 + 16), a1) )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        a1,
        v18,
        v19,
        v20,
        v21,
        a3,
        a4,
        a5,
        a6,
        v22,
        v23,
        a9,
        a10,
        v38.m128i_i8[0]);
    v24 = *(_DWORD *)(v17 + 24);
  }
  else
  {
    v24 = v14();
  }
  if ( v24 >= 0 )
  {
    v25 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, v18, v19, *(double *)a3.m128_u64);
    v30 = v25[1].m128i_i16[7];
    v31 = v25;
    if ( v13 )
    {
      if ( (_WORD)v30 )
      {
        v38 = _mm_loadu_si128(v25);
        v32 = _mm_loadu_si128(v25 + 1);
        v39 = v32;
        v40 = v25[2].m128i_i64[0];
        v33 = -1;
LABEL_9:
        v34 = *(_QWORD *)(a1 + 16);
        v39.m128i_i16[7] = v30 + v33;
        sub_2004D0(v34, v38.m128i_i8, 0, v27, *(double *)v32.m128i_i64, a4, a5, a6, v28, v29, a9, a10);
        return 1;
      }
      if ( (unsigned __int8)sub_2BB720(a1, 2, a3, a4, a5, a6, v28, v29, a9, a10, v26, v27) )
        return 1;
    }
    else
    {
      v36 = *(_DWORD *)(sub_2B5900(
                          *(double *)a3.m128_u64,
                          a1,
                          *(_QWORD **)(a1 + 440),
                          (__int64 (__fastcall *)(__int64))(unsigned int)v24,
                          v27)
                      + 4);
      if ( v36 && v30 < v36 - 1 )
      {
        v38 = _mm_loadu_si128(v31);
        v32 = _mm_loadu_si128(v31 + 1);
        v39 = v32;
        LOWORD(v30) = v32.m128i_i16[7];
        v40 = v31[2].m128i_i64[0];
        v33 = 1;
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_2BB720(a1, 3, a3, a4, a5, a6, v28, v29, a9, a10, v37, v27) )
        return 1;
    }
  }
  sub_2B7740(
    (QT::QAbstractScrollArea **)a1,
    0,
    v13,
    v19,
    v20,
    v21,
    (__m128)0xBFF0000000000000LL,
    a4,
    a5,
    a6,
    v22,
    v23,
    a9,
    a10);
  return 0;
}
