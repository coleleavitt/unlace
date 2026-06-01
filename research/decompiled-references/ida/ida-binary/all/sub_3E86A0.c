__int64 __fastcall sub_3E86A0(const __m128i *a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+10h] [rbp-58h]
  _BYTE v8[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( !a2 )
    return v9 - __readfsqword(0x28u);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(v8, a2, 0);
  QT::QVariant::toString((QT::QVariant *)ptr);
  QT::QVariant::~QVariant((QT::QVariant *)v8);
  v2 = _mm_loadu_si128(a1 + 4);
  v3 = a1[5].m128i_i64[0];
  v4 = v7;
  a1[4] = _mm_load_si128((const __m128i *)ptr);
  a1[5].m128i_i64[0] = v4;
  v7 = v3;
  *(__m128i *)ptr = v2;
  if ( v2.m128i_i64[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v2.m128i_i64[0], 1u) )
      free(ptr[0]);
  }
  return (*(__int64 (__fastcall **)(const __m128i *, __int64))(a1->m128i_i64[0] + 432))(a1, 12);
}
