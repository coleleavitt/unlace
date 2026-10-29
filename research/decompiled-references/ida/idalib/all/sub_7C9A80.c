unsigned __int64 __fastcall sub_7C9A80(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  size_t v4; // r12
  __m128i *v5; // rbp
  __int64 v6; // r12
  size_t v7; // r14
  __int64 v8; // r15
  void *v9; // rdi
  __int64 v10; // rax
  void *v11; // rdx
  __m128i v12; // xmm0
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __m128i v15; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  src = nullptr;
  v15 = 0;
  sub_7C9450(a1 + 8, (__int64)&src, 1);
  v2 = v15.m128i_i64[0];
  if ( v15.m128i_i64[0] )
  {
    v3 = v15.m128i_i64[0] + 1;
    v4 = v15.m128i_i64[0] - 1;
    if ( v15.m128i_i64[1] >= (unsigned __int64)(v15.m128i_i64[0] + 1) )
    {
      ++v15.m128i_i64[0];
      *((_BYTE *)src + v2) = 0;
      if ( v2 == 1 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  else
  {
    if ( v15.m128i_i64[1] > 1uLL )
    {
      v15.m128i_i64[0] = 2;
      *((_BYTE *)src + 1) = 0;
      goto LABEL_4;
    }
    v4 = 0;
    v3 = 2;
  }
  src = (void *)qvector_reserve(&src, src, v3, 1);
  v15.m128i_i64[0] = v3;
  *((_BYTE *)src + v4 + 1) = 0;
  if ( v4 )
LABEL_15:
    memmove((char *)src + 1, src, v4);
LABEL_4:
  *(_BYTE *)src = 92;
  v5 = (__m128i *)src;
  if ( v15.m128i_i64[0] )
  {
    v6 = v15.m128i_i64[0] + 16;
    v7 = v15.m128i_i64[0] - 1;
    v8 = v15.m128i_i64[0] + 15;
    if ( v15.m128i_i64[1] >= (unsigned __int64)(v15.m128i_i64[0] + 16) )
      goto LABEL_6;
  }
  else
  {
    if ( v15.m128i_i64[1] > 0x10uLL )
    {
      v15.m128i_i64[0] = 17;
      *((_BYTE *)src + 16) = 0;
      goto LABEL_8;
    }
    v7 = 0;
    v6 = 17;
    v8 = 16;
  }
  src = (void *)qvector_reserve(&src, src, v6, 1);
  v5 = (__m128i *)src;
LABEL_6:
  v15.m128i_i64[0] = v6;
  v5->m128i_i8[v8] = 0;
  v5 = (__m128i *)src;
  if ( v7 )
    memmove((char *)src + 16, src, v7);
LABEL_8:
  *v5 = _mm_load_si128((const __m128i *)&xmmword_23A8490);
  v10 = *(_QWORD *)(a2 + 16);
  v11 = src;
  v12 = _mm_loadu_si128(&v15);
  src = *(void **)a2;
  v9 = src;
  *(_QWORD *)a2 = v11;
  v15.m128i_i64[1] = v10;
  *(__m128i *)(a2 + 8) = v12;
  if ( v9 )
  {
    v15.m128i_i64[0] = 0;
    qfree(v9);
  }
  return v16 - __readfsqword(0x28u);
}
