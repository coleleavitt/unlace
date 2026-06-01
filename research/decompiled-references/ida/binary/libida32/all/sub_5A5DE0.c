unsigned __int64 __fastcall sub_5A5DE0(const __m128i *a1, __int64 a2)
{
  bool v2; // zf
  const __m128i *v3; // rbx
  __m128i v4; // xmm0
  __m128i v6; // [rsp+0h] [rbp-48h] BYREF
  __m128i v7; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 16) == 0;
  v6 = _mm_loadu_si128(a1);
  v7 = _mm_loadu_si128(a1 + 1);
  if ( v2 )
LABEL_6:
    std::__throw_bad_function_call();
  v3 = a1 - 2;
  while ( (*(int (__fastcall **)(__int64, __m128i *, const __m128i *))(a2 + 24))(a2, &v6, v3) < 0 )
  {
    v4 = _mm_loadu_si128(v3);
    v3 -= 2;
    v3[4] = v4;
    v3[5] = _mm_loadu_si128(v3 + 3);
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_6;
  }
  v3[2] = _mm_load_si128(&v6);
  v3[3] = _mm_load_si128(&v7);
  return v8 - __readfsqword(0x28u);
}

