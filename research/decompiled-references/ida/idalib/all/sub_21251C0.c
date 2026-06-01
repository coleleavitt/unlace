__int64 __fastcall sub_21251C0(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rsi
  char v8; // dl
  _BYTE *v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // rax
  __m128i *v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 *v19; // rdi
  unsigned __int8 *v20; // r8
  unsigned __int8 *v21; // rax
  unsigned __int8 *v22; // rcx
  __m128i *v23; // rax
  __m128i si128; // xmm0
  __m128i *v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  void *v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+8h] [rbp-40h]
  __int64 v30; // [rsp+10h] [rbp-38h] BYREF

  v5 = (_BYTE *)a2[7];
  if ( *v5 != 46 || (v20 = v5 + 1, a2[7] = v5 + 1, word_23E43C0[(unsigned __int8)v5[1]] == -1) )
  {
    if ( a3 )
    {
LABEL_18:
      v23 = (__m128i *)operator new(0x55u);
      v30 = 84;
      v28 = v23;
      *v23 = _mm_load_si128((const __m128i *)&xmmword_23AB3F0);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AB400);
      strcpy(v23[5].m128i_i8, "igit");
      v23[1] = si128;
      v29 = 84;
      v23[2] = _mm_load_si128((const __m128i *)&xmmword_23AB410);
      v23[3] = _mm_load_si128((const __m128i *)&xmmword_23AB420);
      v23[4] = _mm_load_si128((const __m128i *)&xmmword_23AB430);
      goto LABEL_12;
    }
  }
  else
  {
    v21 = v5 + 2;
    do
    {
      v22 = v21;
      a2[7] = v21++;
    }
    while ( word_23E43C0[*v22] != -1 );
    if ( (a3 & (v20 == v22)) != 0 )
      goto LABEL_18;
  }
  v6 = (_BYTE *)a2[7];
  if ( (*v6 & 0xDF) == 0x50 )
  {
    v7 = v6 + 1;
    a2[7] = v6 + 1;
    v8 = v6[1];
    if ( ((v8 - 43) & 0xFD) == 0 )
    {
      v7 = v6 + 2;
      a2[7] = v6 + 2;
      v8 = v6[2];
    }
    v9 = v7 + 1;
    if ( (unsigned __int8)(v8 - 48) <= 9u )
    {
      do
      {
        v10 = v9;
        a2[7] = v9++;
      }
      while ( (unsigned __int8)(*v10 - 48) <= 9u );
      if ( v10 != v7 )
      {
        v11 = a2[17];
        *(_DWORD *)a1 = 6;
        *(_DWORD *)(a1 + 32) = 64;
        *(_QWORD *)(a1 + 8) = v11;
        *(_QWORD *)(a1 + 16) = &v10[-v11];
        *(_QWORD *)(a1 + 24) = 0;
        return a1;
      }
    }
    v25 = (__m128i *)operator new(0x52u);
    v30 = 81;
    v28 = v25;
    *v25 = _mm_load_si128((const __m128i *)&xmmword_23AB3F0);
    v26 = _mm_load_si128((const __m128i *)&xmmword_23AB400);
    v25[5].m128i_i8[0] = 116;
    v25[1] = v26;
    v29 = 81;
    v25[2] = _mm_load_si128((const __m128i *)&xmmword_23AB410);
    v27 = _mm_load_si128((const __m128i *)&xmmword_23AB420);
    v25[5].m128i_i8[1] = 0;
    v25[3] = v27;
    v25[4] = _mm_load_si128((const __m128i *)&xmmword_23AB450);
  }
  else
  {
    v13 = (__m128i *)operator new(0x48u);
    v30 = 71;
    v28 = v13;
    *v13 = _mm_load_si128((const __m128i *)&xmmword_23AB3F0);
    v14 = _mm_load_si128((const __m128i *)&xmmword_23AB400);
    v13[4].m128i_i32[0] = 544502369;
    v13[1] = v14;
    v15 = _mm_load_si128((const __m128i *)&xmmword_23AB410);
    v13[4].m128i_i16[2] = 28711;
    v13[2] = v15;
    v16 = _mm_load_si128((const __m128i *)&xmmword_23AB440);
    v13[4].m128i_i8[6] = 39;
    v29 = 71;
    v13[4].m128i_i8[7] = 0;
    v13[3] = v16;
  }
LABEL_12:
  v17 = a2[17];
  a2[10] = v17;
  sub_9EE8A0((__int64)(a2 + 11), (__int64)&v28);
  v18 = a2[7];
  v19 = (__int64 *)v28;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v17;
  *(_DWORD *)(a1 + 32) = 64;
  *(_QWORD *)(a1 + 16) = v18 - v17;
  *(_QWORD *)(a1 + 24) = 0;
  if ( v19 == &v30 )
    return a1;
  operator delete(v19);
  return a1;
}
