__m128i *__fastcall sub_705040(__int64 a1, __int32 *a2)
{
  __int64 v4; // rbp
  const __m128i *v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // r15
  __int64 v8; // rbp
  __int32 v9; // esi
  __int64 v10; // r9
  const __m128i *v11; // rdi
  __m128i *result; // rax
  __m128i *v13; // rcx
  int v14; // edx
  int v15; // edx
  __int32 v16; // eax
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  const __m128i *v20; // r14
  __m128i *v21; // r10
  __int64 v22; // rax
  __m128i *v23; // rdx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  size_t v26; // [rsp+8h] [rbp-50h]
  unsigned int v27; // [rsp+8h] [rbp-50h]
  int v28; // [rsp+10h] [rbp-48h]

  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v26 = 20LL * (unsigned int)(2 * v4);
    v7 = v26;
    v17 = sub_186B270(v26);
    v18 = 2 * v4;
    v5 = (const __m128i *)v17;
    if ( 2 * (_DWORD)v4 )
    {
      v19 = v17 + 12;
      do
      {
        *(_QWORD *)(v19 - 12) = 0;
        v19 += 40;
        *(_QWORD *)(v19 - 32) = 0;
        *(_QWORD *)(v19 - 40) = -1;
        *(_QWORD *)(v19 - 20) = -1;
      }
      while ( (const __m128i *)v19 != (const __m128i *)((char *)&v5->m128i_u64[5 * (v4 & 0x7FFFFFFF) + 1] + 4) );
    }
    v20 = *(const __m128i **)a1;
    v6 = v18 - 1;
    v8 = (__int64)v5->m128i_i64 + v26;
    v21 = (__m128i *)(*(_QWORD *)a1 + 20LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v21 )
    {
      do
      {
        while ( v20->m128i_i32[1] != 2 )
        {
          v20 = (const __m128i *)((char *)v20 + 20);
          if ( v21 == v20 )
            goto LABEL_35;
        }
        v22 = 20LL * (v20->m128i_i32[0] & v6);
        v23 = (__m128i *)((char *)v5 + v22);
        if ( v22 == v26 )
        {
LABEL_40:
          if ( v23 == v5 )
          {
LABEL_47:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v24 = (__m128i *)v5;
          while ( v24->m128i_i32[1] )
          {
            v24 = (__m128i *)((char *)v24 + 20);
            if ( v23 == v24 )
              goto LABEL_47;
          }
        }
        else
        {
          v24 = (__m128i *)((char *)v5 + v22);
          while ( v24->m128i_i32[1] )
          {
            v24 = (__m128i *)((char *)v24 + 20);
            if ( (__m128i *)v8 == v24 )
              goto LABEL_40;
          }
        }
        v25 = _mm_loadu_si128(v20);
        v20 = (const __m128i *)((char *)v20 + 20);
        *v24 = v25;
        v24[1].m128i_i32[0] = v20[-1].m128i_i32[3];
      }
      while ( v21 != v20 );
LABEL_35:
      v21 = *(__m128i **)a1;
    }
    if ( v21 )
    {
      v28 = v18;
      v27 = v18 - 1;
      sub_186B220(v21);
      v18 = v28;
      v6 = v27;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v18;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(const __m128i **)a1;
    v6 = v4 - 1;
    v7 = 20 * v4;
    v8 = *(_QWORD *)a1 + 20 * v4;
  }
  v9 = *a2;
  v10 = *a2 & v6;
  v11 = (const __m128i *)((char *)v5 + 20 * v10);
  if ( 20 * v10 != v7 )
  {
    result = (__m128i *)((char *)v5 + 20 * v10);
    v13 = nullptr;
    while ( 1 )
    {
      v14 = result->m128i_i32[1];
      if ( v14 == 2 )
      {
        if ( v9 == result->m128i_i32[0] && v9 == result->m128i_i32[2] )
        {
          result->m128i_i64[1] = *(_QWORD *)a2;
          v15 = a2[2];
          result->m128i_i32[1] = 2;
          result[1].m128i_i32[0] = v15;
          return result;
        }
      }
      else
      {
        if ( !v14 )
        {
          if ( v13 )
            goto LABEL_21;
          v13 = result;
          goto LABEL_22;
        }
        v13 = result;
      }
      result = (__m128i *)((char *)result + 20);
      if ( result == (__m128i *)v8 )
        goto LABEL_15;
    }
  }
  v13 = nullptr;
  while ( 1 )
  {
LABEL_15:
    if ( v11 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v16 = v5->m128i_i32[1];
    if ( v16 != 2 )
      break;
    if ( v9 == v5->m128i_i32[0] && v9 == v5->m128i_i32[2] )
    {
      v5->m128i_i64[1] = *(_QWORD *)a2;
      result = (__m128i *)(unsigned int)a2[2];
      v5->m128i_i32[1] = 2;
      v5[1].m128i_i32[0] = (int)result;
      return result;
    }
LABEL_14:
    v5 = (const __m128i *)((char *)v5 + 20);
  }
  if ( v16 )
  {
    v13 = (__m128i *)v5;
    goto LABEL_14;
  }
  if ( v13 )
LABEL_21:
    --*(_DWORD *)(a1 + 16);
  else
    v13 = (__m128i *)v5;
LABEL_22:
  v13->m128i_i64[1] = *(_QWORD *)a2;
  result = (__m128i *)(unsigned int)a2[2];
  v13->m128i_i32[1] = 2;
  v13[1].m128i_i32[0] = (int)result;
  v13->m128i_i32[0] = v9;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

