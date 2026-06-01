unsigned __int64 __fastcall sub_527D10(__m128i *this, int a2)
{
  __int64 v2; // rcx
  __m128i v3; // xmm0
  __int64 v4; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+10h] [rbp-18h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  *((_DWORD *)this + 27) = a2;
  QT::QString::QString(ptr, a2, 32);
  v2 = v7;
  v3 = _mm_loadu_si128(this + 7);
  v4 = *((_QWORD *)this + 16);
  *(this + 7) = _mm_load_si128((const __m128i *)ptr);
  *((_QWORD *)this + 16) = v2;
  v7 = v4;
  *(__m128i *)ptr = v3;
  if ( v3.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v3.m128i_i64[0], 1u) )
    free(ptr[0]);
  return sub_527B60((QT::QPlainTextEdit *)this);
}
