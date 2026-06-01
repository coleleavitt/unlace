void __fastcall sub_1F72C40(char **a1, char *a2, _QWORD *a3, _QWORD *a4)
{
  char *v7; // rsi
  char *v8; // r14
  char *v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r12
  char *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  __int64 v25; // [rsp+0h] [rbp-58h] BYREF
  char *v26; // [rsp+8h] [rbp-50h]
  _QWORD *v27; // [rsp+10h] [rbp-48h]
  _QWORD *v28; // [rsp+18h] [rbp-40h]

  v7 = a1[1];
  v8 = *a1;
  v9 = (char *)(a2 - *a1);
  v10 = (v7 - *a1) >> 4;
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_18;
  }
  v11 = 2 * v10;
  v12 = -16;
  if ( v10 > 2 * v10 || v11 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v11 )
  {
LABEL_18:
    v12 = 16 * v11;
LABEL_3:
    v28 = a4;
    v27 = a3;
    v26 = v9;
    v25 = (__int64)v7;
    v13 = operator new(v12);
    v9 = v26;
    a3 = v27;
    a4 = v28;
    v14 = v13;
    v15 = (char *)(v13 + v12);
    v16 = v13 + 16;
    goto LABEL_4;
  }
  v16 = 16;
  v15 = nullptr;
  v14 = 0;
LABEL_4:
  v17 = *a4;
  v18 = &v9[v14];
  *(_QWORD *)v18 = *a3;
  *((_QWORD *)v18 + 1) = v17;
  if ( a2 == v8 )
  {
    if ( a2 == v7 )
      goto LABEL_11;
  }
  else
  {
    v19 = 0;
    v20 = 0;
    v21 = (unsigned __int64)(a2 - 16 - v8) >> 4;
    do
    {
      ++v20;
      *(__m128i *)(v14 + v19) = _mm_loadu_si128((const __m128i *)&v8[v19]);
      v19 += 16;
    }
    while ( v21 + 1 > v20 );
    v16 = v14 + 16 * (v21 + 2);
    if ( a2 == v7 )
      goto LABEL_13;
  }
  v22 = 0;
  v23 = 0;
  v24 = ((unsigned __int64)(v7 - a2 - 16) >> 4) + 1;
  do
  {
    ++v23;
    *(__m128i *)(v16 + v22) = _mm_loadu_si128((const __m128i *)&a2[v22]);
    v22 += 16;
  }
  while ( v24 > v23 );
  v16 += 16 * v24;
LABEL_11:
  if ( v8 )
LABEL_13:
    operator delete(v8);
  v25 = v16;
  a1[2] = v15;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v25);
}
