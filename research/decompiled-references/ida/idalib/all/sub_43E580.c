__int64 __fastcall sub_43E580(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  unsigned int *v15; // rdi
  unsigned int *v16; // rsi
  bool v17; // cf
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __m128i *v21; // rdi
  const __m128i *v22; // rsi
  unsigned __int64 v23; // rbp
  __m128i v24; // xmm1
  unsigned __int64 v25; // rcx
  const __m128i *i; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rsi
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  __int8 v30; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v5 = a2[1];
  v6 = a3[1];
  v7 = *a3;
  v8 = (v6 - *a3) >> 2;
  v9 = *a2;
  v10 = v8 + ((v5 - *a2) >> 2);
  if ( v10 >> 59 )
    std::__throw_length_error("vector::reserve");
  v12 = *a3;
  if ( v10 )
  {
    v19 = 16 * v10;
    v20 = operator new(16 * v10);
    v21 = *(__m128i **)a1;
    v22 = *(const __m128i **)(a1 + 8);
    v23 = v20;
    v24 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
    v25 = v20;
    for ( i = *(const __m128i **)a1; v22 != i; *(__m128i *)(v25 - 16) = v27 )
    {
      v27 = _mm_loadu_si128(i++);
      v25 += 16LL;
    }
    if ( v21 )
    {
      v28 = *(_QWORD *)(a1 + 16);
      v29 = v24;
      operator delete(v21, v28 - (_QWORD)v21);
      v24 = _mm_load_si128(&v29);
    }
    *(__m128i *)a1 = v24;
    *(_QWORD *)(a1 + 16) = v19 + v23;
    v6 = a3[1];
    v7 = *a3;
    v9 = *a2;
    v5 = a2[1];
    v12 = *a3;
    v8 = (v6 - *a3) >> 2;
  }
  v13 = 0;
  v14 = 0;
  if ( v9 != v5 )
  {
    while ( v13 < (v6 - v7) >> 2 )
    {
      v15 = (unsigned int *)(v9 + 4 * v14);
      v16 = (unsigned int *)(v7 + 4 * v13);
      if ( *v15 < *v16 )
      {
        v30 = 0;
        sub_438D80(a1, v15, &v30);
        ++v14;
      }
      else
      {
        v17 = *v16 < *v15;
        v30 = 1;
        if ( v17 )
        {
          sub_438D80(a1, v16, &v30);
        }
        else
        {
          sub_438D80(a1, v16, &v30);
          ++v14;
        }
        ++v13;
      }
      v5 = a2[1];
      v9 = *a2;
      v6 = a3[1];
      v7 = *a3;
      if ( v14 >= (v5 - *a2) >> 2 )
        goto LABEL_24;
    }
    if ( v14 >= (v5 - v9) >> 2 )
    {
LABEL_24:
      v12 = v7;
      v8 = (v6 - v7) >> 2;
      goto LABEL_16;
    }
    do
    {
      v30 = 0;
      sub_438D80(a1, (unsigned int *)(v9 + 4 * v14), &v30);
      v9 = *a2;
      ++v14;
    }
    while ( v14 < (a2[1] - *a2) >> 2 );
    v12 = *a3;
    v8 = (a3[1] - *a3) >> 2;
  }
LABEL_16:
  if ( v13 < v8 )
  {
    do
    {
      v30 = 1;
      sub_438D80(a1, (unsigned int *)(v12 + 4 * v13), &v30);
      v12 = *a3;
      ++v13;
    }
    while ( v13 < (a3[1] - *a3) >> 2 );
  }
  return a1;
}
