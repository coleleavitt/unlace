__int64 __fastcall sub_559200(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 v4; // al
  __int64 v6; // rcx
  __int64 v7; // rsi
  __m128i v8; // xmm0
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  const __m128i **v13; // r12
  const __m128i *v14; // rsi
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rcx
  const __m128i *v19; // rdi
  __int64 v20; // rdx
  const __m128i *v21; // rdx
  const __m128i *v22; // rax
  __int64 v23; // rsi
  const __m128i **v24; // rax
  const __m128i *v25; // rsi
  const __m128i *v26; // rcx
  __m128i v27; // xmm0
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  unsigned __int8 v30; // al

  v4 = *(_BYTE *)(a1 + 100);
  if ( v4 == 29 )
  {
    if ( a2 == -1 )
    {
      if ( !*(_BYTE *)(a1 + 102) )
      {
        v24 = *(const __m128i ***)a1;
        if ( !*(_QWORD *)a1 )
LABEL_62:
          sub_555DE0();
        v25 = v24[1];
        if ( v25 )
        {
          v26 = *v24;
          for ( result = 0; (const __m128i *)result != v25; ++result )
          {
            v27 = _mm_loadu_si128(v26);
            if ( a3 < _mm_add_epi64(v27, _mm_srli_si128(v27, 8)).m128i_u64[0] )
              return result;
            v26 += 9;
          }
        }
      }
LABEL_22:
      if ( a3 )
      {
        result = -1;
        if ( (a2 & a3) != 0xFFFFFFFFFFFFFFFFLL )
          return result;
      }
      return -2;
    }
    return a2;
  }
  if ( v4 > 0x1Du )
  {
    if ( v4 != 45 )
    {
      if ( v4 == 61 )
        return -2;
LABEL_56:
      if ( !under_debugger )
        interr(3096);
      BUG();
    }
    if ( a2 == -1 )
    {
      if ( !*(_BYTE *)(a1 + 102) )
      {
        v13 = *(const __m128i ***)a1;
        if ( !*(_QWORD *)a1 )
          sub_555E00();
        v14 = v13[1];
        if ( v14 )
        {
          if ( (*((_BYTE *)v13 + 52) & 7) != 0 )
          {
            v15 = 1 << ((*((_BYTE *)v13 + 52) & 7) - 1);
          }
          else
          {
            v30 = getinf(61);
            v14 = v13[1];
            v15 = v30;
          }
          v16 = 8 * v15;
          if ( v16 > 63 )
          {
            v18 = a3;
            v17 = a3;
          }
          else
          {
            v17 = a3 & ((1LL << v16) - 1);
            v18 = a3 | -(1LL << v16);
          }
          v19 = *v13;
          v20 = -56;
          if ( v14 != (const __m128i *)-1LL )
            v20 = 56LL * (_QWORD)v14;
          v21 = (const __m128i *)((char *)v19 + v20);
          if ( v19 != v21 )
          {
            v22 = *v13;
            while ( 1 )
            {
              v23 = v22[3].m128i_i64[0];
              if ( v17 == v23 || v23 == v18 )
                break;
              v22 = (const __m128i *)((char *)v22 + 56);
              if ( v21 == v22 )
                goto LABEL_22;
            }
            result = 0x6DB6DB6DB6DB6DB7LL * (((char *)v22 - (char *)v19) >> 3);
            if ( result != -1 )
              return result;
          }
        }
      }
      goto LABEL_22;
    }
    return a2;
  }
  if ( v4 == 12 )
  {
    result = a2;
    if ( a2 != -1 )
      return result;
    goto LABEL_22;
  }
  if ( v4 != 13 )
    goto LABEL_56;
  if ( *(_BYTE *)(a1 + 102) )
    goto LABEL_22;
  if ( !*(_QWORD *)a1 )
    goto LABEL_62;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = v6 + 32LL * *(_QWORD *)(a1 + 40);
  if ( v6 == v7 )
    goto LABEL_22;
  while ( 1 )
  {
    v10 = *(int *)(v6 + 24);
    if ( (_DWORD)v10 != -1 )
      break;
    v11 = *(_QWORD *)(v6 + 8);
    if ( !*(_BYTE *)(v6 + 28) )
      v11 *= 8;
    v9 = v11 + *(_QWORD *)(v6 + 16);
LABEL_11:
    if ( a3 < v9 )
      goto LABEL_50;
    v6 += 32;
    if ( v6 == v7 )
      goto LABEL_22;
  }
  v8 = _mm_loadu_si128((const __m128i *)(**(_QWORD **)a1 + 144 * v10));
  v9 = _mm_add_epi64(v8, _mm_srli_si128(v8, 8)).m128i_u64[0];
  if ( a2 == -1 || a2 != v10 )
    goto LABEL_11;
LABEL_50:
  result = *(_QWORD *)v6;
  if ( *(_BYTE *)(v6 + 29) )
  {
    v28 = *(_QWORD *)(v6 + 16);
    if ( v28 < a3 && a3 < v9 )
    {
      v29 = a3 - v28;
      if ( !*(_BYTE *)(v6 + 28) )
        v29 >>= 3;
      result += v29;
    }
  }
  return result;
}
