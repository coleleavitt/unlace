unsigned __int64 __fastcall sub_6020(_QWORD *a1, const __m128i *a2, unsigned int a3, char a4)
{
  __int64 v4; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int8 v9; // cl
  unsigned __int64 v10; // rdi
  __int32 v11; // esi
  int v12; // edx
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rax

  v4 = a3;
  v7 = a1[8];
  if ( v7 < a3 )
  {
    v14 = a1[7];
    if ( a1[9] < (unsigned __int64)a3 )
    {
      v15 = qvector_reserve(a1 + 7, v14, a3, 24);
      v7 = a1[8];
      a1[7] = v15;
      v14 = v15;
    }
    memset((void *)(v14 + 24 * v7), 0, 24 * (v4 - v7));
    a1[8] = v4;
  }
  else if ( a3 != v7 )
  {
    a1[8] = a3;
  }
  result = a1[7];
  v9 = 0;
  v10 = result + 24 * v4;
  do
  {
    while ( v9 )
    {
      v13 = _mm_loadu_si128(a2);
      result += 24LL;
      --v9;
      a2 = (const __m128i *)((char *)a2 + 18);
      *(__m128i *)(result - 24) = v13;
      *(_WORD *)(result - 8) = a2[-1].m128i_i16[7];
      if ( result >= v10 )
        return result;
    }
    v11 = a2->m128i_i32[0];
    *(_DWORD *)result = a2->m128i_i32[0];
    *(_DWORD *)(result + 4) = a2->m128i_i32[1];
    *(_QWORD *)(result + 8) = a2->m128i_u32[2];
    v12 = a2->m128i_u16[6];
    *(_WORD *)(result + 20) = a2->m128i_i16[7];
    *(_BYTE *)(result + 22) = a2[1].m128i_i8[0];
    v9 = a2[1].m128i_i8[1];
    *(_BYTE *)(result + 23) = v9;
    if ( a4 )
    {
      if ( !v11 )
        *(_DWORD *)(result + 4) = _byteswap_ulong(a2->m128i_u32[1]);
      v12 = (unsigned __int16)__ROL2__(v12, 8);
      *(_QWORD *)(result + 8) = _byteswap_ulong(a2->m128i_u32[2]);
      *(_WORD *)(result + 20) = __ROL2__(a2->m128i_i16[7], 8);
    }
    *(_DWORD *)(result + 16) = v12;
    result += 24LL;
    a2 = (const __m128i *)((char *)a2 + 18);
  }
  while ( result < v10 );
  return result;
}
