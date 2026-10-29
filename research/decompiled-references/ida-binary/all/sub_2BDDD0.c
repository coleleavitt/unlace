__int64 __fastcall sub_2BDDD0(
        QT::QCoreApplication *a1,
        __int64 a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  const __m128i *v16; // rax
  QT::QAbstractScrollArea *v17; // rdi
  __m128i v18; // xmm0
  QT::QCursor *v19; // rax
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  unsigned __int64 v22; // rsi
  int v23; // eax
  __m128i v24; // xmm0
  int v25; // edi
  __int64 (__fastcall *v26)(__int64, int, int); // rcx
  __int16 v27; // ax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  int v31; // eax
  __m128i v32; // xmm0
  __int64 v33; // [rsp+8h] [rbp-50h] BYREF
  __m128i v34; // [rsp+10h] [rbp-48h] BYREF
  __m128i v35; // [rsp+20h] [rbp-38h] BYREF
  __int64 v36; // [rsp+30h] [rbp-28h]
  unsigned __int64 v37; // [rsp+38h] [rbp-20h]

  v37 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_176E70(a1) )
    return 0;
  v16 = (const __m128i *)sub_1EA6A0(*((_QWORD *)a1 + 2) + 384LL, a2, v14, v15, a4);
  v17 = *((QT::QAbstractScrollArea **)a1 + 2);
  v34 = _mm_loadu_si128(v16);
  v18 = _mm_loadu_si128(v16 + 1);
  v35 = v18;
  v36 = v16[2].m128i_i64[0];
  if ( a3 )
  {
    v19 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(v17);
    v33 = sub_1C7B10(v19);
    sub_2B6070(
      a1,
      (const __m128i *)&v33,
      (__int64)&v35.m128i_i64[1],
      0,
      *(double *)v18.m128i_i64,
      a5,
      a6,
      a7,
      v20,
      v21,
      a10,
      a11);
    v22 = v35.m128i_i32[2];
    if ( a2 )
    {
      v23 = v36;
      *(__m128i *)a2 = _mm_load_si128(&v34);
      v24 = _mm_load_si128(&v35);
      *(_DWORD *)(a2 + 32) = v23;
      *(__m128i *)(a2 + 16) = v24;
    }
    if ( (_DWORD)v22 == -1 )
      return 0;
  }
  else
  {
    v31 = sub_1EB540(v17, (__int64)a1);
    if ( (_DWORD)v36 != v31 )
      return 0;
    v22 = v35.m128i_i32[2];
    if ( v35.m128i_i32[2] < 0 )
      return 0;
    if ( !a2 )
    {
      v25 = v35.m128i_i16[7];
      v26 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 672LL);
      v27 = v35.m128i_i16[7];
      if ( v26 == sub_2B23E0 )
        goto LABEL_8;
      return v26((__int64)a1, v22, v25);
    }
    v32 = _mm_load_si128(&v34);
    *(_DWORD *)(a2 + 32) = v31;
    *(__m128i *)a2 = v32;
    *(__m128i *)(a2 + 16) = _mm_load_si128(&v35);
  }
  v25 = v35.m128i_i16[7];
  v26 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 672LL);
  v27 = v35.m128i_i16[7];
  if ( v26 == sub_2B23E0 )
  {
    if ( (v22 & 0x80000000) == 0LL )
    {
LABEL_8:
      v28 = *((_QWORD *)a1 + 55);
      if ( v22 < *(_QWORD *)(v28 + 24) )
      {
        v29 = (_QWORD *)(*(_QWORD *)(v28 + 16) + 24 * v22);
        if ( v25 >= 0 && (unsigned __int64)v27 < v29[1] )
          return *v29 + 272LL * v27;
      }
    }
    return 0;
  }
  return v26((__int64)a1, v22, v25);
}
