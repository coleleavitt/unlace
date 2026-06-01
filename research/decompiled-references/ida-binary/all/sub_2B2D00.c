__int64 __fastcall sub_2B2D00(__int64 *a1, char *a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  char v6; // di
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  char v9; // bp
  __m128i v10; // xmm1
  int v11; // r9d
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  const __m128i *v16; // rdi
  __m128i si128; // xmm1
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __int64 v23; // rax
  __m128i v24[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a1[1];
  result = *a1;
  v5 = *a1 + 20 * v3;
  if ( *a1 == v5 )
    goto LABEL_9;
  v6 = *a2;
  while ( 1 )
  {
    while ( v6 != *(_BYTE *)result )
    {
LABEL_8:
      result += 20;
      if ( v5 == result )
        goto LABEL_9;
    }
    if ( v6 )
      break;
    do
    {
      if ( *((_DWORD *)a2 + 3) == *(_DWORD *)(result + 12)
        && (v11 = *(_DWORD *)(result + 16), *((_DWORD *)a2 + 4) >= v11)
        && *((_DWORD *)a2 + 4) <= v11 )
      {
        if ( *((_DWORD *)a2 + 2) == *(_DWORD *)(result + 8) )
          goto LABEL_19;
        result += 20;
        if ( result == v5 )
          goto LABEL_9;
      }
      else
      {
        result += 20;
        if ( v5 == result )
          goto LABEL_9;
      }
    }
    while ( !*(_BYTE *)result );
    result += 20;
    if ( v5 == result )
      goto LABEL_9;
  }
  while ( *((_DWORD *)a2 + 1) != *(_DWORD *)(result + 4) )
  {
    result += 20;
    if ( v5 == result )
      goto LABEL_9;
    if ( !*(_BYTE *)result )
      goto LABEL_8;
  }
LABEL_19:
  if ( result == v5 )
  {
LABEL_9:
    v7 = a1[2];
    v8 = v3 + 1;
    v9 = *a2;
    v10 = _mm_loadu_si128((const __m128i *)(a2 + 4));
    if ( v7 < v8 )
    {
      v12 = nullptr;
      v24[0] = v10;
      v13 = qvector_reserve(a1, 0, v8, 20);
      v14 = a1[1];
      v15 = a1[2];
      a1[2] = v7;
      v16 = (const __m128i *)*a1;
      si128 = _mm_load_si128(v24);
      v18 = v13;
      v19 = v14 - 1;
      if ( v19 >= 0 )
      {
        v20 = v13;
        do
        {
          v21 = _mm_loadu_si128(v16);
          v20 += 20;
          v16 = (const __m128i *)((char *)v16 + 20);
          *(__m128i *)(v20 - 20) = v21;
          v12 = (const char *)v16[-1].m128i_u32[3];
          *(_DWORD *)(v20 - 4) = (_DWORD)v12;
        }
        while ( v19-- != 0 );
        v16 = (const __m128i *)*a1;
      }
      v24[0] = si128;
      qfree(v16, v12);
      v23 = a1[1];
      *a1 = v18;
      a1[2] = v15;
      v10 = _mm_load_si128(v24);
      result = 5 * v23;
      v5 = v18 + 4 * result;
    }
    *(_BYTE *)v5 = v9;
    *(__m128i *)(v5 + 4) = v10;
    ++a1[1];
  }
  return result;
}
