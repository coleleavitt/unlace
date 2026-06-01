unsigned __int64 __fastcall sub_15EEC30(__int64 a1, unsigned __int64 *a2)
{
  char v2; // r8
  __int64 v3; // rdx
  int v4; // r9d
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rsi
  int v7; // ebx
  unsigned int i; // eax
  _QWORD *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r9
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __m128i v15; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_BYTE *)a1 & 1;
  if ( v2 )
  {
    v3 = a1 + 8;
    v4 = 7;
  }
  else
  {
    v11 = *(unsigned int *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 8);
    if ( !(_DWORD)v11 )
    {
LABEL_14:
      v15.m128i_i64[0] = v11 << 6;
      goto LABEL_15;
    }
    v4 = v11 - 1;
  }
  v5 = *a2;
  v6 = a2[1];
  v7 = 1;
  for ( i = v4
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)
              | ((unsigned __int64)((unsigned int)v5 ^ (unsigned int)(v5 >> 9)) << 32))) >> 31)
           ^ (484763065 * (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)))); ; i = v4 & v10 )
  {
    v9 = (_QWORD *)(v3 + ((unsigned __int64)i << 6));
    if ( v5 == *v9 && v6 == v9[1] )
      return v3 + ((unsigned __int64)i << 6);
    if ( !*v9 && !v9[1] )
      break;
    v10 = v7 + i;
    ++v7;
  }
  v15.m128i_i64[0] = 512;
  if ( !v2 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    goto LABEL_14;
  }
LABEL_15:
  v13 = _mm_loadl_epi64(&v15);
  v15.m128i_i64[0] = v3;
  v14 = _mm_loadl_epi64(&v15);
  return _mm_add_epi64(_mm_unpacklo_epi64(v13, v13), _mm_unpacklo_epi64(v14, v14)).m128i_u64[0];
}
