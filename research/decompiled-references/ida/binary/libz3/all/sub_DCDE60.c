__int64 __fastcall sub_DCDE60(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // rcx
  unsigned int v3; // r14d
  __int64 v4; // rax
  __m128i *v5; // rbx
  unsigned __int64 v6; // r9
  int v7; // r14d
  __int64 v8; // r13
  __int64 m128i_i64; // rbp
  unsigned __int64 v10; // r8
  __int64 v11; // r14
  __m128i *v12; // r10
  __m128i *v13; // rdx
  __m128i *v14; // r11
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 result; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __m128i *v20; // rax
  int v21; // r10d
  __m128i *v22; // rdx
  __m128i *v23; // rax
  const __m128i *v24; // r12
  __m128i *v25; // r11
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __m128i *v28; // rsi
  __m128i *v29; // rax
  size_t v30; // [rsp+0h] [rbp-58h]
  const __m128i *v31; // [rsp+0h] [rbp-58h]
  int v32; // [rsp+8h] [rbp-50h]

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  if ( 3 * v3 < 4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16)) )
  {
    v30 = 48LL * v3;
    v8 = v30;
    v20 = (__m128i *)sub_186B270(v30);
    v21 = 2 * v3;
    v2 = a2;
    v5 = v20;
    v22 = &v20[v30 / 0x10];
    if ( 2 * v3 )
    {
      do
      {
        v20->m128i_i64[0] = 0;
        v20 = (__m128i *)((char *)v20 + 24);
        v20[-1].m128i_i32[2] = 0;
      }
      while ( v22 != v20 );
      v23 = v5;
      if ( (((_BYTE)v22 - (_BYTE)v5) & 8) == 0
        || (v23 = (__m128i *)((char *)v5 + 24), v5->m128i_i64[1] = 0, &v5[1].m128i_u64[1] != (unsigned __int64 *)v22) )
      {
        do
        {
          v23->m128i_i64[1] = 0;
          v23 += 3;
          v23[-1].m128i_i64[0] = 0;
        }
        while ( v23 != v22 );
      }
    }
    v24 = *(const __m128i **)a1;
    v7 = v21 - 1;
    m128i_i64 = (__int64)v5[v30 / 0x10].m128i_i64;
    v25 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v25 )
    {
      do
      {
        v26 = v24->m128i_i64[0];
        if ( v24->m128i_i64[0] && v26 != qword_1C7F378 )
        {
          if ( v26 )
          {
            if ( (v24->m128i_i64[0] & 7) == 1 )
              v26 >>= 3;
            else
              LODWORD(v26) = *(_DWORD *)(v26 - 8);
          }
          else
          {
            LODWORD(v26) = -1640531495;
          }
          v27 = 24LL * (v7 & (unsigned int)v26);
          v28 = (__m128i *)((char *)v5 + v27);
          if ( v27 == v30 )
          {
LABEL_60:
            if ( v28 == v5 )
            {
LABEL_66:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v29 = v5;
            while ( v29->m128i_i64[0] )
            {
              v29 = (__m128i *)((char *)v29 + 24);
              if ( v28 == v29 )
                goto LABEL_66;
            }
          }
          else
          {
            v29 = (__m128i *)((char *)v5 + v27);
            while ( v29->m128i_i64[0] )
            {
              v29 = (__m128i *)((char *)v29 + 24);
              if ( (__m128i *)m128i_i64 == v29 )
                goto LABEL_60;
            }
          }
          *v29 = _mm_loadu_si128(v24);
          v29[1].m128i_i64[0] = v24[1].m128i_i64[0];
        }
        v24 = (const __m128i *)((char *)v24 + 24);
      }
      while ( v25 != v24 );
      v25 = *(__m128i **)a1;
    }
    if ( v25 )
    {
      v32 = v21;
      v31 = v2;
      sub_186B220(v25);
      v21 = v32;
      v2 = v31;
    }
    v6 = v2->m128i_i64[0];
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v21;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v6 )
      goto LABEL_3;
LABEL_59:
    LODWORD(v10) = -1640531495;
    goto LABEL_5;
  }
  v4 = v3;
  v5 = *(__m128i **)a1;
  v6 = a2->m128i_i64[0];
  v7 = v3 - 1;
  v8 = 24 * v4;
  m128i_i64 = *(_QWORD *)a1 + 24 * v4;
  if ( !a2->m128i_i64[0] )
    goto LABEL_59;
LABEL_3:
  if ( (v6 & 7) == 1 )
    v10 = v6 >> 3;
  else
    LODWORD(v10) = *(_DWORD *)(v6 - 8);
LABEL_5:
  v11 = (unsigned int)v10 & v7;
  v12 = (__m128i *)((char *)v5 + 24 * v11);
  if ( 24 * v11 == v8 )
  {
    v14 = nullptr;
LABEL_21:
    if ( v12 == v5 )
    {
LABEL_36:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v19 = v5->m128i_i64[0];
      if ( !v5->m128i_i64[0] )
        break;
      if ( v19 == qword_1C7F378 )
      {
        v14 = v5;
        v5 = (__m128i *)((char *)v5 + 24);
        if ( v12 == v5 )
          goto LABEL_36;
      }
      else
      {
        if ( v19 )
        {
          if ( (v5->m128i_i64[0] & 7) == 1 )
            v18 = v19 >> 3;
          else
            LODWORD(v18) = *(_DWORD *)(v19 - 8);
        }
        else
        {
          LODWORD(v18) = -1640531495;
        }
        if ( (_DWORD)v10 == (_DWORD)v18 && v6 == v19 )
        {
          *v5 = _mm_loadu_si128(v2);
          result = v2[1].m128i_i64[0];
          v5[1].m128i_i64[0] = result;
          return result;
        }
        v5 = (__m128i *)((char *)v5 + 24);
        if ( v12 == v5 )
          goto LABEL_36;
      }
    }
    if ( v14 )
      goto LABEL_16;
    v14 = v5;
  }
  else
  {
    v13 = (__m128i *)((char *)v5 + 24 * v11);
    v14 = nullptr;
    while ( 1 )
    {
      v16 = v13->m128i_i64[0];
      if ( !v13->m128i_i64[0] )
        break;
      if ( v16 == qword_1C7F378 )
      {
        v14 = v13;
        v13 = (__m128i *)((char *)v13 + 24);
        if ( v13 == (__m128i *)m128i_i64 )
          goto LABEL_21;
      }
      else
      {
        if ( v16 )
        {
          if ( (v13->m128i_i64[0] & 7) == 1 )
            v15 = v16 >> 3;
          else
            LODWORD(v15) = *(_DWORD *)(v16 - 8);
        }
        else
        {
          LODWORD(v15) = -1640531495;
        }
        if ( (_DWORD)v10 == (_DWORD)v15 && v6 == v16 )
        {
          *v13 = _mm_loadu_si128(v2);
          result = v2[1].m128i_i64[0];
          v13[1].m128i_i64[0] = result;
          return result;
        }
        v13 = (__m128i *)((char *)v13 + 24);
        if ( v13 == (__m128i *)m128i_i64 )
          goto LABEL_21;
      }
    }
    if ( v14 )
LABEL_16:
      --*(_DWORD *)(a1 + 16);
    else
      v14 = v13;
  }
  *v14 = _mm_loadu_si128(v2);
  result = v2[1].m128i_i64[0];
  v14[1].m128i_i64[0] = result;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

