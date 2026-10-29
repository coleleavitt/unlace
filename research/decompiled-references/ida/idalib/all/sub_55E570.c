unsigned __int64 __fastcall sub_55E570(__int64 a1, __int64 a2)
{
  __m128i *v2; // rax
  const char *v3; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  v2 = (__m128i *)qvector_reserve(&ptr, 0, 74, 1);
  ptr = v2;
  *(_QWORD *)&v6 = 74;
  *v2 = _mm_load_si128((const __m128i *)&xmmword_23A7B70);
  v2[1] = _mm_load_si128((const __m128i *)&xmmword_23A7B80);
  v2[2] = _mm_load_si128((const __m128i *)&xmmword_23A7B90);
  v2[3] = _mm_load_si128((const __m128i *)&xmmword_23A7BA0);
  *(__m128i *)((char *)v2 + 57) = _mm_load_si128((const __m128i *)&xmmword_23A7BB0);
  *((_BYTE *)ptr + 73) = 0;
  if ( a2 )
    sub_35A910((__int64 *)&ptr);
  v3 = haystack;
  if ( (_QWORD)v6 )
    v3 = (const char *)ptr;
  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 184LL))(a1, v3, 4);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr);
  }
  return v7 - __readfsqword(0x28u);
}
