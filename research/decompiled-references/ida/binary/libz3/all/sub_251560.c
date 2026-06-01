__int64 __fastcall sub_251560(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 v4; // rdx
  unsigned int v5; // eax
  int v6; // ecx
  __int64 v7; // rbp
  __m128i *v8; // rbx
  unsigned int v9; // r10d
  __int64 v10; // rcx
  __m128i *v11; // rbp
  __int64 v12; // r10
  __m128i *v13; // rsi
  __m128i *v14; // rax
  __m128i *v15; // rcx
  int v16; // edx
  __int32 v17; // eax
  __int64 v18; // rax
  __m128i *v20; // rax
  int v21; // r8d
  __m128i *v22; // rdx
  const __m128i *v23; // r15
  __m128i *v24; // r11
  __int64 v25; // rax
  __m128i *v26; // rdx
  __m128i *v27; // rax
  __m128i v28; // xmm0
  unsigned int v29; // [rsp+8h] [rbp-60h]
  size_t v30; // [rsp+10h] [rbp-58h]
  int v31; // [rsp+18h] [rbp-50h]

  sub_251050(a1);
  v3 = *(_DWORD *)(a1 + 1420);
  v4 = *(_QWORD *)(a1 + 1432);
  v5 = v3;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 - 4);
    if ( v6 )
    {
      v18 = (unsigned int)(v6 - 1);
      v3 = *(_DWORD *)(v4 + 4 * v18);
      *(_DWORD *)(v4 - 4) = v18;
      v5 = *(_DWORD *)(a1 + 1420);
    }
  }
  v7 = *(unsigned int *)(a1 + 1416);
  if ( 3 * (int)v7 < 4 * (*(_DWORD *)(a1 + 1424) + v5) )
  {
    v30 = 24LL * (unsigned int)(2 * v7);
    v20 = (__m128i *)sub_186B270(v30);
    v21 = 2 * v7;
    v10 = v30;
    v8 = v20;
    if ( 2 * (_DWORD)v7 )
    {
      v22 = &v20[3 * (v7 & 0x7FFFFFFF)];
      do
      {
        v20->m128i_i64[0] = 0;
        v20 += 3;
        v20[-2].m128i_i64[1] = 0;
      }
      while ( v20 != v22 );
    }
    v23 = *(const __m128i **)(a1 + 1408);
    v9 = v21 - 1;
    v11 = (__m128i *)((char *)v8 + v30);
    v24 = (__m128i *)((char *)v23 + 24 * *(unsigned int *)(a1 + 1416));
    if ( v23 != v24 )
    {
      do
      {
        while ( v23->m128i_i32[1] != 2 )
        {
          v23 = (const __m128i *)((char *)v23 + 24);
          if ( v24 == v23 )
            goto LABEL_39;
        }
        v25 = 24LL * (v23->m128i_i32[0] & v9);
        v26 = (__m128i *)((char *)v8 + v25);
        if ( v30 == v25 )
        {
LABEL_44:
          if ( v8 == v26 )
          {
LABEL_51:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v27 = v8;
          while ( v27->m128i_i32[1] )
          {
            v27 = (__m128i *)((char *)v27 + 24);
            if ( v26 == v27 )
              goto LABEL_51;
          }
        }
        else
        {
          v27 = (__m128i *)((char *)v8 + v25);
          while ( v27->m128i_i32[1] )
          {
            v27 = (__m128i *)((char *)v27 + 24);
            if ( v11 == v27 )
              goto LABEL_44;
          }
        }
        v28 = _mm_loadu_si128(v23);
        v23 = (const __m128i *)((char *)v23 + 24);
        *v27 = v28;
        v27[1].m128i_i64[0] = v23[-1].m128i_i64[1];
      }
      while ( v24 != v23 );
LABEL_39:
      v24 = *(__m128i **)(a1 + 1408);
    }
    if ( v24 )
    {
      v31 = v21;
      v29 = v21 - 1;
      sub_186B220(v24);
      v21 = v31;
      v10 = v30;
      v9 = v29;
    }
    *(_QWORD *)(a1 + 1408) = v8;
    *(_DWORD *)(a1 + 1416) = v21;
    *(_DWORD *)(a1 + 1424) = 0;
  }
  else
  {
    v8 = *(__m128i **)(a1 + 1408);
    v9 = v7 - 1;
    v10 = 24 * v7;
    v11 = (__m128i *)((char *)v8 + 24 * v7);
  }
  v12 = v3 & v9;
  v13 = (__m128i *)((char *)v8 + 24 * v12);
  if ( 24 * v12 != v10 )
  {
    v14 = (__m128i *)((char *)v8 + 24 * v12);
    v15 = nullptr;
    while ( 1 )
    {
      v16 = v14->m128i_i32[1];
      if ( v16 == 2 )
      {
        if ( v3 == v14->m128i_i32[0] && v3 == v14->m128i_i32[2] )
        {
          v14->m128i_i32[2] = v3;
          v14[1].m128i_i64[0] = a2;
          v14->m128i_i32[1] = 2;
          return v3;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_24;
          v15 = v14;
          goto LABEL_25;
        }
        v15 = v14;
      }
      v14 = (__m128i *)((char *)v14 + 24);
      if ( v14 == v11 )
        goto LABEL_18;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_18:
    if ( v13 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v17 = v8->m128i_i32[1];
    if ( v17 != 2 )
      break;
    if ( v3 == v8->m128i_i32[0] && v3 == v8->m128i_i32[2] )
    {
      v8->m128i_i32[2] = v3;
      v8[1].m128i_i64[0] = a2;
      v8->m128i_i32[1] = 2;
      return v3;
    }
LABEL_17:
    v8 = (__m128i *)((char *)v8 + 24);
  }
  if ( v17 )
  {
    v15 = v8;
    goto LABEL_17;
  }
  if ( v15 )
LABEL_24:
    --*(_DWORD *)(a1 + 1424);
  else
    v15 = v8;
LABEL_25:
  v15->m128i_i32[2] = v3;
  v15[1].m128i_i64[0] = a2;
  v15->m128i_i32[1] = 2;
  v15->m128i_i32[0] = v3;
  ++*(_DWORD *)(a1 + 1420);
  return v3;
}

