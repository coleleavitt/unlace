__m128i *__fastcall sub_AC8A00(__int64 a1, __m128i *a2)
{
  __int64 v4; // rax
  __m128i **v5; // rcx
  __int32 v6; // edi
  unsigned int v7; // edx
  __m128i *v8; // rsi
  __int64 v9; // rdx
  __m128i **v10; // r8
  __m128i *result; // rax
  __int64 v12; // rdx
  void *v13; // rdi
  __m128i *v14; // [rsp+0h] [rbp-28h] BYREF
  int v15; // [rsp+8h] [rbp-20h]

  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(__m128i ***)(a1 + 8);
  v6 = a2->m128i_i32[3];
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__m128i *)((char *)v5 + v4);
  v9 = 16LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 != v4 )
  {
    for ( result = (__m128i *)&v5[(unsigned __int64)v9 / 8]; v8 != result; ++result )
    {
      v12 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && a2 == (__m128i *)v12 )
          return result;
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v5 == v10 )
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
    result = *v5;
    if ( (unsigned __int64)*v5 <= 1 )
      break;
    if ( result->m128i_i32[3] == v6 && a2 == result )
      return result;
LABEL_21:
    v5 += 2;
    if ( v10 == v5 )
      goto LABEL_8;
  }
  if ( result )
    goto LABEL_21;
  if ( !a2->m128i_i16[2] )
    goto LABEL_9;
LABEL_12:
  v13 = *(void **)(a1 + 72);
  if ( v13 )
    memset(v13, 0, 4LL * *(unsigned int *)(a1 + 68));
  *(_DWORD *)(a1 + 64) = 0;
  sub_AC7030(a1 + 56, a2);
LABEL_15:
  ++a2->m128i_i32[2];
  v14 = a2;
  v15 = 0;
  return sub_A3A380(a1 + 8, &v14);
}

