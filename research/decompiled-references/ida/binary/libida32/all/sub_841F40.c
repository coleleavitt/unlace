unsigned int *__fastcall sub_841F40(
        char a1,
        __int64 a2,
        unsigned int *a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        int a7,
        const __m128i *a8)
{
  __int64 v10; // rbp
  __int64 v11; // r12
  unsigned int *result; // rax
  unsigned int v13; // esi
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int *v16; // rax
  __int64 v17; // rdx
  unsigned int *v18; // rdi
  int v19; // eax
  int v20; // eax
  int v21; // r8d
  int v22; // ecx
  const __m128i *v23; // roff
  int v24; // r8d
  int v25; // ecx
  __m128i *v26; // rax
  unsigned int v27; // r8d
  int v28; // eax
  __m128i v29; // xmm0
  __int64 ii; // rax
  __int64 n; // rax
  __int64 m; // rax
  __int64 k; // rax
  __int64 j; // rax
  __int64 i; // rax
  __m128i v36; // xmm4
  __int64 v37; // rdx
  unsigned int *v38; // [rsp+0h] [rbp-98h]
  int v39; // [rsp+Ch] [rbp-8Ch]
  bool v40; // [rsp+1Bh] [rbp-7Dh]
  __m128i v43; // [rsp+30h] [rbp-68h] BYREF
  __m128i v44; // [rsp+40h] [rbp-58h] BYREF
  char v45; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-40h]

  v10 = *a4;
  v46 = __readfsqword(0x28u);
  v39 = 0;
  v11 = a8[1].m128i_i64[1];
  a8[11] = 0;
  a8[12] = 0;
  v40 = (a1 & 8) != 0;
LABEL_2:
  result = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *result;
        a3 = result + 1;
        v14 = *result;
        LOWORD(v14) = 0;
        if ( v14 != -2145648640 )
          break;
        switch ( (__int16)v13 )
        {
          case 6:
            for ( i = 0; i != 32; ++i )
              a8[11].m128i_i8[i] |= ~*(_BYTE *)(v11 + i + 64);
            v39 = 1;
            result = a3;
            break;
          case 7:
            for ( j = 0; j != 32; ++j )
              a8[11].m128i_i8[j] |= *(_BYTE *)(v11 + j + 64);
            goto LABEL_2;
          case 8:
            for ( k = 0; k != 32; ++k )
              a8[11].m128i_i8[k] |= ~*(_BYTE *)(v11 + k);
            v39 = 1;
            result = a3;
            break;
          case 9:
            for ( m = 0; m != 32; ++m )
              a8[11].m128i_i8[m] |= *(_BYTE *)(v11 + m);
            goto LABEL_2;
          case 10:
            for ( n = 0; n != 32; ++n )
              a8[11].m128i_i8[n] |= ~*(_BYTE *)(v11 + n + 160);
            v39 = 1;
            result = a3;
            break;
          case 11:
            for ( ii = 0; ii != 32; ++ii )
              a8[11].m128i_i8[ii] |= *(_BYTE *)(v11 + ii + 160);
            goto LABEL_2;
          case 18:
            sub_841EC0(a1 & 0xF7, (__int64)a8, dword_239F960);
            goto LABEL_2;
          case 19:
            sub_841E40(a1 & 0xF7, (__int64)a8, dword_239F960);
            goto LABEL_2;
          case 20:
            sub_841EC0(a1 & 0xF7, (__int64)a8, dword_239F940);
            goto LABEL_2;
          case 21:
            sub_841E40(a1 & 0xF7, (__int64)a8, dword_239F940);
            goto LABEL_2;
          default:
            goto LABEL_2;
        }
      }
      if ( v14 <= 0x801C0000 )
        break;
      if ( (v13 & 0xFFFE0000) != 0x80200000 )
        goto LABEL_16;
      v18 = result + 2;
      v19 = result[1];
      v39 |= v13 == -2145320960;
      if ( v19 <= 2 && v40 )
      {
        v22 = 2;
        v21 = 1;
        v20 = 0;
      }
      else
      {
        v20 = 3 * v19;
        v21 = v20 + 1;
        v22 = v20 + 2;
      }
      v23 = (const __m128i *)(v11 + dword_239B060[v20]);
      v43 = _mm_loadu_si128(v23);
      v24 = dword_239B060[v21];
      v25 = dword_239B060[v22];
      v44 = _mm_loadu_si128(v23 + 1);
      if ( v24 >= 0 )
      {
        v26 = &v43;
        v27 = v24 - (unsigned int)&v43;
        if ( v25 < 0 )
        {
          do
          {
            v26->m128i_i8[0] &= ~*(_BYTE *)(v11 + (int)(v27 + (_DWORD)v26));
            v26 = (__m128i *)((char *)v26 + 1);
          }
          while ( v26 != (__m128i *)&v45 );
        }
        else
        {
          do
          {
            v26->m128i_i8[0] |= *(_BYTE *)(v11 + (int)(v27 + (_DWORD)v26));
            v26 = (__m128i *)((char *)v26 + 1);
          }
          while ( &v45 != (char *)v26 );
        }
      }
      v28 = -v25;
      if ( v25 > 0 )
        v28 = v25;
      if ( v28 == 1 )
      {
        v43.m128i_i8[1] &= 0xC3u;
      }
      else if ( v28 == 2 )
      {
        v43.m128i_i8[11] &= ~0x80u;
      }
      if ( v13 == -2145320960 )
      {
        v36 = _mm_loadu_si128(a8 + 12);
        a8[11] = _mm_or_si128(_mm_xor_si128(_mm_load_si128(&v43), (__m128i)-1LL), _mm_loadu_si128(a8 + 11));
        v29 = _mm_or_si128(_mm_xor_si128(_mm_load_si128(&v44), (__m128i)-1LL), v36);
      }
      else
      {
        a8[11] = _mm_or_si128(_mm_loadu_si128(a8 + 11), v43);
        v29 = _mm_or_si128(_mm_loadu_si128(a8 + 12), v44);
      }
      a8[12] = v29;
      result = v18;
    }
    if ( v14 != -2147155968 )
      break;
    v13 = result[1];
    a3 = result + 2;
