__m128i *__fastcall sub_4F86D0(__m128i *a1, __int64 a2, unsigned int a3)
{
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v8; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 )
    sub_4F7CB0((QT::QTime *)&word_10, (__int64)"%s logAccessible::text(t=%d)\n", (const char *)&unk_5C2F25, a3);
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  QT::QAccessibleWidget::text(ptr, a2, a3);
  v4 = _mm_loadu_si128(a1);
  v5 = a1[1].m128i_i64[0];
  v6 = v10;
  *a1 = _mm_load_si128((const __m128i *)ptr);
  a1[1].m128i_i64[0] = v6;
  v10 = v5;
  *(__m128i *)ptr = v4;
  if ( v4.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v4.m128i_i64[0], 1u) )
  {
    free(ptr[0]);
    if ( (debug & 0x80000) == 0 )
      return a1;
  }
  else if ( (debug & 0x80000) == 0 )
  {
    return a1;
  }
  QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)a1);
  v8 = (const char *)ptr[1];
  if ( !ptr[1] )
    v8 = (const char *)&QT::QByteArray::_empty;
  sub_4F7CB0((QT::QTime *)&word_10, (__int64)"%s logAccessible::text() => %s\n", (const char *)&unk_5C2F25, v8);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
