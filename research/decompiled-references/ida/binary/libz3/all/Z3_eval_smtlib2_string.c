__int64 __fastcall Z3_eval_smtlib2_string(__int64 a1, const char *a2)
{
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbp
  std::ios_base *v7; // rdx
  std::ios_base **v8; // rcx
  __int64 v9; // r12
  _QWORD *v10; // rcx
  __m128i v11; // xmm1
  __int64 v12; // rax
  char v13; // al
  size_t v14; // rax
  size_t v15; // rbp
  _QWORD *v16; // rax
  _QWORD *v17; // rbp
  void *v18; // rdx
  __int64 v19; // rax
  char *v20; // rsi
  size_t v21; // rax
  _OWORD *v22; // r13
  _QWORD *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(); // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  std::ios_base *v30; // rdi
  void *v31; // rdx
  _BYTE *v32; // rax
  size_t v33; // rax
  __int64 v34; // rbx
  __m128i v35; // xmm0
  std::ios_base *v36; // rdi
  __int64 v37; // rdx
  char *v38; // rdx
  _QWORD *v40; // rdi
  __int64 v41; // rbx
  void (__fastcall ***v42)(_QWORD); // r12
  __int64 v43; // rax
  _BYTE *v44; // rax
  size_t v45; // rax
  __int64 v46; // r8
  _QWORD *v47; // rcx
  unsigned int v48; // edx
  __int64 v49; // r9
  _DWORD *v50; // rdi
  int v51; // edx
  _DWORD *v52; // rcx
  __int64 v53; // rsi
  unsigned int v54; // ecx
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rsi
  unsigned __int64 v58; // rdi
  _QWORD *v59; // rax
  const void *v60; // rsi
  _QWORD *v61; // rax
  size_t v62; // rdx
  _QWORD *v63; // rax
  void *v64; // rsi
  _QWORD *v65; // rax
  unsigned __int64 v66; // rdi
  __m128i v67; // [rsp+0h] [rbp-408h] BYREF
  __m128i v68; // [rsp+10h] [rbp-3F8h] BYREF
  std::ios_base *v69; // [rsp+20h] [rbp-3E8h]
  std::ios_base *v70; // [rsp+28h] [rbp-3E0h]
  _QWORD *v71; // [rsp+30h] [rbp-3D8h]
  _OWORD *v72; // [rsp+38h] [rbp-3D0h]
  char *v73; // [rsp+40h] [rbp-3C8h]
  char v74; // [rsp+4Fh] [rbp-3B9h]
  std::locale *v75; // [rsp+50h] [rbp-3B8h]
  __m128i v76; // [rsp+58h] [rbp-3B0h] BYREF
  std::locale *v77; // [rsp+68h] [rbp-3A0h]
  void *v78; // [rsp+70h] [rbp-398h]
  __int64 v79; // [rsp+78h] [rbp-390h]
  __int64 v80; // [rsp+80h] [rbp-388h]
  char **v81; // [rsp+88h] [rbp-380h]
  size_t v82; // [rsp+90h] [rbp-378h]
  size_t n; // [rsp+98h] [rbp-370h]
  void *v84; // [rsp+A0h] [rbp-368h] BYREF
  size_t v85; // [rsp+A8h] [rbp-360h]
  _QWORD dest[2]; // [rsp+B0h] [rbp-358h] BYREF
  void *v87; // [rsp+C0h] [rbp-348h] BYREF
  size_t v88; // [rsp+C8h] [rbp-340h]
  _QWORD v89[7]; // [rsp+D0h] [rbp-338h] BYREF
  char v90[8]; // [rsp+108h] [rbp-300h] BYREF
  int v91; // [rsp+110h] [rbp-2F8h]
  void *v92; // [rsp+118h] [rbp-2F0h]
  size_t v93; // [rsp+120h] [rbp-2E8h]
  _QWORD v94[2]; // [rsp+128h] [rbp-2E0h] BYREF
  _QWORD v95[28]; // [rsp+138h] [rbp-2D0h] BYREF
  __int16 v96; // [rsp+218h] [rbp-1F0h]
  __int128 v97; // [rsp+220h] [rbp-1E8h]
  __int128 v98; // [rsp+230h] [rbp-1D8h]
  char *v99; // [rsp+240h] [rbp-1C8h] BYREF
  __int64 v100; // [rsp+248h] [rbp-1C0h]
  _OWORD v101[2]; // [rsp+250h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+270h] [rbp-198h]
  __int128 v103; // [rsp+280h] [rbp-188h]
  char v104[8]; // [rsp+290h] [rbp-178h] BYREF
  int v105; // [rsp+298h] [rbp-170h]
  void *v106; // [rsp+2A0h] [rbp-168h]
  size_t v107; // [rsp+2A8h] [rbp-160h]
  _QWORD v108[2]; // [rsp+2B0h] [rbp-158h] BYREF
  _QWORD v109[28]; // [rsp+2C0h] [rbp-148h] BYREF
  __int16 v110; // [rsp+3A0h] [rbp-68h]
  __int128 v111; // [rsp+3A8h] [rbp-60h]
  __int128 v112; // [rsp+3B8h] [rbp-50h]

  v81 = &v99;
  v76.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v69 = (std::ios_base *)v109;
  v67 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                  + 64),
          (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v109);
  v110 = 0;
  v111 = 0;
  v3 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v112 = 0;
  v4 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v109[0] = (char *)&`vtable for'std::ios + 16;
  v5 = *((_QWORD *)v3 - 3);
  v99 = v3;
  v109[27] = 0;
  *(char **)((char *)&v99 + v5) = (char *)v4;
  v100 = 0;
  v68.m128i_i64[0] = v4;
  std::ios::init();
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = (std::ios_base *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v72 = v101;
  v8 = (std::ios_base **)((char *)v101 + *(_QWORD *)(v6 - 24));
  *(_QWORD *)&v101[0] = v6;
  *v8 = v7;
  v70 = v7;
  std::ios::init();
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v10 = (_QWORD *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v11 = _mm_load_si128(&v67);
  v75 = (std::locale *)v104;
  v12 = *(_QWORD *)(v9 - 24);
  v71 = v10;
  *(char **)((char *)&v99 + v12) = (char *)v10;
  v99 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v109[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v101[0] = v11;
  v101[1] = 0;
  *(_OWORD *)src = 0;
  v103 = 0;
  std::locale::locale((std::locale *)v104);
  LOBYTE(v108[0]) = 0;
  v105 = 24;
  *((_QWORD *)&v101[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v67.m128i_i64[0] = (__int64)v108;
  v106 = v108;
  v107 = 0;
  v73 = (char *)v101 + 8;
  std::ios::init();
  *(_DWORD *)(a1 + 1520) = 0;
  v13 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v74 = v13;
  if ( v13 )
  {
    sub_29C100(a1, a2);
    if ( *(_QWORD *)(a1 + 240) )
      goto LABEL_3;
  }
  else if ( *(_QWORD *)(a1 + 240) )
  {
    goto LABEL_3;
  }
  v41 = sub_186B270(0x3A0u);
  sub_E059D0(v41, 0, *(_QWORD *)(a1 + 232), &qword_18D6CD0);
  v42 = *(void (__fastcall ****)(_QWORD))(a1 + 240);
  if ( (void (__fastcall ***)(_QWORD))v41 != v42 )
  {
    if ( v42 )
    {
      (**v42)(*(_QWORD *)(a1 + 240));
      sub_186B220(v42);
    }
    *(_QWORD *)(a1 + 240) = v41;
  }
  sub_393520(v41);
  sub_2CFBE0(v41);
  sub_304ED0(v41, 0);
  sub_981E90(v41);
  sub_DFB140(v41);
  v43 = sub_3743C0(&qword_18D6CD0);
  sub_DFF0A0(v41, v43);
LABEL_3:
  v84 = dest;
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v14 = strlen(a2);
  v15 = v14;
  if ( v14 > 0xF )
  {
    v84 = (void *)operator new(v14 + 1);
    v40 = v84;
    dest[0] = v15;
  }
  else
  {
    if ( v14 == 1 )
    {
      LOBYTE(dest[0]) = *a2;
      goto LABEL_7;
    }
    if ( !v14 )
    {
LABEL_7:
      v16 = dest;
      goto LABEL_8;
    }
    v40 = dest;
  }
  memcpy(v40, a2, v15);
  v16 = v84;
LABEL_8:
  v85 = v15;
  *((_BYTE *)v16 + v15) = 0;
  v70 = (std::ios_base *)v95;
  v68.m128i_i64[0] = (__int64)&v87;
  std::ios_base::ios_base((std::ios_base *)v95);
  v96 = 0;
  v97 = 0;
  v95[0] = (char *)&`vtable for'std::ios + 16;
  v98 = 0;
  v17 = (_QWORD *)`VTT for'std::istringstream[1];
  v18 = (void *)`VTT for'std::istringstream[2];
  v95[27] = 0;
  v19 = *(v17 - 3);
  v87 = v17;
  v78 = v18;
  *(void **)((char *)&v87 + v19) = v18;
  v88 = 0;
  std::ios::init();
  memset(&v89[1], 0, 48);
  v87 = (char *)&`vtable for'std::istringstream + 24;
  v95[0] = (char *)&`vtable for'std::istringstream + 64;
  v89[0] = (char *)&`vtable for'std::streambuf + 16;
  v77 = (std::locale *)v90;
  std::locale::locale((std::locale *)v90);
  v20 = (char *)v84;
  v91 = 8;
  v89[0] = (char *)&`vtable for'std::stringbuf + 16;
  v71 = v94;
  v92 = v94;
  v21 = v85;
  if ( v84 == dest )
  {
    v48 = v85 + 1;
    if ( (unsigned int)(v85 + 1) >= 8 )
    {
      *(_QWORD *)((char *)v71 + v48 - 8) = *(_QWORD *)((char *)&dest[-1] + v48);
      if ( (unsigned int)v21 >= 8 )
      {
        v54 = 0;
        do
        {
          v55 = v54;
          v54 += 8;
          *(_QWORD *)((char *)v71 + v55) = *(_QWORD *)&v20[v55];
        }
        while ( v54 < (v21 & 0xFFFFFFF8) );
      }
    }
    else if ( (v48 & 4) != 0 )
    {
      LODWORD(v94[0]) = dest[0];
      *(_DWORD *)((char *)v71 + v48 - 4) = *(_DWORD *)((char *)&v85 + v48 + 4);
    }
    else if ( (_DWORD)v85 != -1 )
    {
      LOBYTE(v94[0]) = dest[0];
      if ( (v48 & 2) != 0 )
        *(_WORD *)((char *)v71 + v48 - 2) = *(_WORD *)((char *)&v85 + v48 + 6);
    }
  }
  else
  {
    v92 = v84;
    v94[0] = dest[0];
  }
  v93 = v21;
  v84 = dest;
  v85 = 0;
  LOBYTE(dest[0]) = 0;
  std::stringbuf::_M_sync();
  std::ios::init();
  if ( v84 != dest )
    operator delete(v84, dest[0] + 1LL);
  v22 = v72;
  sub_DFA6E0(*(_QWORD *)(a1 + 240) + 336LL, v72);
  sub_DFA6E0(*(_QWORD *)(a1 + 240) + 424LL, v22);
  v23 = *(_QWORD **)(a1 + 240);
  v79 = sub_180B150();
  v24 = sub_1875410();
  v25 = v23[62];
  v80 = v24;
  sub_1875400(v25);
  v26 = *(__int64 (__fastcall **)())(*v23 + 48LL);
  if ( v26 == sub_25D2E0 )
    v27 = v23[62];
  else
    v27 = ((__int64 (__fastcall *)(_QWORD *))v26)(v23);
  sub_180B140(v27);
  v28 = *(_QWORD *)(a1 + 240);
  v84 = nullptr;
  v76.m128i_i8[8] = sub_DC06A0(a1 + 1616, v28, v68.m128i_i64[0], 0, &v84, 0);
  sub_18572D0(&v84);
  if ( !v76.m128i_i8[8] )
  {
    v44 = (_BYTE *)v103;
    v84 = dest;
    v85 = 0;
    LOBYTE(dest[0]) = 0;
    if ( (_QWORD)v103 )
    {
      if ( src[0] >= (void *)v103 )
        v44 = src[0];
      if ( !src[0] )
        v44 = (_BYTE *)v103;
      v45 = v44 - (char *)src[1];
      v46 = v45;
      if ( (v45 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_replace");
      if ( v45 > 0xF )
      {
        if ( v45 > 0x1D )
        {
          v76.m128i_i64[1] = v45;
          v58 = v45 + 1;
          if ( (__int64)(v45 + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v76.m128i_i64[1] = 30;
          v58 = 31;
        }
        n = v45;
        v82 = (size_t)src[1];
        v59 = (_QWORD *)operator new(v58);
        v60 = (const void *)v82;
        v46 = n;
        v47 = v59;
        if ( v82 )
        {
          v82 = n;
          v61 = memcpy(v59, v60, n);
          v46 = v82;
          v47 = v61;
        }
        if ( v84 != dest )
        {
          n = v46;
          v82 = (size_t)v47;
          operator delete(v84, dest[0] + 1LL);
          v46 = n;
          v47 = (_QWORD *)v82;
        }
        v84 = v47;
        dest[0] = v76.m128i_i64[1];
      }
      else if ( src[1] == dest )
      {
        v76.m128i_i64[1] = v45;
        std::string::_M_replace_cold();
        v46 = v76.m128i_i64[1];
        v47 = v84;
      }
      else
      {
        if ( v45 )
        {
          if ( v45 == 1 )
          {
            LOBYTE(dest[0]) = *(_BYTE *)src[1];
          }
          else
          {
            v76.m128i_i64[1] = v45;
            memcpy(dest, src[1], v45);
            v46 = v76.m128i_i64[1];
          }
        }
        v47 = dest;
      }
      v85 = v46;
      *((_BYTE *)v47 + v46) = 0;
      goto LABEL_50;
    }
    v62 = v107;
    if ( v107 > 0xF )
    {
      if ( (v107 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v107 > 0x1D )
      {
        v76.m128i_i64[1] = v107;
        v66 = v107 + 1;
        if ( (__int64)(v107 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v76.m128i_i64[1] = 30;
        v66 = 31;
      }
      v82 = v107;
      v65 = (_QWORD *)operator new(v66);
      v62 = v82;
      if ( v84 != dest )
      {
        n = (size_t)v65;
        operator delete(v84, dest[0] + 1LL);
        v65 = (_QWORD *)n;
        v62 = v82;
      }
      v84 = v65;
      v64 = v106;
      dest[0] = v76.m128i_i64[1];
    }
    else
    {
      if ( !v107 )
      {
LABEL_88:
        v63 = dest;
LABEL_89:
        v85 = v62;
        *((_BYTE *)v63 + v62) = 0;
LABEL_50:
        sub_24EC20(a1, 4u, (__int64)&v84);
        if ( v84 != dest )
          operator delete(v84, dest[0] + 1LL);
        goto LABEL_15;
      }
      v64 = v106;
      v65 = dest;
      if ( v107 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v106;
        goto LABEL_88;
      }
    }
    v76.m128i_i64[1] = v62;
    memcpy(v65, v64, v62);
    v63 = v84;
    v62 = v76.m128i_u64[1];
    goto LABEL_89;
  }
LABEL_15:
  sub_180B140(v79);
  sub_1875400(v80);
  v87 = (char *)&`vtable for'std::istringstream + 24;
  v95[0] = (char *)&`vtable for'std::istringstream + 64;
  v89[0] = (char *)&`vtable for'std::stringbuf + 16;
  if ( v92 != v71 )
    operator delete(v92, v94[0] + 1LL);
  v89[0] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v77);
  v29 = *(v17 - 3);
  v87 = v17;
  v30 = v70;
  *(void **)((char *)&v87 + v29) = v78;
  v88 = 0;
  v95[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v30);
  v31 = v106;
  if ( (_QWORD)v103 )
  {
    v32 = src[0];
    if ( !src[0] || src[0] < (void *)v103 )
      v32 = (_BYTE *)v103;
    v107 = v32 - (char *)src[1];
    *((_BYTE *)v106 + v32 - (char *)src[1]) = 0;
    v31 = v106;
    v87 = v89;
    if ( v106 != (void *)v67.m128i_i64[0] )
      goto LABEL_21;
  }
  else
  {
    v87 = v89;
    if ( v106 != (void *)v67.m128i_i64[0] )
    {
LABEL_21:
      v87 = v31;
      v89[0] = v108[0];
      v33 = v107;
      goto LABEL_22;
    }
  }
  v33 = v107;
  v49 = v67.m128i_i64[0];
  v50 = v89;
  v51 = v107 + 1;
  v52 = (_DWORD *)v67.m128i_i64[0];
  if ( (unsigned int)(v107 + 1) >= 8 )
  {
    LODWORD(v56) = 0;
    do
    {
      v57 = (unsigned int)v56;
      v56 = (unsigned int)(v56 + 8);
      *(_QWORD *)((char *)v89 + v57) = *(_QWORD *)(v49 + v57);
    }
    while ( (unsigned int)v56 < (v51 & 0xFFFFFFF8) );
    v50 = (_DWORD *)((char *)v89 + v56);
    v52 = (_DWORD *)(v67.m128i_i64[0] + v56);
  }
  v53 = 0;
  if ( (v51 & 4) != 0 )
  {
    *v50 = *v52;
    v53 = 4;
  }
  if ( (v51 & 2) != 0 )
  {
    *(_WORD *)((char *)v50 + v53) = *(_WORD *)((char *)v52 + v53);
    v53 += 2;
  }
  if ( (v51 & 1) != 0 )
    *((_BYTE *)v50 + v53) = *((_BYTE *)v52 + v53);
LABEL_22:
  v88 = v33;
  LOBYTE(v108[0]) = 0;
  v106 = (void *)v67.m128i_i64[0];
  v107 = 0;
  std::stringbuf::_M_sync();
  v34 = sub_24ED70((_QWORD *)a1, v68.m128i_i64[0]);
  v35 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v76), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v87 != v89 )
  {
    v68 = v35;
    operator delete(v87, v89[0] + 1LL);
    v35 = _mm_load_si128(&v68);
  }
  if ( v74 )
  {
    v68 = v35;
    sub_2BB620(v34);
    byte_1C7EBA0 = 1;
    v35 = _mm_load_si128(&v68);
  }
  v101[0] = v35;
  v99 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v109[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v106 != (void *)v67.m128i_i64[0] )
    operator delete(v106, v108[0] + 1LL);
  *((_QWORD *)&v101[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v75);
  v36 = v69;
  *(char **)((char *)&v99
           + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)) = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v37 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *(_QWORD *)&v101[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  *(_QWORD *)((char *)v101 + *(_QWORD *)(*(_QWORD *)&v101[0] - 24LL)) = v37;
  v38 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v99 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  *(char **)((char *)&v99 + *((_QWORD *)v99 - 3)) = v38;
  v100 = 0;
  v109[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v36);
  return v34;
}

