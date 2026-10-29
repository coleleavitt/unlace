_QWORD *__fastcall sub_25BB00(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  size_t v6; // rdx
  __int64 v7; // rax
  _QWORD *exception; // rbx
  _QWORD *v9; // rcx
  size_t v10; // rdx
  __int64 v11; // rax
  __int64 v14; // r15
  _QWORD *v15; // rbx
  char *v16; // r12
  char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  char *v22; // rsi
  __m128i si128; // xmm1
  __int64 v24; // rax
  void (__fastcall ***v25)(_QWORD); // rdi
  void (__fastcall ***v26)(_QWORD); // r13
  _BYTE *v27; // rax
  size_t v28; // rax
  size_t v29; // r13
  _QWORD *v30; // rcx
  __int64 *v31; // r13
  __int64 *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rsi
  int v38; // eax
  __int64 *v39; // rsi
  __int64 v40; // r8
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  _QWORD *v45; // rcx
  __m128i v46; // xmm0
  __int64 v47; // rdx
  char *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v52; // r8d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rsi
  unsigned int v56; // r8d
  unsigned int v57; // ecx
  size_t v58; // rsi
  unsigned int *v59; // rax
  unsigned int v60; // ecx
  unsigned __int64 v61; // rdi
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  size_t v64; // r13
  void *v65; // rsi
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  unsigned __int64 v69; // rdi
  int v70; // [rsp+10h] [rbp-278h]
  int v71[2]; // [rsp+10h] [rbp-278h]
  size_t v72; // [rsp+10h] [rbp-278h]
  __int64 v73; // [rsp+18h] [rbp-270h]
  __int64 v74; // [rsp+18h] [rbp-270h]
  __int64 v75; // [rsp+18h] [rbp-270h]
  __int64 v76; // [rsp+18h] [rbp-270h]
  std::locale *v77[2]; // [rsp+20h] [rbp-268h] BYREF
  char *v78; // [rsp+30h] [rbp-258h]
  __int64 v79; // [rsp+38h] [rbp-250h]
  __int64 v80; // [rsp+40h] [rbp-248h]
  char *v81; // [rsp+48h] [rbp-240h]
  __m128i v82; // [rsp+50h] [rbp-238h] BYREF
  void *v83; // [rsp+60h] [rbp-228h]
  unsigned int v84; // [rsp+6Ch] [rbp-21Ch]
  __int64 v85; // [rsp+70h] [rbp-218h]
  char **v86; // [rsp+78h] [rbp-210h]
  char *v87; // [rsp+80h] [rbp-208h]
  void *v88; // [rsp+88h] [rbp-200h]
  __int64 *v89; // [rsp+98h] [rbp-1F0h] BYREF
  void *v90; // [rsp+A0h] [rbp-1E8h] BYREF
  size_t v91; // [rsp+A8h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+B0h] [rbp-1D8h] BYREF
  char *v93; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-1C0h]
  _OWORD v95[2]; // [rsp+D0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+F0h] [rbp-198h]
  __int128 v97; // [rsp+100h] [rbp-188h]
  char v98[8]; // [rsp+110h] [rbp-178h] BYREF
  int v99; // [rsp+118h] [rbp-170h]
  void *v100; // [rsp+120h] [rbp-168h]
  size_t n; // [rsp+128h] [rbp-160h]
  _QWORD v102[2]; // [rsp+130h] [rbp-158h] BYREF
  _QWORD v103[28]; // [rsp+140h] [rbp-148h] BYREF
  __int16 v104; // [rsp+220h] [rbp-68h]
  __int128 v105; // [rsp+228h] [rbp-60h]
  __int128 v106; // [rsp+238h] [rbp-50h]

  v14 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v85 = a1;
  v84 = a3;
  v70 = v14;
  v15 = (_QWORD *)sub_186B270(0x28u);
  v82.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(__m128i *)v77 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  sub_2518F0((__int64)v15, a1);
  v15[3] = v14;
  *v15 = &off_1C4CA20;
  v15[4] = 0;
  sub_24FBE0(a1, (__int64)v15);
  v86 = &v93;
  std::ios_base::ios_base((std::ios_base *)v103);
  v105 = 0;
  v16 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v17 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v104 = 0;
  v106 = 0;
  v18 = *((_QWORD *)v16 - 3);
  v103[0] = (char *)&`vtable for'std::ios + 16;
  v103[27] = 0;
  v93 = v16;
  *(char **)((char *)&v93 + v18) = v17;
  v94 = 0;
  v78 = v17;
  std::ios::init();
  v19 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v20 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v21 = (_QWORD *)((char *)v95 + *(_QWORD *)(v19 - 24));
  *(_QWORD *)&v95[0] = v19;
  *v21 = v20;
  v79 = v20;
  std::ios::init();
  v22 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v77);
  v24 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL);
  v80 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v81 = v22;
  *(char **)((char *)&v93 + v24) = v22;
  v93 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v103[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v77[0] = (std::locale *)v98;
  v95[0] = si128;
  v95[1] = 0;
  *(_OWORD *)src = 0;
  v97 = 0;
  std::locale::locale((std::locale *)v98);
  v82.m128i_i64[1] = (__int64)v102;
  v99 = 24;
  *((_QWORD *)&v95[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v100 = v102;
  n = 0;
  LOBYTE(v102[0]) = 0;
  v87 = (char *)v95 + 8;
  std::ios::init();
  sub_DFA6E0(*a2 + 336LL, v95);
  v25 = (void (__fastcall ***)(_QWORD))*a2;
  v83 = &v90;
  v90 = nullptr;
  LOBYTE(a4) = sub_DC0650(v25, a4, 0, &v90, 0);
  sub_18572D0(&v90);
  if ( !(_BYTE)a4 )
  {
    if ( (_BYTE)v84 )
    {
      v26 = (void (__fastcall ***)(_QWORD))*a2;
      if ( *a2 )
      {
        (**v26)(*a2);
        sub_186B220(v26);
        *a2 = 0;
      }
    }
    v27 = (_BYTE *)v97;
    v91 = 0;
    v90 = dest;
    LOBYTE(dest[0]) = 0;
    if ( (_QWORD)v97 )
    {
      if ( src[0] >= (void *)v97 )
        v27 = src[0];
      if ( !src[0] )
        v27 = (_BYTE *)v97;
      v28 = v27 - (char *)src[1];
      v29 = v28;
      if ( (v28 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_replace");
      if ( v28 > 0xF )
      {
        if ( v28 <= 0x1D )
        {
          *(_QWORD *)v71 = 30;
          v61 = 31;
        }
        else
        {
          *(_QWORD *)v71 = v28;
          v61 = v28 + 1;
          if ( (__int64)(v28 + 1) < 0 )
            std::__throw_bad_alloc();
        }
        v88 = src[1];
        v62 = (_QWORD *)operator new(v61);
        v30 = v62;
        if ( v88 )
          v30 = memcpy(v62, v88, v29);
        if ( v90 != dest )
        {
          v88 = v30;
          operator delete(v90, dest[0] + 1LL);
          v30 = v88;
        }
        v90 = v30;
        dest[0] = *(_QWORD *)v71;
      }
      else if ( src[1] == dest )
      {
        std::string::_M_replace_cold();
        v30 = v90;
      }
      else
      {
        if ( v28 )
        {
          if ( v28 == 1 )
            LOBYTE(dest[0]) = *(_BYTE *)src[1];
          else
            memcpy(dest, src[1], v28);
        }
        v30 = dest;
      }
      v91 = v29;
      *((_BYTE *)v30 + v29) = 0;
      goto LABEL_16;
    }
    v64 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v72 = n;
        v69 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v72 = 30;
        v69 = 31;
      }
      v66 = (_QWORD *)operator new(v69);
      if ( v90 != dest )
      {
        v88 = v66;
        operator delete(v90, dest[0] + 1LL);
        v66 = v88;
      }
      v90 = v66;
      v65 = v100;
      dest[0] = v72;
    }
    else
    {
      if ( !n )
      {
LABEL_60:
        v67 = dest;
LABEL_61:
        v91 = v64;
        *((_BYTE *)v67 + v64) = 0;
LABEL_16:
        sub_24EC20(v85, 4u, (__int64)v83);
        if ( v90 != dest )
          operator delete(v90, dest[0] + 1LL);
        goto LABEL_37;
      }
      v65 = v100;
      v66 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v100;
        goto LABEL_60;
      }
    }
    memcpy(v66, v65, v64);
    v67 = v90;
    goto LABEL_61;
  }
  sub_DFA1C0(&v89, *a2);
  if ( v89 )
  {
    v31 = &v89[2 * *((unsigned int *)v89 - 1)];
    if ( v89 == v31 )
      goto LABEL_35;
    v32 = v89;
    do
    {
      while ( 1 )
      {
        v40 = *v32;
        if ( v32[1] )
          break;
        if ( v40 )
          ++*(_DWORD *)(v40 + 8);
        v41 = (_QWORD *)v15[4];
        if ( v41 )
        {
          v42 = *((_DWORD *)v41 - 1);
          if ( v42 == *((_DWORD *)v41 - 2) )
          {
            v57 = (3 * v42 + 1) >> 1;
            v58 = 8 * v57 + 8;
            if ( 8 * v42 + 8 >= (unsigned int)v58 || v42 >= v57 )
            {
              exception = __cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v83, "Overflow encountered when expanding vector");
              v9 = v90;
              v10 = v91;
              *exception = off_1C63128;
              exception[1] = exception + 3;
              if ( v9 == dest )
              {
                qmemcpy(exception + 3, dest, (unsigned int)(v10 + 1));
              }
              else
              {
                v11 = dest[0];
                exception[1] = v9;
                exception[3] = v11;
              }
              exception[2] = v10;
              v91 = 0;
              v90 = dest;
              LOBYTE(dest[0]) = 0;
              sub_233E40((__int64)v83);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v84 = (3 * v42 + 1) >> 1;
            v74 = v40;
            v59 = (unsigned int *)sub_186B300(v41 - 1, v58);
            v60 = v84;
            v41 = v59 + 2;
            v40 = v74;
            v15[4] = v59 + 2;
            *v59 = v60;
            LODWORD(v59) = v59[1];
            v45 = &v41[(unsigned int)v59];
            v44 = (_DWORD)v59 + 1;
          }
          else
          {
            v43 = v42;
            v44 = v42 + 1;
            v45 = &v41[v43];
          }
        }
        else
        {
          v76 = v40;
          v68 = (_QWORD *)sub_186B270(0x18u);
          v41 = v68 + 1;
          *v68 = 2;
          v40 = v76;
          v44 = 1;
          v15[4] = v41;
          v45 = v41;
        }
        v32 += 2;
        *v45 = v40;
        *((_DWORD *)v41 - 1) = v44;
        if ( v31 == v32 )
          goto LABEL_34;
      }
      v33 = sub_15E1B70(v70);
      v34 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      v35 = (_QWORD *)v15[4];
      if ( v35 )
      {
        v36 = *((_DWORD *)v35 - 1);
        if ( v36 == *((_DWORD *)v35 - 2) )
        {
          v52 = (3 * v36 + 1) >> 1;
          v53 = 8 * v52 + 8;
          if ( 8 * v36 + 8 >= (unsigned int)v53 || v36 >= v52 )
          {
            v4 = __cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v83, "Overflow encountered when expanding vector");
            v5 = v90;
            v6 = v91;
            *v4 = off_1C63128;
            v4[1] = v4 + 3;
            if ( v5 == dest )
            {
              qmemcpy(v4 + 3, dest, (unsigned int)(v6 + 1));
            }
            else
            {
              v7 = dest[0];
              v4[1] = v5;
              v4[3] = v7;
            }
            v4[2] = v6;
            v90 = dest;
            v91 = 0;
            LOBYTE(dest[0]) = 0;
            sub_233E40((__int64)v83);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v84 = (3 * v36 + 1) >> 1;
          v73 = v34;
          v54 = (unsigned int *)sub_186B300(v35 - 1, v53);
          v55 = v54[1];
          v56 = v84;
          v35 = v54 + 2;
          v15[4] = v54 + 2;
          v34 = v73;
          *v54 = v56;
          LODWORD(v54) = v55;
          v39 = &v35[v55];
          v38 = (_DWORD)v54 + 1;
        }
        else
        {
          v37 = v36;
          v38 = v36 + 1;
          v39 = &v35[v37];
        }
      }
      else
      {
        v75 = v33;
        v63 = (_QWORD *)sub_186B270(0x18u);
        v35 = v63 + 1;
        *v63 = 2;
        v34 = v75;
        v38 = 1;
        v15[4] = v35;
        v39 = v35;
      }
      v32 += 2;
      *v39 = v34;
      *((_DWORD *)v35 - 1) = v38;
    }
    while ( v31 != v32 );
LABEL_34:
    v31 = v89;
    if ( v89 )
LABEL_35:
      sub_186B220(v31 - 1);
  }
  sub_DFF430(*a2);
LABEL_37:
  v46 = _mm_loadl_epi64(&v82);
  v93 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v103[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v95[0] = _mm_unpacklo_epi64(v46, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v100 != (void *)v82.m128i_i64[1] )
    operator delete(v100, v102[0] + 1LL);
  *((_QWORD *)&v95[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v77[0]);
  v47 = v79;
  v48 = v78;
  *(char **)((char *)&v93 + *(_QWORD *)(v80 - 24)) = v81;
  v49 = *(_QWORD *)(v19 - 24);
  *(_QWORD *)&v95[0] = v19;
  *(_QWORD *)((char *)v95 + v49) = v47;
  v50 = *((_QWORD *)v16 - 3);
  v93 = v16;
  *(char **)((char *)&v93 + v50) = v48;
  v94 = 0;
  v103[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v103);
  return v15;
}

