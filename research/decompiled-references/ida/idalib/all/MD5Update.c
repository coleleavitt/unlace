unsigned __int64 __fastcall MD5Update(__m128i *a1, const __m128i *a2, size_t a3)
{
  __m128i *v3; // r15
  const __m128i *v4; // r13
  size_t v5; // r12
  int v6; // edx
  unsigned __int32 v8; // eax
  __int32 v9; // edx
  unsigned __int64 result; // rax
  unsigned int v11; // ecx
  _QWORD *v12; // rdi
  size_t v13; // rbx
  const __m128i *v14; // rbx
  __m128i v15; // xmm0
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  signed __int64 v19; // r13
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  char *v22; // rdi
  char *v23; // r8
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // esi
  __int64 v27; // rdi
  size_t v28; // [rsp+8h] [rbp-40h]

  v3 = (__m128i *)((char *)a1 + 24);
  v4 = a2;
  v5 = a3;
  v6 = 8 * a3;
  v8 = a1[1].m128i_u32[0];
  a1[1].m128i_i32[0] = v8 + v6;
  v9 = (v5 >> 29) + a1[1].m128i_i32[1] - (!__CFADD__(v8, v6) - 1);
  result = (v8 >> 3) & 0x3F;
  a1[1].m128i_i32[1] = v9;
  if ( (_DWORD)result )
  {
    v3 = (__m128i *)((char *)a1 + 24);
    v11 = 64 - result;
    v12 = (__int64 *)((char *)&a1[1].m128i_i64[1] + (unsigned int)result);
    v13 = (unsigned int)(64 - result);
    if ( v5 < v13 )
      return (unsigned __int64)memcpy(v12, a2, v5);
    if ( v11 >= 8 )
    {
      *v12 = a2->m128i_i64[0];
      *(_QWORD *)((char *)v12 + v13 - 8) = *(__int64 *)((char *)&a2->m128i_i64[-1] + v13);
      v21 = (unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v22 = (char *)v12 - v21;
      v23 = (char *)((char *)a2 - v22);
      v24 = ((_DWORD)v22 + v11) & 0xFFFFFFF8;
      if ( v24 >= 8 )
      {
        v25 = v24 & 0xFFFFFFF8;
        v26 = 0;
        do
        {
          v27 = v26;
          v26 += 8;
          *(_QWORD *)(v21 + v27) = *(_QWORD *)&v23[v27];
        }
        while ( v26 < v25 );
      }
    }
    else if ( (v11 & 4) != 0 )
    {
      *(_DWORD *)v12 = a2->m128i_i32[0];
      *(_DWORD *)((char *)v12 + v13 - 4) = *(__int32 *)((char *)&a2->m128i_i32[-1] + v13);
    }
    else if ( v11 )
    {
      *(_BYTE *)v12 = a2->m128i_i8[0];
      if ( (v11 & 2) != 0 )
        *(_WORD *)((char *)v12 + v13 - 2) = *(__int16 *)((char *)&a2->m128i_i16[-1] + v13);
    }
    v4 = (const __m128i *)((char *)v4 + v13);
    v5 -= v13;
    result = MD5Transform(a1, v3);
  }
  if ( v5 > 0x3F )
  {
    v14 = v4;
    v28 = v5 - 64;
    do
    {
      v15 = _mm_loadu_si128(v14);
      v14 += 4;
      *v3 = v15;
      v3[1] = _mm_loadu_si128(v14 - 3);
      v3[2] = _mm_loadu_si128(v14 - 2);
      v3[3] = _mm_loadu_si128(v14 - 1);
      MD5Transform(a1, v3);
    }
    while ( v14 != (const __m128i *)&v4[4].m128i_i8[(v5 - 64) & 0xFFFFFFFFFFFFFFC0LL] );
    LODWORD(v5) = v5 & 0x3F;
    result = v28 & 0xFFFFFFFFFFFFFFC0LL;
    v4 = (const __m128i *)((char *)v4 + (v28 & 0xFFFFFFFFFFFFFFC0LL) + 64);
  }
  if ( (unsigned int)v5 < 8 )
  {
    if ( (v5 & 4) != 0 )
    {
      a1[1].m128i_i32[2] = v4->m128i_i32[0];
      *(__int32 *)((char *)&v3->m128i_i32[-1] + (unsigned int)v5) = *(__int32 *)((char *)&v4->m128i_i32[-1]
                                                                               + (unsigned int)v5);
    }
    else if ( (_DWORD)v5 )
    {
      a1[1].m128i_i8[8] = v4->m128i_i8[0];
      if ( (v5 & 2) != 0 )
        *(__int16 *)((char *)&v3->m128i_i16[-1] + (unsigned int)v5) = *(__int16 *)((char *)&v4->m128i_i16[-1]
                                                                                 + (unsigned int)v5);
    }
  }
  else
  {
    v16 = (unsigned __int64)&a1[2];
    *(_QWORD *)(v16 - 8) = v4->m128i_i64[0];
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    v18 = *(__int64 *)((char *)&v4->m128i_i64[-1] + (unsigned int)v5);
    result = (unsigned __int64)v3 - v17;
    v19 = (char *)v4 - ((char *)v3 - v17);
    *(__int64 *)((char *)&v3->m128i_i64[-1] + (unsigned int)v5) = v18;
    if ( (((_DWORD)v5 + (_DWORD)v3 - (_DWORD)v17) & 0xFFFFFFF8) >= 8 )
    {
      LODWORD(result) = 0;
      do
      {
        v20 = (unsigned int)result;
        result = (unsigned int)(result + 8);
        *(_QWORD *)(v17 + v20) = *(_QWORD *)(v19 + v20);
      }
      while ( (unsigned int)result < (((_DWORD)v5 + (_DWORD)v3 - (_DWORD)v17) & 0xFFFFFFF8) );
    }
  }
  return result;
}
