__int64 __fastcall sub_136900(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  int v5; // ecx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rbp
  __int64 v11; // r12
  unsigned __int64 v12; // r10
  int v13; // edx
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r15
  const __m128i *v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0

  if ( a4 )
    return 0;
  if ( *(_BYTE *)a2 != 1 )
    return 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( !*(_DWORD *)(a1 + 48) )
    return 0;
  if ( !*(_DWORD *)(a2 + 4) )
    return 0;
  v6 = *(int *)(a1 + 44);
  v7 = *(int *)(a2 + 8);
  v8 = *(_DWORD *)(a2 + 8);
  v9 = *(_DWORD *)(a1 + 44);
  if ( *(int *)(a1 + 48) + v6 - 1 < v7 || *(int *)(a2 + 4) + v7 - 1 < v6 )
    return 0;
  v10 = *(_QWORD *)(a1 + 32);
  result = 0xFFFFFFFFLL;
  if ( (unsigned int)(*(_DWORD *)v10 - 56) <= 1 && a2 != v10 + 32 && a2 != v10 + 48 )
  {
    if ( *(_BYTE *)(v10 + 64) != 8 )
      return 0xFFFFFFFFLL;
    v11 = *(_QWORD *)(v10 + 72);
    v12 = *(_QWORD *)(v11 + 32);
    if ( !v12 )
      return 0xFFFFFFFFLL;
    v13 = 0;
    v14 = 0;
    while ( a2 != *(_QWORD *)(v11 + 24) + 80 * v14 )
    {
      v14 = ++v13;
      if ( v13 >= v12 )
        return 0xFFFFFFFFLL;
    }
    if ( *(_DWORD *)(v11 + 8) <= v13 )
      return 0;
    result = 0xFFFFFFFFLL;
    if ( v5 == *(unsigned __int8 *)(a1 + 64) )
    {
      if ( v9 + *(_DWORD *)(a1 + 48) >= v8 + v5 && v8 < v9 )
      {
        v15 = *(__int64 **)(a1 + 56);
        v16 = v15[1];
        v17 = v15[2];
        if ( v17 < v16 + 1 )
        {
          v18 = qvector_reserve(*(_QWORD *)(a1 + 56), 0, v16 + 1, 16);
          v19 = v15[2];
          v20 = (const __m128i *)*v15;
          v15[2] = v17;
          v21 = v18;
          v22 = v18;
          v23 = v15[1] - 1;
          if ( v23 >= 0 )
          {
            do
            {
              v24 = _mm_loadu_si128(v20);
              v22 += 16;
              ++v20;
              *(__m128i *)(v22 - 16) = v24;
            }
            while ( v23-- != 0 );
          }
          qfree(*v15);
          *v15 = v21;
          v16 = v15[1];
          v15[2] = v19;
        }
        *(__m128i *)(*v15 + 16 * v16) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)a2);
        ++v15[1];
        return 0;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
