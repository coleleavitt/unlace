char *__fastcall sub_E88460(__int64 a1, const __m128i *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rax
  const __m128i *v6; // rbx
  __int64 v7; // r9
  int v8; // r15d
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 m128i_i64; // rbp
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // esi
  int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // esi
  unsigned int v22; // ecx
  __int64 v23; // r15
  const __m128i *v24; // rdi
  char *result; // rax
  __m128i *v26; // rsi
  int v27; // edx
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rax
  const __m128i *v34; // r9
  __m128i *v35; // r10
  __int64 v36; // rax
  __m128i *v37; // rdx
  __m128i *v38; // rax
  __m128i v39; // xmm0
  size_t v40; // [rsp+0h] [rbp-58h]
  int v41; // [rsp+0h] [rbp-58h]

  v4 = *(_DWORD *)(a1 + 8);
  if ( 3 * v4 < 4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16)) )
  {
    v40 = 48LL * v4;
    v10 = v40;
    v31 = sub_186B270(v40);
    v32 = 2 * v4;
    v6 = (const __m128i *)v31;
    v33 = v31 + 8;
    if ( 2 * v4 )
    {
      do
      {
        *(_QWORD *)(v33 - 8) = 0;
        v33 += 24;
        *(_QWORD *)(v33 - 24) = 0;
        *(_QWORD *)(v33 - 16) = 0;
      }
      while ( (unsigned __int64 *)v33 != &v6[v40 / 0x10].m128i_u64[1] );
    }
    v34 = *(const __m128i **)a1;
    v8 = v32 - 1;
    m128i_i64 = (__int64)v6[v40 / 0x10].m128i_i64;
    v35 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v35 )
    {
      do
      {
        while ( v34->m128i_i32[1] != 2 )
        {
          v34 = (const __m128i *)((char *)v34 + 24);
          if ( v35 == v34 )
            goto LABEL_39;
        }
        v36 = 24LL * (v34->m128i_i32[0] & (unsigned int)v8);
        v37 = (__m128i *)((char *)v6 + v36);
        if ( v36 == v40 )
        {
LABEL_45:
          if ( v37 == v6 )
          {
LABEL_52:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v38 = (__m128i *)v6;
          while ( v38->m128i_i32[1] )
          {
            v38 = (__m128i *)((char *)v38 + 24);
            if ( v37 == v38 )
              goto LABEL_52;
          }
        }
        else
        {
          v38 = (__m128i *)((char *)v6 + v36);
          while ( v38->m128i_i32[1] )
          {
            v38 = (__m128i *)((char *)v38 + 24);
            if ( (__m128i *)m128i_i64 == v38 )
              goto LABEL_45;
          }
        }
        v39 = _mm_loadu_si128(v34);
        v34 = (const __m128i *)((char *)v34 + 24);
        *v38 = v39;
        v38[1].m128i_i64[0] = v34[-1].m128i_i64[1];
      }
      while ( v35 != v34 );
LABEL_39:
      v35 = *(__m128i **)a1;
    }
    if ( v35 )
    {
      v41 = v32;
      sub_186B220(v35);
      v32 = v41;
    }
    v7 = a2->m128i_i64[1];
    *(_QWORD *)a1 = v6;
    *(_DWORD *)(a1 + 8) = v32;
    v9 = a2->m128i_i64[0];
    *(_DWORD *)(a1 + 16) = 0;
    if ( v7 )
      goto LABEL_3;
LABEL_43:
    v13 = 0;
    v12 = 0;
    goto LABEL_4;
  }
  v5 = v4;
  v6 = *(const __m128i **)a1;
  v7 = a2->m128i_i64[1];
  v8 = v4 - 1;
  v9 = a2->m128i_i64[0];
  v10 = 24 * v5;
  m128i_i64 = *(_QWORD *)a1 + 24 * v5;
  if ( !v7 )
    goto LABEL_43;
LABEL_3:
  v12 = *(_DWORD *)(v7 + 12);
  v13 = 2 * v12;
LABEL_4:
  v14 = 0;
  if ( v9 )
  {
    v14 = *(_DWORD *)(v9 + 12);
    v13 -= v14;
  }
  v15 = v14 - v12 - 1;
  v16 = v13 ^ (v15 << 8);
  v17 = (1 - v15 - v16) ^ (v16 >> 13);
  v18 = (v15 - v16 - v17) ^ (v17 >> 12);
  v19 = (v16 - v17 - v18) ^ (v18 << 16);
  v20 = (v17 - v18 - v19) ^ (v19 >> 5);
  v21 = (v18 - v19 - v20) ^ (v20 >> 3);
  v22 = (v20 - v21 - ((v19 - v20 - v21) ^ (v21 << 10))) ^ (((v19 - v20 - v21) ^ (v21 << 10)) >> 15);
  v23 = v22 & v8;
  v24 = (const __m128i *)((char *)v6 + 24 * v23);
  if ( 24 * v23 != v10 )
  {
    result = &v6->m128i_i8[24 * v23];
    v26 = nullptr;
    while ( 1 )
    {
      v27 = *((_DWORD *)result + 1);
      if ( v27 == 2 )
      {
        if ( *(_DWORD *)result == v22 && *((_QWORD *)result + 1) == v9 && *((_QWORD *)result + 2) == v7 )
        {
          v28 = _mm_loadu_si128(a2);
          *((_DWORD *)result + 1) = 2;
          *(__m128i *)(result + 8) = v28;
          return result;
        }
      }
      else
      {
        if ( !v27 )
        {
          if ( v26 )
            goto LABEL_26;
          v26 = (__m128i *)result;
          goto LABEL_27;
        }
        v26 = (__m128i *)result;
      }
      result += 24;
      if ( result == (char *)m128i_i64 )
        goto LABEL_19;
    }
  }
  v26 = nullptr;
  while ( 1 )
  {
LABEL_19:
    if ( v24 == v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (char *)v6->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( v6->m128i_i32[0] == v22 && v6->m128i_i64[1] == v9 && v6[1].m128i_i64[0] == v7 )
    {
      v29 = _mm_loadu_si128(a2);
      v6->m128i_i32[1] = 2;
      *(__m128i *)((char *)v6 + 8) = v29;
      return result;
    }
LABEL_18:
    v6 = (const __m128i *)((char *)v6 + 24);
  }
  if ( (_DWORD)result )
  {
    v26 = (__m128i *)v6;
    goto LABEL_18;
  }
  if ( v26 )
LABEL_26:
    --*(_DWORD *)(a1 + 16);
  else
    v26 = (__m128i *)v6;
LABEL_27:
  v30 = _mm_loadu_si128(a2);
  v26->m128i_i32[1] = 2;
  v26->m128i_i32[0] = v22;
  *(__m128i *)((char *)v26 + 8) = v30;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

