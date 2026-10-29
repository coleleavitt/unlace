_QWORD *__fastcall sub_12EDAB0(_QWORD *a1, __int64 *a2, std::_V2 *a3, size_t a4, int a5, __int64 a6, char a7, char a8)
{
  std::_V2 *v8; // r15
  std::_V2 *v10; // rdi
  void *v11; // r14
  char *v12; // r15
  size_t v13; // r14
  __m128i *v14; // rax
  __m128i *v15; // rdx
  void *v16; // rcx
  char v17; // r8
  __m128i *v18; // rdi
  void *v19; // rax
  __m128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  _BYTE *v25; // r15
  size_t v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm2
  unsigned __int8 **v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // rdx
  bool v34; // zf
  __m128i *v35; // rdi
  void *v36; // rax
  std::_V2 *v37; // rax
  _OWORD *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  __m128 v45; // [rsp+0h] [rbp-2B8h] BYREF
  __int64 *v46; // [rsp+10h] [rbp-2A8h]
  _QWORD *v47; // [rsp+18h] [rbp-2A0h]
  unsigned __int8 **v48; // [rsp+20h] [rbp-298h]
  std::_V2 *v49; // [rsp+28h] [rbp-290h]
  std::__detail::_List_node_base *v50[2]; // [rsp+30h] [rbp-288h] BYREF
  __m128i *v51; // [rsp+40h] [rbp-278h]
  int v52; // [rsp+48h] [rbp-270h]
  char v53; // [rsp+4Fh] [rbp-269h]
  char v54; // [rsp+5Bh] [rbp-25Dh]
  int v55; // [rsp+5Ch] [rbp-25Ch] BYREF
  std::_V2 *v56; // [rsp+60h] [rbp-258h] BYREF
  std::_V2 *v57; // [rsp+68h] [rbp-250h] BYREF
  void *s1; // [rsp+70h] [rbp-248h] BYREF
  size_t n; // [rsp+78h] [rbp-240h]
  void *v60[2]; // [rsp+80h] [rbp-238h] BYREF
  __m128i v61; // [rsp+90h] [rbp-228h] BYREF
  int *v62; // [rsp+A0h] [rbp-218h]
  void *v63; // [rsp+B0h] [rbp-208h] BYREF
  void *v64; // [rsp+B8h] [rbp-200h]
  __m128i v65[2]; // [rsp+C0h] [rbp-1F8h] BYREF
  char v66; // [rsp+E0h] [rbp-1D8h]
  __int128 v67; // [rsp+F0h] [rbp-1C8h] BYREF
  __int128 v68; // [rsp+100h] [rbp-1B8h]
  __int128 v69; // [rsp+110h] [rbp-1A8h]
  __int128 v70; // [rsp+120h] [rbp-198h]
  __int64 v71; // [rsp+130h] [rbp-188h]
  void *v72; // [rsp+140h] [rbp-178h] BYREF
  __m128i si128; // [rsp+148h] [rbp-170h] BYREF
  __int64 v74; // [rsp+158h] [rbp-160h] BYREF
  __int16 v75; // [rsp+160h] [rbp-158h]
  char v76; // [rsp+170h] [rbp-148h]
  void *ptr[27]; // [rsp+1E0h] [rbp-D8h] BYREF

  v8 = a3;
  v47 = a1;
  n = a4;
  v54 = a8;
  v48 = (unsigned __int8 **)ptr;
  memset(ptr, 0, 0xA0u);
  v10 = (std::_V2 *)"-";
  v46 = a2;
  v49 = a3;
  v52 = a5;
  s1 = a3;
  if ( j__strlen("-") != a4 || (v11 = (void *)a4) != nullptr && (v10 = v8, memcmp(v8, "-", a4)) )
  {
    v75 = 261;
    v10 = (std::_V2 *)&v72;
    v72 = v49;
    si128.m128i_i64[0] = a4;
    if ( (unsigned __int8)sub_228B020(&v72, 0) )
    {
      v8 = (std::_V2 *)s1;
      v11 = (void *)n;
      if ( !a7 )
        goto LABEL_5;
      goto LABEL_33;
    }
    if ( LOBYTE(ptr[19]) )
    {
      LOBYTE(ptr[19]) = 0;
      if ( ptr[0] != v48 + 3 )
        free(ptr[0]);
    }
    ptr[0] = v48 + 3;
    *(__m128i *)&ptr[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(v48, s1, (_BYTE *)s1 + n);
    LOBYTE(ptr[19]) = 1;
    v10 = (std::_V2 *)v46[8];
    sub_FD7540((__int64)v10, (__int64)v48);
    v11 = ptr[1];
    v8 = (std::_V2 *)ptr[0];
    n = (size_t)ptr[1];
    s1 = ptr[0];
  }
  if ( !a7 )
  {
LABEL_5:
    *(_QWORD *)&v70 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    goto LABEL_6;
  }
LABEL_33:
  v10 = (std::_V2 *)"-";
  if ( (void *)j__strlen("-") == v11 )
  {
    if ( !v11 )
      goto LABEL_5;
    v10 = v8;
    if ( !memcmp(v8, "-", (size_t)v11) )
      goto LABEL_5;
  }
  si128.m128i_i64[0] = (__int64)v11;
  v75 = 261;
  v69 = 0;
  v67 = 0;
  v68 = 0;
  v70 = 0;
  v71 = 0;
  HIDWORD(v69) = 0xFFFF;
  v72 = v8;
  sub_228C3C0(&v72, &v67, 1);
  if ( !(unsigned __int8)sub_228B220(&v67) )
    goto LABEL_37;
  v75 = 261;
  v72 = s1;
  si128.m128i_i64[0] = n;
  if ( (unsigned int)sub_228C1E0(&v72, 1) )
  {
    v44 = std::_V2::generic_category((std::_V2 *)&v72);
    sub_2220500(&v72, 1, v44);
    LOBYTE(v64) = (unsigned __int8)v64 | 1;
    v63 = v72;
    goto LABEL_25;
  }
  v10 = (std::_V2 *)&v67;
  if ( (unsigned __int8)sub_228B2A0(&v67) )
  {
LABEL_37:
    v45.m128_u64[0] = (unsigned __int64)&s1;
    v67 = 0;
    v68 = 0;
    v21 = _mm_loadh_ps((const double *)v45.m128_u64);
    v45.m128_u64[0] = (unsigned __int64)&v72;
    *(__m128 *)v50 = v21;
    v69 = 0;
    *(_QWORD *)&v70 = 0;
    v45 = _mm_loadh_ps((const double *)v45.m128_u64);
    v22 = sub_228AB90(s1, n, 0);
    v24 = v23;
    v25 = (_BYTE *)v22;
    v72 = &v74;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v26 = n - v23;
    if ( n - v23 > n )
      v26 = n;
    sub_A1FE50(&v72, s1, (_BYTE *)s1 + v26);
    v27 = j__strlen("-%%%%%%%%");
    sub_A1FE50(&v72, "-%%%%%%%%", &asc_2311983[v27]);
    sub_A1FE50(&v72, v25, &v25[v24]);
    v28 = j__strlen(".tmp");
    sub_A1FE50(&v72, ".tmp", &aIda12345Tmp[v28 + 8]);
    LOWORD(v62) = 261;
    v60[0] = v72;
    v55 = (unsigned __int8)v52 ^ 1;
    v60[1] = (void *)si128.m128i_i64[0];
    sub_2290390(&v63, v60, 438, (unsigned __int8)v52 ^ 1u);
    v29 = _mm_load_si128((const __m128i *)v50);
    v30 = _mm_load_si128((const __m128i *)&v45);
    v62 = &v55;
    *(__m128i *)v60 = v29;
    v61 = v30;
    if ( (v66 & 1) != 0 )
    {
      v37 = (std::_V2 *)v63;
      v63 = nullptr;
      v57 = v37;
    }
    else
    {
      v57 = nullptr;
    }
    sub_12ED940(&v56, &v57, (__int64)v60);
    if ( v57 )
      (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v57 + 8LL))(v57);
    if ( v56 )
    {
      v60[0] = v56;
      v56 = nullptr;
      sub_A0E8E0((_QWORD **)v60);
      if ( v60[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v60[0] + 8LL))(v60[0]);
      v45.m128_u64[0] = 0;
    }
    else
    {
      if ( (_BYTE)v70 )
      {
        sub_228DA10(&v67, &v63);
      }
      else
      {
        sub_228D960(&v67, &v63);
        LOBYTE(v70) = 1;
      }
      v43 = DWORD2(v69);
      v45.m128_u64[0] = operator new(0x60u);
      sub_227D340(v45.m128_u64[0], v43, 0, 0, 0);
    }
    if ( v56 )
      (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v56 + 8LL))(v56);
    sub_12EB810((__int64 *)&v63);
    v10 = (std::_V2 *)v72;
    if ( v72 != &v74 )
      free(v72);
    v12 = (char *)s1;
    v13 = n;
    if ( v45.m128_u64[0] )
      goto LABEL_8;
  }
  else
  {
    *(_QWORD *)&v70 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
  }
