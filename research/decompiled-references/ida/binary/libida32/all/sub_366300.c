__int64 __fastcall sub_366300(__int64 a1, __m128i *a2)
{
  bool v2; // zf
  __int64 v3; // rdx
  const char *v5; // rsi
  int v6; // eax
  void *v7; // rdi
  __m128i v8; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v11; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 16) == 0;
  v3 = *(unsigned int *)(a1 + 40);
  v12 = __readfsqword(0x28u);
  v11 = 0;
  v5 = haystack;
  ptr = nullptr;
  if ( !v2 )
    v5 = *(const char **)(a1 + 8);
  v6 = demangle_name(&ptr, v5, v3, 2);
  v7 = ptr;
  if ( v6 <= 0 )
  {
    a2->m128i_i32[2] = 0;
    if ( v7 )
    {
      v11.m128i_i64[0] = 0;
      qfree(v7);
    }
  }
  else
  {
    v8 = _mm_loadu_si128(&v11);
    a2->m128i_i8[0] = 7;
    a2->m128i_i64[1] = (__int64)v7;
    a2[1] = v8;
  }
  return 0;
}

