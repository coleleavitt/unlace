__int64 __fastcall parse_timestamp(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v5; // r12d
  const char *v7; // rsi
  size_t v8; // rax
  int v9; // edx
  time_t v10; // rax
  size_t v11; // rax
  int v12; // edx
  int v13; // ebx
  time_t v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  char v17; // [rsp+0h] [rbp-B8h]
  char v18; // [rsp+0h] [rbp-B8h]
  char v19; // [rsp+1Eh] [rbp-9Ah] BYREF
  char v20; // [rsp+1Fh] [rbp-99h] BYREF
  unsigned int v21; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-90h] BYREF
  unsigned int v24; // [rsp+2Ch] [rbp-8Ch] BYREF
  unsigned int v25; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-84h]
  int v27; // [rsp+38h] [rbp-80h] BYREF
  int v28; // [rsp+3Ch] [rbp-7Ch] BYREF
  struct tm tp; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( !a2 || *(_BYTE *)a2 == 48 && !*(_BYTE *)(a2 + 1) )
  {
    *a1 = 0;
    return 1;
  }
  v7 = "%04u-%02u-%02uT%02u:%02u:%02u%n";
  v21 = 0;
  v22 = 0;
  if ( (a3 & 2) == 0 )
    v7 = "%04u-%02u-%02u %02u:%02u:%02u%n";
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( (unsigned int)qsscanf(a2, (int)v7, (int)&v21, (int)&v22, (int)&v23, (int)&v24, (char)&v25) != 6
    && (unsigned int)qsscanf(a2, (int)"%04u-%02u-%02u%n", (int)&v21, (int)&v22, (int)&v23, (int)&v27, v17) != 3 )
  {
    v19 = 0;
    v5 = 0;
    v20 = 0;
    v28 = 0;
    tp.tm_sec = 0;
    if ( (unsigned int)qsscanf(a2, (int)"%c%d%c%n", (int)&v19, (int)&v28, (int)&v20, (int)&tp, v18) != 3 )
      return v5;
    v11 = strlen((const char *)a2);
    if ( tp.tm_sec != v11 || ((v19 - 43) & 0xFD) != 0 || !v28 )
      return v5;
    if ( v20 == 83 )
    {
      v13 = 1;
      goto LABEL_26;
    }
    if ( v20 > 83 )
    {
      if ( v20 == 100 )
      {
        v16 = 1;
      }
      else
      {
        if ( v20 != 119 )
          return v5;
        v16 = 7;
      }
      v12 = 24 * v16;
    }
    else
    {
      v12 = 1;
      if ( v20 != 72 )
      {
        if ( v20 != 77 )
          return v5;
        goto LABEL_25;
      }
    }
    v12 *= 60;
LABEL_25:
    v13 = 60 * v12;
LABEL_26:
    v14 = time(nullptr);
    v15 = (unsigned int)(v28 * v13);
    if ( v19 != 43 )
      v15 = (unsigned int)-(int)v15;
    v5 = 1;
    *a1 = (v15 + v14) << 32;
    return v5;
  }
  v8 = strlen((const char *)a2);
  v9 = a3 & 1;
  if ( v27 == v8 || (v5 = 0, v9) && v27 + 1 == v8 && *(_BYTE *)(a2 + v27) == 90 )
  {
    memset(&tp.tm_wday, 0, 32);
    tp.tm_isdst = -1;
    *(_QWORD *)&tp.tm_mon = _mm_add_epi32(
                              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v21)),
                              _mm_loadl_epi64((const __m128i *)&qword_2388CB8)).m128i_u64[0];
    *(__m128i *)&tp.tm_sec = _mm_unpacklo_epi64(
                               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v25)),
                               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(v23)));
    if ( v9 )
      v10 = qtimegm(&tp);
    else
      v10 = mktime(&tp);
    v5 = 1;
    *a1 = v10 << 32;
  }
  return v5;
}

