__int64 __fastcall sub_E32480(__int64 **a1)
{
  char **exception; // r12
  __int64 v2; // rdx
  __int64 *v4; // rdi
  __int64 (__fastcall *v5)(); // rdx
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rdx
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD **v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // esi
  __int64 *v21; // rbp
  __int64 v22; // rax
  void (__fastcall __noreturn *v23)(); // r12
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 v25; // rdx
  char *v26; // r12
  char *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  char *v33; // rdx
  __m128i si128; // xmm1
  __int64 v35; // rax
  __int64 v36; // r15
  _BYTE *v37; // rax
  size_t v38; // rax
  size_t v39; // r8
  _QWORD *v40; // r14
  int v41; // eax
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rsi
  _DWORD *v49; // rdi
  __int64 (*v50)(void); // rax
  __int64 v51; // r14
  double v52; // xmm0_8
  __int64 *v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 *v57; // rsi
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  bool v60; // zf
  __int64 v61; // rax
  unsigned int v63; // eax
  const void *v64; // rdi
  _DWORD *v65; // rbp
  unsigned int v66; // r14d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  size_t v71; // rdx
  void *v72; // rsi
  _QWORD *v73; // r14
  _QWORD *v74; // rax
  unsigned __int64 v75; // rdi
  _QWORD *v76; // rax
  const void *v77; // rsi
  _QWORD *v78; // rax
  unsigned __int64 v79; // rdi
  __int64 v80; // rax
  int v81[2]; // [rsp+0h] [rbp-278h]
  __int64 v82; // [rsp+0h] [rbp-278h]
  std::ios_base *v83; // [rsp+8h] [rbp-270h]
  std::locale *v84[2]; // [rsp+10h] [rbp-268h] BYREF
  int v85[2]; // [rsp+20h] [rbp-258h]
  char v86[8]; // [rsp+28h] [rbp-250h]
  int v87[2]; // [rsp+30h] [rbp-248h]
  int v88[2]; // [rsp+38h] [rbp-240h]
  int v89[4]; // [rsp+40h] [rbp-238h] BYREF
  char *v90; // [rsp+50h] [rbp-228h]
  _QWORD *v91; // [rsp+58h] [rbp-220h]
  char **v92; // [rsp+60h] [rbp-218h]
  __int64 v93; // [rsp+68h] [rbp-210h]
  size_t v94; // [rsp+70h] [rbp-208h]
  size_t n; // [rsp+78h] [rbp-200h]
  _BYTE v96[8]; // [rsp+88h] [rbp-1F0h] BYREF
  void *v97; // [rsp+90h] [rbp-1E8h] BYREF
  size_t v98; // [rsp+98h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+A0h] [rbp-1D8h] BYREF
  char *v100; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v101; // [rsp+B8h] [rbp-1C0h]
  _OWORD v102[2]; // [rsp+C0h] [rbp-1B8h]
  void *src[2]; // [rsp+E0h] [rbp-198h]
  __int128 v104; // [rsp+F0h] [rbp-188h]
  int v105[4]; // [rsp+100h] [rbp-178h] BYREF
  void *v106; // [rsp+110h] [rbp-168h]
  size_t v107; // [rsp+118h] [rbp-160h]
  _QWORD v108[2]; // [rsp+120h] [rbp-158h] BYREF
  int v109[2]; // [rsp+130h] [rbp-148h] BYREF
  __int64 v110; // [rsp+208h] [rbp-70h]
  __int16 v111; // [rsp+210h] [rbp-68h]
  __int128 v112; // [rsp+218h] [rbp-60h]
  __int128 v113; // [rsp+228h] [rbp-50h]

  v4 = *a1;
  v5 = *(__int64 (__fastcall **)())(*v4 + 72);
  if ( v5 != sub_E339D0 )
    goto LABEL_13;
  v6 = (_QWORD *)v4[20];
  v5 = *(__int64 (__fastcall **)())(*v6 + 72LL);
  if ( v5 != sub_E339D0 )
    goto LABEL_13;
  v7 = (_QWORD *)v6[20];
  v5 = *(__int64 (__fastcall **)())(*v7 + 72LL);
  if ( v5 != sub_E339D0 )
    goto LABEL_13;
  v8 = (_QWORD *)v7[20];
  v9 = *(__int64 (**)(void))(*v8 + 72LL);
  if ( v9 != sub_E339D0 )
  {
    v70 = v9();
    v18 = a1[2];
    *(_QWORD *)v81 = v70;
    if ( v18 )
      goto LABEL_15;
    goto LABEL_66;
  }
  v10 = (_QWORD *)v8[20];
  v5 = *(__int64 (__fastcall **)())(*v10 + 72LL);
  if ( v5 == sub_E339D0
    && (v11 = (_QWORD *)v10[20], v5 = *(__int64 (__fastcall **)())(*v11 + 72LL), v5 == sub_E339D0)
    && (v12 = (_QWORD *)v11[20], v5 = *(__int64 (__fastcall **)())(*v12 + 72LL), v5 == sub_E339D0)
    && (v13 = (_QWORD *)v12[20], v5 = *(__int64 (__fastcall **)())(*v13 + 72LL), v5 == sub_E339D0)
    && (v14 = (_QWORD *)v13[20], v5 = *(__int64 (__fastcall **)())(*v14 + 72LL), v5 == sub_E339D0)
    && (v15 = (_QWORD *)v14[20], v5 = *(__int64 (__fastcall **)())(*v15 + 72LL), v5 == sub_E339D0)
    && (v16 = (_QWORD **)v15[20], v5 = (__int64 (__fastcall *)())(*v16)[9], v5 == sub_E339D0) )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[20] + 72LL))(v16[20]);
  }
  else
  {
LABEL_13:
    v17 = v5();
  }
  v18 = a1[2];
  *(_QWORD *)v81 = v17;
  if ( v18 )
  {
LABEL_15:
    v19 = *((_DWORD *)v18 - 1);
    goto LABEL_16;
  }
