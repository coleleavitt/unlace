void __fastcall sub_2B0B30(__int64 a1, __int64 a2, std::istream *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  char *v7; // r14
  char *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  void *v12; // rcx
  char *v13; // rsi
  __m128i si128; // xmm3
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(); // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int i; // r12d
  __int64 v21; // r8
  int v22; // eax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 (*v27)(void); // rax
  int v28; // ecx
  __int64 v29; // rax
  _QWORD *v30; // rsi
  unsigned int v31; // ebp
  __int64 v32; // r12
  __int64 v33; // r15
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rcx
  char v39; // dl
  unsigned int v40; // edx
  int v41; // edx
  __int64 *v42; // rax
  void (__fastcall ***v43)(_QWORD); // rbx
  __m128i v45; // xmm0
  void *v46; // rdi
  std::ios_base *v47; // rdi
  __int64 v48; // rax
  void *v49; // rdx
  __int64 v50; // rax
  void *v51; // rax
  _DWORD *v52; // r9
  _DWORD *v53; // rdi
  int v54; // ecx
  _DWORD *v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rsi
  void *v59[2]; // [rsp+0h] [rbp-13B8h] BYREF
  int v60; // [rsp+10h] [rbp-13A8h]
  std::istream *v61; // [rsp+18h] [rbp-13A0h]
  int v62[2]; // [rsp+20h] [rbp-1398h]
  std::ios_base *v63; // [rsp+28h] [rbp-1390h]
  int v64[2]; // [rsp+30h] [rbp-1388h]
  int v65[2]; // [rsp+38h] [rbp-1380h]
  int v66[2]; // [rsp+40h] [rbp-1378h]
  void *v67; // [rsp+48h] [rbp-1370h]
  __int64 v68; // [rsp+50h] [rbp-1368h]
  char *v69; // [rsp+58h] [rbp-1360h]
  std::locale *v70; // [rsp+60h] [rbp-1358h]
  __m128i v71; // [rsp+68h] [rbp-1350h] BYREF
  char **v72; // [rsp+78h] [rbp-1340h]
  int v73; // [rsp+80h] [rbp-1338h] BYREF
  void *v74; // [rsp+88h] [rbp-1330h] BYREF
  int v75[6]; // [rsp+90h] [rbp-1328h] BYREF
  void *v76; // [rsp+A8h] [rbp-1310h]
  void *v77[2]; // [rsp+C0h] [rbp-12F8h] BYREF
  _QWORD v78[7]; // [rsp+D0h] [rbp-12E8h] BYREF
  __int64 v79[6]; // [rsp+108h] [rbp-12B0h] BYREF
  char v80; // [rsp+13Bh] [rbp-127Dh]
  char *v81; // [rsp+140h] [rbp-1278h] BYREF
  __int64 v82; // [rsp+148h] [rbp-1270h]
  _OWORD v83[2]; // [rsp+150h] [rbp-1268h] BYREF
  __int128 v84; // [rsp+170h] [rbp-1248h]
  __int128 v85; // [rsp+180h] [rbp-1238h]
  char v86[8]; // [rsp+190h] [rbp-1228h] BYREF
  int v87; // [rsp+198h] [rbp-1220h]
  void *v88; // [rsp+1A0h] [rbp-1218h]
  void *v89; // [rsp+1A8h] [rbp-1210h]
  int v90[2]; // [rsp+1B0h] [rbp-1208h] BYREF
  char v91[8]; // [rsp+1C0h] [rbp-11F8h] BYREF
  __int64 v92; // [rsp+298h] [rbp-1120h]
  __int16 v93; // [rsp+2A0h] [rbp-1118h]
  __int128 v94; // [rsp+2A8h] [rbp-1110h]
  __int128 v95; // [rsp+2B8h] [rbp-1100h]
  int v96[824]; // [rsp+2D0h] [rbp-10E8h] BYREF
  __int64 v97; // [rsp+FB0h] [rbp-408h]

  v71.m128i_i64[1] = a1;
  v4 = *(_QWORD *)(a2 + 32);
  v61 = a3;
  v71.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(__m128i *)v59 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  if ( !v4 )
  {
    sub_2A74C0(v71.m128i_i64[1], a2);
    v4 = *(_QWORD *)(a2 + 32);
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
  v72 = &v81;
  v6 = v5;
  v63 = (std::ios_base *)v91;
  std::ios_base::ios_base((std::ios_base *)v91);
  v93 = 0;
  v7 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v94 = 0;
  v8 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v95 = 0;
  *(_QWORD *)v91 = (char *)&`vtable for'std::ios + 16;
  v9 = *((_QWORD *)v7 - 3);
  v92 = 0;
  v81 = v7;
  *(char **)((char *)&v81 + v9) = v8;
  v82 = 0;
  *(_QWORD *)v65 = v8;
  std::ios::init();
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v11 = *(_QWORD *)(v10 - 24);
  *(_QWORD *)&v83[0] = v10;
  *(_QWORD *)v66 = v10;
  v12 = (void *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *(_QWORD *)((char *)v83 + v11) = v12;
  v67 = v12;
  std::ios::init();
  v13 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v59);
  v15 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL);
  v68 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v69 = v13;
  *(char **)((char *)&v81 + v15) = v13;
  v83[0] = si128;
  v81 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v91 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v70 = (std::locale *)v86;
  v83[1] = 0;
  v84 = 0;
  v85 = 0;
  std::locale::locale((std::locale *)v86);
  LOBYTE(v90[0]) = 0;
  *(_QWORD *)v64 = v90;
  *((_QWORD *)&v83[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v87 = 24;
  v88 = v90;
  v89 = nullptr;
  std::ios::init();
  v16 = *(_QWORD *)(a2 + 32);
  v17 = *(__int64 (__fastcall **)())(*(_QWORD *)v16 + 104LL);
  if ( v17 == sub_2B1DE0 )
    v18 = v16 + 80;
  else
    v18 = ((__int64 (__fastcall *)(__int64, char *))v17)(v16, (char *)v83 + 8);
  *(_QWORD *)v62 = v96;
  sub_11CB0C0(v96, v18, v6);
  if ( !(unsigned __int8)sub_11E3E10(v61) )
  {
    v49 = v88;
    *(__m128i *)v59 = _mm_unpacklo_epi64(
                        _mm_loadl_epi64(&v71),
                        (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
    if ( (_QWORD)v85 )
    {
      v50 = v84;
      if ( !(_QWORD)v84 || (unsigned __int64)v84 < (unsigned __int64)v85 )
        v50 = v85;
      v89 = (void *)(v50 - *((_QWORD *)&v84 + 1));
      *((_BYTE *)v88 + v50 - *((_QWORD *)&v84 + 1)) = 0;
      v49 = v88;
      v77[0] = v78;
      if ( v88 != *(void **)v64 )
        goto LABEL_46;
    }
    else
    {
      v77[0] = v78;
      if ( v88 != *(void **)v64 )
      {
LABEL_46:
        v77[0] = v49;
        v78[0] = *(_QWORD *)v90;
        v51 = v89;
        goto LABEL_47;
      }
    }
    v51 = v89;
    v52 = *(_DWORD **)v64;
    v53 = v78;
    v54 = (_DWORD)v89 + 1;
    v55 = *(_DWORD **)v64;
    if ( (unsigned int)((_DWORD)v89 + 1) >= 8 )
    {
      LODWORD(v57) = 0;
      do
      {
        v58 = (unsigned int)v57;
        v57 = (unsigned int)(v57 + 8);
        *(_QWORD *)((char *)v78 + v58) = *(_QWORD *)((char *)v52 + v58);
      }
      while ( (unsigned int)v57 < (v54 & 0xFFFFFFF8) );
      v53 = (_DWORD *)((char *)v78 + v57);
      v55 = (_DWORD *)(*(_QWORD *)v64 + v57);
    }
    v56 = 0;
    if ( (v54 & 4) != 0 )
    {
      *v53 = *v55;
      v56 = 4;
    }
    if ( (v54 & 2) != 0 )
    {
      *(_WORD *)((char *)v53 + v56) = *(_WORD *)((char *)v55 + v56);
      v56 += 2;
    }
    if ( (v54 & 1) != 0 )
      *((_BYTE *)v53 + v56) = *((_BYTE *)v55 + v56);
LABEL_47:
    v77[1] = v51;
    LOBYTE(v90[0]) = 0;
    v89 = nullptr;
    v88 = *(void **)v64;
    std::stringbuf::_M_sync();
    sub_24EC20(v71.m128i_i64[1], 4u, (__int64)v77);
    if ( v77[0] != v78 )
      operator delete(v77[0], v78[0] + 1LL);
    sub_11C05E0(*(_QWORD *)v62);
    v46 = v88;
    v83[0] = _mm_load_si128((const __m128i *)v59);
    v81 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    *(_QWORD *)v91 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 104;
    if ( v88 != *(void **)v64 )
      goto LABEL_36;
    goto LABEL_37;
  }
  v59[0] = &v73;
  sub_7811A0(&v73, v83);
  v74 = nullptr;
  v61 = (std::istream *)v75;
  sub_16234C0(v75, v6);
  v19 = v97;
  for ( i = 0; v97; ++i )
  {
    if ( i >= *(_DWORD *)(v19 - 4) )
      break;
    v21 = *(_QWORD *)(v6 + 840);
    v77[0] = (void *)(8LL * i + 1);
    v22 = sub_15E3510(v6, v77, 0, 0, v21, 0);
    v25 = sub_15DC610(
            v6,
            v22,
            0,
            0,
            v23,
            v24,
            (int)v59[0],
            (int)v59[1],
            v60,
            (int)v61,
            v62[0],
            (char)v63,
            v64[0],
            v65[0],
            v66[0],
            v67);
    sub_16238E0(v61, v25, i);
    v19 = v97;
  }
  sub_ED29A0(v77, v6, 1, 0);
  v26 = *(_QWORD *)(a2 + 32);
  v27 = *(__int64 (**)(void))(*(_QWORD *)v26 + 104LL);
  if ( v27 == sub_2B1DE0 )
    v28 = v26 + 80;
  else
    v28 = v27();
  sub_782860(v59[0], v62[0], (_DWORD)v61, v28, (unsigned int)v77, (unsigned int)&v74, (char)v59[0]);
  v29 = v79[0];
  if ( !v79[0] )
    goto LABEL_32;
  v30 = v77[0];
  v31 = 0;
  while ( 2 )
  {
    v38 = v29;
    v39 = *(_BYTE *)(v29 + 3) >> 6;
    if ( v39 )
    {
      if ( v39 != 1 )
        goto LABEL_20;
    }
    else
    {
      do
      {
        v38 = *(_QWORD *)(v38 + 16);
        v39 = *(_BYTE *)(v38 + 3) >> 6;
      }
      while ( !v39 );
      if ( v39 != 1 )
      {
LABEL_20:
        if ( v39 == 2 )
          v40 = *(_DWORD *)(v38 + 4) - 1;
        else
          v40 = *(_DWORD *)(v38 + 4);
        if ( v31 >= v40 )
          break;
        goto LABEL_23;
      }
    }
    if ( v31 >= *(_DWORD *)(v38 + 4) + 1 )
      break;
LABEL_23:
    if ( (v80 & 0x20) != 0 )
    {
      v32 = v30[108];
      goto LABEL_14;
    }
    v41 = 17;
    while ( 1 )
    {
      if ( *(char *)(v29 + 3) < 0 )
      {
        if ( *(_BYTE *)(v29 + 3) >> 6 != 2 )
        {
          v42 = (__int64 *)(*(_QWORD *)(v29 + 16) + 8LL * v31);
          goto LABEL_28;
        }
        goto LABEL_39;
      }
      if ( *(_DWORD *)(v29 + 4) == v31 )
        break;
LABEL_39:
      v29 = *(_QWORD *)(v29 + 16);
      if ( !--v41 )
      {
        sub_233F80(v30 + 77, v79);
        v42 = (__int64 *)(*(_QWORD *)(v79[0] + 16) + 8LL * v31);
        goto LABEL_28;
      }
    }
    v42 = (__int64 *)(v29 + 8);
LABEL_28:
    v32 = *v42;
LABEL_14:
    v33 = *(_QWORD *)(a2 + 64);
    if ( v33 )
    {
      sub_168ACC0(*(_QWORD *)(a2 + 64), v32);
      sub_168C010(
        v33,
        v33 + 704,
        v34,
        v35,
        v36,
        v37,
        (void *)(v33 + 704),
        (__int64)v59[1],
        v60,
        (int)v61,
        *(__int64 *)v62,
        (int)v63,
        *(__int64 *)v64,
        v65[0],
        v66[0],
        (int)v67,
        v68,
        (int)v69,
        (int)v70,
        v71.m128i_i32[0],
        v71.m128i_i32[2],
        (__int64)v72,
        v73,
        (int)v74,
        *(void **)v75,
        v75[2],
        v75[4],
        v76);
      sub_168B790(v33, v59[0], v32, 1);
    }
    sub_E5EBF0(*(_QWORD *)(a2 + 32), v32);
    v29 = v79[0];
    ++v31;
    if ( v79[0] )
    {
      v30 = v77[0];
      continue;
    }
    break;
  }
LABEL_32:
  sub_ED44E0(v77);
  sub_16234F0(v61);
  v43 = (void (__fastcall ***)(_QWORD))v74;
  if ( v74 )
  {
    if ( (*((_DWORD *)v74 + 2))-- == 1 )
    {
      (**v43)(v43);
      sub_186B220(v43);
    }
  }
  sub_11C05E0(*(_QWORD *)v62);
  v45 = _mm_loadl_epi64(&v71);
  v46 = v88;
  v81 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v91 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v83[0] = _mm_unpacklo_epi64(v45, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v88 != *(void **)v64 )
LABEL_36:
    operator delete(v46, *(_QWORD *)v90 + 1LL);
LABEL_37:
  *((_QWORD *)&v83[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v70);
  v47 = v63;
  *(char **)((char *)&v81 + *(_QWORD *)(v68 - 24)) = v69;
  *(_QWORD *)&v83[0] = *(_QWORD *)v66;
  *(_QWORD *)((char *)v83 + *(_QWORD *)(*(_QWORD *)v66 - 24LL)) = v67;
  v48 = *((_QWORD *)v7 - 3);
  v81 = v7;
  *(char **)((char *)&v81 + v48) = *(char **)v65;
  v82 = 0;
  *(_QWORD *)v91 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v47);
}

