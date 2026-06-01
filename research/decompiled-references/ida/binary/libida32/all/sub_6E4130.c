__int64 __fastcall sub_6E4130(
        _QWORD *a1,
        const char *a2,
        __int64 *a3,
        void **a4,
        int a5,
        __m128i a6,
        __m128i a7,
        __m128 a8)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 i; // r12
  char *v16; // rax
  size_t v17; // r15
  void *v18; // r14
  __int64 v19; // rax
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  const char *v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+1Ch] [rbp-3Ch]

  v22 = a2;
  v23 = a5;
  sub_6D5600((__int64)a1);
  v14 = *a3;
  for ( i = *a3 + 24 * a3[1]; i != v14; ++a1[10] )
  {
    v17 = *(_QWORD *)(v14 + 8);
    v18 = nullptr;
    a6 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
    if ( v17 )
    {
      v18 = (void *)qalloc_or_throw(*(_QWORD *)(v14 + 8), a2, v10, v11, v12, v13, *(_OWORD *)&a6, v22);
      memcpy(v18, *(const void **)v14, v17);
      a6 = _mm_load_si128(&v21);
    }
    v10 = a1[10];
    a2 = (const char *)a1[9];
    if ( a1[11] < (unsigned __int64)(v10 + 1) )
    {
      v21 = a6;
      v19 = qvector_reserve(a1 + 9, a2, v10 + 1, 24);
      v10 = a1[10];
      a6 = _mm_load_si128(&v21);
      a1[9] = v19;
      a2 = (const char *)v19;
    }
    v14 += 24;
    v16 = (char *)&a2[24 * v10];
    *(_QWORD *)v16 = v18;
    *(__m128i *)(v16 + 8) = a6;
  }
  if ( a4 && *(_BYTE *)a4 )
    return sub_6E2510((__int64)a1, (__int64)v22, a4, v23, *(double *)a6.m128i_i64, a7, a8);
  sub_6DD970(a1);
  sub_6D7ED0((__int64)a1);
  return 1;
}

