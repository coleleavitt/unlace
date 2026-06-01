std::_V2 *__fastcall sub_22AD6D0(
        std::_V2 *a1,
        _BYTE *a2,
        size_t a3,
        char *a4,
        unsigned __int64 a5,
        int *a6,
        int *a7,
        _DWORD *a8,
        char a9,
        char a10)
{
  unsigned __int64 v11; // r15
  char *v12; // r12
  __int64 v13; // r13
  char *v14; // r12
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r13
  __int8 *v22; // rsi
  __int8 *v23; // rsi
  __m128i *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbp
  unsigned __int64 v27; // rdx
  __m128i *v28; // rax
  void *v29; // rdi
  size_t v30; // rax
  const char *v31; // rax
  __int64 v33; // r8
  char v34; // dl
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // r15
  char *v38; // rbx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  char *v44; // [rsp+18h] [rbp-1F0h]
  size_t v45; // [rsp+18h] [rbp-1F0h]
  __int64 v46; // [rsp+20h] [rbp-1E8h]
  char *v48; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-1C0h]
  const char *v50; // [rsp+54h] [rbp-1B4h]
  int v51; // [rsp+5Ch] [rbp-1ACh]
  __m128i v52; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v53; // [rsp+70h] [rbp-198h] BYREF
  void *v54[2]; // [rsp+80h] [rbp-188h] BYREF
  _BYTE v55[16]; // [rsp+90h] [rbp-178h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-158h] BYREF
  __m128i v58; // [rsp+C0h] [rbp-148h] BYREF
  __m128i v59; // [rsp+D0h] [rbp-138h] BYREF
  void *v60[2]; // [rsp+E0h] [rbp-128h] BYREF
  _BYTE v61[16]; // [rsp+F0h] [rbp-118h] BYREF
  __m128i v62; // [rsp+100h] [rbp-108h] BYREF
  __m128i v63; // [rsp+110h] [rbp-F8h] BYREF
  __m128i v64; // [rsp+120h] [rbp-E8h] BYREF
  __m128i v65; // [rsp+130h] [rbp-D8h] BYREF
  __m128i v66; // [rsp+140h] [rbp-C8h] BYREF
  _QWORD v67[2]; // [rsp+150h] [rbp-B8h] BYREF
  __int16 v68; // [rsp+160h] [rbp-A8h]
  __m128i v69; // [rsp+170h] [rbp-98h] BYREF
  _BYTE v70[16]; // [rsp+180h] [rbp-88h] BYREF
  __int16 v71; // [rsp+190h] [rbp-78h]
  __m128i v72; // [rsp+1A0h] [rbp-68h] BYREF
  __m128i v73; // [rsp+1B0h] [rbp-58h] BYREF
  __int16 v74; // [rsp+1C0h] [rbp-48h]

  *a6 = 0;
  v48 = a4;
  *a7 = 0;
  v49 = a5;
  *a8 = 0;
  if ( !a5 )
  {
    v15 = (__int64)a4;
    v14 = a4;
LABEL_7:
    v44 = nullptr;
    v13 = 0;
    goto LABEL_8;
  }
  v11 = a5;
  v12 = a4;
  while ( (unsigned __int8)sub_1165330((__int64 (__fastcall *)(_QWORD))sub_1A7B920, *v12) )
  {
    ++v12;
    if ( !--v11 )
    {
      v13 = v49;
      v14 = v48;
      goto LABEL_6;
    }
  }
  v14 = v48;
  v33 = v49 - v11;
  if ( v49 - v11 > v49 )
    v33 = v49;
  v13 = v33;
  v11 = v49 - v33;
