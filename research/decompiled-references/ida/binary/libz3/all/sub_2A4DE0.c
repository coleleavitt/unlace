void __fastcall sub_2A4DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  size_t v7; // rax
  void (__fastcall ***v8)(void *); // rbx
  char *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r15
  char *v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  char v18; // r13
  __int64 v19; // r12
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  char *v23; // r13
  char *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  std::ios_base *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  _BYTE *v35; // rax
  size_t v36; // rax
  size_t v37; // r12
  _QWORD *v38; // rbx
  __m128i v39; // xmm0
  std::ios_base *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  size_t v43; // r12
  _QWORD *v44; // rax
  unsigned __int64 v45; // rdi
  _QWORD *v46; // rax
  size_t v47; // rbx
  unsigned __int64 v48; // rdi
  _QWORD *v49; // rax
  void *v50; // rsi
  __m128i v51; // [rsp+0h] [rbp-268h] BYREF
  int v52; // [rsp+10h] [rbp-258h]
  void *v53; // [rsp+18h] [rbp-250h]
  std::ios_base *v54; // [rsp+20h] [rbp-248h]
  char **v55; // [rsp+28h] [rbp-240h]
  _OWORD *v56; // [rsp+30h] [rbp-238h]
  char *v57; // [rsp+38h] [rbp-230h]
  __int64 v58; // [rsp+40h] [rbp-228h]
  __int64 v59; // [rsp+48h] [rbp-220h]
  char *v60; // [rsp+50h] [rbp-218h]
  std::locale *v61; // [rsp+58h] [rbp-210h]
  __int128 v62; // [rsp+60h] [rbp-208h] BYREF
  __int64 v63; // [rsp+70h] [rbp-1F8h]
  void *v64; // [rsp+78h] [rbp-1F0h]
  void *v65; // [rsp+80h] [rbp-1E8h] BYREF
  size_t v66; // [rsp+88h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+90h] [rbp-1D8h] BYREF
  char *v68; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-1C0h]
  _OWORD v70[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+D0h] [rbp-198h]
  __int128 v72; // [rsp+E0h] [rbp-188h]
  char v73[8]; // [rsp+F0h] [rbp-178h] BYREF
  int v74; // [rsp+F8h] [rbp-170h]
  void *v75; // [rsp+100h] [rbp-168h]
  size_t n; // [rsp+108h] [rbp-160h]
  _QWORD v77[2]; // [rsp+110h] [rbp-158h] BYREF
  _QWORD v78[28]; // [rsp+120h] [rbp-148h] BYREF
  __int16 v79; // [rsp+200h] [rbp-68h]
  __int128 v80; // [rsp+208h] [rbp-60h]
  __int128 v81; // [rsp+218h] [rbp-50h]

  v5 = *(_QWORD *)(a1 + 232);
  v51.m128i_i64[0] = a3;
  if ( !a4 )
  {
LABEL_5:
    v8 = (void (__fastcall ***)(void *))sub_186B270(0x3A0u);
    sub_E059D0(v8, 0, v5, &qword_18D6CD0);
    sub_304ED0(v8, *(_QWORD *)(a2 + 24));
    v55 = &v68;
    v54 = (std::ios_base *)v78;
    std::ios_base::ios_base((std::ios_base *)v78);
    v79 = 0;
    v9 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v80 = 0;
    v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v81 = 0;
    v11 = *((_QWORD *)v9 - 3);
    v78[0] = (char *)&`vtable for'std::ios + 16;
    v78[27] = 0;
    v68 = v9;
    *(char **)((char *)&v68 + v11) = (char *)v10;
    v69 = 0;
    v57 = (char *)v10;
    std::ios::init();
    v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    v56 = v70;
    v13 = (char *)v70 + *(_QWORD *)(v12 - 24);
    *(_QWORD *)&v70[0] = v12;
    v14 = v13;
    v15 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    *v14 = v15;
    v58 = v15;
    std::ios::init();
    v16 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
    v60 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    *(_QWORD *)&v62 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 64;
    v17 = *(_QWORD *)(v16 - 24);
    v59 = v16;
    v61 = (std::locale *)v73;
    *(char **)((char *)&v68 + v17) = v60;
    v68 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    v78[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    v70[0] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                       + 64),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    v70[1] = 0;
    *(_OWORD *)src = 0;
    v72 = 0;
    std::locale::locale((std::locale *)v73);
    v74 = 24;
    *((_QWORD *)&v62 + 1) = v77;
    *((_QWORD *)&v70[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v75 = v77;
    n = 0;
    LOBYTE(v77[0]) = 0;
    v63 = (__int64)v70 + 8;
    std::ios::init();
    sub_DFA6E0(v8 + 42, v56);
    *((_BYTE *)v8 + 273) = 1;
    v65 = nullptr;
    v53 = &v65;
    v18 = sub_DC0650(v8, v51.m128i_i64[0], 0, &v65, 0);
    sub_18572D0(&v65);
    if ( v18 )
    {
      v19 = *(_QWORD *)(a2 + 24);
      sub_DFA1C0(v53, v8);
      v23 = (char *)v65;
      v51 = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)&v62),
              (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
      if ( v65 )
      {
        v24 = (char *)v65 + 16 * *((unsigned int *)v65 - 1);
        if ( v65 == v24 )
          goto LABEL_13;
        do
        {
          while ( 1 )
          {
            v25 = *((_QWORD *)v23 + 1);
            v26 = *(_QWORD *)v23;
            if ( !v25 )
              break;
            sub_2F2590(v19, v26, v25);
            v23 += 16;
            if ( v24 == v23 )
              goto LABEL_12;
          }
          sub_2F2620(v19, v26, 0, v20, v21, v22, (void *)v51.m128i_i64[0]);
          v23 += 16;
        }
        while ( v24 != v23 );
LABEL_12:
        v24 = (char *)v65;
        if ( v65 )
LABEL_13:
          sub_186B220(v24 - 8);
      }
      v70[0] = _mm_load_si128(&v51);
      v68 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
      v78[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
      if ( v75 != *((void **)&v62 + 1) )
        operator delete(v75, v77[0] + 1LL);
      *((_QWORD *)&v70[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
      std::locale::~locale(v61);
      v27 = v58;
      v28 = v54;
      *(char **)((char *)&v68 + *(_QWORD *)(v59 - 24)) = v60;
      v29 = *(_QWORD *)(v12 - 24);
      *(_QWORD *)&v70[0] = v12;
      v30 = (__int64)v57;
      *(_QWORD *)((char *)v70 + v29) = v27;
      v31 = *((_QWORD *)v9 - 3);
      v68 = v9;
      *(char **)((char *)&v68 + v31) = (char *)v30;
      v69 = 0;
      v78[0] = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base(v28);
      (**v8)(v8);
      sub_186B220(v8);
      return;
    }
    (**v8)(v8);
    sub_186B220(v8);
    v35 = (_BYTE *)v72;
    v66 = 0;
    v65 = dest;
    LOBYTE(dest[0]) = 0;
    if ( (_QWORD)v72 )
    {
      if ( src[0] >= (void *)v72 )
        v35 = src[0];
      if ( !src[0] )
        v35 = (_BYTE *)v72;
      v36 = v35 - (char *)src[1];
      v37 = v36;
      if ( (v36 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_replace");
      if ( v36 > 0xF )
      {
        if ( v36 > 0x1D )
        {
          v51.m128i_i64[0] = v36;
          v45 = v36 + 1;
          if ( (__int64)(v36 + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v51.m128i_i64[0] = 30;
          v45 = 31;
        }
        v64 = src[1];
        v46 = (_QWORD *)operator new(v45);
        v38 = v46;
        if ( v64 )
          memcpy(v46, v64, v37);
        if ( v65 != dest )
          operator delete(v65, dest[0] + 1LL);
        v65 = v38;
        dest[0] = v51.m128i_i64[0];
      }
      else if ( src[1] == dest )
      {
        std::string::_M_replace_cold();
        v38 = v65;
      }
      else
      {
        if ( v36 )
        {
          if ( v36 == 1 )
            LOBYTE(dest[0]) = *(_BYTE *)src[1];
          else
            memcpy(dest, src[1], v36);
        }
        v38 = dest;
      }
      v66 = v37;
      *((_BYTE *)v38 + v37) = 0;
      goto LABEL_39;
    }
    v43 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v47 = n;
        v48 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v47 = 30;
        v48 = 31;
      }
      v49 = (_QWORD *)operator new(v48);
      if ( v65 != dest )
      {
        v51.m128i_i64[0] = (__int64)v49;
        operator delete(v65, dest[0] + 1LL);
        v49 = (_QWORD *)v51.m128i_i64[0];
      }
      v65 = v49;
      v50 = v75;
      dest[0] = v47;
    }
    else
    {
      if ( !n )
      {
LABEL_48:
        v44 = dest;
LABEL_49:
        v66 = v43;
        *((_BYTE *)v44 + v43) = 0;
LABEL_39:
        sub_24EC20(a1, 4u, (__int64)v53);
        if ( v65 != dest )
          operator delete(v65, dest[0] + 1LL);
        v39 = _mm_loadl_epi64((const __m128i *)&v62);
        v68 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
        v78[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
        v70[0] = _mm_unpacklo_epi64(v39, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
        if ( v75 != *((void **)&v62 + 1) )
          operator delete(v75, v77[0] + 1LL);
        *((_QWORD *)&v70[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
        std::locale::~locale(v61);
        v40 = v54;
        *(char **)((char *)&v68 + *(_QWORD *)(v59 - 24)) = v60;
        v41 = *(_QWORD *)(v12 - 24);
        *(_QWORD *)&v70[0] = v12;
        *(_QWORD *)((char *)v70 + v41) = v58;
        v42 = *((_QWORD *)v9 - 3);
        v68 = v9;
        *(char **)((char *)&v68 + v42) = v57;
        v69 = 0;
        v78[0] = (char *)&`vtable for'std::ios + 16;
        std::ios_base::~ios_base(v40);
        return;
      }
      v50 = v75;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v75;
        goto LABEL_48;
      }
      v49 = dest;
    }
    memcpy(v49, v50, v43);
    v44 = v65;
    goto LABEL_49;
  }
  qmemcpy(v70, "opb", 3);
  v55 = &v68;
  v7 = strlen((const char *)a4);
  if ( v7 != 3 )
  {
    LODWORD(v70[0]) = 1718510455;
    if ( v7 != 4 )
      goto LABEL_4;
    if ( *(_DWORD *)a4 != 1718510455 )
      goto LABEL_5;
    v34 = *(_QWORD *)(a2 + 24);
    v68 = nullptr;
    sub_2DBCD0(v34, v51.m128i_i64[0], v55);
    if ( !v68 )
      return;
LABEL_27:
    sub_186B220(v68 - 8);
    return;
  }
  if ( *(_WORD *)a4 == 28783 && *(_BYTE *)(a4 + 2) == 98 )
  {
    v32 = *(_QWORD *)(a2 + 24);
    v68 = nullptr;
    sub_2DB0D0(v32, v51.m128i_i64[0], v55);
    if ( !v68 )
      return;
    goto LABEL_27;
  }
LABEL_4:
  LOWORD(v70[0]) = 28780;
  if ( v7 != 2 || *(_WORD *)a4 != 28780 )
    goto LABEL_5;
  v33 = *(_QWORD *)(a2 + 24);
  v68 = nullptr;
  sub_2DCCF0(
    v33,
    v51.m128i_i32[0],
    v51.m128i_i32[0],
    v51.m128i_i32[2],
    v52,
    (_DWORD)v53,
    (_DWORD)v54,
    (_DWORD)v55,
    (_DWORD)v56,
    (__int64)v57,
    v58,
    v59,
    (_DWORD)v60,
    (_DWORD)v61,
    v62,
    v63,
    (_DWORD)v64);
  if ( v68 )
    goto LABEL_27;
}

