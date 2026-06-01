__int64 __fastcall undesired_chooser_t__::vfunc_10(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v14; // rsi
  unsigned int v15; // ebp
  size_t v17; // rbp
  __int64 v18; // rbx
  void *v19; // r12
  __int64 v20; // rdx
  __m128i v21; // xmm0
  char *v22; // rax
  __int64 v23; // rax
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v26; // [rsp+18h] [rbp-20h]

  v14 = &byte_5;
  v26 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  v15 = 0;
  if ( (unsigned __int8)sub_196F50(
                          (int)&src,
                          5,
                          (int)"Please enter file path",
                          a12,
                          a13,
                          a14,
                          (__m128)0LL,
                          a3,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          0) )
  {
    v17 = n[0];
    v18 = *(_QWORD *)(a1 + 184);
    v19 = nullptr;
    if ( n[0] )
    {
      v19 = (void *)qalloc_or_throw(n[0]);
      memcpy(v19, src, v17);
    }
    v20 = *(_QWORD *)(v18 + 8);
    v14 = *(const char **)v18;
    if ( *(_QWORD *)(v18 + 16) < (unsigned __int64)(v20 + 1) )
    {
      v23 = qvector_reserve(v18, v14, v20 + 1, 24);
      *(_QWORD *)v18 = v23;
      v20 = *(_QWORD *)(v18 + 8);
      v14 = (const char *)v23;
    }
    v21 = (__m128i)v17;
    v15 = 1;
    v22 = (char *)&v14[24 * v20];
    *(_QWORD *)v22 = v19;
    *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v21, v21);
    ++*(_QWORD *)(v18 + 8);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, v14);
  }
  return v15;
}
