char *__fastcall sub_ECC3C0(
        __int64 a1,
        _QWORD *a2,
        int a3,
        char a4,
        unsigned int a5,
        int a6,
        int a7,
        const void *a8,
        const void *a9,
        _QWORD *a10,
        __int64 a11,
        int a12,
        const void *a13,
        int a14,
        int a15)
{
  _QWORD *v18; // r12
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  char *v23; // rdi
  __int64 v24; // rdx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r12
  char *v31; // rdi
  char *result; // rax
  __int64 v33; // rsi
  char *v34; // rdi
  __int64 v35; // rdx
  size_t v36; // rdx

  v18 = a10;
  sub_EC5910((_WORD *)a1, 256);
  *(_DWORD *)(a1 + 16) = a6;
  v19 = a5;
  *(_DWORD *)(a1 + 20) = a7;
  v20 = a11;
  *(_DWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 12) = a4;
  v21 = 8LL * (unsigned int)(a14 + a7 + a6);
  *(_BYTE *)(a1 + 13) = a5;
  *(_DWORD *)(a1 + 24) = a12;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = a15;
  *(_QWORD *)(a1 + 48) = a11;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = a14;
  v22 = a2[294];
  a2[304] += v21;
  v23 = (char *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v23[v21] && v22 )
    a2[294] = &v23[v21];
  else
    v23 = (char *)sub_962430((__int64)(a2 + 294), v21, v21, 3, a5, a11);
  *(_QWORD *)(a1 + 72) = v23;
  if ( v21 )
    memmove(v23, a8, v21);
  v24 = a2[294];
  a2[304] += v21;
  v25 = (_QWORD *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v25[(unsigned __int64)v21 / 8] && v24 )
    a2[294] = &v25[(unsigned __int64)v21 / 8];
  else
    v25 = (_QWORD *)sub_962430((__int64)(a2 + 294), v21, v21, 3, v19, v20);
  *(_QWORD *)(a1 + 32) = v25;
  v26 = v21 >> 3;
  if ( v21 )
  {
    if ( v21 == 8 )
      goto LABEL_14;
    v27 = 0;
    do
    {
      *(__m128i *)&v25[v27] = _mm_loadu_si128((const __m128i *)&a10[v27]);
      v27 += 2;
    }
    while ( v27 != 2 * (v26 >> 1) );
    v28 = v26 & 0xFFFFFFFFFFFFFFFELL;
    v18 = &a10[v28];
    v25 = (_QWORD *)((char *)v25 + v28 * 8);
    if ( (v26 & 0xFFFFFFFFFFFFFFFELL) != v26 )
LABEL_14:
      *v25 = *v18;
  }
  v29 = a2[294];
  v30 = 8LL * (unsigned int)(*(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20));
  a2[304] += v30;
  v31 = (char *)((v29 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v31[v30] && v29 )
    a2[294] = &v31[v30];
  else
    v31 = (char *)sub_962430((__int64)(a2 + 294), v30, v30, 3, v19, v20);
  *(_QWORD *)(a1 + 56) = v31;
  if ( v30 )
    memmove(v31, a9, v30);
  result = (char *)a2[294];
  v33 = 8LL * *(unsigned int *)(a1 + 24);
  a2[304] += v33;
  v34 = (char *)((unsigned __int64)(result + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v34[v33] && result )
  {
    a2[294] = &v34[v33];
  }
  else
  {
    result = (char *)sub_962430((__int64)(a2 + 294), v33, v33, 3, v19, v20);
    v34 = result;
  }
  v35 = *(unsigned int *)(a1 + 24);
  *(_QWORD *)(a1 + 64) = v34;
  v36 = 8 * v35;
  if ( v36 )
    return (char *)memmove(v34, a13, v36);
  return result;
}

