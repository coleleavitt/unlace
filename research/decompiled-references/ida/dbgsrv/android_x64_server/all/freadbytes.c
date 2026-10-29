/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: freadbytes
// Address: 0x00000000000C2840

//----- (00000000000C2840) ----------------------------------------------------
__int64 __fastcall freadbytes(FILE *a1, char *a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  unsigned int v7; // r15d
  char *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  char *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __m128i *v16; // rdi
  unsigned __int64 v17; // rbp
  __m128i si128; // xmm0
  __m128i v19; // xmm2
  _OWORD v21[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+20h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  v6 = (int)a3;
  v7 = -1;
  if ( qfread(a1, v21, (int)a3) != a3 )
    return v7;
  if ( a4 )
  {
    if ( (int)a3 > 0 )
    {
      v8 = &a2[v6];
      v9 = a3;
      if ( a3 < 0x20 || &a2[v6 - a3] < (char *)v21 + a3 && v21 < (_OWORD *)v8 )
      {
        v10 = 0;
LABEL_8:
        v11 = v9 + ~v10;
        if ( (((_BYTE)v9 - (_BYTE)v10) & 7) != 0 )
        {
          v12 = -(__int64)(((_BYTE)v9 - (_BYTE)v10) & 7);
          do
          {
            *--v8 = *((_BYTE *)v21 + v10++);
            ++v12;
          }
          while ( v12 );
        }
        v7 = 0;
        if ( v11 >= 7 )
        {
          v13 = (char *)v21 + v10 + 7;
          v14 = v10 - v9;
          v7 = 0;
          v15 = 0;
          do
          {
            v8[v15 - 1] = *(v13 - 7);
            v8[v15 - 2] = *(v13 - 6);
            v8[v15 - 3] = *(v13 - 5);
            v8[v15 - 4] = *(v13 - 4);
            v8[v15 - 5] = *(v13 - 3);
            v8[v15 - 6] = *(v13 - 2);
            v8[v15 - 7] = *(v13 - 1);
            v8[v15 - 8] = *v13;
            v15 -= 8;
            v13 += 8;
          }
          while ( v14 != v15 );
        }
        return v7;
      }
      v10 = a3 - (unsigned __int64)(a3 & 0x1F);
      v8 += (a3 & 0x1F) - (unsigned __int64)a3;
      v16 = (__m128i *)&a2[v6 - 16];
      v17 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_FE340);
      do
      {
        v19 = _mm_load_si128((const __m128i *)&v21[v17 / 0x10 + 1]);
        *v16 = _mm_shuffle_epi8(_mm_load_si128((const __m128i *)&v21[v17 / 0x10]), si128);
        v16[-1] = _mm_shuffle_epi8(v19, si128);
        v17 += 32LL;
        v16 -= 2;
      }
      while ( v10 != v17 );
      if ( (v9 & 0x1F) != 0 )
        goto LABEL_8;
    }
    return 0;
  }
  v7 = 0;
  if ( (int)a3 > 0 )
    memcpy(a2, v21, a3);
  return v7;
}
// FE340: using guessed type __int128 xmmword_FE340;
