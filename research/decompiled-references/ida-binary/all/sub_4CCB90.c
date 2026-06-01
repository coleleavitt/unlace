unsigned __int64 __fastcall sub_4CCB90(QT::QWidget *this, __int64 a2)
{
  __int64 v2; // r12
  __int64 (__fastcall *v3)(__int64, __m128i *); // r14
  char v4; // r12
  int v6; // eax
  unsigned int v7; // eax
  __m128i ptr; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 56);
  v3 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v2 + 96LL);
  sub_4C7620(&ptr);
  v4 = v3(v2, &ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
  {
    free((void *)ptr.m128i_i64[0]);
    if ( !v4 )
      return v9 - __readfsqword(0x28u);
  }
  else if ( !v4 )
  {
    return v9 - __readfsqword(0x28u);
  }
  v6 = *(_DWORD *)(a2 + 48);
  *(_BYTE *)(a2 + 12) = 1;
  *(_DWORD *)(a2 + 44) = v6;
  sub_4C6180(*((_QWORD **)this + 5), 0);
  ptr.m128i_i64[0] = _mm_cvttpd_epi32(
                       _mm_add_pd(
                         _mm_or_pd(
                           _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                           _mm_and_pd(
                             _mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL),
                             *(__m128d *)(a2 + 16))),
                         *(__m128d *)(a2 + 16))).m128i_u64[0];
  v7 = sub_4CC8E0((__int64)this, (__int64)&ptr);
  if ( v7 )
  {
    *((_DWORD *)this + 38) = v7;
    sub_4C65E0(*((_QWORD *)this + 5), v7);
  }
  else
  {
    if ( *((_DWORD *)this + 38) )
      sub_4C6A50(*((_QWORD *)this + 5));
    *((_DWORD *)this + 38) = 0;
  }
  return QT::QWidget::raise(this);
}
