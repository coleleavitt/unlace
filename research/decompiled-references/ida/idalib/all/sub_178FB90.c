__m128i **__fastcall sub_178FB90(__m128i **a1, __int64 a2)
{
  __m128i *v2; // r12
  __m128i *v3; // rax
  __m128i si128; // xmm0
  const char *v6; // rbp
  bool v7; // zf
  size_t v8; // r12
  __m128i *v9; // rax
  unsigned __int64 v10; // rsi
  char *v11; // rax
  const char *v12; // rbp
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __m128i *v17; // rax
  __int64 v18; // rax
  bool v19; // al
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __m128i *v22; // rax
  __m128i v23; // xmm0

  v2 = (__m128i *)(a1 + 2);
  if ( (*(_BYTE *)(sub_168B6E0(a2) + 96) & 8) != 0 )
  {
    *a1 = v2;
    v3 = (__m128i *)operator new(0x1Cu);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AAA20);
    a1[2] = (__m128i *)(&qword_18 + 3);
    strcpy(v3[1].m128i_i8, "nfiguration");
    *a1 = v3;
    *v3 = si128;
    a1[1] = (__m128i *)(&qword_18 + 3);
    return a1;
  }
  else if ( (*(_BYTE *)(sub_168B6E0(a2) + 60) & 0x20) != 0 )
  {
    v6 = "__hipPushCallConfiguration";
    v7 = (*(_BYTE *)(sub_168B6E0(a2) + 96) & 0x40) == 0;
    *a1 = v2;
    if ( v7 )
      v6 = "hipConfigureCall";
    v8 = strlen(v6);
    v9 = (__m128i *)operator new(v8 + 1);
    a1[2] = (__m128i *)v8;
    *a1 = v9;
    v10 = (unsigned __int64)&v9->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
    v9->m128i_i64[0] = *(_QWORD *)v6;
    *(__int64 *)((char *)&v9->m128i_i64[-1] + (unsigned int)v8) = *(_QWORD *)&v6[(unsigned int)v8 - 8];
    v11 = &v9->m128i_i8[-v10];
    v12 = (const char *)(v6 - v11);
    v13 = (v8 + (_DWORD)v11) & 0xFFFFFFF8;
    if ( v13 >= 8 )
    {
      v14 = v13 & 0xFFFFFFF8;
      v15 = 0;
      do
      {
        v16 = v15;
        v15 += 8;
        *(_QWORD *)(v10 + v16) = *(_QWORD *)&v12[v16];
      }
      while ( v15 < v14 );
    }
    v17 = *a1;
    a1[1] = (__m128i *)v8;
    v17->m128i_i8[v8] = 0;
    return a1;
  }
  else
  {
    v18 = sub_168B6C0(a2);
    v19 = sub_FBFF90(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 17448) + 208LL) + 408LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 17448) + 208LL) + 416LL),
            0);
    *a1 = v2;
    if ( v19 )
    {
      v20 = (__m128i *)operator new(0x1Cu);
      v21 = _mm_load_si128((const __m128i *)&xmmword_23AAA30);
      *a1 = v20;
      a1[2] = (__m128i *)(&qword_18 + 3);
      *v20 = v21;
      strcpy(v20[1].m128i_i8, "nfiguration");
      a1[1] = (__m128i *)(&qword_18 + 3);
      return a1;
    }
    else
    {
      v22 = (__m128i *)operator new(0x12u);
      v23 = _mm_load_si128((const __m128i *)&xmmword_23AAA40);
      a1[2] = (__m128i *)(&word_10 + 1);
      v22[1].m128i_i8[0] = 108;
      *v22 = v23;
      v22[1].m128i_i8[1] = 0;
      *a1 = v22;
      a1[1] = (__m128i *)(&word_10 + 1);
      return a1;
    }
  }
}
