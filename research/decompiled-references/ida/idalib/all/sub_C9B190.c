__int64 __fastcall sub_C9B190(_QWORD *a1, const __m128i *a2, __int64 a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  int v12; // ebp
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm0
  unsigned __int8 v22; // al
  __int64 v24; // rbp
  __int64 v25; // rsi
  const __m128i *v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm1

  v7 = 8 * a3;
  v12 = a3;
  if ( !a4 )
    v7 = 0;
  v13 = v7 + 16 * a3 + 40;
  v14 = a1[294];
  a1[304] += v13;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= (unsigned __int64)(v13 + v15) && v14 )
    a1[294] = v13 + v15;
  else
    v15 = sub_986170((__int64)(a1 + 294), v13, v13, 3, a5, a6);
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x26;
  if ( unk_2CD7484 )
    sub_EE9B50(38);
  v16 = *(_DWORD *)(v15 + 16);
  *(_WORD *)(v15 + 1) &= 0xF801u;
  v17 = v12 & 0x7FFFFFFF;
  *(_QWORD *)(v15 + 8) = a5;
  *(_QWORD *)(v15 + 32) = a6;
  v18 = v12 & 0x7FFFFFFF | v16 & 0x80000000;
  *(_DWORD *)(v15 + 16) = v18;
  *(_BYTE *)(v15 + 19) = (a4 << 7) | HIBYTE(v18) & 0x7F;
  *(_QWORD *)(v15 + 20) = a7;
  if ( !a4 )
  {
    if ( !v17 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v24 = 16LL * (v12 & 0x7FFFFFFF);
  v25 = v15 + v24 + 40;
  if ( !v17 )
    goto LABEL_12;
  v26 = a2;
  v27 = 0;
  if ( v15 + v24 == -40 )
  {
LABEL_10:
    v19 = 0;
    do
    {
      v20 = v19;
      v21 = _mm_loadu_si128(a2);
      ++v19;
      a2 = (const __m128i *)((char *)a2 + 24);
      *(__m128i *)(v15 + 16 * v20 + 40) = v21;
    }
    while ( (*(_DWORD *)(v15 + 16) & 0x7FFFFFFFu) > (unsigned int)v19 );
    goto LABEL_12;
  }
  do
  {
    v28 = _mm_loadu_si128(v26);
    v26 = (const __m128i *)((char *)v26 + 24);
    *(__m128i *)(v15 + 16 * v27 + 40) = v28;
    *(_DWORD *)(v25 + 8 * v27) = v26[-1].m128i_i32[2];
    *(_DWORD *)(v25 + 8 * v27++ + 4) = v26[-1].m128i_i32[3];
  }
  while ( (*(_DWORD *)(v15 + 16) & 0x7FFFFFFFu) > (unsigned int)v27 );
LABEL_12:
  v22 = sub_B65C10(v15);
  *(_BYTE *)(v15 + 1) = (v22 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v22 >> 2) & 7;
  return v15;
}
