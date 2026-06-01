__int64 __fastcall sub_1DE2E0(QT::QWidget *this, __int64 a2, const __m128i *a3, __int64 a4, int a5)
{
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 result; // rax

  QT::QWidget::QWidget(this, a2, 0);
  *((_DWORD *)this + 24) = a5;
  *((_QWORD *)this + 2) = CollapsibleWidget___vtable_at__16;
  *(_QWORD *)this = &CollapsibleWidget___vtable;
  v8 = _mm_loadu_si128(a3);
  v9 = a3[1].m128i_i64[0];
  *(__m128i *)((char *)this + 104) = v8;
  *((_QWORD *)this + 15) = v9;
  if ( v8.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v8.m128i_i64[0], 1u);
  *((_DWORD *)this + 32) = 0;
  result = sub_1DDDA0(this);
  if ( a4 )
    return sub_1DDA50((__int64)this, a4);
  return result;
}
