unsigned __int64 __fastcall sub_2C9A60(QT::QAbstractScrollArea *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _UNKNOWN **v4; // [rsp+0h] [rbp-68h] BYREF
  int v5; // [rsp+8h] [rbp-60h]
  __m128i v6; // [rsp+10h] [rbp-58h]
  _UNKNOWN **v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+28h] [rbp-40h]
  __m128i v9; // [rsp+30h] [rbp-38h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = getinf(19);
  v4 = &hexplace_t___vtable;
  v5 = 0;
  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v1, (__m128i)(unsigned __int64)v1);
  v2 = getinf(20);
  v8 = 0x7FFFFFFF;
  v7 = &hexplace_t___vtable;
  v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v2);
  sub_1EB140(this, (const char *)&v4, (__int64)&v7);
  return v10 - __readfsqword(0x28u);
}
