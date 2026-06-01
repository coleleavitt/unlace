unsigned __int64 sub_308040()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  unsigned __int64 (__fastcall *v2)(__int64, __int64); // r12
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v0 = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    v1 = QT::QCoreApplication::self[2];
    v6 = 0;
    v5 = 0;
    v2 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(v1 + 136);
    v3 = qvector_reserve(&v5, 0, 40, 1);
    v5 = v3;
    *(_QWORD *)&v6 = 40;
    *(__m128i *)v3 = _mm_load_si128((const __m128i *)&xmmword_5DC4D0);
    *(__m128i *)(v3 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCF80);
    *(_QWORD *)(v3 + 31) = 0x656E696C2D646E61LL;
    *(_BYTE *)(v5 + 39) = 0;
    if ( v2 == IDAApplication__::vfunc_17 )
      sub_307780((__int64)v0, (__int64)&v5);
    else
      v2((__int64)(v0 + 2), (__int64)&v5);
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree(v5, (const char *)&v5);
    }
  }
  return v7 - __readfsqword(0x28u);
}
