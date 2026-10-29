__int64 __fastcall parse_borrow_date(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // ebx
  time_t v8; // rax
  time_t v9; // rbx
  const char **v11; // rbp
  int v12; // ebx
  int v13; // edx
  int v14; // eax
  char *v15; // rbp
  signed int v16; // eax
  __int64 v17; // rsi
  __m128i si128; // xmm0
  int v19; // edx
  __int64 v20; // rsi
  __m128i v21; // xmm0
  char *v22; // r14
  __int64 v23; // rax
  size_t v24; // r12
  __int64 v25; // r15
  char *v26; // r12
  char *v27; // rdi
  int v28; // ebp
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // [rsp+0h] [rbp-108h]
  char v32; // [rsp+0h] [rbp-108h]
  char v33; // [rsp+0h] [rbp-108h]
  char v34; // [rsp+Bh] [rbp-FDh] BYREF
  unsigned int v35; // [rsp+Ch] [rbp-FCh] BYREF
  signed int v36; // [rsp+10h] [rbp-F8h] BYREF
  int v37; // [rsp+14h] [rbp-F4h] BYREF
  int v38; // [rsp+18h] [rbp-F0h] BYREF
  int v39; // [rsp+1Ch] [rbp-ECh] BYREF
  char *v40; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v41; // [rsp+28h] [rbp-E0h]
  struct tm tp; // [rsp+40h] [rbp-C8h] BYREF
  char s1[4]; // [rsp+7Ch] [rbp-8Ch] BYREF
  char s2[32]; // [rsp+80h] [rbp-88h] BYREF
  char s[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+C8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  s1[3] = 0;
  if ( (unsigned int)qsscanf((int)a2, (int)"+%d%c%n", (int)&v38, (int)&v34, (int)&v39, a6, v31) == 2 )
  {
    if ( !a2[v39] && (v34 == 100 || v34 == 119) )
    {
      v7 = 7;
      v8 = time(nullptr);
      if ( v34 == 100 )
        v7 = 1;
      return v8 + 86400 * v38 * v7;
    }
    goto LABEL_24;
  }
  if ( (unsigned int)qsscanf((int)a2, (int)"%d-%3c-%d%n", (int)&v35, (int)s1, (int)&v37, (int)&v39, v32) == 3 )
  {
    v36 = 0;
    v11 = (const char **)&off_2B131A0;
    v12 = 0;
    while ( 1 )
    {
      v13 = strcasecmp(s1, *v11);
      v14 = v12++;
      if ( !v13 )
        break;
      v36 = v12;
      ++v11;
      if ( v12 == 12 )
      {
        v14 = 12;
        break;
      }
    }
    v15 = s2;
    qsnprintf((int)s2, 32, (int)"%04d-%02d-%02d", v37, v14 + 1, v35, v33);
    v16 = v36;
  }
  else
  {
    v19 = qsscanf((int)a2, (int)"%d-%d-%d%n", (int)&v37, (int)&v36, (int)&v35, (int)&v39, v33);
    v16 = --v36;
    if ( v19 != 3 )
      goto LABEL_24;
    v15 = a2;
  }
  if ( v16 > 11 )
    goto LABEL_24;
  if ( a2[v39] )
  {
    if ( a1 )
    {
      v17 = *a1;
      if ( (unsigned __int64)a1[2] <= 0x2F )
      {
        v29 = qvector_reserve(a1, v17, 48, 1);
        *a1 = v29;
        v17 = v29;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384900);
      a1[1] = 48;
      *(__m128i *)v17 = si128;
      *(__m128i *)(v17 + 16) = _mm_load_si128((const __m128i *)&xmmword_2384910);
      *(__m128i *)(v17 + 31) = _mm_load_si128((const __m128i *)&xmmword_2384920);
      *(_BYTE *)(*a1 + 47) = 0;
    }
    return -1;
  }
  memset(&tp.tm_yday, 0, 28);
  *(_OWORD *)&tp.tm_sec = 0;
  *(_QWORD *)&tp.tm_year = (unsigned int)(v37 - 1900);
  tp.tm_isdst = -1;
  *(_QWORD *)&tp.tm_mday = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), _mm_cvtsi32_si128(v16)).m128i_u64[0];
  v9 = mktime(&tp);
  if ( v9 == -1 )
    goto LABEL_24;
  v22 = s;
  v23 = qstrftime(s, 0x20u, "%F");
  v40 = nullptr;
  v24 = v23;
  v41 = 0;
  if ( v23 )
  {
    v24 = strlen(s);
    v25 = v24 + 1;
  }
  else
  {
    v25 = 1;
    v22 = (char *)&byte_22CD811;
  }
  v40 = (char *)qvector_reserve(&v40, 0, v25, 1);
  *(_QWORD *)&v41 = v25;
  memmove(v40, v22, v24);
  v40[v24] = 0;
  v26 = v40;
  v27 = v40;
  if ( !(_QWORD)v41 )
    v27 = (char *)haystack;
  v28 = strcmp(v27, v15);
  if ( v26 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v26);
  }
  if ( v28 )
  {
LABEL_24:
    if ( a1 )
    {
      v20 = *a1;
      if ( (unsigned __int64)a1[2] <= 0x15 )
      {
        v30 = qvector_reserve(a1, v20, 22, 1);
        *a1 = v30;
        v20 = v30;
      }
      v21 = _mm_load_si128((const __m128i *)&xmmword_2384900);
      a1[1] = 22;
      *(__m128i *)v20 = v21;
      *(_QWORD *)(v20 + 13) = 0x6574616420646E65LL;
      *(_BYTE *)(*a1 + 21) = 0;
    }
    return -1;
  }
  return v9;
}

