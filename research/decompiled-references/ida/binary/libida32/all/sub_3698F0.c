__int64 __fastcall sub_3698F0(__int64 a1, __m128i *a2)
{
  char *v2; // rax
  bool v3; // zf
  __m128i v4; // xmm0
  __m128i v6; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v2 = (char *)haystack;
  v3 = *(_QWORD *)(a1 + 16) == 0;
  v7 = __readfsqword(0x28u);
  v6 = 0;
  if ( !v3 )
    v2 = *(char **)(a1 + 8);
  qgetenv(v2);
  v4 = _mm_loadu_si128(&v6);
  a2->m128i_i8[0] = 7;
  a2->m128i_i64[1] = 0;
  a2[1] = v4;
  return 0;
}

