void *__fastcall sub_546620(__int64 a1, __int64 a2)
{
  void *v2; // r14
  char *v4; // rbx
  char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rax
  _BYTE *v12; // rax
  size_t v13; // rax
  size_t v14; // r15
  __int8 *v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v19; // rax
  size_t v20; // r14
  __int64 *v21; // rax
  __m128i v22; // xmm1
  __int64 *v23; // rax
  __int64 *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 *v31; // rdi
  size_t v32; // r15
  __int8 *v33; // rax
  unsigned __int64 v34; // rdi
  __int8 *v35; // rax
  void *v36; // rsi
  __int8 *v37; // r14
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rsi
  int v40; // eax
  char *v41; // r8
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // edx
  __int64 v45; // rdi
  __m128i v46; // [rsp+10h] [rbp-258h] BYREF
  char *v47; // [rsp+20h] [rbp-248h]
  __int64 v48; // [rsp+28h] [rbp-240h]
  char *v49; // [rsp+30h] [rbp-238h]
  std::locale *v50; // [rsp+38h] [rbp-230h]
  __m128i v51; // [rsp+40h] [rbp-228h] BYREF
  char **v52; // [rsp+50h] [rbp-218h]
  void *v53; // [rsp+58h] [rbp-210h]
  void *v54; // [rsp+60h] [rbp-208h]
  __m128 dest; // [rsp+68h] [rbp-200h] BYREF
  void *v56; // [rsp+80h] [rbp-1E8h] BYREF
  __m128i v57; // [rsp+88h] [rbp-1E0h] BYREF
  char *v58; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-1C0h]
  _OWORD v60[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+D0h] [rbp-198h]
  __int128 v62; // [rsp+E0h] [rbp-188h]
  char v63[8]; // [rsp+F0h] [rbp-178h] BYREF
  int v64; // [rsp+F8h] [rbp-170h]
  void *v65; // [rsp+100h] [rbp-168h]
  size_t n; // [rsp+108h] [rbp-160h]
  _QWORD v67[2]; // [rsp+110h] [rbp-158h] BYREF
  _QWORD v68[28]; // [rsp+120h] [rbp-148h] BYREF
  __int16 v69; // [rsp+200h] [rbp-68h]
  __int128 v70; // [rsp+208h] [rbp-60h]
  __int128 v71; // [rsp+218h] [rbp-50h]

  v2 = *(void **)(a2 + 72);
  if ( v2 )
    return v2;
  v52 = &v58;
  std::ios_base::ios_base((std::ios_base *)v68);
  v69 = 0;
  v70 = 0;
  v4 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v71 = 0;
  v5 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v68[0] = (char *)&`vtable for'std::ios + 16;
  v6 = *((_QWORD *)v4 - 3);
  v58 = v4;
  v68[27] = 0;
  *(char **)((char *)&v58 + v6) = v5;
  v59 = 0;
  v47 = v5;
  std::ios::init();
  v7 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v8 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v46.m128i_i64[0] = (__int64)v60;
  v9 = (_QWORD *)((char *)v60 + *(_QWORD *)(v7 - 24));
  *(_QWORD *)&v60[0] = v7;
  *v9 = v8;
  v48 = v8;
  std::ios::init();
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v11 = *(_QWORD *)(v10 - 24);
  v49 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  *(char **)((char *)&v58 + v11) = v49;
  v51.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v50 = (std::locale *)v63;
  v58 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v68[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v60[0] = _mm_unpacklo_epi64(
             (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 64),
             (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v60[1] = 0;
  *(_OWORD *)src = 0;
  v62 = 0;
  std::locale::locale((std::locale *)v63);
  v51.m128i_i64[1] = (__int64)v67;
  v64 = 24;
  *((_QWORD *)&v60[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v65 = v67;
  n = 0;
  LOBYTE(v67[0]) = 0;
  std::ios::init();
  sub_62AAE0(a2, *(_QWORD *)(a1 + 32), v46.m128i_i64[0], 1);
  v12 = (_BYTE *)v62;
  dest.m128_i8[8] = 0;
  v54 = &dest.m128_u16[4];
  dest.m128_u64[0] = 0;
  if ( !(_QWORD)v62 )
  {
    v32 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v46.m128i_i64[0] = n;
        v38 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v46.m128i_i64[0] = 30;
        v38 = 31;
      }
      v37 = (__int8 *)operator new(v38);
      if ( v54 != &dest.m128_u16[4] )
        operator delete(v54, dest.m128_u64[1] + 1);
      v54 = v37;
      v36 = v65;
      dest.m128_u64[1] = v46.m128i_i64[0];
    }
    else
    {
      if ( !n )
      {
LABEL_56:
        v33 = &dest.m128_i8[8];
LABEL_57:
        dest.m128_u64[0] = v32;
        v33[v32] = 0;
        goto LABEL_14;
      }
      v36 = v65;
      v37 = &dest.m128_i8[8];
      if ( n == 1 )
      {
        dest.m128_i8[8] = *(_BYTE *)v65;
        goto LABEL_56;
      }
    }
    memcpy(v37, v36, v32);
    v33 = (__int8 *)v54;
    goto LABEL_57;
  }
  if ( src[0] >= (void *)v62 )
    v12 = src[0];
  if ( !src[0] )
    v12 = (_BYTE *)v62;
  v13 = v12 - (char *)src[1];
  v14 = v13;
  if ( (v13 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v13 > 0xF )
  {
    if ( v13 > 0x1D )
    {
      v46.m128i_i64[0] = v13;
      v34 = v13 + 1;
      if ( (__int64)(v13 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v46.m128i_i64[0] = 30;
      v34 = 31;
    }
    v53 = src[1];
    v35 = (__int8 *)operator new(v34);
    v15 = v35;
    if ( v53 )
      memcpy(v35, v53, v14);
    if ( v54 != &dest.m128_u16[4] )
      operator delete(v54, dest.m128_u64[1] + 1);
    v54 = v15;
    dest.m128_u64[1] = v46.m128i_i64[0];
  }
  else if ( src[1] == &dest.m128_u16[4] )
  {
    std::string::_M_replace_cold();
    v15 = (__int8 *)v54;
  }
  else
  {
    if ( v13 )
    {
      if ( v13 == 1 )
        dest.m128_i8[8] = *(_BYTE *)src[1];
      else
        memcpy(&dest.m128_u16[4], src[1], v13);
    }
    v15 = &dest.m128_i8[8];
  }
  dest.m128_u64[0] = v14;
  v15[v14] = 0;
LABEL_14:
  v16 = dest.m128_u64[0];
  if ( dest.m128_u64[0] )
  {
    v17 = dest.m128_u64[0] - 1;
    while ( *((_BYTE *)v54 + v17) == 10 )
    {
      if ( v17-- == 0 )
        goto LABEL_36;
    }
    v19 = v17 + 1;
    v56 = &v57.m128i_u64[1];
    if ( v19 <= dest.m128_u64[0] )
      v16 = v19;
    v20 = v16;
    if ( (unsigned __int64)v16 > 0xF )
    {
      if ( v16 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( v16 + 1 < 0 )
        std::__throw_bad_alloc();
      v56 = (void *)operator new(v16 + 1);
      v31 = (__int64 *)v56;
      v57.m128i_i64[1] = v20;
    }
    else
    {
      if ( v16 == 1 )
      {
        v57.m128i_i8[8] = *(_BYTE *)v54;
        v21 = (__int64 *)((char *)&v57.m128i_i64[1] + 1);
        goto LABEL_23;
      }
      v31 = &v57.m128i_i64[1];
    }
    memcpy(v31, v54, v20);
    v21 = (__int64 *)((char *)v56 + v20);
  }
  else
  {
LABEL_36:
    v20 = 0;
    v56 = &v57.m128i_u64[1];
    v21 = &v57.m128i_i64[1];
  }
LABEL_23:
  v22 = _mm_loadl_epi64(&v51);
  v57.m128i_i64[0] = v20;
  *(_BYTE *)v21 = 0;
  v23 = (__int64 *)v54;
  v24 = (__int64 *)v54;
  v46 = _mm_unpacklo_epi64(v22, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v54 == &dest.m128_u16[4] )
  {
    if ( v56 != &v57.m128i_u64[1] )
    {
      v30 = _mm_loadu_si128(&v57);
      v54 = v56;
      dest = (__m128)v30;
      goto LABEL_39;
    }
    v25 = v57.m128i_i64[0];
    v26 = v57.m128i_i64[0];
LABEL_45:
    if ( !v25 )
    {
LABEL_53:
      dest.m128_u64[0] = v26;
      *((_BYTE *)v23 + v26) = 0;
      v23 = (__int64 *)v56;
      goto LABEL_27;
    }
    if ( v25 == 1 )
    {
      *(_BYTE *)v54 = v57.m128i_i8[8];
      v26 = v57.m128i_i64[0];
      v23 = (__int64 *)v54;
      goto LABEL_53;
    }
    if ( (unsigned int)v25 >= 8 )
    {
      *(_QWORD *)v54 = v57.m128i_i64[1];
      *(__int64 *)((char *)v24 + (unsigned int)v25 - 8) = *(__int64 *)((char *)v57.m128i_i64 + (unsigned int)v25);
      v39 = (unsigned __int64)(v24 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v40 = (_DWORD)v24 - v39;
      v41 = (char *)((char *)&v57.m128i_u64[1] - ((char *)v24 - v39));
      v42 = (v25 + v40) & 0xFFFFFFF8;
      if ( v42 >= 8 )
      {
        v43 = v42 & 0xFFFFFFF8;
        v44 = 0;
        do
        {
          v45 = v44;
          v44 += 8;
          *(_QWORD *)(v39 + v45) = *(_QWORD *)&v41[v45];
        }
        while ( v44 < v43 );
      }
    }
    else
    {
      if ( (v25 & 4) != 0 )
      {
        *(_DWORD *)v54 = v57.m128i_i32[2];
        *(_DWORD *)((char *)v24 + (unsigned int)v25 - 4) = *(__int32 *)((char *)&v57.m128i_i32[1] + (unsigned int)v25);
        v24 = (__int64 *)v54;
        v25 = v57.m128i_i64[0];
        goto LABEL_52;
      }
      if ( !(_DWORD)v25 )
      {
LABEL_52:
        v26 = v25;
        v23 = v24;
        goto LABEL_53;
      }
      *(_BYTE *)v54 = v57.m128i_i8[8];
      if ( (v25 & 2) != 0 )
      {
        *(_WORD *)((char *)v24 + (unsigned int)v25 - 2) = *(__int16 *)((char *)&v57.m128i_i16[3] + (unsigned int)v25);
        v24 = (__int64 *)v54;
        v25 = v57.m128i_i64[0];
        goto LABEL_52;
      }
    }
    v24 = (__int64 *)v54;
    v25 = v57.m128i_i64[0];
    goto LABEL_52;
  }
  v25 = v57.m128i_i64[0];
  v26 = v57.m128i_i64[0];
  if ( v56 == &v57.m128i_u64[1] )
    goto LABEL_45;
  v54 = v56;
  v27 = dest.m128_i64[1];
  dest = _mm_loadh_ps((const double *)&v57.m128i_i64[1]);
  if ( !v23 )
  {
LABEL_39:
    v56 = &v57.m128i_u64[1];
    v23 = &v57.m128i_i64[1];
    goto LABEL_27;
  }
  v56 = v23;
  v57.m128i_i64[1] = v27;
LABEL_27:
  v57.m128i_i64[0] = 0;
  *(_BYTE *)v23 = 0;
  if ( v56 != &v57.m128i_u64[1] )
    operator delete(v56, v57.m128i_i64[1] + 1);
  sub_180C5A0(&v56, v54);
  v2 = v56;
  if ( v54 != &dest.m128_u16[4] )
    operator delete(v54, dest.m128_u64[1] + 1);
  v60[0] = _mm_load_si128(&v46);
  v58 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v68[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v65 != (void *)v51.m128i_i64[1] )
    operator delete(v65, v67[0] + 1LL);
  *((_QWORD *)&v60[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v50);
  *(char **)((char *)&v58 + *(_QWORD *)(v10 - 24)) = v49;
  v28 = *(_QWORD *)(v7 - 24);
  *(_QWORD *)&v60[0] = v7;
  *(_QWORD *)((char *)v60 + v28) = v48;
  v29 = *((_QWORD *)v4 - 3);
  v58 = v4;
  *(char **)((char *)&v58 + v29) = v47;
  v59 = 0;
  v68[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v68);
  return v2;
}

