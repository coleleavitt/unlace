_QWORD *__fastcall sub_19E48E0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  const __m128i *v8; // r12
  unsigned int v9; // eax
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  const __m128i *v13; // r13
  _QWORD *i; // rdx
  __int64 v15; // rax
  const __m128i *v16; // rbx
  const __m128i *v17; // r14
  __int64 v18; // r12
  int v19; // r15d
  int v20; // r15d
  int v21; // eax
  size_t v22; // r9
  const void *v23; // r10
  unsigned int v24; // r8d
  __int64 *v25; // r11
  __int64 *v26; // rcx
  const void *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *j; // rdx
  int v31; // esi
  __int64 *v32; // rdx
  unsigned int v33; // r8d
  __int32 v34; // eax
  __int64 *v35; // rax
  int v36; // eax
  const __m128i *v37; // [rsp+0h] [rbp-68h]
  __int64 *v38; // [rsp+8h] [rbp-60h]
  const void *v39; // [rsp+10h] [rbp-58h]
  size_t v40; // [rsp+18h] [rbp-50h]
  __int64 *v41; // [rsp+20h] [rbp-48h]
  int v42; // [rsp+28h] [rbp-40h]
  unsigned int v43; // [rsp+2Ch] [rbp-3Ch]

  v6 = (unsigned int)(a2 - 1);
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(const __m128i **)a1;
  v9 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
        | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
        | ((v6 | (v6 >> 1)) >> 2)
        | v6
        | (v6 >> 1)) >> 16)
      | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
      | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
      | ((v6 | (v6 >> 1)) >> 2)
      | v6
      | (v6 >> 1))
     + 1;
  if ( v9 < 0x40 )
    v9 = 64;
  *(_DWORD *)(a1 + 16) = v9;
  result = (_QWORD *)sub_22300B0(24LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v12 = 24 * v7;
    v13 = (const __m128i *)((char *)v8 + 24 * v7);
    for ( i = &result[3 * v11]; i != result; *(result - 2) = 0 )
    {
      *result = -1;
      result += 3;
    }
    if ( v13 != v8 )
    {
      v15 = 24 * v7;
      v16 = v8;
      v17 = v8;
      v18 = v15;
      while ( 1 )
      {
        if ( v16->m128i_i64[0] == -1 || v16->m128i_i64[0] == -2 )
          goto LABEL_8;
        v19 = *(_DWORD *)(a1 + 16);
        if ( !v19 )
        {
          *(__m128i *)&dword_0 = _mm_loadu_si128(v16);
          BUG();
        }
        v20 = v19 - 1;
        v37 = *(const __m128i **)a1;
        v21 = sub_2248890(v16->m128i_i64[0], v16->m128i_i64[1]);
        v22 = v16->m128i_u64[1];
        v23 = (const void *)v16->m128i_i64[0];
        v24 = v20 & v21;
        if ( v22 )
        {
          v42 = 1;
          v25 = nullptr;
          while ( 1 )
          {
            v26 = &v37->m128i_i64[3 * v24];
            v27 = (const void *)*v26;
            if ( *v26 == -1 )
              break;
            if ( v27 == (const void *)-2LL )
            {
              if ( v23 == (const void *)-2LL )
                goto LABEL_29;
              if ( !v25 )
                v25 = &v37->m128i_i64[3 * v24];
            }
            else
            {
              v38 = &v37->m128i_i64[3 * v24];
              if ( v26[1] == v22 )
              {
                v43 = v24;
                v41 = v25;
                v40 = v22;
                v39 = v23;
                v36 = memcmp(v23, v27, v22);
                v23 = v39;
                v22 = v40;
                v25 = v41;
                v24 = v43;
                v26 = v38;
                if ( !v36 )
                  goto LABEL_29;
              }
            }
            v24 = v20 & (v42 + v24);
            ++v42;
          }
          if ( v23 == (const void *)-1LL )
            goto LABEL_29;
          v35 = &v37->m128i_i64[3 * v24];
          v26 = v25;
        }
        else
        {
          v31 = 1;
          v32 = nullptr;
          while ( 1 )
          {
            v26 = &v37->m128i_i64[3 * v24];
            if ( *v26 == -1 )
              break;
            if ( *v26 == -2 )
            {
              if ( v23 == (const void *)-2LL )
                goto LABEL_29;
              if ( !v32 )
                v32 = &v37->m128i_i64[3 * v24];
            }
            else if ( !v26[1] )
            {
              goto LABEL_29;
            }
            v33 = v31 + v24;
            ++v31;
            v24 = v20 & v33;
          }
          if ( v23 == (const void *)-1LL )
            goto LABEL_29;
          v35 = &v37->m128i_i64[3 * v24];
          v26 = v32;
        }
        if ( !v26 )
          v26 = v35;
LABEL_29:
        v34 = v16[1].m128i_i32[0];
        *(__m128i *)v26 = _mm_loadu_si128(v16);
        *((_DWORD *)v26 + 4) = v34;
        ++*(_DWORD *)(a1 + 8);
LABEL_8:
        v16 = (const __m128i *)((char *)v16 + 24);
        if ( v13 == v16 )
        {
          v28 = v18;
          v8 = v17;
          v12 = v28;
          return (_QWORD *)operator delete(v8, v12, 8);
        }
      }
    }
    return (_QWORD *)operator delete(v8, v12, 8);
  }
  else
  {
    v29 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[3 * v29]; j != result; *(result - 2) = 0 )
    {
      *result = -1;
      result += 3;
    }
  }
  return result;
}
