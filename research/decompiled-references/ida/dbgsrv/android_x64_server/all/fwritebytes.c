/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fwritebytes
// Address: 0x00000000000C2A10

//----- (00000000000C2A10) ----------------------------------------------------
__int64 __fastcall fwritebytes(
        FILE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10)
{
  __int64 result; // rax
  size_t v11; // r14
  char *v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  char v17; // bl
  _BYTE *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  char v25; // bl
  __int64 v26; // r8
  char *v27; // rax
  __int64 v28; // rcx
  const __m128i *v29; // rsi
  unsigned __int64 v30; // rdx
  __m128i si128; // xmm0
  __m128i v32; // xmm1
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  unsigned __int64 v40; // rbx
  __int64 v41; // rdx
  __m128i v42; // xmm1
  _OWORD v44[2]; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v45[3]; // [rsp+30h] [rbp-18h]

  v45[0] = __readfsqword(0x28u);
  result = 0xFFFFFFFFLL;
  if ( a3 <= 0x20 )
  {
    v11 = (int)a3;
    if ( a4 )
    {
      if ( a3 )
      {
        v12 = &a2[a3];
        v13 = a3;
        if ( a3 < 0x20 || v44 < (_OWORD *)v12 && &a2[(int)a3 - (unsigned __int64)a3] < (char *)v44 + a3 )
        {
          v14 = 0;
LABEL_8:
          v15 = v13 + ~v14;
          if ( (((_BYTE)v13 - (_BYTE)v14) & 3) != 0 )
          {
            v16 = -(__int64)(((_BYTE)v13 - (_BYTE)v14) & 3);
            do
            {
              v17 = *--v12;
              *((_BYTE *)v44 + v14++) = v17;
              ++v16;
            }
            while ( v16 );
          }
          if ( v15 >= 3 )
          {
            v18 = (char *)v44 + v14 + 3;
            v19 = v14 - v13;
            v20 = 0;
            do
            {
              *(v18 - 3) = v12[v20 - 1];
              *(v18 - 2) = v12[v20 - 2];
              *(v18 - 1) = v12[v20 - 3];
              *v18 = v12[v20 - 4];
              v20 -= 4;
              v18 += 4;
            }
            while ( v19 != v20 );
          }
          return (unsigned int)-(qfwrite(a1, v44, v11) != v11);
        }
        v14 = a3 - (unsigned __int64)(a3 & 0x1F);
        v12 += (a3 & 0x1F) - (unsigned __int64)a3;
        v29 = (const __m128i *)&a2[a3 - 16];
        v30 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_FE340);
        do
        {
          v32 = _mm_shuffle_epi8(_mm_loadu_si128(v29 - 1), si128);
          v44[v30 / 0x10] = _mm_shuffle_epi8(_mm_loadu_si128(v29), si128);
          v44[v30 / 0x10 + 1] = v32;
          v30 += 32LL;
          v29 -= 2;
        }
        while ( v14 != v30 );
        if ( (v13 & 0x1F) != 0 )
          goto LABEL_8;
      }
      return (unsigned int)-(qfwrite(a1, v44, v11) != v11);
    }
    if ( !a3 )
      return (unsigned int)-(qfwrite(a1, v44, v11) != v11);
    v21 = a3;
    if ( a3 <= 0x1F || v44 < (_OWORD *)&a2[a3] && (char *)v44 + a3 > a2 )
    {
      v22 = 0;
      goto LABEL_20;
    }
    v22 = a3 & 0xFFFFFFE0;
    v33 = ((unsigned __int8)((unsigned __int64)(v22 - 32) >> 5) + 1) & 3;
    if ( (unsigned __int64)(v22 - 32) >= 0x60 )
    {
      v35 = v33 - (((unsigned __int64)(v22 - 32) >> 5) + 1);
      v34 = 0;
      do
      {
        v36 = *(_OWORD *)&a2[v34 + 16];
        v44[v34 / 0x10] = *(_OWORD *)&a2[v34];
        v44[v34 / 0x10 + 1] = v36;
        v37 = *(_OWORD *)&a2[v34 + 48];
        *(_OWORD *)&v45[v34 / 8] = *(_OWORD *)&a2[v34 + 32];
        *(_OWORD *)&v45[v34 / 8 + 2] = v37;
        v38 = *(_OWORD *)&a2[v34 + 80];
        *(__int128 *)((char *)&a7 + v34) = *(_OWORD *)&a2[v34 + 64];
        *(__int128 *)((char *)&a8 + v34) = v38;
        v39 = (__int128)_mm_loadu_si128((const __m128i *)&a2[v34 + 112]);
        *(__m128i *)((char *)&a9 + v34) = _mm_loadu_si128((const __m128i *)&a2[v34 + 96]);
        *(__int128 *)((char *)&a10 + v34) = v39;
        v34 += 128LL;
        v35 += 4;
      }
      while ( v35 );
      if ( (((unsigned __int8)((unsigned __int64)(v22 - 32) >> 5) + 1) & 3) == 0 )
        goto LABEL_39;
    }
    else
    {
      v34 = 0;
      if ( (((unsigned __int8)((unsigned __int64)(v22 - 32) >> 5) + 1) & 3) == 0 )
      {
LABEL_39:
        if ( v22 == v21 )
          return (unsigned int)-(qfwrite(a1, v44, v11) != v11);
        a2 += v22;
LABEL_20:
        v23 = v21 + ~v22;
        if ( (v21 & 3) != 0 )
        {
          v24 = -(v21 & 3);
          do
          {
            v25 = *a2++;
            *((_BYTE *)v44 + v22++) = v25;
            ++v24;
          }
          while ( v24 );
        }
        if ( v23 >= 3 )
        {
          v26 = v21 - v22;
          v27 = (char *)v44 + v22 + 3;
          v28 = 0;
          do
          {
            v27[v28 - 3] = a2[v28];
            v27[v28 - 2] = a2[v28 + 1];
            v27[v28 - 1] = a2[v28 + 2];
            v27[v28] = a2[v28 + 3];
            v28 += 4;
          }
          while ( v26 != v28 );
        }
        return (unsigned int)-(qfwrite(a1, v44, v11) != v11);
      }
    }
    v40 = v34 + 16;
    v41 = -v33;
    do
    {
      v42 = _mm_loadu_si128((const __m128i *)&a2[v40]);
      *(__m128i *)((char *)&v44[-1] + v40) = _mm_loadu_si128((const __m128i *)&a2[v40 - 16]);
      *(__m128i *)((char *)v44 + v40) = v42;
      v40 += 32LL;
      ++v41;
    }
    while ( v41 );
    goto LABEL_39;
  }
  return result;
}
// FE340: using guessed type __int128 xmmword_FE340;
