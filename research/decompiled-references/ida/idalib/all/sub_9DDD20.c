void __fastcall sub_9DDD20(char **a1, char *a2, const __m128i *a3)
{
  char *v5; // rsi
  char *v6; // r13
  char *v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  char *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  char *v22; // [rsp+10h] [rbp-48h]
  const __m128i *v23; // [rsp+18h] [rbp-40h]

  v5 = a1[1];
  v6 = *a1;
  v7 = (char *)(a2 - *a1);
  v8 = (v5 - *a1) >> 4;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_18;
  }
  v9 = 2 * v8;
  v10 = -16;
  if ( v8 > 2 * v8 || v9 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_18:
    v10 = 16 * v9;
LABEL_3:
    v23 = a3;
    v22 = v7;
    v21 = (__int64)v5;
    v11 = operator new(v10);
    v7 = v22;
    a3 = v23;
    v12 = v11;
    v13 = (char *)(v11 + v10);
    v14 = v11 + 16;
    goto LABEL_4;
  }
  v14 = 16;
  v13 = nullptr;
  v12 = 0;
LABEL_4:
  *(__m128i *)&v7[v12] = _mm_loadu_si128(a3);
  if ( a2 == v6 )
  {
    if ( a2 == v5 )
      goto LABEL_11;
  }
  else
  {
    v15 = 0;
    v16 = 0;
    v17 = (unsigned __int64)(a2 - 16 - v6) >> 4;
    do
    {
      ++v16;
      *(__m128i *)(v12 + v15) = _mm_loadu_si128((const __m128i *)&v6[v15]);
      v15 += 16;
    }
    while ( v17 + 1 > v16 );
    v14 = v12 + 16 * (v17 + 2);
    if ( a2 == v5 )
      goto LABEL_13;
  }
  v18 = 0;
  v19 = 0;
  v20 = ((unsigned __int64)(v5 - a2 - 16) >> 4) + 1;
  do
  {
    ++v19;
    *(__m128i *)(v14 + v18) = _mm_loadu_si128((const __m128i *)&a2[v18]);
    v18 += 16;
  }
  while ( v20 > v19 );
  v14 += 16 * v20;
LABEL_11:
  if ( v6 )
LABEL_13:
    operator delete(v6);
  v21 = v14;
  a1[2] = v13;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v21);
}
