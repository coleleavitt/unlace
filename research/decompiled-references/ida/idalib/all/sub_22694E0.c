_QWORD *__fastcall sub_22694E0(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // eax
  _QWORD *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  _QWORD *v9; // r15
  _QWORD *i; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int16 v13; // dx
  __m128i *v14; // rax
  __int64 v15; // rdx
  _QWORD *j; // rdx
  __m128i *v17; // [rsp+8h] [rbp-40h] BYREF

  v2 = (unsigned int)(a2 - 1);
  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  v5 = (((((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
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
  if ( v5 < 0x40 )
    v5 = 64;
  *(_DWORD *)(a1 + 16) = v5;
  result = (_QWORD *)sub_22300B0(24LL * v5, 8);
  *(_QWORD *)a1 = result;
  if ( v4 )
  {
    v7 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v8 = 24 * v3;
    v9 = (_QWORD *)(v4 + 24 * v3);
    for ( i = &result[3 * v7]; i != result; *(result - 2) = 0 )
    {
      *result = -1;
      result += 3;
    }
    if ( v9 != (_QWORD *)v4 )
    {
      v11 = (_QWORD *)v4;
      do
      {
        while ( *v11 == -1 || *v11 == -2 )
        {
          v11 += 3;
          if ( v9 == v11 )
            return (_QWORD *)operator delete(v4, v8, 8);
        }
        v12 = (__int64)v11;
        v11 += 3;
        sub_22604A0((__int64 *)a1, v12, &v17);
        v13 = *((_WORD *)v11 - 4);
        v14 = v17;
        *v17 = _mm_loadu_si128((const __m128i *)(v11 - 3));
        v14[1].m128i_i16[0] = v13;
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v9 != v11 );
    }
    return (_QWORD *)operator delete(v4, v8, 8);
  }
  else
  {
    v15 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[3 * v15]; j != result; *(result - 2) = 0 )
    {
      *result = -1;
      result += 3;
    }
  }
  return result;
}
