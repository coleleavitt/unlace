__int64 __fastcall sub_4EC660(__int64 a1, unsigned __int32 a2)
{
  __int64 v4; // rax
  char *v5; // rdx
  int v6; // ecx
  __int64 v7; // rcx
  char *v8; // rsi
  __int64 v9; // rcx
  char *v10; // rdi
  char *v11; // rax
  int v12; // ecx
  __int64 v13; // r14
  int v15; // eax
  __int64 v16; // r13
  __m128i *v17; // rbp
  unsigned int v18; // r10d
  __int64 v19; // rcx
  __m128i *v20; // r13
  __int64 v21; // r10
  __m128i *v22; // rsi
  __m128i *v23; // rax
  __m128i *v24; // rcx
  __int32 v25; // edx
  __int32 v26; // eax
  __m128i *v27; // rax
  int v28; // r8d
  __m128i *v29; // rdx
  const __m128i *v30; // r15
  __m128i *v31; // r11
  __int64 v32; // rax
  __m128i *v33; // rdx
  __m128i *v34; // rax
  unsigned int v35; // [rsp+8h] [rbp-60h]
  size_t v36; // [rsp+10h] [rbp-58h]
  int v37; // [rsp+18h] [rbp-50h]

  v4 = *(unsigned int *)(a1 + 112);
  v5 = *(char **)(a1 + 104);
  v6 = v4 - 1;
  v4 *= 24;
  v7 = 3LL * (a2 & v6);
  v8 = &v5[v4];
  v9 = 8 * v7;
  v10 = &v5[v9];
  if ( v9 != v4 )
  {
    v11 = &v5[v9];
    do
    {
      v12 = *((_DWORD *)v11 + 1);
      if ( v12 == 2 )
      {
        if ( a2 == *(_DWORD *)v11 && a2 == *((_DWORD *)v11 + 2) )
          return *((_QWORD *)v11 + 2);
      }
      else if ( !v12 )
      {
        goto LABEL_18;
      }
      v11 += 24;
    }
    while ( v8 != v11 );
  }
  for ( ; v10 != v5; v5 += 24 )
  {
    v15 = *((_DWORD *)v5 + 1);
    if ( v15 == 2 )
    {
      if ( a2 == *(_DWORD *)v5 && a2 == *((_DWORD *)v5 + 2) )
      {
        v11 = v5;
        return *((_QWORD *)v11 + 2);
      }
    }
    else if ( !v15 )
    {
      break;
    }
  }
LABEL_18:
  v13 = sub_186B270(0x438u);
  sub_552D00(v13, a2);
  v16 = *(unsigned int *)(a1 + 112);
  if ( 3 * (int)v16 < (unsigned int)(4 * (*(_DWORD *)(a1 + 116) + *(_DWORD *)(a1 + 120))) )
  {
    v36 = 24LL * (unsigned int)(2 * v16);
    v27 = (__m128i *)sub_186B270(v36);
    v28 = 2 * v16;
    v19 = v36;
    v17 = v27;
    if ( 2 * (_DWORD)v16 )
    {
      v29 = &v27[3 * (v16 & 0x7FFFFFFF)];
      do
      {
        v27->m128i_i64[0] = 0;
        v27 += 3;
        v27[-2].m128i_i64[1] = 0;
      }
      while ( v27 != v29 );
    }
    v30 = *(const __m128i **)(a1 + 104);
    v18 = v28 - 1;
    v20 = (__m128i *)((char *)v17 + v36);
    v31 = (__m128i *)((char *)v30 + 24 * *(unsigned int *)(a1 + 112));
    if ( v30 != v31 )
    {
      do
      {
        if ( v30->m128i_i32[1] == 2 )
        {
          v32 = 24LL * (v30->m128i_i32[0] & v18);
          v33 = (__m128i *)((char *)v17 + v32);
          if ( v36 == v32 )
          {
LABEL_57:
            if ( v17 == v33 )
            {
LABEL_64:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v34 = v17;
            while ( v34->m128i_i32[1] )
            {
              v34 = (__m128i *)((char *)v34 + 24);
              if ( v33 == v34 )
                goto LABEL_64;
            }
          }
          else
          {
            v34 = (__m128i *)((char *)v17 + v32);
            while ( v34->m128i_i32[1] )
            {
              v34 = (__m128i *)((char *)v34 + 24);
              if ( v20 == v34 )
                goto LABEL_57;
            }
          }
          *v34 = _mm_loadu_si128(v30);
          v34[1].m128i_i64[0] = v30[1].m128i_i64[0];
        }
        v30 = (const __m128i *)((char *)v30 + 24);
      }
      while ( v31 != v30 );
      v31 = *(__m128i **)(a1 + 104);
    }
    if ( v31 )
    {
      v37 = v28;
      v35 = v28 - 1;
      sub_186B220(v31);
      v28 = v37;
      v19 = v36;
      v18 = v35;
    }
    *(_QWORD *)(a1 + 104) = v17;
    *(_DWORD *)(a1 + 112) = v28;
    *(_DWORD *)(a1 + 120) = 0;
  }
  else
  {
    v17 = *(__m128i **)(a1 + 104);
    v18 = v16 - 1;
    v19 = 24 * v16;
    v20 = (__m128i *)((char *)v17 + 24 * v16);
  }
  v21 = a2 & v18;
  v22 = (__m128i *)((char *)v17 + 24 * v21);
  if ( 24 * v21 != v19 )
  {
    v23 = (__m128i *)((char *)v17 + 24 * v21);
    v24 = nullptr;
    while ( 1 )
    {
      v25 = v23->m128i_i32[1];
      if ( v25 == 2 )
      {
        if ( a2 == v23->m128i_i32[0] && a2 == v23->m128i_i32[2] )
        {
          v23->m128i_i32[2] = a2;
          v23[1].m128i_i64[0] = v13;
          v23->m128i_i32[1] = 2;
          return v13;
        }
      }
      else
      {
        if ( !v25 )
        {
          if ( v24 )
            goto LABEL_38;
          v24 = v23;
          goto LABEL_39;
        }
        v24 = v23;
      }
      v23 = (__m128i *)((char *)v23 + 24);
      if ( v23 == v20 )
        goto LABEL_32;
    }
  }
  v24 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v22 == v17 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v26 = v17->m128i_i32[1];
    if ( v26 != 2 )
      break;
    if ( a2 == v17->m128i_i32[0] && a2 == v17->m128i_i32[2] )
    {
      v17->m128i_i32[2] = a2;
      v17[1].m128i_i64[0] = v13;
      v17->m128i_i32[1] = 2;
      return v13;
    }
LABEL_31:
    v17 = (__m128i *)((char *)v17 + 24);
  }
  if ( v26 )
  {
    v24 = v17;
    goto LABEL_31;
  }
  if ( v24 )
LABEL_38:
    --*(_DWORD *)(a1 + 120);
  else
    v24 = v17;
LABEL_39:
  v24->m128i_i32[2] = a2;
  v24[1].m128i_i64[0] = v13;
  v24->m128i_i32[1] = 2;
  v24->m128i_i32[0] = a2;
  ++*(_DWORD *)(a1 + 116);
  return v13;
}

