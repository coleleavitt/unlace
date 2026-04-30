__int64 __fastcall sub_4C4010(const char *a1, const char *a2, int a3, signed int a4, signed int a5, int a6, int a7)
{
  size_t v11; // rax
  __m128i v12; // xmm0
  unsigned int v13; // r13d
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 *v17; // rbp
  __int64 v18; // rdi
  size_t v20; // [rsp+8h] [rbp-C0h]
  size_t n; // [rsp+18h] [rbp-B0h]
  void *v22; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-A0h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  __int128 v25; // [rsp+40h] [rbp-88h]
  __m128i si128; // [rsp+50h] [rbp-78h]
  void *ptr[2]; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  int v29; // [rsp+78h] [rbp-50h]
  unsigned __int64 v30; // [rsp+88h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a1 && a2 )
  {
    if ( !strcmp(a1, a2) )
      return 0;
    v22 = nullptr;
    v24 = 0;
    v28 = 0;
    v29 = 0;
    v23 = 0;
    v25 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    *(_OWORD *)ptr = 0;
    goto LABEL_5;
  }
  v22 = nullptr;
  v24 = 0;
  v28 = 0;
  v29 = 0;
  v23 = 0;
  v25 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_OWORD *)ptr = 0;
  if ( a2 )
  {
LABEL_5:
    v11 = strlen(a2);
    if ( v11 )
    {
      n = v11;
      v20 = v11 + 1;
      v22 = (void *)qvector_reserve(&v22, 0, v11 + 1, 1);
      *(_QWORD *)&v23 = v20;
      memmove(v22, a2, n);
      *((_BYTE *)v22 + n) = 0;
    }
  }
  if ( a6 <= a4 || a7 <= a5 )
    v12 = (__m128i)-1LL;
  else
    v12 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6 - a4), _mm_cvtsi32_si128(a7 - a5)));
  v29 = a3;
  si128 = v12;
  v13 = sub_4C3C90(a1, (__int64)&v22);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v14 = v24;
  if ( v24 )
  {
    v15 = v25;
    if ( (_QWORD)v25 )
    {
      v16 = 0;
      do
      {
        v17 = (__int64 *)(v14 + 40 * v16);
        jvalue_t_clear(v17 + 3);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18, (const char *)&v22);
        }
        ++v16;
        v14 = v24;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v14, (const char *)&v22);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, (const char *)&v22);
  }
  return v13;
}
