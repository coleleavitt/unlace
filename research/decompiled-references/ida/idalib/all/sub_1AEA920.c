__int64 *__fastcall sub_1AEA920(__int64 a1, __int64 a2)
{
  char v2; // r10
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 *result; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // r11d
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  int v11; // eax
  int v12; // r9d
  __int64 v13; // r8
  __m128i v14; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_BYTE *)a1 & 1;
  if ( v2 )
  {
    v3 = a1 + 8;
    v4 = ((unsigned __int8)((unsigned int)a2 >> 9) ^ (unsigned __int8)((unsigned int)a2 >> 4)) & 7;
    result = (__int64 *)(a1
                       + 8
                       + 40LL
                       * (((unsigned __int8)((unsigned int)a2 >> 9) ^ (unsigned __int8)((unsigned int)a2 >> 4)) & 7));
    v6 = *result;
    if ( a2 == *result )
      return result;
    v14.m128i_i64[0] = 320;
    v8 = 7;
    if ( v6 == -4096 )
    {
LABEL_8:
      v9 = _mm_loadl_epi64(&v14);
      v14.m128i_i64[0] = v3;
      v10 = _mm_loadl_epi64(&v14);
      return (__int64 *)_mm_add_epi64(_mm_unpacklo_epi64(v9, v9), _mm_unpacklo_epi64(v10, v10)).m128i_u64[0];
    }
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 8);
    if ( !(_DWORD)v7 )
      goto LABEL_12;
    v8 = v7 - 1;
    v4 = (v7 - 1) & (((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9));
    result = (__int64 *)(v3 + 40LL * v4);
    if ( a2 == *result )
      return result;
    if ( *result == -4096 )
    {
LABEL_12:
      v14.m128i_i64[0] = 40 * v7;
      goto LABEL_8;
    }
  }
  v11 = 1;
  while ( 1 )
  {
    v12 = v11 + 1;
    v4 = v8 & (v11 + v4);
    result = (__int64 *)(v3 + 40LL * v4);
    v13 = *result;
    if ( *result == a2 )
      return result;
    v11 = v12;
    if ( v13 == -4096 )
    {
      v14.m128i_i64[0] = 320;
      if ( v2 )
        goto LABEL_8;
      v7 = *(unsigned int *)(a1 + 16);
      goto LABEL_12;
    }
  }
}
