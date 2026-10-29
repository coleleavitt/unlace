char *__fastcall Z3_fpa_get_numeral_exponent_string(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  char v5; // bp
  unsigned int v6; // r15d
  __int64 v7; // r13
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  char *v10; // rbx
  __int64 v12; // r13
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // r14d
  char *v17; // r13
  char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  char *v24; // rsi
  __m128i si128; // xmm1
  __int64 v26; // rax
  void *v27; // rdx
  __int64 v28; // rax
  void *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // rax
  _DWORD *v35; // rdi
  _DWORD *v36; // rcx
  int v37; // edx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rsi
  int v41; // [rsp+0h] [rbp-278h]
  char *v42; // [rsp+8h] [rbp-270h]
  __m128i v43; // [rsp+10h] [rbp-268h] BYREF
  __int64 v44; // [rsp+20h] [rbp-258h]
  __int64 v45; // [rsp+28h] [rbp-250h]
  std::locale *v46[2]; // [rsp+30h] [rbp-248h] BYREF
  char *v47; // [rsp+40h] [rbp-238h]
  __m128i v48; // [rsp+48h] [rbp-230h] BYREF
  char **v49; // [rsp+58h] [rbp-220h]
  void *v50[2]; // [rsp+60h] [rbp-218h] BYREF
  _QWORD v51[2]; // [rsp+70h] [rbp-208h] BYREF
  __int64 v52; // [rsp+80h] [rbp-1F8h]
  __int16 v53; // [rsp+88h] [rbp-1F0h] BYREF
  char v54[16]; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-1D8h]
  char *v56; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-1C0h]
  _OWORD v58[2]; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v59; // [rsp+E0h] [rbp-198h]
  __int128 v60; // [rsp+F0h] [rbp-188h]
  char v61[8]; // [rsp+100h] [rbp-178h] BYREF
  int v62; // [rsp+108h] [rbp-170h]
  void *v63; // [rsp+110h] [rbp-168h]
  void *v64; // [rsp+118h] [rbp-160h]
  _QWORD v65[2]; // [rsp+120h] [rbp-158h] BYREF
  _QWORD v66[28]; // [rsp+130h] [rbp-148h] BYREF
  __int16 v67; // [rsp+210h] [rbp-68h]
  __int128 v68; // [rsp+218h] [rbp-60h]
  __int128 v69; // [rsp+228h] [rbp-50h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_2A1CA0(a1, a2, a3);
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
  v6 = *(_DWORD *)(a1 + 1460);
  v7 = *(_QWORD *)(a1 + 376);
  v41 = sub_15D2690(*(_QWORD *)(a1 + 232), v6);
  if ( *(_WORD *)(a2 + 4)
    || (v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v8 == v6 && v8[1] == 8
    || (v9 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr
    || *(_DWORD *)(a1 + 384) != *v9
    || v9[1] )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    v10 = "";
    goto LABEL_10;
  }
  v12 = v7 + 24;
  v52 = v12;
  sub_181A6B0(&v53);
  if ( (unsigned __int8)sub_15C4FC0(v41, a2, (unsigned int)&v53, v13, v14, v15)
    && ((unsigned __int8)sub_181BF40(v12, &v53)
     || (unsigned __int8)sub_181C060(v12, &v53)
     || (unsigned __int8)sub_181B190(v12, &v53)
     || (unsigned __int8)sub_181BE30(v12, &v53)) )
  {
    v16 = v53 & 0x7FFF;
    if ( a3 )
    {
      if ( (unsigned __int8)sub_181B190(v12, &v53) )
      {
LABEL_23:
        v43.m128i_i64[0] = 0;
        goto LABEL_24;
      }
      if ( !(unsigned __int8)sub_181BE30(v12, &v53) )
      {
        v34 = sub_181C500(v12, v16, v55);
        goto LABEL_45;
      }
    }
    else
    {
      if ( (unsigned __int8)sub_181B190(v12, &v53) )
        goto LABEL_23;
      if ( !(unsigned __int8)sub_181BE30(v12, &v53) )
      {
        v33 = sub_181C060(v12, &v53);
        v43.m128i_i64[0] = v55;
        if ( !v33 )
          goto LABEL_24;
        v34 = sub_181C4A0(v12, v16);
LABEL_45:
        v43.m128i_i64[0] = v34;
LABEL_24:
        v49 = &v56;
        v48.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                         + 64;
        *(__m128i *)v46 = _mm_unpacklo_epi64(
                            (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                    + 64),
                            (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
        std::ios_base::ios_base((std::ios_base *)v66);
        v66[27] = 0;
        v17 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
        v68 = 0;
        v67 = 0;
        v18 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
        v69 = 0;
        v66[0] = (char *)&`vtable for'std::ios + 16;
        v19 = *((_QWORD *)v17 - 3);
        v56 = v17;
        *(char **)((char *)&v56 + v19) = v18;
        v57 = 0;
        v42 = v18;
        std::ios::init();
        v20 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
        v21 = *(_QWORD *)(v20 - 24);
        *(_QWORD *)&v58[0] = v20;
        v22 = (_QWORD *)((char *)v58 + v21);
        v23 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
        *v22 = v23;
        v44 = v23;
        std::ios::init();
        v24 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
        si128 = _mm_load_si128((const __m128i *)v46);
        v26 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL);
        v45 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
        v47 = v24;
        *(char **)((char *)&v56 + v26) = v24;
        v58[0] = si128;
        v56 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
        v66[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
        v46[0] = (std::locale *)v61;
        v58[1] = 0;
        v59 = 0;
        v60 = 0;
        std::locale::locale((std::locale *)v61);
        v62 = 24;
        v63 = v65;
        v64 = nullptr;
        *((_QWORD *)&v58[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
        LOBYTE(v65[0]) = 0;
        v48.m128i_i64[1] = (__int64)v58 + 8;
        std::ios::init();
        std::ostream::_M_insert<long>();
        v27 = v63;
        if ( (_QWORD)v60 )
        {
          v28 = v59;
          if ( !(_QWORD)v59 || (unsigned __int64)v59 < (unsigned __int64)v60 )
            v28 = v60;
          v64 = (void *)(v28 - *((_QWORD *)&v59 + 1));
          *((_BYTE *)v63 + v28 - *((_QWORD *)&v59 + 1)) = 0;
          v27 = v63;
          v50[0] = v51;
          if ( v63 != v65 )
            goto LABEL_28;
        }
        else
        {
          v50[0] = v51;
          if ( v63 != v65 )
          {
LABEL_28:
            v50[0] = v27;
            v51[0] = v65[0];
            v29 = v64;
LABEL_29:
            v50[1] = v29;
            v63 = v65;
            v64 = nullptr;
            LOBYTE(v65[0]) = 0;
            std::stringbuf::_M_sync();
            v43.m128i_i64[0] = (__int64)v50;
            v10 = (char *)sub_24ED70((_QWORD *)a1, (__int64)v50);
            v30 = _mm_unpacklo_epi64(
                    _mm_loadl_epi64(&v48),
                    (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
            if ( v50[0] != v51 )
            {
              v43 = v30;
              operator delete(v50[0], v51[0] + 1LL);
              v30 = _mm_load_si128(&v43);
            }
            v58[0] = v30;
            v56 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
            v66[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 104;
            if ( v63 != v65 )
              operator delete(v63, v65[0] + 1LL);
            *((_QWORD *)&v58[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
            std::locale::~locale(v46[0]);
            *(char **)((char *)&v56 + *(_QWORD *)(v45 - 24)) = v47;
            v31 = *(_QWORD *)(v20 - 24);
            *(_QWORD *)&v58[0] = v20;
            *(_QWORD *)((char *)v58 + v31) = v44;
            v32 = *((_QWORD *)v17 - 3);
            v56 = v17;
            *(char **)((char *)&v56 + v32) = v42;
            v57 = 0;
            v66[0] = (char *)&`vtable for'std::ios + 16;
            std::ios_base::~ios_base((std::ios_base *)v66);
            goto LABEL_34;
          }
        }
        v29 = v64;
        v35 = v51;
        v36 = v65;
        v37 = (_DWORD)v64 + 1;
        if ( (unsigned int)((_DWORD)v64 + 1) >= 8 )
        {
          LODWORD(v39) = 0;
          do
          {
            v40 = (unsigned int)v39;
            v39 = (unsigned int)(v39 + 8);
            *(_QWORD *)((char *)v51 + v40) = *(_QWORD *)((char *)v65 + v40);
          }
          while ( (unsigned int)v39 < (v37 & 0xFFFFFFF8) );
          v35 = (_DWORD *)((char *)v51 + v39);
          v36 = (_DWORD *)((char *)v65 + v39);
        }
        v38 = 0;
        if ( (v37 & 4) != 0 )
        {
          *v35 = *v36;
          v38 = 4;
        }
        if ( (v37 & 2) != 0 )
        {
          *(_WORD *)((char *)v35 + v38) = *(_WORD *)((char *)v36 + v38);
          v38 += 2;
        }
        if ( (v37 & 1) != 0 )
          *((_BYTE *)v35 + v38) = *((_BYTE *)v36 + v38);
        goto LABEL_29;
      }
    }
    v34 = sub_181C470(v12, v16);
    goto LABEL_45;
  }
  sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
  v10 = "";
LABEL_34:
  sub_182EF00(*(_QWORD *)(v52 + 728), v54);
LABEL_10:
  if ( v5 )
LABEL_17:
    byte_1C7EBA0 = 1;
  return v10;
}

