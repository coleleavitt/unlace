_QWORD *__fastcall Z3_mk_tactic(__int64 a1, const char *a2)
{
  char v3; // r12
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 (__fastcall *v6)(__int64, char **); // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  char *v10; // r15
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __m128i si128; // xmm1
  __int64 v18; // rcx
  __int64 v19; // rax
  _BYTE *v20; // rax
  size_t v21; // rax
  size_t v22; // r8
  _QWORD *v23; // r9
  __int64 v24; // rdx
  char *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  size_t v30; // rdx
  _QWORD *v31; // rax
  void *v32; // rsi
  _QWORD *v33; // rax
  unsigned __int64 v34; // rdi
  std::locale *v35[2]; // [rsp+10h] [rbp-258h] BYREF
  _OWORD *v36; // [rsp+20h] [rbp-248h]
  char *v37; // [rsp+28h] [rbp-240h]
  __int64 v38; // [rsp+30h] [rbp-238h]
  __int64 v39; // [rsp+38h] [rbp-230h]
  __int64 v40; // [rsp+40h] [rbp-228h]
  char *v41; // [rsp+48h] [rbp-220h]
  __m128i v42; // [rsp+50h] [rbp-218h] BYREF
  _QWORD *v43; // [rsp+60h] [rbp-208h]
  __int64 v44; // [rsp+68h] [rbp-200h]
  size_t v45; // [rsp+70h] [rbp-1F8h]
  size_t n; // [rsp+78h] [rbp-1F0h]
  void *v47; // [rsp+80h] [rbp-1E8h] BYREF
  size_t v48; // [rsp+88h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+90h] [rbp-1D8h] BYREF
  char *v50; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-1C0h]
  _OWORD v52[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+D0h] [rbp-198h]
  __int128 v54; // [rsp+E0h] [rbp-188h]
  char v55[8]; // [rsp+F0h] [rbp-178h] BYREF
  int v56; // [rsp+F8h] [rbp-170h]
  void *v57; // [rsp+100h] [rbp-168h]
  size_t v58; // [rsp+108h] [rbp-160h]
  _QWORD v59[2]; // [rsp+110h] [rbp-158h] BYREF
  _QWORD v60[28]; // [rsp+120h] [rbp-148h] BYREF
  __int16 v61; // [rsp+200h] [rbp-68h]
  __int128 v62; // [rsp+208h] [rbp-60h]
  __int128 v63; // [rsp+218h] [rbp-50h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29C850();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_180C5A0(&v50, a2);
  v4 = sub_DEC430(a1, &v50);
  v5 = (_QWORD *)v4;
  if ( !v4 )
  {
    v42.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 64;
    *(__m128i *)v35 = _mm_unpacklo_epi64(
                        (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                + 64),
                        (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    std::ios_base::ios_base((std::ios_base *)v60);
    v61 = 0;
    v62 = 0;
    v60[0] = (char *)&`vtable for'std::ios + 16;
    v63 = 0;
    v10 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v11 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v60[27] = 0;
    v12 = *((_QWORD *)v10 - 3);
    v50 = v10;
    v37 = v11;
    *(char **)((char *)&v50 + v12) = v11;
    v51 = 0;
    std::ios::init();
    v36 = v52;
    v13 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    v14 = (char *)v52 + *(_QWORD *)(v13 - 24);
    *(_QWORD *)&v52[0] = v13;
    v15 = v14;
    v16 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    v38 = v13;
    *v15 = v16;
    v39 = v16;
    std::ios::init();
    si128 = _mm_load_si128((const __m128i *)v35);
    v18 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
    v19 = *(_QWORD *)(v18 - 24);
    v41 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    v40 = v18;
    *(char **)((char *)&v50 + v19) = v41;
    v35[0] = (std::locale *)v55;
    v52[0] = si128;
    v50 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    v60[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
    v52[1] = 0;
    *(_OWORD *)src = 0;
    v54 = 0;
    std::locale::locale((std::locale *)v55);
    v43 = v59;
    v56 = 24;
    *((_QWORD *)&v52[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v57 = v59;
    v58 = 0;
    LOBYTE(v59[0]) = 0;
    std::ios::init();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( a2 )
    {
      strlen(a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      std::ios::clear();
    }
    v20 = (_BYTE *)v54;
    v48 = 0;
    v47 = dest;
    LOBYTE(dest[0]) = 0;
    if ( (_QWORD)v54 )
    {
      if ( src[0] >= (void *)v54 )
        v20 = src[0];
      if ( !src[0] )
        v20 = (_BYTE *)v54;
      v21 = v20 - (char *)src[1];
      v22 = v21;
      if ( (v21 & 0x8000000000000000LL) != 0LL )
      {
        v36 = &v47;
        std::__throw_length_error("basic_string::_M_replace");
      }
      if ( v21 > 0xF )
      {
        if ( v21 > 0x1D )
        {
          v44 = v21;
          v27 = v21 + 1;
          if ( (__int64)(v21 + 1) < 0 )
          {
            v36 = &v47;
            std::__throw_bad_alloc();
          }
        }
        else
        {
          v44 = 30;
          v27 = 31;
        }
        n = v21;
        v45 = (size_t)src[1];
        v36 = &v47;
        v28 = (_QWORD *)operator new(v27);
        v22 = n;
        v23 = v28;
        if ( v45 )
        {
          v36 = (_OWORD *)n;
          v29 = memcpy(v28, (const void *)v45, n);
          v22 = (size_t)v36;
          v23 = v29;
        }
        if ( v47 != dest )
        {
          v45 = (size_t)v23;
          v36 = (_OWORD *)v22;
          operator delete(v47, dest[0] + 1LL);
          v23 = (_QWORD *)v45;
          v22 = (size_t)v36;
        }
        v47 = v23;
        dest[0] = v44;
        v36 = &v47;
      }
      else
      {
        v36 = &v47;
        if ( src[1] == dest )
        {
          v44 = v21;
          std::string::_M_replace_cold();
          v22 = v44;
          v23 = v47;
        }
        else
        {
          if ( v21 )
          {
            if ( v21 == 1 )
            {
              LOBYTE(dest[0]) = *(_BYTE *)src[1];
            }
            else
            {
              v44 = v21;
              memcpy(dest, src[1], v21);
              v22 = v44;
            }
          }
          v23 = dest;
        }
      }
      v48 = v22;
      *((_BYTE *)v23 + v22) = 0;
LABEL_21:
      v42 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v42), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
      sub_24EC20(a1, 3, v36);
      if ( v47 != dest )
        operator delete(v47, dest[0] + 1LL);
      if ( v3 )
        sub_2BB620(0);
      v52[0] = _mm_load_si128(&v42);
      v50 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
      v60[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
      if ( v57 != v43 )
        operator delete(v57, v59[0] + 1LL);
      *((_QWORD *)&v52[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
      std::locale::~locale(v35[0]);
      v24 = v39;
      *(char **)((char *)&v50 + *(_QWORD *)(v40 - 24)) = v41;
      v25 = v37;
      *(_QWORD *)&v52[0] = v38;
      *(_QWORD *)((char *)v52 + *(_QWORD *)(v38 - 24)) = v24;
      v26 = *((_QWORD *)v10 - 3);
      v50 = v10;
      *(char **)((char *)&v50 + v26) = v25;
      v51 = 0;
      v60[0] = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base((std::ios_base *)v60);
      if ( !v3 )
        return nullptr;
      goto LABEL_28;
    }
    v30 = v58;
    if ( v58 > 0xF )
    {
      if ( (v58 & 0x8000000000000000LL) != 0LL )
      {
        v36 = &v47;
        std::__throw_length_error("basic_string::_M_create");
      }
      if ( v58 > 0x1D )
      {
        v44 = v58;
        v34 = v58 + 1;
        if ( (__int64)(v58 + 1) < 0 )
        {
          v36 = &v47;
          std::__throw_bad_alloc();
        }
      }
      else
      {
        v44 = 30;
        v34 = 31;
      }
      v45 = v58;
      v36 = &v47;
      v33 = (_QWORD *)operator new(v34);
      v30 = v45;
      if ( v47 != dest )
      {
        v36 = v33;
        operator delete(v47, dest[0] + 1LL);
        v30 = v45;
        v33 = v36;
      }
      v47 = v33;
      v32 = v57;
      dest[0] = v44;
    }
    else
    {
      if ( !v58 )
      {
LABEL_44:
        v31 = dest;
LABEL_45:
        v48 = v30;
        *((_BYTE *)v31 + v30) = 0;
        v36 = &v47;
        goto LABEL_21;
      }
      v32 = v57;
      v33 = dest;
      if ( v58 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v57;
        goto LABEL_44;
      }
    }
    v36 = (_OWORD *)v30;
    memcpy(v33, v32, v30);
    v31 = v47;
    v30 = (size_t)v36;
    goto LABEL_45;
  }
  v6 = *(__int64 (__fastcall **)(__int64, char **))(v4 + 16);
  v7 = *(_QWORD *)(a1 + 232);
  v50 = nullptr;
  v8 = v6(v7, &v50);
  sub_18572D0(&v50);
  v5 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v5, a1);
  *v5 = &off_1C4C8E0;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v5[3] = v8;
  sub_24FBE0(a1, v5);
  if ( v3 )
  {
    sub_2BB620(v5);
LABEL_28:
    byte_1C7EBA0 = 1;
  }
  return v5;
}

