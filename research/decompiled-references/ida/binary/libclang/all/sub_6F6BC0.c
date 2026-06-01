_QWORD *__fastcall sub_6F6BC0(__int64 *a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 *v5; // rbp
  unsigned int v6; // eax
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 *v11; // r8
  __int64 *i; // rax
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // edi
  int v16; // r13d
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r10

  v2 = (unsigned int)(a2 - 1);
  v4 = *((unsigned int *)a1 + 4);
  v5 = (__int64 *)*a1;
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
  result = (_QWORD *)sub_25CC9C0(24LL * v6, 8);
  v8 = *((unsigned int *)a1 + 4);
  *a1 = (__int64)result;
  v9 = 24 * v8;
  v10 = &result[3 * v8];
  if ( v5 )
  {
    a1[1] = 0;
    v11 = &v5[3 * v4];
    if ( v9 )
    {
      if ( (((_BYTE)v10 - (_BYTE)result) & 8) == 0 || (*result = -4096, result += 3, result != v10) )
      {
        do
        {
          *result = -4096;
          result += 6;
          *(result - 3) = -4096;
        }
        while ( result != v10 );
      }
    }
    for ( i = v5; v11 != i; i += 3 )
    {
      v13 = *i;
      if ( *i != -4096 && v13 != -8192 )
      {
        v14 = *((_DWORD *)a1 + 4);
        if ( !v14 )
        {
          *(_QWORD *)&dword_0 = *i;
          BUG();
        }
        v15 = v14 - 1;
        v16 = 1;
        v17 = 0;
        LODWORD(v18) = (v14 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        v19 = *a1 + 24LL * (unsigned int)v18;
        v20 = *(_QWORD *)v19;
        if ( v13 != *(_QWORD *)v19 )
        {
          while ( v20 != -4096 )
          {
            if ( !v17 && v20 == -8192 )
              v17 = v19;
            v18 = v15 & (unsigned int)(v18 + v16);
            v19 = *a1 + 24 * v18;
            v20 = *(_QWORD *)v19;
            if ( v13 == *(_QWORD *)v19 )
              goto LABEL_13;
            ++v16;
          }
          if ( v17 )
            v19 = v17;
        }
LABEL_13:
        *(_QWORD *)v19 = v13;
        *(__m128i *)(v19 + 8) = _mm_loadu_si128((const __m128i *)(i + 1));
        ++*((_DWORD *)a1 + 2);
      }
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    a1[1] = 0;
    if ( result != v10 )
    {
      if ( (((_BYTE)v10 - (_BYTE)result) & 8) == 0 || (*result = -4096, result += 3, result != v10) )
      {
        do
        {
          *result = -4096;
          result += 6;
          *(result - 3) = -4096;
        }
        while ( result != v10 );
      }
    }
  }
  return result;
}

