__int64 __fastcall sub_22BECB0(_QWORD *s2, char *n, char a3, __int64 a4)
{
  char **v5; // r13
  char *v6; // rax
  char *v7; // rax
  char **v8; // r12
  __int64 result; // rax
  char *v10; // rax
  char *v11; // rax
  __m128i v12; // xmm1
  unsigned int v13; // ecx
  char *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  char **v17; // rbp
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r15
  const void *v20; // r12
  unsigned int v21; // eax
  unsigned int v22; // r8d
  __int64 *v23; // r9
  __int64 *v24; // rax
  unsigned int v25; // eax
  __m128i si128; // xmm2
  unsigned int v27; // ecx
  const __m128i *v28; // rax
  __m128i v29; // xmm0
  char **v30; // rax
  __int64 v32; // [rsp+0h] [rbp-98h]
  __int64 *v33; // [rsp+8h] [rbp-90h]
  unsigned int v34; // [rsp+10h] [rbp-88h]
  __m128i v36[2]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v37; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+50h] [rbp-48h]

  v5 = &off_2BF6740;
  while ( 1 )
  {
    v6 = v5[1];
    if ( v6 )
    {
      if ( v6 - 1 == n && (!n || !memcmp(*v5 + 1, s2, (size_t)n)) )
        goto LABEL_10;
      v7 = v5[6];
      v8 = v5 + 5;
      if ( !v7 )
      {
        if ( !n )
          break;
        v10 = v5[11];
        v8 = v5 + 10;
        if ( !v10 )
        {
LABEL_33:
          v11 = v5[16];
          v8 = v5 + 15;
          if ( v11 )
            goto LABEL_26;
          goto LABEL_20;
        }
        goto LABEL_16;
      }
    }
    else
    {
      if ( !n )
        goto LABEL_10;
      v7 = v5[6];
      v8 = v5 + 5;
      if ( !v7 )
      {
        v10 = v5[11];
        v8 = v5 + 10;
        if ( !v10 )
          goto LABEL_33;
        goto LABEL_16;
      }
    }
    if ( v7 - 1 == n && (!n || !memcmp(v5[5] + 1, s2, (size_t)n)) )
      break;
    v10 = v5[11];
    v8 = v5 + 10;
    if ( !v10 )
    {
      if ( !n )
        break;
      v11 = v5[16];
      v8 = v5 + 15;
      if ( v11 )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_16:
    if ( v10 - 1 == n )
    {
      if ( !n || !memcmp(v5[10] + 1, s2, (size_t)n) )
        break;
      v11 = v5[16];
      v8 = v5 + 15;
      if ( !v11 )
        goto LABEL_20;
LABEL_26:
      if ( v11 - 1 == n && (!n || !memcmp(v5[15] + 1, s2, (size_t)n)) )
        break;
      goto LABEL_20;
    }
    v11 = v5[16];
    v8 = v5 + 15;
    if ( v11 )
      goto LABEL_26;
    if ( !n )
      break;
LABEL_20:
    v5 += 20;
    result = (__int64)&off_2BF7B40;
    if ( v5 == &off_2BF7B40 )
    {
      if ( n == (char *)&word_12 )
      {
        result = *s2 ^ 0x64616F6C2D69766CLL;
        if ( !(result | s2[1] ^ 0x696E65647261682DLL) && *((_WORD *)s2 + 8) == 26478 )
          goto LABEL_11;
      }
      return result;
    }
  }
  v5 = v8;
LABEL_10:
  result = (__int64)&unk_2BF7B68;
  if ( v5 != (char **)&unk_2BF7B68 )
  {
LABEL_11:
    memset(v36, 0, 24);
    if ( a3 )
    {
      v30 = v5 + 2;
      if ( *v30 || (v30 = v5 + 3, v5[3]) || (v30 = v5 + 4, v5[4]) )
      {
        if ( v5 + 5 == v30 )
        {
          result = 0;
        }
        else
        {
          v36[1].m128i_i64[0] |= (unsigned __int64)v5[4];
          v36[0] = _mm_or_si128(_mm_loadu_si128((const __m128i *)v5 + 1), v36[0]);
          do
          {
            si128 = _mm_load_si128(v36);
            v27 = 129;
            v38 = v36[1].m128i_i64[0];
            v28 = (const __m128i *)&unk_2BF7B50;
            v37 = si128;
            do
            {
              while ( 1 )
              {
                --v27;
                if ( ((1LL << v27) & v36[0].m128i_i64[v27 >> 6]) != 0 )
                  break;
                v28 = (const __m128i *)((char *)v28 - 40);
                if ( !v27 )
                  goto LABEL_68;
              }
              v29 = _mm_or_si128(_mm_loadu_si128(v28), v36[0]);
              v28 = (const __m128i *)((char *)v28 - 40);
              v36[1].m128i_i64[0] |= v28[3].m128i_u64[1];
              v36[0] = v29;
            }
            while ( v27 );
LABEL_68:
            ;
          }
          while ( *(_OWORD *)v36 != *(_OWORD *)&v37 || v38 != v36[1].m128i_i64[0] );
          result = v36[0].m128i_i64[0];
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      v36[0].m128i_i64[(-858993459 * (unsigned int)(v5 - &off_2BF6740)) >> 6] = 1LL << (-51
                                                                                      * (unsigned __int8)(v5 - &off_2BF6740));
      result = v36[0].m128i_i64[0];
      do
      {
        v12 = _mm_load_si128(v36);
        v13 = 0;
        v38 = v36[1].m128i_i64[0];
        v14 = (char *)&unk_2BF6750;
        v37 = v12;
        do
        {
          while ( (result & *(_QWORD *)v14) == 0 && (*(_OWORD *)((char *)v36 + 8) & *(_OWORD *)(v14 + 8)) == 0 )
          {
            ++v13;
            v14 += 40;
            if ( v13 == 129 )
              goto LABEL_49;
          }
          v14 += 40;
          v15 = v13 >> 6;
          v16 = 1LL << v13++;
          v36[0].m128i_i64[v15] |= v16;
          result = v36[0].m128i_i64[0];
        }
        while ( v13 != 129 );
LABEL_49:
        ;
      }
      while ( *(_OWORD *)v36 != *(_OWORD *)&v37 || v38 != v36[1].m128i_i64[0] );
    }
    v17 = &off_2BF6740;
    v18 = 0;
    while ( 2 )
    {
      if ( _bittest64(&result, v18) )
      {
        v19 = (unsigned __int64)v17[1];
        if ( v19 >= 2 )
        {
          v20 = *v17 + 1;
          v21 = sub_2244B30((__int64)v20, v19 - 1);
          v22 = sub_2244CB0(a4, v20, v19 - 1, v21);
          v23 = (__int64 *)(*(_QWORD *)a4 + 8LL * v22);
          if ( *v23 )
          {
            if ( *v23 != -8 )
            {
              sub_10298F0((__int64 **)&v37, v23, 0);
              v24 = (__int64 *)v37.m128i_i64[0];
              goto LABEL_59;
            }
            --*(_DWORD *)(a4 + 16);
          }
          v33 = v23;
          v34 = v22;
          v32 = sub_22300B0(v19 + 16, 8);
          *((char *)memcpy((void *)(v32 + 16), v20, v19 - 1) + v19 - 1) = 0;
          *(_QWORD *)v32 = v19 - 1;
          *(_BYTE *)(v32 + 8) = 0;
          *v33 = v32;
          ++*(_DWORD *)(a4 + 12);
          v25 = sub_22450D0(a4, v34);
          sub_10298F0((__int64 **)&v37, (__int64 *)(*(_QWORD *)a4 + 8LL * v25), 0);
          v24 = (__int64 *)v37.m128i_i64[0];
LABEL_59:
          result = *v24;
          *(_BYTE *)(result + 8) = a3;
        }
      }
      v18 = (unsigned int)(v18 + 1);
      v17 += 5;
      if ( (_DWORD)v18 == 129 )
        return result;
      result = v36[0].m128i_i64[(unsigned int)v18 >> 6];
      continue;
    }
  }
  return result;
}
