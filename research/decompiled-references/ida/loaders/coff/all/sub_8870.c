unsigned __int64 __fastcall sub_8870(_QWORD *a1, const __m128i *a2, unsigned int a3, char a4)
{
  __int64 v4; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax
  __int8 v10; // cl
  unsigned __int64 v11; // r8
  __int32 v12; // esi
  unsigned int v13; // edx
  _QWORD *v14; // rdi
  __m128i v15; // xmm0
  unsigned __int64 *v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax

  v4 = a3;
  v8 = a1[8];
  if ( v8 < a3 )
  {
    v17 = a1[7];
    if ( a1[9] < (unsigned __int64)a3 )
    {
      v18 = qvector_reserve(a1 + 7, v17, a3, 24);
      v8 = a1[8];
      a1[7] = v18;
      v17 = v18;
    }
    memset((void *)(v17 + 24 * v8), 0, 24 * (v4 - v8));
    a1[8] = v4;
  }
  else if ( a3 != v8 )
  {
    a1[8] = a3;
  }
  result = a1[7];
  v10 = 0;
  v11 = result + 24 * v4;
  do
  {
    while ( v10 )
    {
      v15 = _mm_loadu_si128(a2);
      result += 24LL;
      --v10;
      a2 = (const __m128i *)((char *)a2 + 18);
      *(__m128i *)(result - 24) = v15;
      *(_WORD *)(result - 8) = a2[-1].m128i_i16[7];
      if ( result >= v11 )
        return result;
    }
    v12 = a2->m128i_i32[0];
    *(_DWORD *)result = a2->m128i_i32[0];
    *(_DWORD *)(result + 4) = a2->m128i_i32[1];
    *(_QWORD *)(result + 8) = a2->m128i_u32[2];
    v13 = a2->m128i_u16[6];
    *(_WORD *)(result + 20) = a2->m128i_i16[7];
    *(_BYTE *)(result + 22) = a2[1].m128i_i8[0];
    v10 = a2[1].m128i_i8[1];
    *(_BYTE *)(result + 23) = v10;
    if ( a4 )
    {
      if ( !v12 )
        *(_DWORD *)(result + 4) = _byteswap_ulong(a2->m128i_u32[1]);
      v13 = (unsigned __int16)__ROL2__(v13, 8);
      *(_QWORD *)(result + 8) = _byteswap_ulong(a2->m128i_u32[2]);
      *(_WORD *)(result + 20) = __ROL2__(a2->m128i_i16[7], 8);
    }
    *(_DWORD *)(result + 16) = v13;
    v14 = *(_QWORD **)(*a1 + 141LL);
    if ( (unsigned __int64)v13 < v14[1] && v13 )
    {
      v16 = (unsigned __int64 *)(*v14 + 32LL * v13);
      if ( !*v16 )
        *v16 = result;
    }
    result += 24LL;
    a2 = (const __m128i *)((char *)a2 + 18);
  }
  while ( result < v11 );
  return result;
}

