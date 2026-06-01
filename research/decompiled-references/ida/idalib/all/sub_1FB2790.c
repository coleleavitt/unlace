void __fastcall sub_1FB2790(char **a1, char *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char *v8; // rsi
  char *v9; // r14
  char *v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r13
  char *v16; // r15
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  char *v26; // [rsp+8h] [rbp-60h] BYREF
  char *v27; // [rsp+10h] [rbp-58h]
  _QWORD *v28; // [rsp+18h] [rbp-50h]
  _QWORD *v29; // [rsp+20h] [rbp-48h]
  _QWORD *v30; // [rsp+28h] [rbp-40h]

  v8 = a1[1];
  v9 = *a1;
  v10 = (char *)(a2 - *a1);
  v11 = (v8 - *a1) >> 4;
  if ( !v11 )
  {
    v12 = 1;
    goto LABEL_18;
  }
  v12 = 2 * v11;
  v13 = -16;
  if ( v11 > 2 * v11 || v12 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v12 )
  {
LABEL_18:
    v13 = 16 * v12;
LABEL_3:
    v30 = a5;
    v29 = a4;
    v28 = a3;
    v27 = v10;
    v26 = v8;
    v14 = operator new(v13);
    v10 = v27;
    a3 = v28;
    a4 = v29;
    v15 = v14;
    v16 = (char *)(v14 + v13);
    a5 = v30;
    v17 = v14 + 16;
    goto LABEL_4;
  }
  v17 = 16;
  v16 = nullptr;
  v15 = 0;
LABEL_4:
  v18 = *a3;
  v19 = *a4 - *a5;
  LODWORD(v28) = *(_DWORD *)a4 - *(_DWORD *)a5;
  v26 = (char *)HIDWORD(v18);
  v27 = (char *)HIDWORD(v19);
  LODWORD(v27) = v18;
  *(__m128i *)&v10[v15] = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(HIDWORD(v18))),
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v28), _mm_cvtsi32_si128(HIDWORD(v19))));
  if ( a2 == v9 )
  {
    if ( a2 == v8 )
      goto LABEL_11;
  }
  else
  {
    v20 = 0;
    v21 = 0;
    v22 = (unsigned __int64)(a2 - 16 - v9) >> 4;
    do
    {
      ++v21;
      *(__m128i *)(v15 + v20) = _mm_loadu_si128((const __m128i *)&v9[v20]);
      v20 += 16;
    }
    while ( v22 + 1 > v21 );
    v17 = v15 + 16 * (v22 + 2);
    if ( a2 == v8 )
      goto LABEL_13;
  }
  v23 = 0;
  v24 = 0;
  v25 = ((unsigned __int64)(v8 - a2 - 16) >> 4) + 1;
  do
  {
    ++v24;
    *(__m128i *)(v17 + v23) = _mm_loadu_si128((const __m128i *)&a2[v23]);
    v23 += 16;
  }
  while ( v24 < v25 );
  v17 += 16 * v25;
LABEL_11:
  if ( v9 )
LABEL_13:
    operator delete(v9);
  v26 = (char *)v17;
  a1[2] = v16;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v26);
}
