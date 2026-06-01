__int64 __fastcall sub_704630(_QWORD *a1, __int64 a2, __int64 *a3, char *a4, int a5, __m128i a6, __m128i a7, __m128 a8)
{
  __int64 v11; // rbp
  __int64 i; // r12
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  size_t v16; // r15
  void *v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+1Ch] [rbp-3Ch]

  v22 = a2;
  v23 = a5;
  sub_6F5C40((__int64)a1);
  v11 = *a3;
  for ( i = *a3 + 24 * a3[1]; i != v11; ++a1[10] )
  {
    v16 = *(_QWORD *)(v11 + 8);
    v17 = nullptr;
    a6 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
    if ( v16 )
    {
      v18 = *(_QWORD *)(v11 + 8);
      v21 = a6;
      v17 = (void *)qalloc_or_throw(v18);
      memcpy(v17, *(const void **)v11, v16);
      a6 = _mm_load_si128(&v21);
    }
    v13 = a1[10];
    v14 = a1[9];
    if ( a1[11] < (unsigned __int64)(v13 + 1) )
    {
      v21 = a6;
      v19 = qvector_reserve(a1 + 9, v14, v13 + 1, 24);
      v13 = a1[10];
      a6 = _mm_load_si128(&v21);
      a1[9] = v19;
      v14 = v19;
    }
    v11 += 24;
    v15 = v14 + 24 * v13;
    *(_QWORD *)v15 = v17;
    *(__m128i *)(v15 + 8) = a6;
  }
  if ( a4 && *a4 )
    return sub_702A10((__int64)a1, v22, a4, v23, *(double *)a6.m128i_i64, a7, a8);
  sub_6FCBC0(a1);
  sub_6F8510((__int64)a1);
  return 1;
}
