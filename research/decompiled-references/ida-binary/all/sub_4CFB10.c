unsigned __int64 __fastcall sub_4CFB10(QT::QTabBar *this, __int64 a2)
{
  __int64 v2; // r13
  __int64 (__fastcall *v3)(__int64, __m128i *); // r14
  const QT::QObject *i; // r15
  char v5; // r13
  __m128d v7; // xmm2
  int v8; // eax
  __m128i ptr; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 56);
  v10 = __readfsqword(0x28u);
  v3 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v2 + 96LL);
  for ( i = *(const QT::QObject **)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 16LL);
        i;
        i = *(const QT::QObject **)(*((_QWORD *)i + 1) + 16LL) )
  {
    if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, i) )
      break;
  }
  sub_4C7620(&ptr);
  v5 = v3(v2, &ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
  {
    free((void *)ptr.m128i_i64[0]);
    if ( !v5 )
      return v10 - __readfsqword(0x28u);
LABEL_11:
    v7 = *(__m128d *)(a2 + 16);
    v8 = *(_DWORD *)(a2 + 48);
    *(_BYTE *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 44) = v8;
    ptr.m128i_i64[0] = _mm_cvttpd_epi32(
                         _mm_add_pd(
                           _mm_or_pd(
                             _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                             _mm_and_pd(
                               _mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL),
                               v7)),
                           v7)).m128i_u64[0];
    sub_4CDCD0(this);
    return v10 - __readfsqword(0x28u);
  }
  if ( v5 )
    goto LABEL_11;
  return v10 - __readfsqword(0x28u);
}
