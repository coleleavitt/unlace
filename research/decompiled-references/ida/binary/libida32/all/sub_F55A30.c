_QWORD *__fastcall sub_F55A30(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned int v9; // eax
  _QWORD *result; // rax
  __int64 v11; // rdx
  __m128i *v12; // rbp
  _QWORD *i; // rdx
  __m128i *v14; // r12
  __int64 *v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rdx
  _QWORD *j; // rdx
  __int64 *v20; // [rsp+18h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(_QWORD *)a1;
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
  result = (_QWORD *)sub_220C370(40LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v12 = (__m128i *)(v8 + 40 * v7);
    for ( i = &result[5 * v11]; i != result; *(result - 4) = 0x7FFFFFFFFFFFFFFFLL )
    {
      *result = -4096;
      result += 5;
    }
    if ( v12 != (__m128i *)v8 )
    {
      v14 = (__m128i *)v8;
      while ( v14->m128i_i64[0] == -4096 )
      {
        if ( v14->m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
        {
          v14 = (__m128i *)((char *)v14 + 40);
          if ( v12 == v14 )
            return (_QWORD *)operator delete();
        }
        else
        {
LABEL_9:
          sub_F55660((__int64 *)a1, v14->m128i_i64, &v20);
          v15 = v20;
          v16 = _mm_loadu_si128(v14 + 1);
          *v20 = v14->m128i_i64[0];
          v17 = v14->m128i_i64[1];
          *((__m128i *)v15 + 1) = v16;
          v15[1] = v17;
          v15[4] = v14[2].m128i_i64[0];
          ++*(_DWORD *)(a1 + 8);
LABEL_10:
          v14 = (__m128i *)((char *)v14 + 40);
          if ( v12 == v14 )
            return (_QWORD *)operator delete();
        }
      }
      if ( v14->m128i_i64[0] == -8192 && v14->m128i_i64[1] == 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_10;
      goto LABEL_9;
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v18 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[5 * v18]; j != result; *(result - 4) = 0x7FFFFFFFFFFFFFFFLL )
    {
      *result = -4096;
      result += 5;
    }
  }
  return result;
}

