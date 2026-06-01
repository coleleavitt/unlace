__int64 __fastcall MD5Update(_DWORD *a1, const __m128i *a2, size_t a3)
{
  __m128i *v3; // r15
  const __m128i *v4; // r13
  size_t v5; // r12
  int v6; // edx
  unsigned int v8; // eax
  size_t v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  size_t v12; // rcx
  _QWORD *v13; // rdi
  size_t v14; // rbx
  const __m128i *v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  __m128i v18; // xmm0
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  __int64 v21; // rcx
  char *v22; // r13
  __int64 v23; // rcx
  char *v24; // rdi
  char *v25; // r8
  unsigned int v26; // esi
  __int64 v27; // rdi
  size_t v28; // [rsp+8h] [rbp-40h]

  v3 = (__m128i *)(a1 + 6);
  v4 = a2;
  v5 = a3;
  v6 = 8 * a3;
  v8 = a1[4];
  a1[4] = v8 + v6;
  v9 = v5 >> 29;
  v10 = (unsigned int)(v5 >> 29) + a1[5] - (!__CFADD__(v8, v6) - 1);
  result = (v8 >> 3) & 0x3F;
  a1[5] = v10;
  if ( (_DWORD)result )
  {
    v3 = (__m128i *)(a1 + 6);
    v12 = (unsigned int)(64 - result);
    v13 = (_QWORD *)((char *)a1 + (unsigned int)result + 24);
    v14 = v12;
    if ( v5 < v12 )
      return (__int64)memcpy(v13, a2, v5);
    if ( (unsigned int)v12 >= 8 )
    {
      *v13 = a2->m128i_i64[0];
      *(_QWORD *)((char *)v13 + v12 - 8) = *(__int64 *)((char *)&a2->m128i_i64[-1] + v12);
      v10 = (unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v24 = (char *)v13 - v10;
      v25 = (char *)((char *)a2 - v24);
      v12 = ((_DWORD)v24 + (_DWORD)v12) & 0xFFFFFFF8;
      if ( (unsigned int)v12 >= 8 )
      {
        v12 = (unsigned int)v12 & 0xFFFFFFF8;
        v26 = 0;
        do
        {
          v27 = v26;
          v26 += 8;
          *(_QWORD *)(v10 + v27) = *(_QWORD *)&v25[v27];
        }
        while ( v26 < (unsigned int)v12 );
      }
    }
    else if ( (v12 & 4) != 0 )
    {
      *(_DWORD *)v13 = a2->m128i_i32[0];
      v10 = *(unsigned int *)((char *)&a2->m128i_u32[-1] + v12);
      *(_DWORD *)((char *)v13 + v12 - 4) = v10;
    }
    else if ( (_DWORD)v12 )
    {
      v10 = a2->m128i_u8[0];
      v12 &= 2u;
      *(_BYTE *)v13 = v10;
      if ( (_DWORD)v12 )
      {
        v10 = *(unsigned __int16 *)((char *)&a2->m128i_u16[-1] + v14);
        *(_WORD *)((char *)v13 + v14 - 2) = v10;
      }
    }
    v4 = (const __m128i *)((char *)v4 + v14);
    v5 -= v14;
    result = MD5Transform(a1, v3, v10, v12);
  }
  if ( v5 > 0x3F )
  {
    v15 = v4;
    v28 = v5 - 64;
    v16 = (v5 - 64) & 0xFFFFFFFFFFFFFFC0LL;
    v17 = (__int64)v4[4].m128i_i64 + v16;
    do
    {
      v18 = _mm_loadu_si128(v15);
      v15 += 4;
      *v3 = v18;
      v3[1] = _mm_loadu_si128(v15 - 3);
      v3[2] = _mm_loadu_si128(v15 - 2);
      v3[3] = _mm_loadu_si128(v15 - 1);
      MD5Transform(a1, v3, v16, v9);
    }
    while ( v15 != (const __m128i *)v17 );
    LODWORD(v5) = v5 & 0x3F;
    result = v28 & 0xFFFFFFFFFFFFFFC0LL;
    v4 = (const __m128i *)((char *)v4 + (v28 & 0xFFFFFFFFFFFFFFC0LL) + 64);
  }
  if ( (unsigned int)v5 < 8 )
  {
    if ( (v5 & 4) != 0 )
    {
      a1[6] = v4->m128i_i32[0];
      *(__int32 *)((char *)&v3->m128i_i32[-1] + (unsigned int)v5) = *(__int32 *)((char *)&v4->m128i_i32[-1]
                                                                               + (unsigned int)v5);
    }
    else if ( (_DWORD)v5 )
    {
      *((_BYTE *)a1 + 24) = v4->m128i_i8[0];
      if ( (v5 & 2) != 0 )
        *(__int16 *)((char *)&v3->m128i_i16[-1] + (unsigned int)v5) = *(__int16 *)((char *)&v4->m128i_i16[-1]
                                                                                 + (unsigned int)v5);
    }
  }
  else
  {
    v19 = (unsigned __int64)(a1 + 8);
    *(_QWORD *)(v19 - 8) = v4->m128i_i64[0];
    v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    v21 = *(__int64 *)((char *)&v4->m128i_i64[-1] + (unsigned int)v5);
    result = (__int64)v3->m128i_i64 - v20;
    v22 = (char *)((char *)v4 - ((char *)v3 - v20));
    *(__int64 *)((char *)&v3->m128i_i64[-1] + (unsigned int)v5) = v21;
    if ( (((_DWORD)v5 + (_DWORD)v3 - (_DWORD)v20) & 0xFFFFFFF8) >= 8 )
    {
      LODWORD(result) = 0;
      do
      {
        v23 = (unsigned int)result;
        result = (unsigned int)(result + 8);
        *(_QWORD *)(v20 + v23) = *(_QWORD *)&v22[v23];
      }
      while ( (unsigned int)result < (((_DWORD)v5 + (_DWORD)v3 - (_DWORD)v20) & 0xFFFFFFF8) );
    }
  }
  return result;
}

