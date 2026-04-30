__int64 __fastcall sub_27D430(QT::QAbstractScrollArea *this, const char *a2)
{
  void (*v3)(void); // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  const __m128i *i; // rbx
  __int64 v7; // rdx
  __m128i si128; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rax
  QT::QAbstractSlider *v11; // rax
  __int64 result; // rax
  float v13; // xmm0_4
  float v14; // xmm0_4
  __m128i v15[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(void (**)(void))(*(_QWORD *)this + 1120LL);
  if ( v3 != nullsub_69 )
    v3();
  v4 = *((_QWORD *)this + 125);
  if ( v4 )
  {
    *((_QWORD *)this + 126) = 0;
    qfree(v4, a2);
    *((_QWORD *)this + 125) = 0;
    *((_QWORD *)this + 127) = 0;
  }
  v5 = 0;
  for ( i = (const __m128i *)get_first_seg(); i; i = (const __m128i *)get_next_seg(i->m128i_i64[0]) )
  {
    v7 = *((_QWORD *)this + 126);
    si128 = _mm_loadu_si128(i);
    v9 = *((_QWORD *)this + 125);
    if ( *((_QWORD *)this + 127) < (unsigned __int64)(v7 + 1) )
    {
      v15[0] = si128;
      v10 = qvector_reserve((char *)this + 1000, v9, v7 + 1, 16);
      v7 = *((_QWORD *)this + 126);
      si128 = _mm_load_si128(v15);
      *((_QWORD *)this + 125) = v10;
      v9 = v10;
    }
    *(__m128i *)(v9 + 16 * v7) = si128;
    ++*((_QWORD *)this + 126);
    v5 = i->m128i_i64[1] + v5 - i->m128i_i64[0];
  }
  v11 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(this);
  result = QT::QAbstractSlider::maximum(v11);
  v13 = 1.0;
  if ( (_DWORD)result )
  {
    if ( v5 < 0 )
      v14 = (float)(v5 & 1 | (unsigned int)((unsigned __int64)v5 >> 1))
          + (float)(v5 & 1 | (unsigned int)((unsigned __int64)v5 >> 1));
    else
      v14 = (float)(int)v5;
    v13 = v14 / (float)(int)result;
  }
  *((float *)this + 256) = v13;
  return result;
}
