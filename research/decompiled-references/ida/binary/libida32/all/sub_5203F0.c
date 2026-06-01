__int64 __fastcall sub_5203F0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 result; // rax
  size_t v15; // rbx
  void *v16; // r12
  __m128i si128; // xmm0
  void *v18; // rdi
  __int64 v19; // rdi
  __m128i v20[3]; // [rsp+0h] [rbp-38h] BYREF

  v6 = a1[1];
  v7 = *a1;
  v8 = v7 + 48 * v6;
  v9 = sub_51A490(v7, v8, a2);
  if ( v9 == v8 )
  {
    sub_520270(a1, (const char *)a2);
    return 1;
  }
  v10 = v9;
  v11 = *(_QWORD *)(v9 + 8);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v12 = *(const char **)a2;
    v13 = haystack;
    if ( !v11 )
      goto LABEL_5;
  }
  else
  {
    v12 = haystack;
    if ( !v11 )
      goto LABEL_6;
  }
  v13 = *(const char **)v10;
LABEL_5:
  if ( strcmp(v13, v12) )
  {
    sub_51F6F0(a1, (const char *)v10, a2);
    return 1;
  }
LABEL_6:
  result = 0;
  if ( !a3 )
    return result;
  v15 = *(_QWORD *)(a2 + 32);
  v16 = nullptr;
  si128 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
  if ( v15 )
  {
    v19 = *(_QWORD *)(a2 + 32);
    v20[0] = si128;
    v16 = (void *)qalloc_or_throw(v19, v12);
    memcpy(v16, *(const void **)(a2 + 24), v15);
    si128 = _mm_load_si128(v20);
  }
  v18 = *(void **)(v10 + 24);
  if ( v18 )
  {
    *(_QWORD *)(v10 + 32) = 0;
    v20[0] = si128;
    qfree(v18);
    si128 = _mm_load_si128(v20);
  }
  *(_QWORD *)(v10 + 24) = v16;
  *(__m128i *)(v10 + 32) = si128;
  return 1;
}

