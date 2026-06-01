__int64 *__fastcall sub_408300(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  char *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *result; // rax
  int v12; // r13d
  __m128i si128; // xmm0
  __int64 v14; // rax
  unsigned __int64 i; // rbp
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a2[2];
  v4 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 1408LL);
  v6 = *(_QWORD *)(v5 + 136);
  v7 = v6 + 9;
  if ( !v6 )
    v7 = 10;
  if ( v3 < v7 )
  {
    v21 = qvector_reserve(a2, v4, v7, 24);
    v3 = a2[2];
    *a2 = v21;
    v4 = v21;
  }
  v8 = (char *)&unk_2AFDC60;
  v9 = a2[1];
  while ( 1 )
  {
    v12 = *(_DWORD *)v8;
    si128 = _mm_loadu_si128((const __m128i *)(v8 + 8));
    if ( v3 < v9 + 1 )
    {
      v22[0] = si128;
      v14 = qvector_reserve(a2, v4, v9 + 1, 24);
      v9 = a2[1];
      si128 = _mm_load_si128(v22);
      *a2 = v14;
      v4 = v14;
    }
    v8 += 24;
    v10 = v4 + 24 * v9;
    *(_DWORD *)v10 = v12;
    *(__m128i *)(v10 + 8) = si128;
    result = (__int64 *)a2[1];
    v9 = (__int64)result + 1;
    a2[1] = (__int64)result + 1;
    if ( algn_2AFDD50 == v8 )
      break;
    v3 = a2[2];
    v4 = *a2;
  }
  for ( i = 1; i < *(_QWORD *)(v5 + 136); ++i )
  {
    result = (__int64 *)(*(_QWORD *)(v5 + 128) + 16 * i);
    v16 = *result;
    if ( *result )
    {
      v17 = a2[1];
      v18 = *a2;
      v19 = v17 + 1;
      if ( a2[2] < (unsigned __int64)(v17 + 1) )
      {
        v20 = qvector_reserve(a2, v18, v17 + 1, 24);
        v17 = a2[1];
        *a2 = v20;
        v18 = v20;
        v19 = v17 + 1;
      }
      a2[1] = v19;
      result = (__int64 *)(v18 + 24 * v17);
      *(_DWORD *)result = i + 64;
      result[1] = *(_QWORD *)(v16 + 8);
      result[2] = *(_QWORD *)(v16 + 16);
    }
  }
  return result;
}

