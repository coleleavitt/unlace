unsigned __int64 __fastcall sub_289A50(
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
  const __m128i *v14; // rax
  __m128i v15; // xmm0
  const __m128i *v16; // rbx
  __int64 v17; // rdi
  __m128i *v18; // rsi
  __int64 v19; // rcx
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rdi
  __int64 v24; // rdi
  __m128 v25; // xmm0
  __int64 (*v26)(); // rax
  __int16 v27; // ax
  __int64 v28; // rdi
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v31; // rdi
  __m128i v32; // [rsp+0h] [rbp-178h] BYREF
  __m128 v33; // [rsp+10h] [rbp-168h]
  __int64 v34; // [rsp+20h] [rbp-158h]
  __m128i v35; // [rsp+30h] [rbp-148h] BYREF
  __m128i v36; // [rsp+40h] [rbp-138h]
  __int64 v37; // [rsp+50h] [rbp-128h]
  __int64 v38; // [rsp+58h] [rbp-120h]
  __m128i v39; // [rsp+60h] [rbp-118h] BYREF
  __int64 v40; // [rsp+70h] [rbp-108h]
  __int64 v41; // [rsp+78h] [rbp-100h]
  __int64 v42; // [rsp+80h] [rbp-F8h]
  __int64 v43; // [rsp+88h] [rbp-F0h]
  char v44[64]; // [rsp+90h] [rbp-E8h] BYREF
  char v45[16]; // [rsp+D0h] [rbp-A8h] BYREF
  char v46[96]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v47; // [rsp+140h] [rbp-38h]
  unsigned __int64 v48; // [rsp+158h] [rbp-20h]

  v12 = *(_QWORD *)(a1 + 16);
  v48 = __readfsqword(0x28u);
  v14 = (const __m128i *)sub_1EA680(v12 + 384, a2, a3, a4, a5);
  v15.m128i_i64[0] = 0;
  v36.m128i_i64[0] = 0;
  v36.m128i_i64[1] = -1;
  v16 = v14;
  v37 = 0;
  v38 = 0;
  v35 = 0;
  if ( v14 != &v35 )
  {
    v35 = _mm_loadu_si128(v14);
    v15 = _mm_loadu_si128(v14 + 1);
    v36 = v15;
    LODWORD(v37) = v14[2].m128i_i32[0];
    v17 = v14[2].m128i_i64[1];
    if ( v17 )
      v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = &v35;
  if ( (unsigned __int8)sub_174EF0(a1, (__int64)&v35) )
  {
    v22 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v22 + 954) & 1) != 0 )
    {
      if ( (_DWORD)v37 != v16[2].m128i_i32[0]
        || v36.m128i_i64[1] != v16[1].m128i_i64[1]
        || (v15.m128i_i64[0] = v35.m128i_i64[0], *(double *)v35.m128i_i64 != *(double *)v16->m128i_i64)
        || (v15.m128i_i64[0] = v35.m128i_i64[1], *(double *)&v35.m128i_i64[1] != *(double *)&v16->m128i_i64[1])
        || (v15.m128i_i64[0] = v36.m128i_i64[0], *(double *)v36.m128i_i64 != *(double *)v16[1].m128i_i64) )
      {
        v18 = &v35;
        sub_2004D0(v22, v35.m128i_i8, 0, v19, *(double *)v15.m128i_i64, a6, a7, a8, v20, v21, a11, a12);
      }
    }
  }
  else
  {
    v18 = (__m128i *)a1;
    sub_283F90((__int64)v44, a1);
    if ( v47 > 0 )
    {
      v24 = *(_QWORD *)(a1 + 16);
      v25 = 0;
      v40 = 0;
      v41 = -1;
      v42 = 0;
      v43 = 0;
      v39 = 0;
      v26 = *(__int64 (**)())(*(_QWORD *)v24 + 640LL);
      if ( v26 == sub_2835C0
        || (v18 = &v39, !((unsigned __int8 (__fastcall *)(__int64, __m128i *, const __m128i *))v26)(v24, &v39, v16)) )
      {
        v32 = _mm_loadu_si128(v16);
        v25 = (__m128)_mm_loadu_si128(v16 + 1);
        v33 = v25;
        v34 = v16[2].m128i_i64[0];
        v27 = sub_2843C0(a1, v25.m128_i16[7]);
        v28 = *(_QWORD *)(a1 + 16);
        v33.m128_i16[7] = v27;
        v18 = &v39;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128i *, __m128i *))(*(_QWORD *)v28 + 632LL))(
                v28,
                &v39,
                &v32) )
        {
          v31 = *(_QWORD *)(a1 + 16);
          v33.m128_i32[3] = 0;
          v18 = &v39;
          (*(void (__fastcall **)(__int64, __m128i *, __m128i *))(*(_QWORD *)v31 + 632LL))(v31, &v39, &v32);
        }
      }
      if ( v43 )
      {
        v18 = &v39;
        sub_1FF700(*(_QWORD *)(a1 + 16) + 384LL, &v39, v25, a6, a7, a8, v29, v30, a11, a12);
        if ( v43 )
          qfree(v43, v39.m128i_i8);
      }
    }
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v46);
    QT::QFont::~QFont((QT::QFont *)v45);
  }
  sub_175030(a1, (__int64)v18);
  if ( v38 )
    qfree(v38, v18->m128i_i8);
  return v48 - __readfsqword(0x28u);
}
