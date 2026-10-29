__int64 __fastcall sub_21F9E30(__int64 a1, char a2)
{
  _DWORD *v3; // r12
  int v4; // r13d
  __int64 v5; // rax
  _QWORD *v6; // rdi
  unsigned int v7; // ebp
  _OWORD *v8; // rdx
  unsigned int v9; // esi
  __m128i si128; // xmm1
  unsigned int v11; // ecx
  __m128i v12; // xmm8
  __m128i v13; // xmm0
  __m128i v14; // xmm7
  __m128i v15; // xmm6
  __m128i v16; // xmm5
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  unsigned int v19; // r8d
  char v20; // si
  __int64 v21; // rdx
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx

  v3 = *(_DWORD **)a1;
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v4 != 2 )
  {
    if ( a2 == 1 || a2 == 4 )
    {
LABEL_23:
      if ( v4 == 1 )
        sub_21F9270((__int64 *)a1, 0, (*(_BYTE *)(a1 + 20) & 8) != 0, nullptr);
      else
        *(_BYTE *)(a1 + 20) &= 0xF8u;
      return 20;
    }
    if ( a2 == 2 )
    {
      if ( (*(_BYTE *)(a1 + 20) & 8) == 0 )
        goto LABEL_23;
    }
    else if ( a2 == 3 && (*(_BYTE *)(a1 + 20) & 8) != 0 )
    {
      goto LABEL_23;
    }
  }
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
  *(_DWORD *)(a1 + 16) = *v3;
  v5 = (unsigned int)v3[2];
  if ( (unsigned int)(v5 + 64) > 0x7F )
  {
    v7 = (unsigned int)(v5 + 64) >> 6;
    v6 = *(_QWORD **)(a1 + 8);
    if ( (_DWORD)v5 != 64 )
    {
LABEL_9:
      if ( (unsigned int)(v5 - 1) <= 0x13F )
      {
        v25 = 0;
        do
        {
          v21 = (unsigned int)(v25 + 1);
          LODWORD(v5) = v5 - 64;
          v6[v25] = -1;
          v25 = v21;
        }
        while ( (unsigned int)v5 > 0x40 );
        v20 = v5;
      }
      else
      {
        v8 = v6;
        v9 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AB8D0);
        v11 = ((unsigned int)(v5 - 65) >> 6) + 1;
        v12 = _mm_load_si128((const __m128i *)&xmmword_23AB8F0);
        v13 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0), (__m128i)xmmword_23AB8E0);
        v14 = _mm_load_si128((const __m128i *)&xmmword_23AB900);
        v15 = _mm_load_si128((const __m128i *)&xmmword_23AB910);
        v16 = _mm_load_si128((const __m128i *)&xmmword_23AB920);
        do
        {
          ++v9;
          *v8 = -1;
          v8[1] = -1;
          v17 = _mm_add_epi32(si128, v15);
          v18 = _mm_add_epi32(v13, v16);
          v8 += 2;
          v13 = _mm_add_epi32(v13, v14);
          si128 = _mm_add_epi32(si128, v12);
        }
        while ( (((unsigned int)(v5 - 65) >> 6) + 1) >> 2 > v9 );
        v19 = v11 & 0xFFFFFFFC;
        v20 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v18, 255));
        v21 = (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v17, 255));
        v22 = v5 - ((v11 & 0xFFFFFFFC) << 6);
        if ( (v11 & 0xFFFFFFFC) != v11 )
        {
          v20 = v22 - 64;
          v21 = v19 + 1;
          v6[v19] = -1;
          if ( (unsigned int)(v22 - 64) > 0x40 )
          {
            v20 = v22 + 0x80;
            v6[v21] = -1;
            v21 = v19 + 2;
            if ( (unsigned int)(v22 - 128) > 0x40 )
            {
              v6[v19 + 2] = -1;
              v21 = v19 + 3;
              v20 = v22 + 64;
            }
          }
        }
      }
      v5 = (unsigned int)(v21 + 1);
      v6[v21] = 0xFFFFFFFFFFFFFFFFLL >> (64 - v20);
      if ( v7 <= (unsigned int)v5 )
        goto LABEL_18;
      goto LABEL_17;
    }
    *v6 = -1;
    v5 = 1;
  }
  else
  {
    v6 = (_QWORD *)(a1 + 8);
    if ( (unsigned int)v5 > 0x40 )
    {
      v7 = 1;
      goto LABEL_9;
    }
    if ( (_DWORD)v5 )
    {
      v7 = 1;
      *(_QWORD *)(a1 + 8) = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v5);
      goto LABEL_18;
    }
    v7 = 1;
  }
LABEL_17:
  memset(&v6[v5], 0, 8LL * (v7 - 1 - (unsigned int)v5) + 8);
LABEL_18:
  result = 16;
  if ( v4 == 1 && v3[5] == 1 )
  {
    v24 = a1 + 8;
    if ( v7 != 1 )
      v24 = *(_QWORD *)(a1 + 8);
    sub_2209820(v24, 0);
    return 16;
  }
  return result;
}