LABEL_6:
  v15 = (__int64)&v14[v13];
  v49 = v11;
  v48 = &v14[v13];
  if ( !v13 )
    goto LABEL_7;
  v30 = j__strlen("p");
  v44 = nullptr;
  v46 = 0;
  if ( (unsigned __int8)sub_11899B0((const void **)&v48, "p", v30) )
  {
    v37 = v49;
    v44 = v48;
    if ( v49 )
    {
      v45 = a3;
      v38 = v48;
      while ( (unsigned __int8)sub_1165330((__int64 (__fastcall *)(_QWORD))sub_1A7B920, *v38) )
      {
        ++v38;
        if ( !--v37 )
        {
          v39 = v49;
          a3 = v45;
          v46 = v49;
          v44 = v48;
          v16 = v49;
          goto LABEL_118;
        }
      }
      v39 = v49;
      a3 = v45;
      v44 = v48;
      v41 = v49 - v37;
      if ( v49 - v37 > v49 )
        v41 = v49;
      v46 = v41;
      v16 = v41;
LABEL_118:
      v37 = v13 + v16 - 1;
      if ( v37 > v39 )
      {
        v37 = v39;
        v40 = 0;
LABEL_120:
        v49 = v40;
        v48 = &v44[v37];
        if ( v46 )
          goto LABEL_66;
LABEL_121:
        v69.m128i_i64[0] = (__int64)"'";
        v31 = "minor version number missing after 'p' for extension '";
        v71 = 259;
        v68 = 1283;
        goto LABEL_73;
      }
    }
    else
    {
      if ( v13 != 1 )
        goto LABEL_121;
      v46 = v49;
      v39 = 0;
    }
    v40 = v39 - v37;
    goto LABEL_120;
  }
LABEL_66:
  if ( sub_2247970(v14, v13, 0xAu, &v72) || v72.m128i_i64[0] != v72.m128i_u32[0] )
  {
    v71 = 259;
    v68 = 1283;
    v69.m128i_i64[0] = (__int64)"'";
    v31 = "Failed to parse major version number for extension '";
    goto LABEL_73;
  }
  *a6 = v72.m128i_i32[0];
  if ( v46 )
  {
    if ( !sub_2247970(v44, v46, 0xAu, &v72) && v72.m128i_i64[0] == v72.m128i_u32[0] )
    {
      *a7 = v72.m128i_i32[0];
      *a8 = v46 + v13 + 1;
      if ( a3 <= 1 )
        goto LABEL_10;
      goto LABEL_9;
    }
    v69.m128i_i64[0] = (__int64)"'";
    v31 = "Failed to parse minor version number for extension '";
    v71 = 259;
    v68 = 1283;
LABEL_73:
    v66.m128i_i64[0] = (__int64)v31;
    v67[1] = a3;
    v67[0] = a2;
    sub_A41580(&v72, &v66, &v69, v16, v17, v18);
    sub_22A8430(a1, &v72);
    return a1;
  }
LABEL_8:
  v46 = 0;
  *a8 = v13;
  if ( a3 <= 1 )
    goto LABEL_10;
LABEL_9:
  if ( v49 )
  {
    v72.m128i_i64[0] = (__int64)"multi-character extensions must be separated by underscores";
    v74 = 259;
    sub_22A8430(a1, &v72);
    return a1;
  }
