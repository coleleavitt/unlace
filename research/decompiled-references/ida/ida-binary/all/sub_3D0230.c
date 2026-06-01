__m128i *__fastcall sub_3D0230(__m128i *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  double v5; // xmm0_8
  size_t v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+10h] [rbp-78h]
  char s[72]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 424LL))(a2, a3);
  if ( v3 != -1 )
  {
    v5 = qsnprintf(s, 64, "%04X", v3 >> 3);
    v6 = strlen(s);
    QT::QString::fromUtf8(ptr, v6, s, v5);
    v7 = _mm_loadu_si128(a1);
    v8 = a1[1].m128i_i64[0];
    v9 = v11;
    *a1 = _mm_load_si128((const __m128i *)ptr);
    a1[1].m128i_i64[0] = v9;
    v11 = v8;
    *(__m128i *)ptr = v7;
    if ( v7.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v7.m128i_i64[0], 1u) )
        free(ptr[0]);
    }
  }
  return a1;
}
