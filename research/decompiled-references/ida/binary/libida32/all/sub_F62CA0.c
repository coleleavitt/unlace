_QWORD *__fastcall sub_F62CA0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __m128i *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *j; // rdx
  __m128i *v19; // [rsp+18h] [rbp-40h] BYREF

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
  result = (_QWORD *)sub_220C370(24LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v12 = (__m128i *)(v8 + 24 * v7);
    for ( i = &result[3 * v11]; i != result; *(result - 2) = 0x7FFFFFFFFFFFFFFFLL )
    {
      *result = -4096;
      result += 3;
    }
    if ( v12 != (__m128i *)v8 )
    {
      v14 = (__m128i *)v8;
      while ( v14->m128i_i64[0] == -4096 )
      {
        if ( v14->m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
        {
          v14 = (__m128i *)((char *)v14 + 24);
          if ( v12 == v14 )
            return (_QWORD *)operator delete();
        }
        else
        {
LABEL_9:
          sub_F5BA10((__int64 *)a1, v14->m128i_i64, (__int64 **)&v19);
          v15 = v19;
          v16 = v14[1].m128i_i64[0];
          *v19 = _mm_loadu_si128(v14);
          v15[1].m128i_i64[0] = v16;
          ++*(_DWORD *)(a1 + 8);
LABEL_10:
          v14 = (__m128i *)((char *)v14 + 24);
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
    v17 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[3 * v17]; j != result; *(result - 2) = 0x7FFFFFFFFFFFFFFFLL )
    {
      *result = -4096;
      result += 3;
    }
  }
  return result;
}

