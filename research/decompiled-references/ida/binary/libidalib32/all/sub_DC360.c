__int64 __fastcall sub_DC360(char a1)
{
  unsigned int v1; // ebx
  __int64 first_seg; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __m128i si128; // xmm0
  __int64 v10; // r12
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // r15
  __m128i v14; // xmm0
  __int64 v15; // rax
  const char *v16; // rdx
  int v17; // eax
  __int64 v18; // [rsp+8h] [rbp-60h] BYREF
  __int64 v19; // [rsp+10h] [rbp-58h]
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_database_flag() || !(unsigned __int8)is_debugger_on() )
    return 1;
  v1 = netnode_inited();
  if ( !(_BYTE)v1 )
    return v1;
  first_seg = get_first_seg();
  if ( first_seg )
  {
    while ( (*(_BYTE *)(first_seg + 24) & 8) != 0 )
    {
      first_seg = get_next_seg();
      if ( !first_seg )
        goto LABEL_9;
    }
    return 1;
  }
LABEL_9:
  v20 = 0;
  v4 = qvector_reserve();
  v19 = v4;
  *(_QWORD *)&v20 = 30;
  *(__m128i *)v4 = _mm_load_si128((const __m128i *)&xmmword_1D2230);
  v5 = v19;
  *(__m128i *)(v4 + 13) = _mm_load_si128((const __m128i *)&xmmword_1D2240);
  *(_BYTE *)(v5 + 29) = 0;
  if ( (a1 & 0x40) != 0 )
  {
    v6 = v20;
    if ( (_QWORD)v20 )
    {
      v7 = v20 + 37;
      v8 = v20 + 38;
      v6 = v20 - 1;
    }
    else
    {
      v8 = 39;
      v7 = 38;
    }
    if ( *((_QWORD *)&v20 + 1) < v8 )
    {
      v19 = qvector_reserve();
      v5 = v19;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D2250);
    *(_QWORD *)&v20 = v8;
    *(_BYTE *)(v5 + v7) = 0;
    v10 = v19 + v6;
    *(__m128i *)v10 = si128;
    v5 = v19;
    *(__m128i *)(v10 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2260);
    *(_QWORD *)(v10 + 30) = 0xA0A2E676E697469LL;
  }
  v11 = v20;
  if ( (_QWORD)v20 )
  {
    v13 = v20 + 153;
    v12 = v20 + 154;
    v11 = v20 - 1;
  }
  else
  {
    v12 = 155;
    v13 = 154;
  }
  if ( *((_QWORD *)&v20 + 1) < v12 )
  {
    v19 = qvector_reserve();
    v5 = v19;
  }
  *(_QWORD *)&v20 = v12;
  v14 = _mm_load_si128((const __m128i *)&xmmword_1D2270);
  *(_BYTE *)(v5 + v13) = 0;
  v15 = v11 + v19;
  *(__m128i *)v15 = v14;
  *(__m128i *)(v15 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2280);
  *(__m128i *)(v15 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D2290);
  *(__m128i *)(v15 + 48) = _mm_load_si128((const __m128i *)&xmmword_1D22A0);
  *(__m128i *)(v15 + 64) = _mm_load_si128((const __m128i *)&xmmword_1D22B0);
  *(__m128i *)(v15 + 80) = _mm_load_si128((const __m128i *)&xmmword_1D22C0);
  *(__m128i *)(v15 + 96) = _mm_load_si128((const __m128i *)&xmmword_1D22D0);
  *(__m128i *)(v15 + 112) = _mm_load_si128((const __m128i *)&xmmword_1D22E0);
  *(__m128i *)(v15 + 128) = _mm_load_si128((const __m128i *)&xmmword_1D22F0);
  *(__m128i *)(v15 + 138) = _mm_load_si128((const __m128i *)&xmmword_1D2300);
  if ( (a1 & 8) != 0 )
  {
LABEL_24:
    sub_1091C0(&v18);
    LOBYTE(v1) = (unsigned int)sub_DC1A0() == 1;
    sub_109250(&v18);
    goto LABEL_25;
  }
  v16 = s1;
  if ( (_QWORD)v20 )
    v16 = (const char *)v19;
  v17 = sub_924A0(1u, (__int64)"%s", v16);
  if ( v17 != -1 )
  {
    if ( v17 != 1 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v1 = 0;
LABEL_25:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v1;
}

