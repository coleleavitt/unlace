unsigned __int64 __fastcall sub_3C9AB0(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r8d
  bool v7; // zf
  double v8; // xmm0_8
  int v9; // r9d
  int v10; // r9d
  double v11; // xmm0_8
  int v12; // r8d
  int v13; // r9d
  double v14; // xmm0_8
  int v15; // r9d
  double v16; // xmm0_8
  int v17; // r9d
  double v18; // xmm0_8
  void *v20; // rsi
  void *v21; // rsi
  _QWORD *v22; // rsi
  __m128i *v23; // rsi
  __m128i si128; // xmm0
  __m128i *v25; // rax
  __m128i *v26; // rsi
  __m128i *v27; // rax
  _BYTE *v28; // [rsp+0h] [rbp-88h] BYREF
  __int128 v29; // [rsp+8h] [rbp-80h]
  _BYTE *v30; // [rsp+20h] [rbp-68h] BYREF
  __int128 v31; // [rsp+28h] [rbp-60h]
  __m128i *v32; // [rsp+40h] [rbp-48h] BYREF
  __int128 v33; // [rsp+48h] [rbp-40h]
  unsigned __int64 v34; // [rsp+58h] [rbp-30h]

  v6 = 1;
  v7 = a1[403] == 0;
  v34 = __readfsqword(0x28u);
  if ( v7 )
    v6 = a1[404];
  v8 = callui(203, 10, (_DWORD)a1, 8, v6, a6);
  v11 = callui(203, 10, (_DWORD)a1, 9, a1[404], v9, v8);
  v12 = 1;
  if ( !a1[403] )
    v12 = a1[401];
  callui(203, 10, (_DWORD)a1, 10, v12, v10, v11);
  v29 = 0;
  v28 = nullptr;
  v28 = (_BYTE *)qvector_reserve(&v28, 0, 1, 1);
  *(_QWORD *)&v29 = 1;
  *v28 = 0;
  v30 = nullptr;
  v31 = 0;
  v30 = (_BYTE *)qvector_reserve(&v30, 0, 1, 1);
  *(_QWORD *)&v31 = 1;
  *v30 = 0;
  v32 = nullptr;
  v33 = 0;
  v32 = (__m128i *)qvector_reserve(&v32, 0, 1, 1);
  *(_QWORD *)&v33 = 1;
  v32->m128i_i8[0] = 0;
  if ( a1[403] )
  {
    v22 = v28;
    if ( *((_QWORD *)&v29 + 1) <= 8u )
    {
      v28 = (_BYTE *)qvector_reserve(&v28, v28, 9, 1);
      v22 = v28;
    }
    *(_QWORD *)&v29 = 9;
    *v22 = 0x7265747369676552LL;
    v23 = v32;
    v28[8] = 0;
    if ( *((_QWORD *)&v33 + 1) <= 0x32u )
    {
      v32 = (__m128i *)qvector_reserve(&v32, v23, 51, 1);
      v23 = v32;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD750);
    *(_QWORD *)&v33 = 51;
    v23[3].m128i_i16[0] = 29541;
    *v23 = si128;
    v25 = v32;
    v23[1] = _mm_load_si128((const __m128i *)&xmmword_5DD760);
    v23[2] = _mm_load_si128((const __m128i *)&xmmword_5DD770);
    v25[3].m128i_i8[2] = 0;
  }
  else if ( a1[404] )
  {
    v20 = v28;
    if ( *((_QWORD *)&v29 + 1) <= 0xCu )
    {
      v28 = (_BYTE *)qvector_reserve(&v28, v28, 13, 1);
      v20 = v28;
    }
    *(_QWORD *)&v29 = 13;
    qmemcpy(v20, "Low register", 12);
    v21 = v30;
    v28[12] = 0;
    if ( *((_QWORD *)&v31 + 1) <= 0xDu )
    {
      v30 = (_BYTE *)qvector_reserve(&v30, v21, 14, 1);
      v21 = v30;
    }
    *(_QWORD *)&v31 = 14;
    qmemcpy(v21, "High register", 13);
    v30[13] = 0;
  }
  else if ( a1[401] )
  {
    v26 = v32;
    if ( *((_QWORD *)&v33 + 1) <= 0x19u )
    {
      v32 = (__m128i *)qvector_reserve(&v32, v32, 26, 1);
      v26 = v32;
    }
    *(_QWORD *)&v33 = 26;
    *v26 = _mm_load_si128((const __m128i *)&xmmword_5DD780);
    v27 = v32;
    *(__m128i *)((char *)v26 + 9) = _mm_load_si128((const __m128i *)&xmmword_5DD790);
    v27[1].m128i_i8[9] = 0;
  }
  v14 = callui(203, 18, (_DWORD)a1, 8, (unsigned int)&v28, v13, v28, (_QWORD)v29);
  v16 = callui(203, 18, (_DWORD)a1, 9, (unsigned int)&v30, v15, v14);
  v18 = callui(203, 18, (_DWORD)a1, 10, (unsigned int)&v32, v17, v16);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    v18 = qfree(v32, (const char *)&word_12, v18);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    v18 = qfree(v30, (const char *)&word_12, v18);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, (const char *)&word_12, v18);
  }
  return v34 - __readfsqword(0x28u);
}
