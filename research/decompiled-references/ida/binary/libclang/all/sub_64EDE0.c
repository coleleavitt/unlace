__m128i *__fastcall sub_64EDE0(const __m128i **a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rbx
  const __m128i *v5; // rbp
  unsigned int v6; // eax
  __m128i *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __m128i *v10; // rdx
  const __m128i *v11; // rbx
  const __m128i *v12; // r14
  __int64 *v13; // rax
  const __m128i *v14; // r12
  __int64 *v15; // rbx
  int v16; // r15d
  int v17; // r15d
  int v18; // eax
  size_t v19; // rdx
  const void *v20; // rdi
  unsigned int v21; // r9d
  int v22; // r11d
  __int64 v23; // r10
  __int64 v24; // r8
  const void *v25; // rsi
  unsigned int v26; // r9d
  void (__fastcall ***v27)(_QWORD); // rdi
  int v28; // esi
  __int64 v29; // rdx
  unsigned int v30; // r9d
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  size_t v35; // [rsp+18h] [rbp-50h]
  int v36; // [rsp+20h] [rbp-48h]
  unsigned int v37; // [rsp+24h] [rbp-44h]
  __int64 v38; // [rsp+28h] [rbp-40h]

  v2 = (unsigned int)(a2 - 1);
  v4 = *((unsigned int *)a1 + 4);
  v5 = *a1;
  v6 = (((((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
        | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
        | ((v2 | (v2 >> 1)) >> 2)
        | v2
        | (v2 >> 1)) >> 16)
      | ((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
      | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
      | ((v2 | (v2 >> 1)) >> 2)
      | v2
      | (v2 >> 1))
     + 1;
  if ( v6 < 0x40 )
    v6 = 64;
  *((_DWORD *)a1 + 4) = v6;
  result = (__m128i *)sub_25CC9C0(24LL * v6, 8);
  v8 = *((unsigned int *)a1 + 4);
  *a1 = result;
  v9 = 24 * v8;
  v10 = (__m128i *)((char *)result + 24 * v8);
  if ( v5 )
  {
    a1[1] = nullptr;
    v11 = (const __m128i *)((char *)v5 + 24 * v4);
    if ( v9 )
    {
      do
      {
        result->m128i_i64[0] = -1;
        result = (__m128i *)((char *)result + 24);
        result[-1].m128i_i64[0] = 0;
      }
      while ( result != v10 );
    }
    v12 = v5;
    if ( v11 != v5 )
    {
      v13 = (__int64 *)a1;
      v14 = v11;
      v15 = v13;
      while ( (unsigned __int64)(v12->m128i_i64[0] + 2) <= 1 )
      {
LABEL_20:
        v12 = (const __m128i *)((char *)v12 + 24);
        if ( v14 == v12 )
          return (__m128i *)operator delete();
      }
      v16 = *((_DWORD *)v15 + 4);
      if ( !v16 )
      {
        *(__m128i *)&dword_0 = _mm_loadu_si128(v12);
        BUG();
      }
      v17 = v16 - 1;
      v33 = *v15;
      v18 = sub_25E60D0(v12->m128i_i64[0], v12->m128i_i64[1]);
      v19 = v12->m128i_u64[1];
      v20 = (const void *)v12->m128i_i64[0];
      v21 = v17 & v18;
      if ( v19 )
      {
        v22 = 1;
        v23 = 0;
        while ( 1 )
        {
          v24 = v33 + 24LL * v21;
          v25 = *(const void **)v24;
          if ( *(_QWORD *)v24 == -1 )
            break;
          if ( v25 == (const void *)-2LL )
          {
            if ( v20 == (const void *)-2LL )
              goto LABEL_17;
            if ( !v23 )
              v23 = v33 + 24LL * v21;
          }
          else
          {
            v34 = v33 + 24LL * v21;
            if ( *(_QWORD *)(v24 + 8) == v19 )
            {
              v38 = v23;
              v37 = v21;
              v36 = v22;
              v35 = v19;
              v32 = memcmp(v20, v25, v19);
              v19 = v35;
              v22 = v36;
              v21 = v37;
              v23 = v38;
              v24 = v34;
              if ( !v32 )
                goto LABEL_17;
            }
          }
          v26 = v22 + v21;
          ++v22;
          v21 = v17 & v26;
        }
        if ( v20 == (const void *)-1LL )
          goto LABEL_17;
        v31 = v33 + 24LL * v21;
        v24 = v23;
      }
      else
      {
        v28 = 1;
        v29 = 0;
        while ( 1 )
        {
          v24 = v33 + 24LL * v21;
          if ( *(_QWORD *)v24 == -1 )
            break;
          if ( *(_QWORD *)v24 == -2 )
          {
            if ( v20 == (const void *)-2LL )
              goto LABEL_17;
            if ( !v29 )
              v29 = v33 + 24LL * v21;
          }
          else if ( !*(_QWORD *)(v24 + 8) )
          {
            goto LABEL_17;
          }
          v30 = v28 + v21;
          ++v28;
          v21 = v17 & v30;
        }
        if ( v20 == (const void *)-1LL )
          goto LABEL_17;
        v31 = v33 + 24LL * v21;
        v24 = v29;
      }
      if ( !v24 )
        v24 = v31;
LABEL_17:
      *(__m128i *)v24 = _mm_loadu_si128(v12);
      *(_QWORD *)(v24 + 16) = v12[1].m128i_i64[0];
      v12[1].m128i_i64[0] = 0;
      ++*((_DWORD *)v15 + 2);
      v27 = (void (__fastcall ***)(_QWORD))v12[1].m128i_i64[0];
      if ( v27 )
        (**v27)(v27);
      v12[1].m128i_i64[0] = 0;
      goto LABEL_20;
    }
    return (__m128i *)operator delete();
  }
  else
  {
    for ( a1[1] = nullptr; result != v10; result[-1].m128i_i64[0] = 0 )
    {
      result->m128i_i64[0] = -1;
      result = (__m128i *)((char *)result + 24);
    }
  }
  return result;
}

