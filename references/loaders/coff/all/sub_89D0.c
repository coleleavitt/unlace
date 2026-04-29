__int64 __fastcall sub_89D0(_QWORD *a1, const __m128i *a2, unsigned int a3, char a4)
{
  __int64 v5; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int8 v9; // r13
  unsigned __int64 v10; // rsi
  __int32 v11; // eax
  unsigned __int16 v12; // r12
  __int64 result; // rax
  _QWORD *v14; // rcx
  __m128i v15; // xmm0
  unsigned __int64 *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax

  v5 = a3;
  v7 = a1[8];
  if ( v7 < a3 )
  {
    v17 = a1[7];
    if ( a1[9] < (unsigned __int64)a3 )
    {
      v18 = qvector_reserve(a1 + 7, v17, a3, 24);
      v7 = a1[8];
      a1[7] = v18;
      v17 = v18;
    }
    memset((void *)(v17 + 24 * v7), 0, 24 * (v5 - v7));
    a1[8] = v5;
  }
  else if ( a3 != v7 )
  {
    a1[8] = a3;
  }
  v8 = a1[7];
  v9 = 0;
  v10 = v8 + 24 * v5;
  do
  {
    while ( v9 )
    {
      v15 = _mm_loadu_si128(a2);
      v8 += 24LL;
      --v9;
      a2 = (const __m128i *)((char *)a2 + 18);
      *(__m128i *)(v8 - 24) = v15;
      result = a2[-1].m128i_u16[7];
      *(_WORD *)(v8 - 8) = result;
      if ( v8 >= v10 )
        return result;
    }
    *(_QWORD *)(v8 + 8) = a2->m128i_i64[0];
    v11 = a2->m128i_i32[2];
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = v11;
    v12 = a2->m128i_u16[6];
    *(_WORD *)(v8 + 20) = a2->m128i_i16[7];
    *(_BYTE *)(v8 + 22) = a2[1].m128i_i8[0];
    v9 = a2[1].m128i_i8[1];
    result = v12;
    *(_BYTE *)(v8 + 23) = v9;
    if ( a4 )
    {
      *(_QWORD *)(v8 + 8) = swap64(a2->m128i_i64[0]);
      *(_DWORD *)(v8 + 4) = _byteswap_ulong(a2->m128i_u32[2]);
      *(_WORD *)(v8 + 20) = __ROL2__(a2->m128i_i16[7], 8);
      result = (unsigned __int16)__ROL2__(v12, 8);
    }
    *(_DWORD *)(v8 + 16) = result;
    v14 = *(_QWORD **)(*a1 + 141LL);
    if ( (unsigned __int64)(unsigned int)result < v14[1] && (_DWORD)result )
    {
      v16 = (unsigned __int64 *)(*v14 + 32LL * (unsigned int)result);
      if ( !*v16 )
        *v16 = v8;
    }
    v8 += 24LL;
    a2 = (const __m128i *)((char *)a2 + 18);
  }
  while ( v8 < v10 );
  return result;
}
