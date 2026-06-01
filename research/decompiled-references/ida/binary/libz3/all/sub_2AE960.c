void __fastcall sub_2AE960(__int64 a1, _QWORD *a2, __int64 a3)
{
  char **exception; // rbp
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v8; // rax
  char *v9; // r14
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  char *v16; // rdx
  __m128i v17; // xmm4
  __int64 v18; // rax
  __int64 v19; // rdi
  char v20; // bl
  void (__fastcall ***v21)(_QWORD); // rbx
  void *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  void *v25; // rdi
  std::ios_base *v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // r13
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rsi
  int v37; // eax
  _QWORD *v38; // rsi
  __int64 v39; // r13
  __int64 v40; // r12
  __int64 v41; // r15
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rbx
  void (__fastcall ***v51)(void *); // r12
  bool v52; // zf
  __int64 v53; // rbx
  __int64 v54; // rbp
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rsi
  __int64 v58; // rdi
  __m128i v59; // xmm0
  unsigned int v60; // r8d
  size_t v61; // rsi
  _DWORD *v62; // rax
  __int64 v63; // rsi
  int v64; // r8d
  _QWORD *v65; // r9
  void **v66; // rdi
  int v67; // edx
  _DWORD *v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // r12
  void (__fastcall ***v71)(_QWORD); // r13
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rsi
  __m128i v75; // [rsp+0h] [rbp-268h] BYREF
  std::ios_base *v76; // [rsp+10h] [rbp-258h]
  _QWORD *v77; // [rsp+18h] [rbp-250h]
  __int64 v78; // [rsp+20h] [rbp-248h]
  char *v79; // [rsp+28h] [rbp-240h]
  __int64 v80; // [rsp+30h] [rbp-238h]
  __int64 v81; // [rsp+38h] [rbp-230h]
  __int64 v82; // [rsp+40h] [rbp-228h]
  char *v83; // [rsp+48h] [rbp-220h]
  std::locale *v84; // [rsp+50h] [rbp-218h]
  __m128i v85; // [rsp+58h] [rbp-210h] BYREF
  char **v86; // [rsp+68h] [rbp-200h]
  int v87; // [rsp+70h] [rbp-1F8h]
  _QWORD *v88; // [rsp+78h] [rbp-1F0h] BYREF
  void *v89; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v90; // [rsp+88h] [rbp-1E0h]
  void *v91; // [rsp+90h] [rbp-1D8h] BYREF
  int v92; // [rsp+98h] [rbp-1D0h]
  char *v93; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v94; // [rsp+A8h] [rbp-1C0h]
  _OWORD v95[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  __int128 v96; // [rsp+D0h] [rbp-198h]
  __int128 v97; // [rsp+E0h] [rbp-188h]
  char v98[8]; // [rsp+F0h] [rbp-178h] BYREF
  int v99; // [rsp+F8h] [rbp-170h]
  void *v100; // [rsp+100h] [rbp-168h]
  __int64 v101; // [rsp+108h] [rbp-160h]
  _QWORD v102[2]; // [rsp+110h] [rbp-158h] BYREF
  _QWORD v103[28]; // [rsp+120h] [rbp-148h] BYREF
  __int16 v104; // [rsp+200h] [rbp-68h]
  __int128 v105; // [rsp+208h] [rbp-60h]
  __int128 v106; // [rsp+218h] [rbp-50h]

  v78 = a1;
  v85.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v8 = a2[9];
  v75 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                  + 64),
          (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  if ( !v8 )
  {
    v70 = sub_186B270(0x3A0u);
    sub_E059D0(v70, 0, *(_QWORD *)(v78 + 232), &qword_18D6CD0);
    v71 = (void (__fastcall ***)(_QWORD))a2[9];
    if ( (void (__fastcall ***)(_QWORD))v70 != v71 )
    {
      if ( v71 )
      {
        (**v71)(a2[9]);
        sub_186B220(v71);
      }
      a2[9] = v70;
      v71 = (void (__fastcall ***)(_QWORD))v70;
    }
    sub_2CFBE0(v71);
    v8 = a2[9];
  }
  *(_BYTE *)(v8 + 273) = 1;
  v86 = &v93;
  v76 = (std::ios_base *)v103;
  std::ios_base::ios_base((std::ios_base *)v103);
  v103[27] = 0;
  v9 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v105 = 0;
  v104 = 0;
  v10 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v106 = 0;
  v103[0] = (char *)&`vtable for'std::ios + 16;
  v11 = *((_QWORD *)v9 - 3);
  v93 = v9;
  *(char **)((char *)&v93 + v11) = v10;
  v94 = nullptr;
  v79 = v10;
  std::ios::init();
  v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v13 = *(_QWORD *)(v12 - 24);
  *(_QWORD *)&v95[0] = v12;
  v80 = v12;
  v14 = (_QWORD *)((char *)v95 + v13);
  v15 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v14 = v15;
  v81 = v15;
  std::ios::init();
  v16 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v17 = _mm_load_si128(&v75);
  v18 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL);
  v82 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v83 = v16;
  *(char **)((char *)&v93 + v18) = v16;
  v95[0] = v17;
  v93 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v103[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v84 = (std::locale *)v98;
  v95[1] = 0;
  v96 = 0;
  v97 = 0;
  std::locale::locale((std::locale *)v98);
  v99 = 24;
  v77 = v102;
  *((_QWORD *)&v95[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v100 = v102;
  v101 = 0;
  LOBYTE(v102[0]) = 0;
  std::ios::init();
  sub_DFA6E0(a2[9] + 336LL, v95);
  v19 = a2[9];
  v85.m128i_i64[1] = (__int64)&v89;
  v89 = nullptr;
  v20 = sub_DC0650(v19, a3, 0, &v89, 0);
  sub_18572D0(&v89);
  if ( v20 )
  {
    if ( !a2[4] )
      sub_2A74C0(v78, (__int64)a2);
    sub_DFA1C0(&v88, a2[9]);
    v28 = v88;
    if ( v88 )
    {
      v29 = 2LL * *((unsigned int *)v88 - 1);
      v75.m128i_i64[0] = (__int64)&v88[v29];
      if ( v88 == &v88[v29] )
        goto LABEL_31;
      do
      {
        while ( 1 )
        {
          v39 = v28[1];
          v40 = *v28;
          v41 = a2[8];
          if ( v39 )
            break;
          if ( v41 )
          {
            sub_168ACC0(a2[8], *v28);
            sub_168C010(
              v41,
              v41 + 704,
              v42,
              v43,
              v44,
              v45,
              (void *)v75.m128i_i64[0],
              v75.m128i_i64[1],
              (int)v76,
              (int)v77,
              v41 + 704,
              (int)v79,
              v80,
              v81,
              v82,
              (int)v83,
              (int)v84,
              v85.m128i_i32[0],
              v85.m128i_i32[2],
              (int)v86,
              v87,
              (__int64)v88,
              (int)v89,
              v90,
              v91,
              v92,
              (int)v93,
              v94);
            sub_168B790(v41, v78, v40, 1);
          }
          sub_E5EBF0(a2[4], v40);
          v28 += 2;
          if ( (_QWORD *)v75.m128i_i64[0] == v28 )
            goto LABEL_30;
        }
        if ( v41 )
        {
          sub_168ACC0(a2[8], *v28);
          sub_168ACC0(v41, v39);
          sub_168C010(
            v41,
            v41 + 704,
            v30,
            v31,
            v32,
            v33,
            (void *)v75.m128i_i64[0],
            v75.m128i_i64[1],
            (int)v76,
            (int)v77,
            v41 + 704,
            (int)v79,
            v80,
            v81,
            v82,
            (int)v83,
            (int)v84,
            v85.m128i_i32[0],
            v85.m128i_i32[2],
            (int)v86,
            v87,
            (__int64)v88,
            (int)v89,
            v90,
            v91,
            v92,
            (int)v93,
            v94);
          sub_168B7F0(v41, v78, v40, v39, 1);
          v34 = *(_QWORD **)(v41 + 1224);
          ++*(_DWORD *)(v39 + 8);
          if ( v34 )
          {
            v35 = *((_DWORD *)v34 - 1);
            if ( v35 == *((_DWORD *)v34 - 2) )
            {
              v60 = (3 * v35 + 1) >> 1;
              v61 = 8 * v60 + 8;
              if ( 8 * v35 + 8 >= (unsigned int)v61 || v35 >= v60 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v85.m128i_i64[1], "Overflow encountered when expanding vector");
                v4 = v85.m128i_i64[1];
                v5 = (_QWORD *)v85.m128i_i64[1];
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v5);
                sub_233E40(v4);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v78) = (3 * v35 + 1) >> 1;
              v62 = (_DWORD *)sub_186B300(v34 - 1, v61);
              v63 = (unsigned int)v62[1];
              v64 = v78;
              v34 = v62 + 2;
              *(_QWORD *)(v41 + 1224) = v62 + 2;
              *v62 = v64;
              LODWORD(v62) = v63;
              v38 = &v34[v63];
              v37 = (_DWORD)v62 + 1;
            }
            else
            {
              v36 = v35;
              v37 = v35 + 1;
              v38 = &v34[v36];
            }
          }
          else
          {
            v72 = (_QWORD *)sub_186B270(0x18u);
            v34 = v72 + 1;
            *v72 = 2;
            v37 = 1;
            *(_QWORD *)(v41 + 1224) = v34;
            v38 = v34;
          }
          *v38 = v39;
          *((_DWORD *)v34 - 1) = v37;
        }
        sub_E5EC60(a2[4], v40, v39);
        v28 += 2;
      }
      while ( (_QWORD *)v75.m128i_i64[0] != v28 );
LABEL_30:
      v75.m128i_i64[0] = (__int64)v88;
      if ( v88 )
LABEL_31:
        sub_186B220((void *)(v75.m128i_i64[0] - 8));
    }
    sub_DFF430(a2[9]);
    v46 = a2[9];
    v47 = a2[4];
    v48 = 0x7FFFFFFF8LL;
    v49 = *(_QWORD *)(v46 + 288);
    if ( v49 )
      v48 = 8LL * (unsigned int)(*(_DWORD *)(v49 - 4) - 1);
    v50 = *(_QWORD *)(v49 + v48);
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    v51 = *(void (__fastcall ****)(void *))(v47 + 56);
    if ( v51 )
    {
      v52 = (*((_DWORD *)v51 + 2))-- == 1;
      if ( v52 )
      {
        (**v51)(v51);
        sub_186B220(v51);
        v46 = a2[9];
      }
    }
    *(_QWORD *)(v47 + 56) = v50;
    v53 = *(_QWORD *)(v46 + 864);
    if ( v53 && sub_E39670(*(_QWORD *)(v46 + 864)) )
    {
      v54 = a2[4];
      v55 = sub_E39670(v53);
      v56 = v55;
      if ( v55 )
        ++*(_DWORD *)(v55 + 8);
      v57 = *(_QWORD *)(v54 + 32);
      if ( v57 )
      {
        v58 = *(_QWORD *)(v54 + 40);
        v52 = (*(_DWORD *)(v57 + 8))-- == 1;
        if ( v52 )
          sub_15D7BC0(v58, v57);
      }
      *(_QWORD *)(v54 + 32) = v56;
    }
    v59 = _mm_loadl_epi64(&v85);
    v25 = v100;
    v93 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    v103[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    v95[0] = _mm_unpacklo_epi64(v59, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
    if ( v100 != v77 )
      goto LABEL_13;
    goto LABEL_14;
  }
  v21 = (void (__fastcall ***)(_QWORD))a2[9];
  v75 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v85), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v21 )
  {
    (**v21)(v21);
    sub_186B220(v21);
    a2[9] = 0;
  }
  v22 = v100;
  if ( (_QWORD)v97 )
  {
    v23 = v96;
    if ( !(_QWORD)v96 || (unsigned __int64)v96 < (unsigned __int64)v97 )
      v23 = v97;
    v101 = v23 - *((_QWORD *)&v96 + 1);
    *((_BYTE *)v100 + v23 - *((_QWORD *)&v96 + 1)) = 0;
    v22 = v100;
    v89 = &v91;
    if ( v100 != v77 )
      goto LABEL_9;
  }
  else
  {
    v89 = &v91;
    if ( v100 != v77 )
    {
LABEL_9:
      v89 = v22;
      v91 = (void *)v102[0];
      v24 = v101;
      goto LABEL_10;
    }
  }
  v24 = v101;
  v65 = v77;
  v66 = &v91;
  v67 = v101 + 1;
  v68 = v77;
  if ( (unsigned int)(v101 + 1) >= 8 )
  {
    LODWORD(v73) = 0;
    do
    {
      v74 = (unsigned int)v73;
      v73 = (unsigned int)(v73 + 8);
      *(void **)((char *)&v91 + v74) = *(void **)((char *)v65 + v74);
    }
    while ( (unsigned int)v73 < (v67 & 0xFFFFFFF8) );
    v66 = (void **)((char *)&v91 + v73);
    v68 = (_DWORD *)((char *)v77 + v73);
  }
  v69 = 0;
  if ( (v67 & 4) != 0 )
  {
    *(_DWORD *)v66 = *v68;
    v69 = 4;
  }
  if ( (v67 & 2) != 0 )
  {
    *(_WORD *)((char *)v66 + v69) = *(_WORD *)((char *)v68 + v69);
    v69 += 2;
  }
  if ( (v67 & 1) != 0 )
    *((_BYTE *)v66 + v69) = *((_BYTE *)v68 + v69);
LABEL_10:
  v90 = v24;
  LOBYTE(v102[0]) = 0;
  v101 = 0;
  v100 = v77;
  std::stringbuf::_M_sync();
  sub_24EC20(v78, 4u, v85.m128i_i64[1]);
  if ( v89 != &v91 )
    operator delete(v89, (unsigned __int64)v91 + 1);
  v25 = v100;
  v95[0] = _mm_load_si128(&v75);
  v93 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v103[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v100 != v77 )
LABEL_13:
    operator delete(v25, v102[0] + 1LL);
LABEL_14:
  *((_QWORD *)&v95[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v84);
  v26 = v76;
  *(char **)((char *)&v93 + *(_QWORD *)(v82 - 24)) = v83;
  *(_QWORD *)&v95[0] = v80;
  *(_QWORD *)((char *)v95 + *(_QWORD *)(v80 - 24)) = v81;
  v27 = *((_QWORD *)v9 - 3);
  v93 = v9;
  *(char **)((char *)&v93 + v27) = v79;
  v94 = nullptr;
  v103[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v26);
}

