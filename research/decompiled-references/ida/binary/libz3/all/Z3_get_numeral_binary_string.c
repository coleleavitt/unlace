char *__fastcall Z3_get_numeral_binary_string(__int64 a1, __int64 a2)
{
  char v3; // bp
  char *v4; // rbx
  void *v5; // r12
  char *v7; // rcx
  char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // r14
  void *v15; // r15
  int v16; // edx
  void *v17; // r15
  __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rax
  void *v21; // rdi
  unsigned int v22; // r15d
  int v23; // edx
  __int64 v24; // rdx
  char v25; // cl
  __int64 v26; // rax
  void *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i si128; // xmm0
  std::ios_base *v31; // rdi
  _QWORD *v32; // r9
  __int64 *v33; // rdi
  int v34; // ecx
  _DWORD *v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rsi
  void *v39[2]; // [rsp+0h] [rbp-2E8h] BYREF
  void *v40; // [rsp+18h] [rbp-2D0h]
  void *v41; // [rsp+20h] [rbp-2C8h]
  void *v42; // [rsp+28h] [rbp-2C0h]
  _QWORD *v43; // [rsp+30h] [rbp-2B8h]
  char *v44; // [rsp+38h] [rbp-2B0h]
  char *v45; // [rsp+40h] [rbp-2A8h]
  __int64 v46; // [rsp+48h] [rbp-2A0h]
  __int64 v47; // [rsp+50h] [rbp-298h]
  __int64 v48; // [rsp+58h] [rbp-290h]
  char *v49; // [rsp+60h] [rbp-288h]
  std::locale *v50; // [rsp+68h] [rbp-280h]
  std::ios_base *v51; // [rsp+70h] [rbp-278h]
  __m128i v52; // [rsp+78h] [rbp-270h] BYREF
  _OWORD *v53; // [rsp+88h] [rbp-260h]
  char *v54; // [rsp+90h] [rbp-258h]
  char **v55; // [rsp+98h] [rbp-250h]
  _QWORD v56[2]; // [rsp+A0h] [rbp-248h] BYREF
  _QWORD v57[2]; // [rsp+B0h] [rbp-238h] BYREF
  _QWORD v58[2]; // [rsp+C0h] [rbp-228h] BYREF
  _QWORD v59[2]; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-208h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-200h]
  __int64 v62; // [rsp+F0h] [rbp-1F8h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-1F0h]
  void *v64; // [rsp+100h] [rbp-1E8h] BYREF
  __int64 v65; // [rsp+108h] [rbp-1E0h]
  __int64 v66; // [rsp+110h] [rbp-1D8h] BYREF
  __int64 v67; // [rsp+118h] [rbp-1D0h]
  char *v68; // [rsp+120h] [rbp-1C8h] BYREF
  __int64 v69; // [rsp+128h] [rbp-1C0h]
  _OWORD v70[2]; // [rsp+130h] [rbp-1B8h] BYREF
  __int128 v71; // [rsp+150h] [rbp-198h]
  __int128 v72; // [rsp+160h] [rbp-188h]
  _BYTE v73[8]; // [rsp+170h] [rbp-178h] BYREF
  int v74; // [rsp+178h] [rbp-170h]
  void *v75; // [rsp+180h] [rbp-168h]
  __int64 v76; // [rsp+188h] [rbp-160h]
  _QWORD v77[2]; // [rsp+190h] [rbp-158h] BYREF
  _QWORD v78[28]; // [rsp+1A0h] [rbp-148h] BYREF
  __int16 v79; // [rsp+280h] [rbp-68h]
  __int128 v80; // [rsp+288h] [rbp-60h]
  __int128 v81; // [rsp+298h] [rbp-50h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
  {
    sub_29A8C0(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      v4 = "";
      goto LABEL_12;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return "";
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 > 1 )
  {
    v56[0] = 0;
    v56[1] = 0;
    v57[0] = 1;
    v57[1] = 0;
    if ( !(unsigned __int8)Z3_get_numeral_rational(a1, a2) )
    {
      sub_24EA30(a1, 3u, nullptr);
      v4 = "";
LABEL_6:
      v5 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v56);
      sub_182CBA0(v5, v57);
      goto LABEL_7;
    }
    v55 = &v68;
    v51 = (std::ios_base *)v78;
    std::ios_base::ios_base((std::ios_base *)v78);
    v79 = 0;
    v7 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v80 = 0;
    v8 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v81 = 0;
    v78[0] = (char *)&`vtable for'std::ios + 16;
    v9 = *((_QWORD *)v7 - 3);
    v78[27] = 0;
    v68 = v7;
    *(char **)((char *)&v68 + v9) = v8;
    v69 = 0;
    v44 = v7;
    v45 = v8;
    std::ios::init();
    v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    v53 = v70;
    *(_QWORD *)&v70[0] = v10;
    v11 = (_QWORD *)((char *)v70 + *(_QWORD *)(v10 - 24));
    v46 = v10;
    v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    *v11 = v12;
    v47 = v12;
    std::ios::init();
    v13 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
    v49 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    v52.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 64;
    v48 = v13;
    *(char **)((char *)&v68 + *(_QWORD *)(v13 - 24)) = v49;
    v68 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    v78[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    v50 = (std::locale *)v73;
    v70[0] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                       + 64),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    v70[1] = 0;
    v71 = 0;
    v72 = 0;
    std::locale::locale((std::locale *)v73);
    v74 = 24;
    v76 = 0;
    LOBYTE(v77[0]) = 0;
    *((_QWORD *)&v70[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v43 = v77;
    v75 = v77;
    v54 = (char *)v70 + 8;
    std::ios::init();
    v58[0] = 2;
    v58[1] = 0;
    v52.m128i_i64[1] = (__int64)v59;
    v59[0] = 1;
    v59[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v59);
    BYTE4(v59[0]) &= ~1u;
    v14 = qword_1C7F2C0;
    LODWORD(v59[0]) = 1;
    v60 = 0;
    v61 = 0;
    v62 = 1;
    v63 = 0;
    if ( (v56[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v60, v56);
    else
      LODWORD(v60) = v56[0];
    if ( (v57[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v14, &v62, v57);
    }
    else
    {
      BYTE4(v62) &= ~1u;
      LODWORD(v62) = v57[0];
    }
    v15 = qword_1C7F2C0;
    BYTE4(v64) &= 0xFCu;
    BYTE4(v66) &= 0xFCu;
    v41 = v58;
    LODWORD(v64) = 0;
    v65 = 0;
    LODWORD(v66) = 1;
    v67 = 0;
    v42 = &v60;
    v39[0] = &v64;
    sub_1833EB0(qword_1C7F2C0, &v60, v58, &v64);
    sub_182CBA0(v15, &v66);
    v16 = (int)v64;
    v17 = qword_1C7F2C0;
    LODWORD(v64) = v60;
    LODWORD(v60) = v16;
    v18 = v65;
    v65 = v61;
    v61 = v18;
    v19 = BYTE4(v64) & 1;
    LOBYTE(v18) = BYTE4(v60) & 0xFC | BYTE4(v64) & 2;
    BYTE4(v64) = BYTE4(v60) & 1 | BYTE4(v64) & 0xFC | BYTE4(v60) & 2;
    BYTE4(v60) = v19 | v18;
    LODWORD(v66) = v62;
    v20 = v63;
    v63 = v67;
    v67 = v20;
    LODWORD(v62) = 1;
    LOBYTE(v20) = BYTE4(v62) & 1 | BYTE4(v62) & 2 | BYTE4(v66) & 0xFC;
    BYTE4(v62) = BYTE4(v62) & 0xFC | BYTE4(v66) & 2;
    BYTE4(v66) = v20;
    sub_182CBA0(qword_1C7F2C0, &v64);
    v21 = v17;
    v22 = 1;
    sub_182CBA0(v21, &v66);
    while ( (int)v60 > 0 )
    {
      LODWORD(v64) = 0;
      ++v22;
      v65 = 0;
      BYTE4(v64) &= 0xFCu;
      BYTE4(v66) &= 0xFCu;
      LODWORD(v66) = 1;
      v67 = 0;
      v40 = qword_1C7F2C0;
      sub_1833EB0(qword_1C7F2C0, v42, v41, v39[0]);
      sub_182CBA0(v40, &v66);
      v23 = (int)v64;
      LODWORD(v64) = v60;
      LODWORD(v60) = v23;
      v24 = v65;
      v65 = v61;
      v61 = v24;
      v25 = BYTE4(v64) & 1;
      LOBYTE(v24) = BYTE4(v60) & 0xFC | BYTE4(v64) & 2;
      v40 = qword_1C7F2C0;
      BYTE4(v64) = BYTE4(v60) & 1 | BYTE4(v64) & 0xFC | BYTE4(v60) & 2;
      BYTE4(v60) = v25 | v24;
      LODWORD(v66) = v62;
      v26 = v63;
      v63 = v67;
      v67 = v26;
      LODWORD(v62) = 1;
      LOBYTE(v24) = BYTE4(v62) & 0xFC | BYTE4(v66) & 2;
      BYTE4(v66) = BYTE4(v62) & 1 | BYTE4(v62) & 2 | BYTE4(v66) & 0xFC;
      BYTE4(v62) = v24;
      sub_182CBA0(qword_1C7F2C0, v39[0]);
      sub_182CBA0(v40, &v66);
    }
    v40 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v42);
    sub_182CBA0(v40, &v62);
    v40 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v41);
    sub_182CBA0(v40, v52.m128i_i64[1]);
    sub_182D920(qword_1C7F2C0, v53, v56, v22);
    v27 = v75;
    if ( (_QWORD)v72 )
    {
      v28 = v71;
      if ( !(_QWORD)v71 || (unsigned __int64)v71 < (unsigned __int64)v72 )
        v28 = v72;
      v76 = v28 - *((_QWORD *)&v71 + 1);
      *((_BYTE *)v75 + v28 - *((_QWORD *)&v71 + 1)) = 0;
      v27 = v75;
      v64 = &v66;
      if ( v75 != v43 )
        goto LABEL_23;
    }
    else
    {
      v64 = &v66;
      if ( v75 != v43 )
      {
LABEL_23:
        v64 = v27;
        v66 = v77[0];
        v29 = v76;
LABEL_24:
        v65 = v29;
        LOBYTE(v77[0]) = 0;
        v75 = v43;
        v76 = 0;
        std::stringbuf::_M_sync();
        v4 = (char *)sub_24ED70((_QWORD *)a1, (__int64)v39[0]);
        si128 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v52), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
        if ( v64 != &v66 )
        {
          *(__m128i *)v39 = si128;
          operator delete(v64, v66 + 1);
          si128 = _mm_load_si128((const __m128i *)v39);
        }
        v70[0] = si128;
        v68 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
        v78[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
        if ( v75 != v43 )
          operator delete(v75, v77[0] + 1LL);
        *((_QWORD *)&v70[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
        std::locale::~locale(v50);
        v31 = v51;
        *(char **)((char *)&v68 + *(_QWORD *)(v48 - 24)) = v49;
        *(_QWORD *)&v70[0] = v46;
        *(_QWORD *)((char *)v70 + *(_QWORD *)(v46 - 24)) = v47;
        v68 = v44;
        *(char **)((char *)&v68 + *((_QWORD *)v44 - 3)) = v45;
        v69 = 0;
        v78[0] = (char *)&`vtable for'std::ios + 16;
        std::ios_base::~ios_base(v31);
        goto LABEL_6;
      }
    }
    v29 = v76;
    v32 = v43;
    v33 = &v66;
    v34 = v76 + 1;
    v35 = v43;
    if ( (unsigned int)(v76 + 1) >= 8 )
    {
      LODWORD(v37) = 0;
      do
      {
        v38 = (unsigned int)v37;
        v37 = (unsigned int)(v37 + 8);
        *(__int64 *)((char *)&v66 + v38) = *(_QWORD *)((char *)v32 + v38);
      }
      while ( (unsigned int)v37 < (v34 & 0xFFFFFFF8) );
      v33 = (__int64 *)((char *)&v66 + v37);
      v35 = (_DWORD *)((char *)v43 + v37);
    }
    v36 = 0;
    if ( (v34 & 4) != 0 )
    {
      *(_DWORD *)v33 = *v35;
      v36 = 4;
    }
    if ( (v34 & 2) != 0 )
    {
      *(_WORD *)((char *)v33 + v36) = *(_WORD *)((char *)v35 + v36);
      v36 += 2;
    }
    if ( (v34 & 1) != 0 )
      *((_BYTE *)v33 + v36) = *((_BYTE *)v35 + v36);
    goto LABEL_24;
  }
  sub_24EA30(a1, 3u, "ast is not an expression");
  v4 = "";
LABEL_7:
  if ( v3 )
LABEL_12:
    byte_1C7EBA0 = 1;
  return v4;
}

