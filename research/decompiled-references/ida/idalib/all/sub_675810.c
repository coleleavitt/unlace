__int64 __fastcall sub_675810(char **a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __m128i *v7; // rbx
  char v8; // r8
  const __m128i *v9; // r14
  bool v10; // al
  const __m128i *v11; // rbp
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  char v20; // [rsp+Fh] [rbp-39h]

  if ( !a2 )
    return 0;
  if ( (a3 >= a4) | (*(_BYTE *)(a2 + 17) >> 7) )
    return 0;
  sub_674A10(a1, a2);
  v7 = *(__m128i **)(a2 + 88);
  v8 = 0;
  v9 = (__m128i *)((char *)v7 + 40 * *(int *)(a2 + 80));
  if ( v7 == v9 )
    return 0;
  while ( v7->m128i_i64[0] < a3 )
  {
    v10 = v7->m128i_i64[1] < a4 && a3 < v7->m128i_i64[1];
    if ( v10 )
    {
      v7->m128i_i64[1] = a3;
      v8 = v10;
    }
    v7 = (__m128i *)((char *)v7 + 40);
    if ( v9 == v7 )
      goto LABEL_26;
  }
  if ( v9 != v7 )
  {
    v11 = v7;
    do
    {
      if ( v11->m128i_i64[0] >= a4 )
        break;
      if ( v11->m128i_i64[1] < a4 )
      {
        free_regvar(v11);
        v8 = 1;
      }
      else
      {
        if ( v7 < v11 )
        {
          v20 = v8;
          free_regvar(v7);
          v12 = _mm_loadu_si128(v11);
          v13 = v11[1].m128i_i64[0];
          v7[2].m128i_i64[0] = 0;
          *v7 = v12;
          v7[1] = 0;
          v14 = qstrdup(v13);
          v15 = v11[1].m128i_i64[1];
          v7[1].m128i_i64[0] = v14;
          v16 = qstrdup(v15);
          v17 = v11[2].m128i_i64[0];
          v7[1].m128i_i64[1] = v16;
          v18 = qstrdup(v17);
          v8 = v20;
          v7[2].m128i_i64[0] = v18;
        }
        if ( a3 < v7->m128i_i64[0] )
        {
          v7->m128i_i64[0] = a3;
          v8 = 1;
        }
        v7 = (__m128i *)((char *)v7 + 40);
      }
      v11 = (const __m128i *)((char *)v11 + 40);
    }
    while ( v9 != v11 );
    if ( !v8 )
      return 0;
    if ( v7 < v11 )
    {
      *(_DWORD *)(a2 + 80) += 858993459 * (((char *)v11 - (char *)v7) >> 3);
      if ( v11 < v9 )
        memmove(v7, v11, (char *)v9 - (char *)v11);
    }
LABEL_25:
    sub_674600((__int64 *)a1, a2, 1);
    return 1;
  }
LABEL_26:
  if ( v8 )
    goto LABEL_25;
  return 0;
}
