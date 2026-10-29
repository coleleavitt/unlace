__m128i *__fastcall sub_AD0E00(__int64 a1, __m128i *a2, int a3)
{
  __int64 v6; // rax
  __m128i **v7; // rcx
  __int32 v8; // edi
  unsigned int v9; // edx
  __m128i *v10; // rsi
  __int64 v11; // rdx
  __m128i **v12; // r8
  __m128i *result; // rax
  __int64 v14; // rdx
  void *v15; // rdi
  __m128i *v16; // [rsp+0h] [rbp-28h] BYREF
  int v17; // [rsp+8h] [rbp-20h]

  v6 = *(unsigned int *)(a1 + 16);
  v7 = *(__m128i ***)(a1 + 8);
  v8 = a2->m128i_i32[3];
  v9 = v6 - 1;
  v6 *= 16;
  v10 = (__m128i *)((char *)v7 + v6);
  v11 = 16LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    for ( result = (__m128i *)&v7[(unsigned __int64)v11 / 8]; v10 != result; ++result )
    {
      v14 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && a2 == (__m128i *)v14 )
          return result;
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v7 == v12 )
  {
LABEL_8:
    if ( a2->m128i_i16[2] )
      goto LABEL_12;
LABEL_9:
    result = *(__m128i **)(a2[1].m128i_i64[0] + 24);
    if ( !result || result->m128i_i32[0] != 3 || result->m128i_i32[1] )
    {
      if ( a2[1].m128i_i32[2] )
        goto LABEL_12;
      goto LABEL_15;
    }
    return result;
  }
  while ( 1 )
  {
    result = *v7;
    if ( (unsigned __int64)*v7 <= 1 )
      break;
    if ( result->m128i_i32[3] == v8 && a2 == result )
      return result;
LABEL_21:
    v7 += 2;
    if ( v12 == v7 )
      goto LABEL_8;
  }
  if ( result )
    goto LABEL_21;
  if ( !a2->m128i_i16[2] )
    goto LABEL_9;
LABEL_12:
  v15 = *(void **)(a1 + 72);
  if ( v15 )
    memset(v15, 0, 4LL * *(unsigned int *)(a1 + 68));
  *(_DWORD *)(a1 + 64) = 0;
  sub_AC7030(a1 + 56, a2);
LABEL_15:
  ++a2->m128i_i32[2];
  v16 = a2;
  v17 = a3;
  return sub_A3A380(a1 + 8, &v16);
}