LABEL_66:
  v19 = 0;
LABEL_16:
  v20 = *((_DWORD *)a1 + 2);
  if ( v19 < v20 )
  {
    v21 = *a1;
    v22 = **a1;
    v23 = *(void (__fastcall __noreturn **)())(v22 + 80);
    v24 = *(__int64 (__fastcall **)(__int64))(v22 + 104);
    if ( v24 == sub_2B1DE0 )
      v25 = (__int64)(v21 + 10);
    else
      v25 = v24((__int64)*a1);
    if ( v23 == sub_E33240 )
    {
      sub_1872CE0("");
      sub_1873130(114, 76);
    }
    v65 = (_DWORD *)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, *(_QWORD *)v81, v25);
    if ( !v65 )
      goto LABEL_21;
LABEL_58:
    ++v65[12];
    goto LABEL_21;
  }
  v63 = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 3) = v63 + 1;
  v64 = (const void *)v18[v63 % v20];
  if ( !v64 )
    BUG();
  v65 = *((_DWORD **)__dynamic_cast(
                       v64,
                       (const struct __class_type_info *)&`typeinfo for'solver,
                       (const struct __class_type_info *)&`typeinfo for'pool_solver,
                       0)
        + 20);
  if ( v65 )
    goto LABEL_58;
LABEL_21:
  v92 = &v100;
  *(_QWORD *)v89 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 64;
  *(__m128i *)v84 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v109);
  v111 = 0;
  v26 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v112 = 0;
  v27 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v113 = 0;
  *(_QWORD *)v109 = (char *)&`vtable for'std::ios + 16;
  v28 = *((_QWORD *)v26 - 3);
  v110 = 0;
  v100 = v26;
  *(char **)((char *)&v100 + v28) = v27;
  v101 = 0;
  *(_QWORD *)v85 = v27;
  std::ios::init();
  v29 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v30 = *(_QWORD *)(v29 - 24);
  *(_QWORD *)&v102[0] = v29;
  *(_QWORD *)v86 = v29;
  v31 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *(_QWORD *)((char *)v102 + v30) = v31;
  *(_QWORD *)v87 = v31;
  std::ios::init();
  v32 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v33 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v84);
  v84[0] = (std::locale *)v105;
  v35 = *(_QWORD *)(v32 - 24);
  v90 = v33;
  *(_QWORD *)v88 = v32;
  *(char **)((char *)&v100 + v35) = v33;
  v102[0] = si128;
  v102[1] = 0;
  v100 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v109 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  *(_OWORD *)src = 0;
  v104 = 0;
  std::locale::locale((std::locale *)v105);
  v91 = v108;
  v106 = v108;
  *((_QWORD *)&v102[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v105[2] = 24;
  v107 = 0;
  LOBYTE(v108[0]) = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  v36 = *(_QWORD *)(*(_QWORD *)v81 + 840LL);
  v37 = (_BYTE *)v104;
  v97 = dest;
  v98 = 0;
  LOBYTE(dest[0]) = 0;
  if ( !(_QWORD)v104 )
  {
    v71 = v107;
    if ( v107 > 0xF )
    {
      if ( (v107 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v107 > 0x1D )
      {
        v93 = v107;
        v79 = v107 + 1;
        if ( (__int64)(v107 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v93 = 30;
        v79 = 31;
      }
      v94 = v107;
      v80 = operator new(v79);
      v71 = v94;
      v73 = (_QWORD *)v80;
      if ( v97 != dest )
      {
        operator delete(v97, dest[0] + 1LL);
        v71 = v94;
      }
      v97 = v73;
      v72 = v106;
      dest[0] = v93;
    }
    else
    {
      if ( !v107 )
      {
LABEL_74:
        v74 = dest;
LABEL_75:
        v98 = v71;
        *((_BYTE *)v74 + v71) = 0;
        goto LABEL_32;
      }
      v72 = v106;
      v73 = dest;
      if ( v107 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v106;
        goto LABEL_74;
      }
    }
    v93 = v71;
    memcpy(v73, v72, v71);
    v74 = v97;
    v71 = v93;
    goto LABEL_75;
  }
  if ( src[0] >= (void *)v104 )
    v37 = src[0];
  if ( !src[0] )
    v37 = (_BYTE *)v104;
  v38 = v37 - (char *)src[1];
  v39 = v38;
  if ( (v38 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v38 > 0xF )
  {
    if ( v38 > 0x1D )
    {
      v93 = v38;
      v75 = v38 + 1;
      if ( (__int64)(v38 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v93 = 30;
      v75 = 31;
    }
    n = v38;
    v94 = (size_t)src[1];
    v76 = (_QWORD *)operator new(v75);
    v77 = (const void *)v94;
    v39 = n;
    v40 = v76;
    if ( v94 )
    {
      v94 = n;
      memcpy(v76, v77, n);
      v39 = v94;
    }
    if ( v97 != dest )
    {
      v94 = v39;
      operator delete(v97, dest[0] + 1LL);
      v39 = v94;
    }
    v97 = v40;
    dest[0] = v93;
  }
  else if ( src[1] == dest )
  {
    v93 = v38;
    std::string::_M_replace_cold();
    v39 = v93;
    v40 = v97;
  }
  else
  {
    if ( v38 )
    {
      if ( v38 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)src[1];
      }
      else
      {
        v93 = v38;
        memcpy(dest, src[1], v38);
        v39 = v93;
      }
    }
    v40 = dest;
  }
  v98 = v39;
  *((_BYTE *)v40 + v39) = 0;
LABEL_32:
  sub_180C5A0(v96, v97);
  v41 = sub_15E3510(*(_QWORD *)v81, v96, 0, 0, v36, 0);
  v44 = sub_15DC610(
          v81[0],
          v41,
          0,
          0,
          v42,
          v43,
          v81[0],
          (int)v109,
          (int)v84[0],
          (int)v84[1],
          v85[0],
          v86[0],
          v87[0],
          v88[0],
          v89[0],
          *(void **)&v89[2]);
  v45 = v44;
  if ( v44 )
    ++*(_DWORD *)(v44 + 8);
  if ( v97 != dest )
    operator delete(v97, dest[0] + 1LL);
  v46 = sub_186B270(0xE8u);
  sub_E1F060((_QWORD *)v46, v82);
  *(_QWORD *)(v46 + 120) = a1;
  *(_QWORD *)v46 = &off_1C764B8;
  *(_QWORD *)(v46 + 72) = off_1C76668;
  *(_QWORD *)(v46 + 128) = v45;
  *(_QWORD *)(v46 + 136) = v82;
  if ( v45 )
    ++*(_DWORD *)(v45 + 8);
  v47 = *(_QWORD *)(v46 + 8);
  *(_QWORD *)(v46 + 160) = v65;
  *(_QWORD *)(v46 + 144) = 0;
  *(_QWORD *)(v46 + 152) = v47;
  if ( v65 )
    ++v65[12];
  v48 = *(_QWORD *)(v47 + 856);
  *(_QWORD *)(v46 + 168) = v47;
  *(_QWORD *)(v46 + 176) = 0;
  *(_DWORD *)(v46 + 184) = 0;
  *(_QWORD *)(v46 + 192) = v47;
  *(_QWORD *)(v46 + 200) = 0;
  *(_WORD *)(v46 + 208) = 0;
  *(_BYTE *)(v46 + 210) = 0;
  *(_QWORD *)(v46 + 216) = 0x4014000000000000LL;
  *(_DWORD *)(v46 + 224) = 0;
  if ( v45 == v48 )
  {
    v49 = v65;
  }
  else
  {
    sub_E1F150((_QWORD *)v46, v48, v45);
    v49 = *(_DWORD **)(v46 + 160);
  }
  v50 = *(__int64 (**)(void))(*(_QWORD *)v49 + 104LL);
  if ( (char *)v50 == (char *)sub_2B1DE0 )
    v51 = (__int64)(v49 + 20);
  else
    v51 = v50();
  sub_E5E9C0(v46, v51);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v46 + 160) + 88LL))(*(_QWORD *)(v46 + 160), v51);
  *(_BYTE *)(v46 + 210) = sub_1859610(v46 + 80, "dump_benchmarks", 0);
  v52 = sub_1859CB0(v46 + 80, "dump_threshold", 5.0);
  v53 = a1[2];
  ++*(_DWORD *)(v46 + 48);
  *(double *)(v46 + 216) = v52;
  if ( v53 )
  {
    v54 = *((_DWORD *)v53 - 1);
    if ( v54 == *((_DWORD *)v53 - 2) )
    {
      v66 = (3 * v54 + 1) >> 1;
      v67 = 8 * v66 + 8;
      if ( 8 * v54 + 8 >= (unsigned int)v67 || v54 >= v66 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_180DB2((__int64 *)&v97, "Overflow encountered when expanding vector", v2);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v97);
        sub_233E40((__int64)&v97);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v68 = (unsigned int *)sub_186B300(v53 - 1, v67);
      v69 = v68[1];
      v53 = (__int64 *)(v68 + 2);
      *v68 = v66;
      a1[2] = (__int64 *)(v68 + 2);
      v57 = (__int64 *)&v68[2 * v69 + 2];
      v56 = v69 + 1;
    }
    else
    {
      v55 = v54;
      v56 = v54 + 1;
      v57 = &v53[v55];
    }
  }
  else
  {
    v78 = (_QWORD *)sub_186B270(0x18u);
    v53 = v78 + 1;
    *v78 = 2;
    v56 = 1;
    a1[2] = v53;
    v57 = v53;
  }
  v58 = _mm_loadl_epi64((const __m128i *)v89);
  *v57 = v46;
  *((_DWORD *)v53 - 1) = v56;
  v59 = _mm_unpacklo_epi64(v58, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v45 )
  {
    v60 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v60 )
    {
      *(__m128i *)v89 = v59;
      sub_15D7BC0(v82, v45);
      v59 = _mm_load_si128((const __m128i *)v89);
    }
  }
  v102[0] = v59;
  v100 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v109 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v106 != v91 )
    operator delete(v106, v108[0] + 1LL);
  *((_QWORD *)&v102[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v84[0]);
  *(char **)((char *)&v100 + *(_QWORD *)(*(_QWORD *)v88 - 24LL)) = v90;
  *(_QWORD *)&v102[0] = *(_QWORD *)v86;
  *(_QWORD *)((char *)v102 + *(_QWORD *)(*(_QWORD *)v86 - 24LL)) = *(_QWORD *)v87;
  v61 = *((_QWORD *)v26 - 3);
  v100 = v26;
  *(char **)((char *)&v100 + v61) = *(char **)v85;
  v101 = 0;
  *(_QWORD *)v109 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v83);
  if ( v65 )
  {
    v60 = v65[12]-- == 1;
    if ( v60 )
    {
      (**(void (__fastcall ***)(void *))v65)(v65);
      sub_186B220(v65);
    }
  }
  return v46;
}

