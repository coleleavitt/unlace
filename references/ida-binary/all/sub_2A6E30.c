unsigned __int64 __fastcall sub_2A6E30(QT::QWidget *this, __int64 a2, __int64 a3, __int64 a4)
{
  double v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm0
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+8h] [rbp-30h]
  __m128i v16; // [rsp+10h] [rbp-28h] BYREF
  double v17; // [rsp+20h] [rbp-18h]
  unsigned __int64 v18; // [rsp+28h] [rbp-10h]

  v4 = *((double *)this + 15);
  v18 = __readfsqword(0x28u);
  v17 = v4;
  v16 = _mm_loadu_si128((const __m128i *)((char *)this + 104));
  v6 = sub_2A6DC0((__int64)this, nullptr, a3, a4, *(double *)v16.m128i_i64);
  if ( !v6 )
    goto LABEL_7;
  v7 = *((_QWORD *)this + 4);
  v14 = 0x100000001LL;
  v8 = _mm_sub_epi32(_mm_loadl_epi64((const __m128i *)(v7 + 28)), _mm_loadl_epi64((const __m128i *)(v7 + 20)));
  v15 = v8.m128i_i64[0];
  v9 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229));
  if ( _mm_cvtsi128_si32(v8) <= 0 )
  {
    LODWORD(v15) = 1;
    LODWORD(v14) = _mm_cvtsi128_si32(v8);
    if ( v9 > 0 )
    {
LABEL_4:
      v10 = *(_QWORD *)(v6 + 440);
      if ( !v10 )
        goto LABEL_7;
      goto LABEL_5;
    }
  }
  else if ( v9 > 0 )
  {
    goto LABEL_4;
  }
  v10 = *(_QWORD *)(v6 + 440);
  HIDWORD(v14) = v9;
  HIDWORD(v15) = 1;
  if ( !v10 )
    goto LABEL_7;
LABEL_5:
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 )
    sub_29A130(v11, (int *)&v14, (__m128d *)&v16, 1.0);
LABEL_7:
  if ( *((double *)this + 13) == *(double *)v16.m128i_i64
    && *((double *)this + 14) == *(double *)&v16.m128i_i64[1]
    && *((double *)this + 15) == v17 )
  {
    QT::QWidget::update(this);
  }
  else
  {
    v12 = _mm_load_si128(&v16);
    *((double *)this + 15) = v17;
    *(__m128i *)((char *)this + 104) = v12;
    QT::QWidget::update(this);
  }
  return v18 - __readfsqword(0x28u);
}