LABEL_6:
  LODWORD(v72) = 0;
  si128.m128i_i64[0] = std::_V2::system_category(v10);
  v45.m128_u64[0] = operator new(0x60u);
  sub_227D450((std::_V2 *)v45.m128_u64[0]);
  if ( (_DWORD)v72 )
  {
    sub_2220500(v60, (unsigned int)v72, si128.m128i_i64[0]);
    LOBYTE(v64) = (unsigned __int8)v64 | 1;
    v63 = v60[0];
    if ( (_BYTE)v70 )
      sub_228DAE0(&v67);
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v45.m128_u64[0] + 8LL))(v45.m128_u64[0]);
    goto LABEL_25;
  }
  v12 = (char *)s1;
  v13 = n;
LABEL_8:
  v50[0] = (std::__detail::_List_node_base *)(v46 + 43);
  if ( j__strlen("-") == v13 )
  {
    if ( !v13 || !memcmp(v12, "-", v13) )
    {
      v12 = (char *)&byte_22F0C30;
      v13 = j__strlen(&byte_22F0C30);
    }
    goto LABEL_11;
  }
  if ( v12 )
  {
LABEL_11:
    v60[0] = &v61;
    sub_12E9400(v60, v12, (__int64)&v12[v13]);
    goto LABEL_12;
  }
  v61.m128i_i8[0] = 0;
  v60[0] = &v61;
  v60[1] = nullptr;
