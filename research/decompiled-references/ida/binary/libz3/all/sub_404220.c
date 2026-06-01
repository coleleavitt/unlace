__int64 __fastcall sub_404220(_QWORD *a1)
{
  char **exception; // r12
  __int64 result; // rax
  int v3; // esi
  char *v5; // rcx
  char *v6; // r12
  __int64 v7; // rax
  _BYTE *v8; // rax
  size_t v9; // rax
  size_t v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rsi
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  _QWORD *v29; // rdi
  __int64 v30; // rax
  __m128i v31; // xmm1
  std::ostream *v32; // rax
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  size_t v37; // rbx
  void *v38; // rsi
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned __int64 v41; // rdi
  void *v42; // rax
  void *v43; // rcx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rdi
  unsigned int v46; // [rsp+0h] [rbp-288h]
  __int64 v47; // [rsp+8h] [rbp-280h]
  char *v48; // [rsp+10h] [rbp-278h]
  __int64 v49; // [rsp+28h] [rbp-260h]
  __int64 v50; // [rsp+30h] [rbp-258h]
  char *v51; // [rsp+38h] [rbp-250h]
  __m128i v52; // [rsp+40h] [rbp-248h] BYREF
  std::locale *v53; // [rsp+50h] [rbp-238h]
  _QWORD *v54; // [rsp+58h] [rbp-230h]
  __m128i v55; // [rsp+60h] [rbp-228h] BYREF
  char **v56; // [rsp+70h] [rbp-218h]
  __m128i v57; // [rsp+78h] [rbp-210h] BYREF
  void *v58; // [rsp+88h] [rbp-200h]
  char v59[8]; // [rsp+98h] [rbp-1F0h] BYREF
  void *v60; // [rsp+A0h] [rbp-1E8h] BYREF
  size_t v61; // [rsp+A8h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+B0h] [rbp-1D8h] BYREF
  char *v63; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-1C0h]
  _OWORD v65[2]; // [rsp+D0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+F0h] [rbp-198h]
  __int128 v67; // [rsp+100h] [rbp-188h]
  char v68[8]; // [rsp+110h] [rbp-178h] BYREF
  int v69; // [rsp+118h] [rbp-170h]
  void *v70; // [rsp+120h] [rbp-168h]
  size_t n; // [rsp+128h] [rbp-160h]
  _QWORD v72[2]; // [rsp+130h] [rbp-158h] BYREF
  _QWORD v73[28]; // [rsp+140h] [rbp-148h] BYREF
  __int16 v74; // [rsp+220h] [rbp-68h]
  __int128 v75; // [rsp+228h] [rbp-60h]
  __int128 v76; // [rsp+238h] [rbp-50h]

  v57.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  result = a1[3];
  v3 = *(_DWORD *)(result + 32);
  v55 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                  + 64),
          (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  if ( v3 )
  {
    v46 = 0;
    v5 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v6 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v56 = &v63;
    v48 = v5;
    do
    {
      v52.m128i_i64[0] = *(_QWORD *)(result + 8LL * v46 + 48);
      std::ios_base::ios_base((std::ios_base *)v73);
      v74 = 0;
      v75 = 0;
      v76 = 0;
      v73[0] = (char *)&`vtable for'std::ios + 16;
      v26 = *((_QWORD *)v6 - 3);
      v73[27] = 0;
      v63 = v6;
      *(char **)((char *)&v63 + v26) = v48;
      v64 = 0;
      std::ios::init();
      v27 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
      v28 = *(_QWORD *)(v27 - 24);
      *(_QWORD *)&v65[0] = v27;
      v29 = (_QWORD *)((char *)v65 + v28);
      v30 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
      *v29 = v30;
      v49 = v30;
      std::ios::init();
      v31 = _mm_load_si128(&v55);
      v50 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
      v51 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
      *(char **)((char *)&v63 + *(_QWORD *)(v50 - 24)) = v51;
      v65[0] = v31;
      v65[1] = 0;
      v63 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
      *(_OWORD *)src = 0;
      v67 = 0;
      v73[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
      v53 = (std::locale *)v68;
      std::locale::locale((std::locale *)v68);
      v69 = 24;
      LOBYTE(v72[0]) = 0;
      *((_QWORD *)&v65[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
      v54 = v72;
      v70 = v72;
      n = 0;
      std::ios::init();
      v32 = (std::ostream *)sub_39A600((__int64)v65, *(const char **)(a1[3] + 16LL));
      LOBYTE(v60) = 95;
      if ( *(_QWORD *)((char *)v32 + *(_QWORD *)(*(_QWORD *)v32 - 24LL) + 16) )
        std::__ostream_insert<char,std::char_traits<char>>();
      else
        std::ostream::put(v32, 95);
      std::ostream::_M_insert<unsigned long>();
      v7 = a1[1];
      v61 = 0;
      v60 = dest;
      v47 = v7;
      v8 = (_BYTE *)v67;
      LOBYTE(dest[0]) = 0;
      if ( (_QWORD)v67 )
      {
        if ( src[0] >= (void *)v67 )
          v8 = src[0];
        if ( !src[0] )
          v8 = (_BYTE *)v67;
        v9 = v8 - (char *)src[1];
        v10 = v9;
        if ( (v9 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_replace");
        if ( v9 > 0xF )
        {
          if ( v9 <= 0x1D )
          {
            v57.m128i_i64[1] = 30;
            v41 = 31;
          }
          else
          {
            v41 = v9 + 1;
            if ( (__int64)(v9 + 1) < 0 )
              std::__throw_bad_alloc();
            v57.m128i_i64[1] = v9;
          }
          v58 = src[1];
          v42 = (void *)operator new(v41);
          v43 = v42;
          if ( v58 )
            v43 = memcpy(v42, v58, v10);
          v58 = v43;
          sub_233E40((__int64)&v60);
          v11 = v58;
          v60 = v58;
          dest[0] = v57.m128i_i64[1];
        }
        else if ( src[1] == dest )
        {
          std::string::_M_replace_cold();
          v11 = v60;
        }
        else
        {
          if ( v9 )
          {
            if ( v9 == 1 )
              LOBYTE(dest[0]) = *(_BYTE *)src[1];
            else
              memcpy(dest, src[1], v9);
          }
          v11 = dest;
        }
        v61 = v10;
        *((_BYTE *)v11 + v10) = 0;
        goto LABEL_15;
      }
      v37 = n;
      if ( n > 0xF )
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        if ( n <= 0x1D )
        {
          v57.m128i_i64[1] = 30;
          v45 = 31;
        }
        else
        {
          v45 = n + 1;
          if ( (__int64)(n + 1) < 0 )
            std::__throw_bad_alloc();
          v57.m128i_i64[1] = n;
        }
        v58 = (void *)operator new(v45);
        sub_233E40((__int64)&v60);
        v39 = v58;
        v38 = v70;
        v60 = v58;
        dest[0] = v57.m128i_i64[1];
      }
      else
      {
        if ( !n )
          goto LABEL_58;
        v38 = v70;
        v39 = dest;
        if ( n == 1 )
        {
          LOBYTE(dest[0]) = *(_BYTE *)v70;
LABEL_58:
          v40 = dest;
          goto LABEL_41;
        }
      }
      memcpy(v39, v38, v37);
      v40 = v60;
LABEL_41:
      v61 = v37;
      *((_BYTE *)v40 + v37) = 0;
LABEL_15:
      sub_180C5A0(v59, v60);
      v12 = sub_15E3510(v47, v59, 0, 0, v52.m128i_i64[0], 0);
      v13 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      if ( v60 != dest )
        operator delete(v60, dest[0] + 1LL);
      v14 = sub_4209B0(*a1, v13, 0);
      v15 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      v16 = (_QWORD *)a1[6];
      if ( v16 )
      {
        v17 = *((_DWORD *)v16 - 1);
        if ( v17 == *((_DWORD *)v16 - 2) )
        {
          v33 = (3 * v17 + 1) >> 1;
          v34 = 8 * v33 + 8;
          if ( 8 * v17 + 8 >= (unsigned int)v34 || v17 >= v33 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3FCFD0((__int64 *)&v60, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v60);
            sub_233E40((__int64)&v60);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v35 = (unsigned int *)sub_186B300(v16 - 1, v34);
          v36 = v35[1];
          v16 = v35 + 2;
          *v35 = v33;
          a1[6] = v35 + 2;
          v20 = (__int64 *)&v35[2 * v36 + 2];
          v19 = v36 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v17 + 1;
          v20 = &v16[v18];
        }
      }
      else
      {
        v44 = (_QWORD *)sub_186B270(0x18u);
        v16 = v44 + 1;
        *v44 = 2;
        v19 = 1;
        a1[6] = v16;
        v20 = v16;
      }
      v21 = _mm_loadl_epi64(&v57);
      *v20 = v15;
      *((_DWORD *)v16 - 1) = v19;
      v22 = _mm_unpacklo_epi64(v21, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 8))-- == 1 )
        {
          v52 = v22;
          sub_15D7BC0(v47, v13);
          v22 = _mm_load_si128(&v52);
        }
      }
      v65[0] = v22;
      v63 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
      v73[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
      if ( v70 != v54 )
        operator delete(v70, v72[0] + 1LL);
      *((_QWORD *)&v65[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
      std::locale::~locale(v53);
      *(char **)((char *)&v63 + *(_QWORD *)(v50 - 24)) = v51;
      v24 = *(_QWORD *)(v27 - 24);
      *(_QWORD *)&v65[0] = v27;
      *(_QWORD *)((char *)v65 + v24) = v49;
      v25 = *((_QWORD *)v6 - 3);
      v63 = v6;
      *(char **)((char *)&v63 + v25) = v48;
      v64 = 0;
      v73[0] = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base((std::ios_base *)v73);
      result = a1[3];
      ++v46;
    }
    while ( v46 < *(_DWORD *)(result + 32) );
  }
  return result;
}

