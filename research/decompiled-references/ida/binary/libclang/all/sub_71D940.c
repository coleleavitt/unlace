_QWORD *__fastcall sub_71D940(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rbx
  const __m128i *v5; // rbp
  unsigned int v6; // eax
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  const __m128i *v11; // rdx
  const __m128i *i; // rdi
  unsigned __int64 v13; // r9
  int v14; // eax
  int v15; // esi
  int v16; // r13d
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rax

  v2 = (unsigned int)(a2 - 1);
  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(const __m128i **)a1;
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
  *(_DWORD *)(a1 + 16) = v6;
  result = (_QWORD *)sub_25CC9C0(24LL * v6, 8);
  v8 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)a1 = result;
  v9 = 24 * v8;
  v10 = &result[3 * v8];
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v11 = (const __m128i *)((char *)v5 + 24 * v4);
    if ( v9 )
    {
      if ( (((_BYTE)v10 - (_BYTE)result) & 8) == 0 || (*result = 0, result += 3, result != v10) )
      {
        do
        {
          *result = 0;
          result += 6;
          *(result - 3) = 0;
        }
        while ( result != v10 );
      }
    }
    for ( i = v5; v11 != i; ++*(_DWORD *)(a1 + 8) )
    {
      while ( 1 )
      {
        v13 = i->m128i_i64[0];
        if ( (unsigned __int64)(i->m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          break;
        i = (const __m128i *)((char *)i + 24);
        if ( v11 == i )
          return (_QWORD *)operator delete();
      }
      v14 = *(_DWORD *)(a1 + 16);
      if ( !v14 )
      {
        *(_QWORD *)&dword_0 = i->m128i_i64[0];
        BUG();
      }
      v15 = v14 - 1;
      v16 = 1;
      v17 = 0;
      LODWORD(v18) = (v14 - 1) & (v13 ^ (v13 >> 9));
      v19 = *(_QWORD *)a1 + 24LL * (unsigned int)v18;
      v20 = *(_QWORD *)v19;
      if ( v13 != *(_QWORD *)v19 )
      {
        while ( v20 )
        {
          if ( v20 == -1 && !v17 )
            v17 = v19;
          v18 = v15 & (unsigned int)(v18 + v16);
          v19 = *(_QWORD *)a1 + 24 * v18;
          v20 = *(_QWORD *)v19;
          if ( v13 == *(_QWORD *)v19 )
            goto LABEL_14;
          ++v16;
        }
        if ( v17 )
          v19 = v17;
      }
LABEL_14:
      v21 = i->m128i_i64[0];
      i = (const __m128i *)((char *)i + 24);
      *(_QWORD *)v19 = v21;
      *(__m128i *)(v19 + 8) = _mm_loadu_si128(i - 1);
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( result != v10 )
    {
      if ( ((24 * (_BYTE)v8) & 8) == 0 || (*result = 0, result += 3, result != v10) )
      {
        do
        {
          *result = 0;
          result += 6;
          *(result - 3) = 0;
        }
        while ( result != v10 );
      }
    }
  }
  return result;
}