LABEL_12:
  v14 = (__m128i *)operator new(0x68u);
  v15 = (__m128i *)v60[0];
  v63 = v65;
  if ( v60[0] == &v61 )
  {
    v15 = v65;
    v65[0] = _mm_load_si128(&v61);
  }
  else
  {
    v63 = v60[0];
    v65[0].m128i_i64[0] = v61.m128i_i64[0];
  }
  v16 = v60[1];
  v17 = v70;
  v60[1] = nullptr;
  v60[0] = &v61;
  v64 = v16;
  v61.m128i_i8[0] = 0;
  v76 = 0;
  if ( (_BYTE)v70 )
  {
    v53 = v70;
    v51 = v14;
    sub_228D960(&v72, &v67);
    v17 = v53;
    v14 = v51;
    v76 = 1;
    v15 = (__m128i *)v63;
    v16 = v64;
  }
  v14[1].m128i_i64[0] = (__int64)v14[2].m128i_i64;
  if ( v15 == v65 )
  {
    v14[2] = _mm_load_si128(v65);
  }
  else
  {
    v14[1].m128i_i64[0] = (__int64)v15;
    v14[2].m128i_i64[0] = v65[0].m128i_i64[0];
  }
  v14[1].m128i_i64[1] = (__int64)v16;
  v63 = v65;
  v64 = nullptr;
  v65[0].m128i_i8[0] = 0;
  v14[6].m128i_i8[0] = 0;
  if ( v17 )
  {
    v51 = v14;
    sub_228D960(&v14[3], &v72);
    v14 = v51;
    v34 = v76 == 0;
    v51[6].m128i_i8[0] = 1;
    if ( v34 )
    {
      v35 = (__m128i *)v63;
    }
    else
    {
      v51 = v14;
      sub_228DAE0(&v72);
      v35 = (__m128i *)v63;
      v14 = v51;
    }
    if ( v35 != v65 )
    {
      v51 = v14;
      operator delete(v35);
      v14 = v51;
    }
  }
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v14, v50[0]);
  v18 = (__m128i *)v60[0];
  ++v46[45];
  if ( v18 != &v61 )
    operator delete(v18);
  if ( (_BYTE)v52 && !*(_BYTE *)(v45.m128_u64[0] + 53) )
  {
    v38 = (_OWORD *)operator new(0x58u);
    v38[1] = 0;
    *((_DWORD *)v38 + 2) = 2;
    *((_BYTE *)v38 + 40) = 0;
    *((_DWORD *)v38 + 11) = 1;
    *((_QWORD *)v38 + 4) = 0;
    *(_QWORD *)v38 = &off_2BEBEE0;
    *((_QWORD *)v38 + 6) = v38 + 4;
    sub_227B8B0(v38, 0, 0, 0);
    v42 = v45.m128_u64[0];
    *(_OWORD *)((char *)v38 + 72) = 0;
    *((_QWORD *)v38 + 7) = v42;
    *(_QWORD *)v38 = &off_2BEBFE0;
    *((_QWORD *)v38 + 8) = (char *)v38 + 88;
    if ( *(_QWORD *)(v42 + 32) != *(_QWORD *)(v42 + 16) )
      sub_227B9F0(v42, 0, v39, v42, v40, v41, v45.m128_u64[0], v45.m128_u64[1], v46);
    sub_227B8B0(v45.m128_u64[0], 0, 0, 0);
    LOBYTE(v64) = (unsigned __int8)v64 & 0xFE;
    v63 = v38;
    if ( (_BYTE)v70 )
      goto LABEL_24;
  }
  else
  {
    LOBYTE(v64) = (unsigned __int8)v64 & 0xFE;
    v63 = (void *)v45.m128_u64[0];
    if ( (_BYTE)v70 )
LABEL_24:
      sub_228DAE0(&v67);
  }
LABEL_25:
  if ( LOBYTE(ptr[19]) && ptr[0] != v48 + 3 )
    free(ptr[0]);
  if ( ((unsigned __int8)v64 & 1) != 0 )
  {
    v31 = v48;
    sub_FC70B0((__int64)v48, v46[4], 0, 740);
    sub_AEC220(v31, v49, a4);
    if ( ((unsigned __int8)v64 & 1) != 0 )
    {
      v36 = v63;
      v63 = nullptr;
      *(_QWORD *)&v67 = v36;
    }
    else
    {
      *(_QWORD *)&v67 = 0;
    }
    v32 = sub_2220DB0(&v67);
    (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v33 + 32LL))(&v72, v33, v32);
    sub_AEC220(v48, v72, si128.m128i_i64[0]);
    if ( v72 != &si128.m128i_u64[1] )
      operator delete(v72);
    if ( (_QWORD)v67 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v67 + 8LL))(v67);
    sub_AEA040((__int64)v48);
    *v47 = 0;
  }
  else
  {
    v19 = v63;
    v63 = nullptr;
    *v47 = v19;
  }
  sub_12EB7F0((__int64 *)&v63);
  return v47;
}
