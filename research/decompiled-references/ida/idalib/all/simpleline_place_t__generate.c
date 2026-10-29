__int64 __fastcall simpleline_place_t__generate(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        char *a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7)
{
  unsigned __int64 v7; // rax
  char *v11; // r10
  __int64 v13; // r12
  __int64 v14; // rdx
  void *v15; // r15
  size_t v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  char v20; // al
  __int64 v22; // rax
  size_t na; // [rsp+0h] [rbp-50h]
  size_t n; // [rsp+0h] [rbp-50h]
  char *v25; // [rsp+8h] [rbp-48h]
  const void **v26; // [rsp+8h] [rbp-48h]

  v7 = *(unsigned int *)(a1 + 12);
  if ( v7 >= a6[1] )
    return 0;
  if ( a7 <= 0 )
    return 0;
  v11 = a4;
  v13 = 32 * v7;
  v14 = 32 * v7 + *a6;
  v15 = nullptr;
  v16 = *(_QWORD *)(v14 + 8);
  if ( v16 )
  {
    n = *(_QWORD *)(v14 + 8);
    v26 = (const void **)(32 * v7 + *a6);
    v15 = (void *)qalloc_or_throw(n);
    memcpy(v15, *v26, n);
    v11 = a4;
    v16 = n;
  }
  v17 = a2[1];
  v18 = *a2;
  if ( a2[2] < (unsigned __int64)(v17 + 1) )
  {
    v25 = v11;
    na = v16;
    v22 = qvector_reserve(a2, v18, v17 + 1, 24);
    v17 = a2[1];
    v11 = v25;
    *a2 = v22;
    v18 = v22;
    v16 = na;
  }
  v19 = v18 + 24 * v17;
  *(_QWORD *)v19 = v15;
  *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  ++a2[1];
  v20 = *(_BYTE *)(*a6 + v13 + 24);
  if ( v20 == 1 )
    v20 = 4;
  *v11 = v20;
  *a5 = *(_DWORD *)(*a6 + v13 + 28);
  *a3 = 0;
  return 1;
}