LABEL_7:
    if ( v13 == 13 || v13 == 10 )
      a8[14].m128i_i32[2] |= 0x800u;
    if ( (*a3 & 0xFFFEFFFF) == 0x80220000 )
    {
      v15 = a3[1];
      v16 = a3 + 2;
      if ( v15 == -2147155968 )
      {
        v15 = a3[2];
        v16 = a3 + 3;
      }
      if ( v15 == 13 || v15 == 10 )
        a8[14].m128i_i32[2] |= 0x800u;
      v38 = v16;
      sub_841C80(a1, (__int64)a8, v13, v15);
      result = v38;
    }
    else
    {
      sub_841C80(a1, (__int64)a8, v13, v13);
      result = a3;
    }
  }
  if ( (v13 & 0x80000000) == 0 )
    goto LABEL_7;
LABEL_16:
  if ( a5 )
  {
    a8[11] = _mm_xor_si128(_mm_loadu_si128(a8 + 11), (__m128i)-1LL);
    a8[12] = _mm_xor_si128(_mm_loadu_si128(a8 + 12), (__m128i)-1LL);
  }
  if ( a8[11].m128i_i32[0] == -1 )
  {
    v37 = 0;
    while ( a8[11].m128i_i32[v37] == -1 )
    {
      if ( ++v37 == 8 )
      {
        *(_BYTE *)v10 = 13;
        v17 = v10 + 1;
        goto LABEL_20;
      }
    }
  }
  *(_BYTE *)v10 = (v39 != a5) + 110;
  v17 = v10 + 33;
  *(__m128i *)(v10 + 1) = _mm_loadu_si128(a8 + 11);
  *(__m128i *)(v10 + 17) = _mm_loadu_si128(a8 + 12);
LABEL_20:
  *a4 = v17;
  return result;
}

