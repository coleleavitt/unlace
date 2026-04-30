QT::QString *__fastcall sub_317DB0(QT::QString *this)
{
  __m128i si128; // xmm0
  void *ptr[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  sub_53C6B0(ptr);
  if ( (get_merge_state(ptr) & 3) != 0 )
  {
    QT::QString::fromUtf8(this, 10, "diffmerge:");
    QT::QString::append(this, (const QT::QString *)ptr);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)ptr);
    *((_QWORD *)this + 2) = vars10;
    *(__m128i *)this = si128;
    if ( !si128.m128i_i64[0] )
      return this;
    _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return this;
}
