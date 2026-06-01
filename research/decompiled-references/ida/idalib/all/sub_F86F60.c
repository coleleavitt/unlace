__m128i *__fastcall sub_F86F60(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned int v9; // eax
  __m128i *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __m128i si128; // xmm0
  __int64 *v14; // r13
  __m128i *i; // rdx
  __int64 *v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i *j; // rdx
  __int64 *v21; // [rsp+8h] [rbp-40h] BYREF

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
  result = (__m128i *)sub_22300B0(24LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v12 = 24 * v7;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    v14 = (__int64 *)(v8 + 24 * v7);
    for ( i = (__m128i *)((char *)result + 24 * v11); i != result; result = (__m128i *)((char *)result + 24) )
      *result = si128;
    if ( v14 != (__int64 *)v8 )
    {
      v16 = (__int64 *)v8;
      while ( *v16 == -4096 )
      {
        if ( v16[1] == -4096 )
        {
          v16 += 3;
          if ( v14 == v16 )
            return (__m128i *)operator delete(v8, v12, 8);
        }
        else
        {
LABEL_9:
          sub_F7FC00((__int64 *)a1, v16, &v21);
          v17 = v21;
          *v21 = *v16;
          v17[1] = v16[1];
          v17[2] = v16[2];
          ++*(_DWORD *)(a1 + 8);
LABEL_10:
          v16 += 3;
          if ( v14 == v16 )
            return (__m128i *)operator delete(v8, v12, 8);
        }
      }
      if ( *v16 == -8192 && v16[1] == -8192 )
        goto LABEL_10;
      goto LABEL_9;
    }
    return (__m128i *)operator delete(v8, v12, 8);
  }
  else
  {
    v18 = *(unsigned int *)(a1 + 16);
    v19 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = (__m128i *)((char *)result + 24 * v18); j != result; result = (__m128i *)((char *)result + 24) )
      *result = v19;
  }
  return result;
}
