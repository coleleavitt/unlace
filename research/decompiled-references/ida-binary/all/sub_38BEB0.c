unsigned __int64 __fastcall sub_38BEB0(
        __int64 a1,
        const QT::QTableWidgetItem *a2,
        __m128i a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  QT::QTableWidget *v11; // rdi
  __int64 v13; // rdx
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-48h] BYREF
  __m128i v26; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  v11 = *((QT::QTableWidget **)a2 + 5);
  if ( !v11 || (unsigned int)QT::QTableWidget::column(v11, a2) )
    return v27 - __readfsqword(0x28u);
  v13 = xmmword_8CF428;
  if ( !(_QWORD)xmmword_8CF428 )
  {
    v16 = qword_8CF420;
    v26.m128i_i8[8] = 1;
    v26.m128i_i64[0] = (__int64)"strchoose:OffsetsSelectAll";
    if ( (unsigned __int64)&v26 >= qword_8CF420
      && (unsigned __int64)&v26 < qword_8CF420 + 16LL * *((_QWORD *)&xmmword_8CF428 + 1) )
    {
      v20 = _mm_load_si128(&v26);
      if ( !*((_QWORD *)&xmmword_8CF428 + 1) )
      {
        v25 = v20;
        v24 = qvector_reserve(&qword_8CF420, qword_8CF420, 1, 16);
        v13 = xmmword_8CF428;
        v20 = _mm_load_si128(&v25);
        qword_8CF420 = v24;
        v16 = v24;
      }
      *(__m128i *)(v16 + 16 * v13) = v20;
    }
    else
    {
      if ( !*((_QWORD *)&xmmword_8CF428 + 1) )
      {
        v22 = qvector_reserve(&qword_8CF420, qword_8CF420, 1, 16);
        v13 = xmmword_8CF428;
        qword_8CF420 = v22;
        v16 = v22;
      }
      *(__m128i *)(v16 + 16 * v13) = _mm_load_si128(&v26);
    }
    v17 = qword_8CF420;
    v26.m128i_i8[8] = 1;
    v26.m128i_i64[0] = (__int64)"strchoose:OffsetsDeselectAll";
    v18 = xmmword_8CF428 + 1;
    v19 = xmmword_8CF428 + 2;
    *(_QWORD *)&xmmword_8CF428 = xmmword_8CF428 + 1;
    if ( (unsigned __int64)&v26 >= qword_8CF420
      && (unsigned __int64)&v26 < qword_8CF420 + 16LL * *((_QWORD *)&xmmword_8CF428 + 1) )
    {
      a3 = _mm_load_si128(&v26);
      if ( *((_QWORD *)&xmmword_8CF428 + 1) < v19 )
      {
        v25 = a3;
        v23 = qvector_reserve(&qword_8CF420, qword_8CF420, v19, 16);
        v18 = xmmword_8CF428;
        a3 = _mm_load_si128(&v25);
        qword_8CF420 = v23;
        v17 = v23;
      }
      *(__m128i *)(v17 + 16 * v18) = a3;
    }
    else
    {
      if ( *((_QWORD *)&xmmword_8CF428 + 1) < v19 )
      {
        v21 = qvector_reserve(&qword_8CF420, qword_8CF420, v19, 16);
        v18 = xmmword_8CF428;
        qword_8CF420 = v21;
        v17 = v21;
      }
      a3 = _mm_load_si128(&v26);
      *(__m128i *)(v17 + 16 * v18) = a3;
    }
    *(_QWORD *)&xmmword_8CF428 = xmmword_8CF428 + 1;
  }
  sub_531B30(1, 0, &qword_8CF420);
  return sub_38BE00(a1, *(double *)a3.m128i_i64, a4, a5, a6, v14, v15, a9, a10);
}
