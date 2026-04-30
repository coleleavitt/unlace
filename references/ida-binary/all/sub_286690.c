__int64 __fastcall sub_286690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128d a5)
{
  __int64 v6; // rax
  __int64 v8; // r15
  int v9; // r14d
  __int16 v10; // r13
  const char *v11; // rsi
  QT::QAbstractScrollArea *v12; // rdi
  QT::QAbstractSlider *v13; // rax
  int v14; // eax
  __m128i v15; // xmm0
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  __m128i v21; // xmm0
  __m128d v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // [rsp+0h] [rbp-188h]
  int v26; // [rsp+0h] [rbp-188h]
  int v27; // [rsp+18h] [rbp-170h]
  __int32 v28; // [rsp+1Ch] [rbp-16Ch]
  __int64 v29; // [rsp+20h] [rbp-168h]
  __int64 v30; // [rsp+28h] [rbp-160h]
  double v31; // [rsp+30h] [rbp-158h]
  int v32; // [rsp+48h] [rbp-140h] BYREF
  int v33; // [rsp+4Ch] [rbp-13Ch] BYREF
  __m128i v34; // [rsp+50h] [rbp-138h] BYREF
  __m128i v35; // [rsp+60h] [rbp-128h] BYREF
  int v36; // [rsp+70h] [rbp-118h]
  _BYTE v37[64]; // [rsp+80h] [rbp-108h] BYREF
  _BYTE v38[16]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v39[24]; // [rsp+D0h] [rbp-B8h] BYREF
  double v40; // [rsp+E8h] [rbp-A0h]
  double v41; // [rsp+F8h] [rbp-90h]
  __int64 v42; // [rsp+120h] [rbp-68h]
  unsigned __int64 v43; // [rsp+148h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 16);
  v43 = __readfsqword(0x28u);
  v8 = sub_1EA680(v6 + 384, a2, a3, a4, a5.m128d_f64[0]);
  v9 = *(__int16 *)(v8 + 30);
  v10 = *(_WORD *)(v8 + 28);
  v29 = *(_QWORD *)v8;
  v28 = *(_DWORD *)(v8 + 24);
  v31 = *(double *)(v8 + 8);
  v27 = *(_DWORD *)(v8 + 32);
  v30 = *(_QWORD *)(v8 + 16);
  v25 = sub_284860(a1, v9);
  if ( v25 )
  {
    sub_283F90((__int64)v37, a1);
    v11 = (const char *)v25;
    sub_178260(a1, v25, v10, (__int64)v37);
    if ( fabs(a5.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v23.m128d_f64[0] = (double)(int)a5.m128d_f64[0];
      *(_QWORD *)&a5.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                      v23.m128d_f64[0]
                                    + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a5, v23).m128d_f64[0] & 0x3FF0000000000000LL))
                                  | *(_QWORD *)&a5.m128d_f64[0] & 0x8000000000000000LL;
    }
    v12 = *(QT::QAbstractScrollArea **)(a1 + 16);
    v26 = (int)a5.m128d_f64[0];
    v33 = (int)((double)v9 * v41);
    v13 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(v12);
    v14 = QT::QAbstractSlider::value(v13);
    v15.m128i_i64[0] = v29;
    *(double *)&v15.m128i_i64[1] = v31;
    if ( v14 <= v26 )
    {
      if ( v26 < v42 + v14 )
        goto LABEL_8;
      v16 = v42;
    }
    else
    {
      v16 = (int)v40;
    }
    if ( v16 >= 0 )
    {
      v11 = (const char *)&v32;
      v32 = v16;
      sub_2857B0(a1, &v32, &v33, 1u);
      v10 = v32;
    }
LABEL_8:
    v17 = *(_QWORD *)(v8 + 40);
    v34 = v15;
    v35.m128i_i32[2] = v28;
    v35.m128i_i16[6] = v10;
    v35.m128i_i8[14] = v9;
    v35.m128i_i8[15] = BYTE1(v9);
    v36 = v27;
    v35.m128i_i64[0] = v30;
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v19 = *(_QWORD *)(a2 + 40);
      v17 = v18;
      if ( !v19 )
        goto LABEL_11;
    }
    else
    {
      v19 = *(_QWORD *)(a2 + 40);
      if ( !v19 )
      {
        *(__m128i *)a2 = _mm_load_si128(&v34);
        v24 = _mm_load_si128(&v35);
        *(_DWORD *)(a2 + 32) = v27;
        *(__m128i *)(a2 + 16) = v24;
LABEL_13:
        QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v39);
        QT::QFont::~QFont((QT::QFont *)v38);
        return 1;
      }
    }
    qfree(v19, v11);
    *(_QWORD *)(a2 + 40) = 0;
LABEL_11:
    v20 = v36;
    *(__m128i *)a2 = _mm_load_si128(&v34);
    v21 = _mm_load_si128(&v35);
    *(_DWORD *)(a2 + 32) = v20;
    *(__m128i *)(a2 + 16) = v21;
    if ( v17 )
    {
      *(_QWORD *)(a2 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      qfree(v17, v11);
    }
    goto LABEL_13;
  }
  return 0;
}
