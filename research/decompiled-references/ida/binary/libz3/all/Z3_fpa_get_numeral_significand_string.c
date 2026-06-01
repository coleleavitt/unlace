char *__fastcall Z3_fpa_get_numeral_significand_string(__int64 a1, __int64 a2)
{
  char v3; // al
  char v4; // r13
  unsigned int v5; // ebp
  __int64 v6; // r12
  int v7; // r14d
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  char *v10; // rbx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned __int32 v15; // r15d
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  int *v19; // r14
  char *v20; // r14
  char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  char *v24; // rcx
  _QWORD *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __m128i si128; // xmm3
  __int64 v29; // rax
  void *v30; // rdx
  __int64 v31; // rax
  void *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rcx
  char *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbp
  _DWORD *v39; // rdi
  _DWORD *v40; // rcx
  int v41; // edx
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rsi
  __m128i v45; // [rsp+20h] [rbp-2A8h] BYREF
  char *v46; // [rsp+30h] [rbp-298h]
  __int64 v47; // [rsp+38h] [rbp-290h]
  __int64 v48; // [rsp+40h] [rbp-288h]
  char *v49; // [rsp+48h] [rbp-280h]
  std::locale *v50[2]; // [rsp+50h] [rbp-278h] BYREF
  __m128i v51; // [rsp+60h] [rbp-268h] BYREF
  char *v52; // [rsp+70h] [rbp-258h]
  char **v53; // [rsp+78h] [rbp-250h]
  void *v54[2]; // [rsp+80h] [rbp-248h] BYREF
  _QWORD v55[2]; // [rsp+90h] [rbp-238h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-228h]
  unsigned int v57; // [rsp+A8h] [rbp-220h] BYREF
  int v58; // [rsp+B0h] [rbp-218h] BYREF
  char v59; // [rsp+B4h] [rbp-214h]
  __int64 v60; // [rsp+D0h] [rbp-1F8h]
  _QWORD v61[2]; // [rsp+D8h] [rbp-1F0h] BYREF
  _QWORD v62[3]; // [rsp+E8h] [rbp-1E0h] BYREF
  char *v63; // [rsp+100h] [rbp-1C8h] BYREF
  __int64 v64; // [rsp+108h] [rbp-1C0h]
  _OWORD v65[2]; // [rsp+110h] [rbp-1B8h] BYREF
  __int128 v66; // [rsp+130h] [rbp-198h]
  __int128 v67; // [rsp+140h] [rbp-188h]
  char v68[8]; // [rsp+150h] [rbp-178h] BYREF
  int v69; // [rsp+158h] [rbp-170h]
  void *v70; // [rsp+160h] [rbp-168h]
  void *v71; // [rsp+168h] [rbp-160h]
  _QWORD v72[2]; // [rsp+170h] [rbp-158h] BYREF
  _QWORD v73[28]; // [rsp+180h] [rbp-148h] BYREF
  __int16 v74; // [rsp+260h] [rbp-68h]
  __int128 v75; // [rsp+268h] [rbp-60h]
  __int128 v76; // [rsp+278h] [rbp-50h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v4 = v3;
  if ( v3 )
  {
    sub_2A1C20();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
    {
      if ( *(_DWORD *)(a2 + 8) )
        goto LABEL_4;
      sub_24EA30(a1, 3u, "not a valid ast");
    }
    else
    {
      sub_24EA30(a1, 3u, "ast is null");
    }
    v10 = nullptr;
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 )
  {
    sub_24EA30(a1, 3u, "ast is null");
    return nullptr;
  }
  if ( !*(_DWORD *)(a2 + 8) )
  {
    sub_24EA30(a1, 3u, "not a valid ast");
    return nullptr;
  }
LABEL_4:
  v5 = *(_DWORD *)(a1 + 1460);
  v6 = *(_QWORD *)(a1 + 376);
  v7 = sub_15D2690(*(_QWORD *)(a1 + 232), v5);
  if ( *(_WORD *)(a2 + 4)
    || (v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && v5 == *v8 && v8[1] == 8
    || (v9 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr
    || *(_DWORD *)(a1 + 384) != *v9
    || v9[1] )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    v10 = "";
    goto LABEL_10;
  }
  v56 = v6 + 24;
  sub_181A6B0(&v57);
  if ( !(unsigned __int8)sub_15C4FC0(v7, a2, (unsigned int)&v57, v12, v13, v14)
    || !(unsigned __int8)sub_181BF40(v6 + 24, &v57)
    && !(unsigned __int8)sub_181C060(v6 + 24, &v57)
    && !(unsigned __int8)sub_181B190(v6 + 24, &v57)
    && !(unsigned __int8)sub_181BE30(v6 + 24, &v57) )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    v10 = "";
    sub_182EF00(*(_QWORD *)(v56 + 728), &v58);
    goto LABEL_10;
  }
  v60 = v6 + 24;
  v61[0] = 0;
  v61[1] = 0;
  v62[0] = 1;
  v45.m128i_i32[0] = (unsigned __int16)(v57 >> 15);
  v62[1] = 0;
  if ( (v59 & 1) != 0 )
    sub_182EA00(v6 + 24, v61, &v58);
  else
    LODWORD(v61[0]) = v58;
  sub_182EF00(v6 + 24, v62);
  BYTE4(v62[0]) &= ~1u;
  LODWORD(v62[0]) = 1;
  v15 = v45.m128i_i32[0] - 1;
  if ( !(unsigned __int8)sub_181C060(v6 + 24, &v57) )
  {
    v16 = sub_2945C0(v6 + 760, v15, 0);
    v17 = *(_DWORD *)v16;
    if ( !*(_DWORD *)v16 )
    {
      if ( (v61[0] & 0x100000000LL) != 0 )
        sub_182EA00(v6 + 24, v61, v61);
      else
        BYTE4(v61[0]) &= ~1u;
      if ( (v62[0] & 0x100000000LL) != 0 )
        sub_182EA00(v6 + 24, v62, v62);
      else
        BYTE4(v62[0]) &= ~1u;
      goto LABEL_34;
    }
    if ( LODWORD(v61[0]) )
    {
      if ( (v62[0] & 0x100000000LL) != 0 || LODWORD(v62[0]) != 1 )
      {
        v46 = (char *)(v6 + 624);
        sub_1839230(v6 + 24, v16, v62, v6 + 624);
        if ( (v62[0] & 0x100000000LL) != 0 )
          sub_182EA00(v6 + 24, v62, v62);
        else
          BYTE4(v62[0]) &= ~1u;
        sub_1839610(v6 + 24, v61, v46);
        sub_183B0A0(v6 + 24, v61, v62, v46);
        if ( (*(_BYTE *)(v6 + 628) & 1) != 0 || *(_DWORD *)(v6 + 624) != 1 )
        {
          sub_183C300(v6 + 24, v61, v46, v61);
          sub_183C300(v6 + 24, v62, v46, v62);
        }
        goto LABEL_34;
      }
      sub_1839610(v6 + 24, v61, v16);
    }
    else if ( (*(_BYTE *)(v16 + 4) & 1) != 0 )
    {
      sub_182EA00(v6 + 24, v61, v16);
    }
    else
    {
      BYTE4(v61[0]) &= ~1u;
      LODWORD(v61[0]) = v17;
    }
    sub_182EF00(v6 + 24, v62);
    BYTE4(v62[0]) &= ~1u;
    LODWORD(v62[0]) = 1;
  }
LABEL_34:
  v18 = sub_2945C0(v6 + 760, v15, 0);
  v19 = (int *)v18;
  if ( LODWORD(v61[0]) && ((*(_BYTE *)(v18 + 4) & 1) != 0 || *(_DWORD *)v18 != 1) )
  {
    if ( (v61[0] & 0x100000000LL) != 0 )
      sub_182EA00(v6 + 24, v61, v61);
    else
      BYTE4(v61[0]) &= ~1u;
    sub_1839230(v6 + 24, v62, v19, v62);
    if ( *v19 < 0 )
    {
      sub_1839100(v6 + 24, v61);
      sub_1839100(v6 + 24, v62);
    }
    sub_183B0A0(v6 + 24, v61, v62, v6 + 624);
    if ( (*(_BYTE *)(v6 + 628) & 1) != 0 || *(_DWORD *)(v6 + 624) != 1 )
    {
      sub_183C300(v6 + 24, v61, v6 + 624, v61);
      sub_183C300(v6 + 24, v62, v6 + 624, v62);
    }
  }
  else
  {
    if ( (v61[0] & 0x100000000LL) != 0 )
      sub_182EA00(v6 + 24, v61, v61);
    else
      BYTE4(v61[0]) &= ~1u;
    if ( (v62[0] & 0x100000000LL) != 0 )
      sub_182EA00(v6 + 24, v62, v62);
    else
      BYTE4(v62[0]) &= ~1u;
  }
  v51.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(__m128i *)v50 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  if ( (unsigned __int8)sub_181BE30(v6 + 24, &v57) )
  {
    BYTE4(v61[0]) &= ~1u;
    LODWORD(v61[0]) = 0;
    sub_182EF00(v6 + 24, v62);
    BYTE4(v62[0]) &= ~1u;
    LODWORD(v62[0]) = 1;
  }
  v53 = &v63;
  std::ios_base::ios_base((std::ios_base *)v73);
  v73[27] = 0;
  v20 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v75 = 0;
  v74 = 0;
  v21 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v76 = 0;
  v73[0] = (char *)&`vtable for'std::ios + 16;
  v22 = *((_QWORD *)v20 - 3);
  v63 = v20;
  *(char **)((char *)&v63 + v22) = v21;
  v64 = 0;
  v46 = v21;
  std::ios::init();
  v23 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v51.m128i_i64[1] = (__int64)v65;
  v24 = (char *)v65 + *(_QWORD *)(v23 - 24);
  *(_QWORD *)&v65[0] = v23;
  v25 = v24;
  v26 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v25 = v26;
  v47 = v26;
  std::ios::init();
  v27 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  si128 = _mm_load_si128((const __m128i *)v50);
  v29 = *(_QWORD *)(v27 - 24);
  v49 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v48 = v27;
  *(char **)((char *)&v63 + v29) = v49;
  v50[0] = (std::locale *)v68;
  v65[0] = si128;
  v63 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v73[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v65[1] = 0;
  v66 = 0;
  v67 = 0;
  std::locale::locale((std::locale *)v68);
  v69 = 24;
  v70 = v72;
  *((_QWORD *)&v65[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v71 = nullptr;
  LOBYTE(v72[0]) = 0;
  v52 = (char *)v65 + 8;
  std::ios::init();
  sub_184D1E0(v6 + 24, v51.m128i_i32[2]);
  v30 = v70;
  if ( (_QWORD)v67 )
  {
    v31 = v66;
    if ( !(_QWORD)v66 || (unsigned __int64)v66 < (unsigned __int64)v67 )
      v31 = v67;
    v71 = (void *)(v31 - *((_QWORD *)&v66 + 1));
    *((_BYTE *)v70 + v31 - *((_QWORD *)&v66 + 1)) = 0;
    v30 = v70;
    v54[0] = v55;
    if ( v70 != v72 )
      goto LABEL_49;
LABEL_76:
    v32 = v71;
    v39 = v55;
    v40 = v72;
    v41 = (_DWORD)v71 + 1;
    if ( (unsigned int)((_DWORD)v71 + 1) >= 8 )
    {
      LODWORD(v43) = 0;
      do
      {
        v44 = (unsigned int)v43;
        v43 = (unsigned int)(v43 + 8);
        *(_QWORD *)((char *)v55 + v44) = *(_QWORD *)((char *)v72 + v44);
      }
      while ( (unsigned int)v43 < (v41 & 0xFFFFFFF8) );
      v39 = (_DWORD *)((char *)v55 + v43);
      v40 = (_DWORD *)((char *)v72 + v43);
    }
    v42 = 0;
    if ( (v41 & 4) != 0 )
    {
      *v39 = *v40;
      v42 = 4;
    }
    if ( (v41 & 2) != 0 )
    {
      *(_WORD *)((char *)v39 + v42) = *(_WORD *)((char *)v40 + v42);
      v42 += 2;
    }
    if ( (v41 & 1) != 0 )
      *((_BYTE *)v39 + v42) = *((_BYTE *)v40 + v42);
    goto LABEL_50;
  }
  v54[0] = v55;
  if ( v70 == v72 )
    goto LABEL_76;
LABEL_49:
  v54[0] = v30;
  v55[0] = v72[0];
  v32 = v71;
LABEL_50:
  v54[1] = v32;
  v70 = v72;
  v71 = nullptr;
  LOBYTE(v72[0]) = 0;
  std::stringbuf::_M_sync();
  v45.m128i_i64[0] = (__int64)v54;
  v10 = (char *)sub_24ED70((_QWORD *)a1, (__int64)v54);
  v33 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v51), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v54[0] != v55 )
  {
    v45 = v33;
    operator delete(v54[0], v55[0] + 1LL);
    v33 = _mm_load_si128(&v45);
  }
  v65[0] = v33;
  v63 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v73[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v70 != v72 )
    operator delete(v70, v72[0] + 1LL);
  *((_QWORD *)&v65[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v50[0]);
  v34 = v47;
  v35 = v46;
  *(char **)((char *)&v63 + *(_QWORD *)(v48 - 24)) = v49;
  v36 = *(_QWORD *)(v23 - 24);
  *(_QWORD *)&v65[0] = v23;
  *(_QWORD *)((char *)v65 + v36) = v34;
  v37 = *((_QWORD *)v20 - 3);
  v63 = v20;
  *(char **)((char *)&v63 + v37) = v35;
  v64 = 0;
  v73[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v73);
  v38 = v60;
  sub_182EF00(v60, v61);
  sub_182EF00(v38, v62);
  sub_182EF00(*(_QWORD *)(v56 + 728), &v58);
LABEL_10:
  if ( v4 )
LABEL_17:
    byte_1C7EBA0 = 1;
  return v10;
}

