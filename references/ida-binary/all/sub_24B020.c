__int64 __fastcall sub_24B020(
        char a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // ebx
  __int64 first_seg; // rax
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  __m128i si128; // xmm0
  __int64 v18; // r12
  __int64 v19; // r12
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm0
  const char *v25; // rdx
  int v26; // eax
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // [rsp+8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+10h] [rbp-58h] BYREF
  __int128 v31; // [rsp+18h] [rbp-50h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_database_flag(1) || !(unsigned __int8)is_debugger_on() )
    return 1;
  v9 = netnode_inited();
  if ( !(_BYTE)v9 )
    return v9;
  first_seg = get_first_seg();
  if ( first_seg )
  {
    while ( (*(_BYTE *)(first_seg + 44) & 8) != 0 )
    {
      first_seg = get_next_seg(*(_QWORD *)first_seg);
      if ( !first_seg )
        goto LABEL_9;
    }
    return 1;
  }
LABEL_9:
  v31 = 0;
  v30 = 0;
  v12 = qvector_reserve(&v30, 0, 30, 1);
  v30 = v12;
  *(_QWORD *)&v31 = 30;
  *(__m128i *)v12 = _mm_load_si128((const __m128i *)&xmmword_5DC990);
  v13 = (char *)v30;
  *(__m128i *)(v12 + 13) = _mm_load_si128((const __m128i *)&xmmword_5DC9A0);
  v13[29] = 0;
  if ( (a1 & 0x40) != 0 )
  {
    v14 = v31;
    if ( (_QWORD)v31 )
    {
      v15 = v31 + 37;
      v16 = v31 + 38;
      v14 = v31 - 1;
    }
    else
    {
      v16 = 39;
      v15 = 38;
    }
    if ( *((_QWORD *)&v31 + 1) < v16 )
    {
      v30 = qvector_reserve(&v30, v13, v16, 1);
      v13 = (char *)v30;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC9B0);
    *(_QWORD *)&v31 = v16;
    v13[v15] = 0;
    v18 = v30 + v14;
    *(__m128i *)v18 = si128;
    v13 = (char *)v30;
    *(__m128i *)(v18 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC9C0);
    *(_QWORD *)(v18 + 30) = 0xA0A2E676E697469LL;
  }
  v19 = v31;
  if ( (_QWORD)v31 )
  {
    v21 = v31 + 153;
    v20 = v31 + 154;
    v19 = v31 - 1;
  }
  else
  {
    v20 = 155;
    v21 = 154;
  }
  if ( *((_QWORD *)&v31 + 1) < v20 )
  {
    v30 = qvector_reserve(&v30, v13, v20, 1);
    v13 = (char *)v30;
  }
  *(_QWORD *)&v31 = v20;
  v22 = _mm_load_si128((const __m128i *)&xmmword_5DC9D0);
  v13[v21] = 0;
  v23 = v19 + v30;
  *(__m128i *)v23 = v22;
  *(__m128i *)(v23 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC9E0);
  *(__m128i *)(v23 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC9F0);
  *(__m128i *)(v23 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DCA00);
  *(__m128i *)(v23 + 64) = _mm_load_si128((const __m128i *)&xmmword_5DCA10);
  *(__m128i *)(v23 + 80) = _mm_load_si128((const __m128i *)&xmmword_5DCA20);
  *(__m128i *)(v23 + 96) = _mm_load_si128((const __m128i *)&xmmword_5DCA30);
  *(__m128i *)(v23 + 112) = _mm_load_si128((const __m128i *)&xmmword_5DCA40);
  *(__m128i *)(v23 + 128) = _mm_load_si128((const __m128i *)&xmmword_5DCA50);
  v24 = _mm_load_si128((const __m128i *)&xmmword_5DCA60);
  *(__m128i *)(v23 + 138) = v24;
  if ( (a1 & 8) != 0 )
  {
LABEL_24:
    sub_17D780(&v29, (__int64)v13);
    LOBYTE(v9) = (unsigned int)sub_24AE60(*(double *)v24.m128i_i64, a3, a4, a5, v27, v28, a8, a9) == 1;
    sub_17D800(&v29);
    goto LABEL_25;
  }
  v25 = &s1;
  if ( (_QWORD)v31 )
    v25 = (const char *)v30;
  v13 = "%s";
  v26 = sub_1698A0(1, (int)"%s", v25);
  if ( v26 != -1 )
  {
    if ( v26 != 1 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v9 = 0;
LABEL_25:
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30, v13);
  }
  return v9;
}