LABEL_10:
  v50 = sub_22A8D00(a2, a3);
  v51 = v19;
  if ( !(_BYTE)v19 )
  {
    if ( j__strlen("g") != a3 || a3 && memcmp(a2, "g", a3) )
    {
      if ( v46 | v13 )
      {
        if ( !(unsigned __int8)sub_22A9290(a2, a3, *a6, *a7) )
        {
          if ( !(unsigned __int8)sub_22A9170(a2, a3) )
          {
            sub_22A8EB0(a1, a2, a3, v35, v36);
            return a1;
          }
          v72.m128i_i64[0] = (__int64)&v73;
          if ( v14 )
          {
            sub_22A8AD0(&v72, v14, v15);
          }
          else
          {
            v72.m128i_i64[1] = 0;
            v73.m128i_i8[0] = 0;
          }
          sub_E7ED70(&v64, "unsupported version number ", &v72);
          if ( (__m128i *)v72.m128i_i64[0] != &v73 )
            operator delete((void *)v72.m128i_i64[0]);
          if ( v46 )
          {
            v69.m128i_i64[0] = (__int64)v70;
            if ( v44 )
            {
              sub_22A8AD0(&v69, v44, (__int64)&v44[v46]);
            }
            else
            {
              v69.m128i_i64[1] = 0;
              v70[0] = 0;
            }
            sub_E7ED70(&v72, ".", &v69);
            sub_9EE560(&v64, v72.m128i_i64[0], v72.m128i_u64[1]);
            if ( (__m128i *)v72.m128i_i64[0] != &v73 )
              operator delete((void *)v72.m128i_i64[0]);
            if ( (_BYTE *)v69.m128i_i64[0] != v70 )
              operator delete((void *)v69.m128i_i64[0]);
          }
          v66.m128i_i64[0] = (__int64)v67;
          if ( a2 )
          {
            sub_22A8AD0(&v66, a2, (__int64)&a2[a3]);
          }
          else
          {
            v66.m128i_i64[1] = 0;
            LOBYTE(v67[0]) = 0;
          }
          sub_E7ED70(&v69, " for extension '", &v66);
          sub_10E1980(&v72, &v69, "'");
          sub_9EE560(&v64, v72.m128i_i64[0], v72.m128i_u64[1]);
          if ( (__m128i *)v72.m128i_i64[0] != &v73 )
            operator delete((void *)v72.m128i_i64[0]);
          if ( (_BYTE *)v69.m128i_i64[0] != v70 )
            operator delete((void *)v69.m128i_i64[0]);
          if ( (_QWORD *)v66.m128i_i64[0] != v67 )
            operator delete((void *)v66.m128i_i64[0]);
          v72.m128i_i64[0] = (__int64)&v64;
          v74 = 260;
          sub_22A8430(a1, &v72);
          v29 = (void *)v64.m128i_i64[0];
          if ( (__m128i *)v64.m128i_i64[0] != &v65 )
            goto LABEL_64;
          return a1;
        }
      }
      else
      {
        v72.m128i_i64[0] = (__int64)sub_22A8BD0(a2, a3);
        if ( v34 )
        {
          *a6 = v72.m128i_i32[0];
          *a7 = v72.m128i_i32[1];
        }
      }
    }
LABEL_83:
    *(_QWORD *)a1 = 0;
    return a1;
  }
  if ( !a9 )
  {
    v17 = 1283;
    v71 = 259;
    v68 = 1283;
    v69.m128i_i64[0] = (__int64)"'";
    v31 = "requires '-menable-experimental-extensions' for experimental extension '";
    goto LABEL_73;
  }
  if ( !a10 )
    goto LABEL_83;
  if ( !(v46 | v13) )
  {
    v16 = 259;
    v69.m128i_i64[0] = (__int64)"`";
    v31 = "experimental extension requires explicit version number `";
    v71 = 259;
    v68 = 1283;
    goto LABEL_73;
  }
  v20 = (unsigned int)v50;
  v21 = HIDWORD(v50);
  if ( (const char *)__PAIR64__(*a7, *a6) == v50 )
    goto LABEL_83;
  v72.m128i_i64[0] = (__int64)&v73;
  if ( v14 )
  {
    sub_22A8AD0(&v72, v14, v15);
  }
  else
  {
    v72.m128i_i64[1] = 0;
    v73.m128i_i8[0] = 0;
  }
  sub_E7ED70(&v52, "unsupported version number ", &v72);
  if ( (__m128i *)v72.m128i_i64[0] != &v73 )
    operator delete((void *)v72.m128i_i64[0]);
  if ( v46 )
  {
    v69.m128i_i64[0] = (__int64)v70;
    if ( v44 )
    {
      sub_22A8AD0(&v69, v44, (__int64)&v44[v46]);
    }
    else
    {
      v69.m128i_i64[1] = 0;
      v70[0] = 0;
    }
    sub_E7ED70(&v72, ".", &v69);
    sub_9EE560(&v52, v72.m128i_i64[0], v72.m128i_u64[1]);
    if ( (__m128i *)v72.m128i_i64[0] != &v73 )
      operator delete((void *)v72.m128i_i64[0]);
    if ( (_BYTE *)v69.m128i_i64[0] != v70 )
      operator delete((void *)v69.m128i_i64[0]);
  }
  if ( v21 )
  {
    v22 = &v73.m128i_i8[5];
    while ( 1 )
    {
      *--v22 = v21 % 0xA + 48;
      if ( v21 <= 9 )
        break;
      v21 /= 0xAu;
    }
  }
  else
  {
    v73.m128i_i8[4] = 48;
    v22 = &v73.m128i_i8[4];
  }
  v66.m128i_i64[0] = (__int64)v67;
  sub_22A8A10(&v66, v22, (__int64)v73.m128i_i64 + 5);
  if ( v20 )
  {
    v23 = &v73.m128i_i8[5];
    while ( 1 )
    {
      *--v23 = v20 % 0xA + 48;
      if ( v20 <= 9 )
        break;
      v20 /= 0xAu;
    }
  }
  else
  {
    v73.m128i_i8[4] = 48;
    v23 = &v73.m128i_i8[4];
  }
  v60[0] = v61;
  sub_22A8A10(v60, v23, (__int64)v73.m128i_i64 + 5);
  if ( a2 )
  {
    v54[0] = v55;
    sub_22A8AD0(v54, a2, (__int64)&a2[a3]);
  }
  else
  {
    v55[0] = 0;
    v54[0] = v55;
    v54[1] = nullptr;
  }
  sub_E7ED70(&v56, " for experimental extension '", v54);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v56.m128i_i64[1]) <= 0x19 )
    goto LABEL_150;
  v24 = (__m128i *)sub_9EE560(&v56, "' (this compiler supports ", 0x1Au);
  v58.m128i_i64[0] = (__int64)&v59;
  if ( (__m128i *)v24->m128i_i64[0] == &v24[1] )
  {
    v59 = _mm_loadu_si128(v24 + 1);
  }
  else
  {
    v58.m128i_i64[0] = v24->m128i_i64[0];
    v59.m128i_i64[0] = v24[1].m128i_i64[0];
  }
  v25 = v24->m128i_i64[1];
  v24[1].m128i_i8[0] = 0;
  v58.m128i_i64[1] = v25;
  v24->m128i_i64[0] = (__int64)v24[1].m128i_i64;
  v24->m128i_i64[1] = 0;
  sub_1054B10(&v62, &v58, v60);
  v26 = v62.m128i_i64[1];
  if ( v62.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_150;
  v27 = (__m128i *)v62.m128i_i64[0] == &v63 ? 15LL : v63.m128i_i64[0];
  if ( v62.m128i_i64[1] + 1 > v27 )
    sub_998B30((__int64)&v62, v62.m128i_u64[1], 0, ".", 1u);
  else
    *(_BYTE *)(v62.m128i_i64[0] + v62.m128i_i64[1]) = 46;
  v62.m128i_i64[1] = v26 + 1;
  *(_BYTE *)(v62.m128i_i64[0] + v26 + 1) = 0;
  v64.m128i_i64[0] = (__int64)&v65;
  if ( (__m128i *)v62.m128i_i64[0] == &v63 )
  {
    v65 = _mm_load_si128(&v63);
  }
  else
  {
    v64.m128i_i64[0] = v62.m128i_i64[0];
    v65.m128i_i64[0] = v63.m128i_i64[0];
  }
  v63.m128i_i8[0] = 0;
  v64.m128i_i64[1] = v62.m128i_i64[1];
  v62.m128i_i64[0] = (__int64)&v63;
  v62.m128i_i64[1] = 0;
  sub_1054B10(&v69, &v64, &v66);
  if ( v69.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
LABEL_150:
    std::__throw_length_error("basic_string::append");
  v28 = (__m128i *)sub_9EE560(&v69, ")", 1u);
  v72.m128i_i64[0] = (__int64)&v73;
  if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
  {
    v73 = _mm_loadu_si128(v28 + 1);
  }
  else
  {
    v72.m128i_i64[0] = v28->m128i_i64[0];
    v73.m128i_i64[0] = v28[1].m128i_i64[0];
  }
  v72.m128i_i64[1] = v28->m128i_i64[1];
  v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
  v28->m128i_i64[1] = 0;
  v28[1].m128i_i8[0] = 0;
  sub_9EE560(&v52, v72.m128i_i64[0], v72.m128i_u64[1]);
  if ( (__m128i *)v72.m128i_i64[0] != &v73 )
    operator delete((void *)v72.m128i_i64[0]);
  if ( (_BYTE *)v69.m128i_i64[0] != v70 )
    operator delete((void *)v69.m128i_i64[0]);
  if ( (__m128i *)v64.m128i_i64[0] != &v65 )
    operator delete((void *)v64.m128i_i64[0]);
  if ( (__m128i *)v62.m128i_i64[0] != &v63 )
    operator delete((void *)v62.m128i_i64[0]);
  if ( (__m128i *)v58.m128i_i64[0] != &v59 )
    operator delete((void *)v58.m128i_i64[0]);
  if ( (__int64 *)v56.m128i_i64[0] != &v57 )
    operator delete((void *)v56.m128i_i64[0]);
  if ( v54[0] != v55 )
    operator delete(v54[0]);
  if ( v60[0] != v61 )
    operator delete(v60[0]);
  if ( (_QWORD *)v66.m128i_i64[0] != v67 )
    operator delete((void *)v66.m128i_i64[0]);
  v72.m128i_i64[0] = (__int64)&v52;
  v74 = 260;
  sub_22A8430(a1, &v72);
  v29 = (void *)v52.m128i_i64[0];
  if ( (__int64 *)v52.m128i_i64[0] != &v53 )
LABEL_64:
    operator delete(v29);
  return a1;
}
