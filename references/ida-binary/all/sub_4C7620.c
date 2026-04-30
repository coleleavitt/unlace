__m128i *__fastcall sub_4C7620(__m128i *a1)
{
  __int64 v1; // rax
  const __m128i *v2; // rax
  __m128i v3; // xmm0
  void *ptr[4]; // [rsp+0h] [rbp+0h] BYREF
  void *vars20[7]; // [rsp+20h] [rbp+20h] BYREF

  vars20[3] = (void *)__readfsqword(0x28u);
  QT::QString::fromUtf8(ptr, 8, "dockdata");
  v1 = QT::QCoreApplication::applicationPid((QT::QCoreApplication *)ptr);
  QT::QString::number((QT::QString *)vars20, v1, 10);
  v2 = (const __m128i *)QT::QString::append((QT::QString *)ptr, (const QT::QString *)vars20);
  v3 = _mm_loadu_si128(v2);
  a1[1].m128i_i64[0] = v2[1].m128i_i64[0];
  *a1 = v3;
  if ( v3.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v3.m128i_i64[0], 1u);
  if ( vars20[0] && !_InterlockedSub((volatile signed __int32 *)vars20[0], 1u) )
    free(vars20[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
