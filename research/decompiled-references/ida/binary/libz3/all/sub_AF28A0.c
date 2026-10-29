__int64 __fastcall sub_AF28A0(_QWORD *a1, __int64 a2)
{
  char **v2; // rbx
  __int64 v3; // rdx
  char **exception; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // r13
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rdx
  __m128i si128; // xmm4
  __int64 v28; // rax
  __int64 v29; // rdx
  _BYTE *v30; // r8
  signed __int64 v31; // r8
  signed __int64 v32; // r12
  char *v33; // rax
  std::ios_base *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v38; // r14d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // ebp
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  size_t v46; // r14
  void *v47; // rsi
  _QWORD *v48; // rax
  char *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  size_t v52; // r12
  unsigned __int64 v53; // rdi
  char v54[16]; // [rsp+0h] [rbp-258h] BYREF
  std::locale *v55[2]; // [rsp+10h] [rbp-248h] BYREF
  std::ios_base *v56; // [rsp+20h] [rbp-238h]
  __int64 v57; // [rsp+28h] [rbp-230h]
  __int64 v58; // [rsp+30h] [rbp-228h]
  __int64 v59; // [rsp+38h] [rbp-220h]
  __m128i v60; // [rsp+40h] [rbp-218h] BYREF
  char **p_format; // [rsp+50h] [rbp-208h]
  __int64 *v62; // [rsp+58h] [rbp-200h]
  char *format; // [rsp+60h] [rbp-1F8h] BYREF
  size_t v64; // [rsp+68h] [rbp-1F0h]
  _QWORD dest[4]; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v66; // [rsp+90h] [rbp-1C8h] BYREF
  __int64 v67; // [rsp+98h] [rbp-1C0h]
  _OWORD v68[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+C0h] [rbp-198h]
  __int128 v70; // [rsp+D0h] [rbp-188h]
  _BYTE v71[8]; // [rsp+E0h] [rbp-178h] BYREF
  int v72; // [rsp+E8h] [rbp-170h]
  void *v73; // [rsp+F0h] [rbp-168h]
  size_t n; // [rsp+F8h] [rbp-160h]
  _QWORD v75[2]; // [rsp+100h] [rbp-158h] BYREF
  _QWORD v76[28]; // [rsp+110h] [rbp-148h] BYREF
  __int16 v77; // [rsp+1F0h] [rbp-68h]
  __int128 v78; // [rsp+1F8h] [rbp-60h]
  __int128 v79; // [rsp+208h] [rbp-50h]

  v6 = (_QWORD *)a1[11];
  *(_QWORD *)v54 = a2;
  v60.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(__m128i *)v55 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v42 = (3 * v7 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v43 || v7 >= v42 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(&v66, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v66);
        sub_233E40((__int64)&v66);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (unsigned int *)sub_186B300(v6 - 1, v43);
      v45 = v44[1];
      v6 = v44 + 2;
      *v44 = v42;
      a1[11] = v44 + 2;
      LODWORD(v44) = v45;
      v10 = &v6[v45];
      v9 = (_DWORD)v44 + 1;
    }
    else
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = &v6[v8];
    }
  }
  else
  {
    v50 = (_QWORD *)sub_186B270(0x18u);
    v6 = v50 + 1;
    *v50 = 2;
    v9 = 1;
    a1[11] = v6;
    v10 = v6;
  }
  v11 = a1[2];
  *v10 = *(_QWORD *)v54;
  *((_DWORD *)v6 - 1) = v9;
  v12 = (_QWORD *)sub_180C100(v11 + 8400, 16);
  v13 = *(_QWORD **)(v11 + 9456);
  v14 = v12;
  *v12 = off_1C54DF0;
  v12[1] = a1 + 11;
  if ( v13 )
  {
    v15 = *((_DWORD *)v13 - 1);
    if ( v15 == *((_DWORD *)v13 - 2) )
    {
      v38 = (3 * v15 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v39 || v15 >= v38 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(&v66, "Overflow encountered when expanding vector", v3);
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, &v66);
        sub_233E40((__int64)&v66);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v13 - 1, v39);
      v41 = v40[1];
      v13 = v40 + 2;
      *(_QWORD *)(v11 + 9456) = v40 + 2;
      *v40 = v38;
      LODWORD(v40) = v41;
      v18 = &v13[v41];
      v17 = (_DWORD)v40 + 1;
    }
    else
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v13[v16];
    }
  }
  else
  {
    v51 = (_QWORD *)sub_186B270(0x18u);
    v13 = v51 + 1;
    *v51 = 2;
    v17 = 1;
    *(_QWORD *)(v11 + 9456) = v13;
    v18 = v13;
  }
  *v18 = v14;
  *((_DWORD *)v13 - 1) = v17;
  v62 = &v66;
  v56 = (std::ios_base *)v76;
  std::ios_base::ios_base((std::ios_base *)v76);
  v77 = 0;
  v19 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v78 = 0;
  v20 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v79 = 0;
  v21 = *(_QWORD *)(v19 - 24);
  v76[0] = (char *)&`vtable for'std::ios + 16;
  v76[27] = 0;
  v66 = v19;
  *(__int64 *)((char *)&v66 + v21) = v20;
  v67 = 0;
  v57 = v20;
  std::ios::init();
  v22 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v23 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v24 = *(_QWORD *)(v22 - 24);
  *(_QWORD *)&v68[0] = v22;
  v58 = v23;
  *(_QWORD *)((char *)v68 + v24) = v23;
  std::ios::init();
  v25 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v26 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v55);
  v55[0] = (std::locale *)v71;
  v28 = *(_QWORD *)(v25 - 24);
  v59 = v26;
  *(__int64 *)((char *)&v66 + v28) = v26;
  v66 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v76[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v68[0] = si128;
  v68[1] = 0;
  *(_OWORD *)src = 0;
  v70 = 0;
  std::locale::locale((std::locale *)v71);
  v72 = 24;
  v60.m128i_i64[1] = (__int64)v75;
  *((_QWORD *)&v68[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v73 = v75;
  n = 0;
  LOBYTE(v75[0]) = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  v29 = a1[3];
  p_format = &format;
  sub_1606360(&format, *(_QWORD *)v54, v29, 0, 0, 0);
  sub_160E8B0(v68, &format);
  sub_18572D0(dest);
  v30 = (_BYTE *)v70;
  format = (char *)dest;
  v64 = 0;
  LOBYTE(dest[0]) = 0;
  if ( !(_QWORD)v70 )
  {
    v46 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v52 = n;
        v53 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v52 = 30;
        v53 = 31;
      }
      *(_QWORD *)v54 = operator new(v53);
      sub_233E40((__int64)p_format);
      v48 = *(_QWORD **)v54;
      dest[0] = v52;
      v47 = v73;
      format = *(char **)v54;
    }
    else
    {
      if ( !n )
      {
LABEL_37:
        v49 = (char *)dest;
LABEL_38:
        v64 = v46;
        v49[v46] = 0;
        goto LABEL_18;
      }
      v47 = v73;
      v48 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v73;
        goto LABEL_37;
      }
    }
    memcpy(v48, v47, v46);
    v49 = format;
    goto LABEL_38;
  }
  if ( src[0] >= (void *)v70 )
    v30 = src[0];
  if ( !src[0] )
    v30 = (_BYTE *)v70;
  v31 = v30 - (char *)src[1];
  v32 = v31;
  if ( v31 < 0 )
    std::__throw_length_error("basic_string::_M_replace");
  if ( (unsigned __int64)v31 > 0xF )
  {
    sub_23A830(p_format, 0, 0, (char *)src[1], v31);
    v33 = format;
  }
  else if ( src[1] == dest )
  {
    std::string::_M_replace_cold();
    v33 = format;
  }
  else
  {
    if ( v31 )
    {
      if ( v31 == 1 )
        LOBYTE(dest[0]) = *(_BYTE *)src[1];
      else
        memcpy(dest, src[1], v31);
    }
    v33 = (char *)dest;
  }
  v64 = v32;
  v33[v32] = 0;
LABEL_18:
  *(__m128i *)v54 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64(&v60),
                      (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_1875640(format, v54[0]);
  if ( format != (char *)dest )
    operator delete(format, dest[0] + 1LL);
  v68[0] = _mm_load_si128((const __m128i *)v54);
  v66 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v76[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v73 != (void *)v60.m128i_i64[1] )
    operator delete(v73, v75[0] + 1LL);
  *((_QWORD *)&v68[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v55[0]);
  v34 = v56;
  *(__int64 *)((char *)&v66 + *(_QWORD *)(v25 - 24)) = v59;
  v35 = *(_QWORD *)(v22 - 24);
  *(_QWORD *)&v68[0] = v22;
  *(_QWORD *)((char *)v68 + v35) = v58;
  v36 = *(_QWORD *)(v19 - 24);
  v66 = v19;
  *(__int64 *)((char *)&v66 + v36) = v57;
  v67 = 0;
  v76[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v34);
  return 0;
}

