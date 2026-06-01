__int64 __fastcall sub_4C2940(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v4; // rbp
  __m128i *v5; // rbx
  unsigned int v6; // r10d
  __int64 v7; // rcx
  __m128i *v8; // rbp
  __int64 v9; // r10
  __m128i *v10; // rsi
  __m128i *v11; // rax
  __m128i *v12; // rcx
  int v13; // edx
  __int32 v14; // eax
  __m128i *v16; // rax
  int v17; // r8d
  __m128i *v18; // rdx
  const __m128i *v19; // r15
  __m128i *v20; // r11
  __int64 v21; // rax
  __m128i *v22; // rdx
  __m128i *v23; // rax
  __m128i v24; // xmm0
  unsigned int v25; // [rsp+8h] [rbp-60h]
  size_t v26; // [rsp+10h] [rbp-58h]
  int v27; // [rsp+18h] [rbp-50h]

  v3 = *(_DWORD *)(a1 + 172);
  v4 = *(unsigned int *)(a1 + 88);
  *(_DWORD *)(a1 + 172) = v3 + 1;
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 92) + *(_DWORD *)(a1 + 96))) )
  {
    v26 = 24LL * (unsigned int)(2 * v4);
    v16 = (__m128i *)sub_186B270(v26);
    v17 = 2 * v4;
    v7 = v26;
    v5 = v16;
    if ( 2 * (_DWORD)v4 )
    {
      v18 = &v16[3 * (v4 & 0x7FFFFFFF)];
      do
      {
        v16->m128i_i64[0] = 0;
        v16 += 3;
        v16[-2].m128i_i64[1] = 0;
      }
      while ( v16 != v18 );
    }
    v19 = *(const __m128i **)(a1 + 80);
    v6 = v17 - 1;
    v8 = (__m128i *)((char *)v5 + v26);
    v20 = (__m128i *)((char *)v19 + 24 * *(unsigned int *)(a1 + 88));
    if ( v19 != v20 )
    {
      do
      {
        while ( v19->m128i_i32[1] != 2 )
        {
          v19 = (const __m128i *)((char *)v19 + 24);
          if ( v20 == v19 )
            goto LABEL_36;
        }
        v21 = 24LL * (v19->m128i_i32[0] & v6);
        v22 = (__m128i *)((char *)v5 + v21);
        if ( v26 == v21 )
        {
LABEL_41:
          if ( v5 == v22 )
          {
LABEL_48:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v23 = v5;
          while ( v23->m128i_i32[1] )
          {
            v23 = (__m128i *)((char *)v23 + 24);
            if ( v22 == v23 )
              goto LABEL_48;
          }
        }
        else
        {
          v23 = (__m128i *)((char *)v5 + v21);
          while ( v23->m128i_i32[1] )
          {
            v23 = (__m128i *)((char *)v23 + 24);
            if ( v8 == v23 )
              goto LABEL_41;
          }
        }
        v24 = _mm_loadu_si128(v19);
        v19 = (const __m128i *)((char *)v19 + 24);
        *v23 = v24;
        v23[1].m128i_i64[0] = v19[-1].m128i_i64[1];
      }
      while ( v20 != v19 );
LABEL_36:
      v20 = *(__m128i **)(a1 + 80);
    }
    if ( v20 )
    {
      v27 = v17;
      v25 = v17 - 1;
      sub_186B220(v20);
      v17 = v27;
      v7 = v26;
      v6 = v25;
    }
    *(_QWORD *)(a1 + 80) = v5;
    *(_DWORD *)(a1 + 88) = v17;
    *(_DWORD *)(a1 + 96) = 0;
  }
  else
  {
    v5 = *(__m128i **)(a1 + 80);
    v6 = v4 - 1;
    v7 = 24 * v4;
    v8 = (__m128i *)((char *)v5 + 24 * v4);
  }
  v9 = v3 & v6;
  v10 = (__m128i *)((char *)v5 + 24 * v9);
  if ( 24 * v9 != v7 )
  {
    v11 = (__m128i *)((char *)v5 + 24 * v9);
    v12 = nullptr;
    while ( 1 )
    {
      v13 = v11->m128i_i32[1];
      if ( v13 == 2 )
      {
        if ( v3 == v11->m128i_i32[0] && v3 == v11->m128i_i32[2] )
        {
          v11->m128i_i32[2] = v3;
          v11[1].m128i_i64[0] = a2;
          v11->m128i_i32[1] = 2;
          return v3;
        }
      }
      else
      {
        if ( !v13 )
        {
          if ( v12 )
            goto LABEL_21;
          v12 = v11;
          goto LABEL_22;
        }
        v12 = v11;
      }
      v11 = (__m128i *)((char *)v11 + 24);
      if ( v11 == v8 )
        goto LABEL_15;
    }
  }
  v12 = nullptr;
  while ( 1 )
  {
LABEL_15:
    if ( v10 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v14 = v5->m128i_i32[1];
    if ( v14 != 2 )
      break;
    if ( v3 == v5->m128i_i32[0] && v3 == v5->m128i_i32[2] )
    {
      v5->m128i_i32[2] = v3;
      v5[1].m128i_i64[0] = a2;
      v5->m128i_i32[1] = 2;
      return v3;
    }
LABEL_14:
    v5 = (__m128i *)((char *)v5 + 24);
  }
  if ( v14 )
  {
    v12 = v5;
    goto LABEL_14;
  }
  if ( v12 )
LABEL_21:
    --*(_DWORD *)(a1 + 96);
  else
    v12 = v5;
LABEL_22:
  v12->m128i_i32[2] = v3;
  v12[1].m128i_i64[0] = a2;
  v12->m128i_i32[1] = 2;
  v12->m128i_i32[0] = v3;
  ++*(_DWORD *)(a1 + 92);
  return v3;
}

