unsigned __int64 __fastcall sub_4AF1B0(QT::QAbstractButton *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __int64 v5; // rdx
  void *ptr[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  QT::QAbstractButton::text((QT::QAbstractButton *)ptr);
  v3 = vars10;
  v4 = _mm_loadu_si128((const __m128i *)((char *)this + 40));
  v5 = *((_QWORD *)this + 7);
  *(__m128i *)((char *)this + 40) = _mm_load_si128((const __m128i *)ptr);
  *((_QWORD *)this + 7) = v3;
  vars10 = v5;
  *(__m128i *)ptr = v4;
  if ( v4.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v4.m128i_i64[0], 1u) )
    free(ptr[0]);
  QT::QString::fromUtf8(ptr, 7, "DEFAULT", v3, v1, v2);
  QT::QAbstractButton::setText(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return vars18 - __readfsqword(0x28u);
}
