__int64 __fastcall sub_432480(__int64 a1)
{
  char **exception; // rbp
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ecx
  int v7; // ecx
  __int64 result; // rax
  char *v9; // rbx
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rsi
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r13
  _BYTE *v19; // rax
  size_t v20; // rax
  size_t v21; // r8
  _QWORD *v22; // r14
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // r14
  int v29; // eax
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // r13
  __int64 v36; // r12
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // r12d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rcx
  size_t v44; // rdx
  _QWORD *v45; // rax
  unsigned __int64 v46; // rdi
  _QWORD *v47; // rax
  const void *v48; // rsi
  _QWORD *v49; // rax
  void *v50; // rsi
  _QWORD *v51; // r14
  unsigned __int64 v52; // rdi
  __int64 v53; // rax
  std::ios_base *v54; // [rsp+0h] [rbp-268h]
  int v55[2]; // [rsp+8h] [rbp-260h]
  int v56[2]; // [rsp+8h] [rbp-260h]
  int v57; // [rsp+10h] [rbp-258h]
  int v58[2]; // [rsp+10h] [rbp-258h]
  int v59; // [rsp+18h] [rbp-250h]
  int v60[2]; // [rsp+18h] [rbp-250h]
  int v61; // [rsp+20h] [rbp-248h]
  int v62[2]; // [rsp+20h] [rbp-248h]
  char v63[8]; // [rsp+28h] [rbp-240h]
  char v64[8]; // [rsp+28h] [rbp-240h]
  int v65[4]; // [rsp+30h] [rbp-238h] BYREF
  std::locale *v66; // [rsp+40h] [rbp-228h]
  void *ptr; // [rsp+48h] [rbp-220h]
  char **v68; // [rsp+50h] [rbp-218h]
  __int64 v69; // [rsp+58h] [rbp-210h]
  size_t v70; // [rsp+60h] [rbp-208h]
  size_t n; // [rsp+68h] [rbp-200h]
  char v72[8]; // [rsp+78h] [rbp-1F0h] BYREF
  void *v73; // [rsp+80h] [rbp-1E8h] BYREF
  size_t v74; // [rsp+88h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+90h] [rbp-1D8h] BYREF
  char *v76; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-1C0h]
  _OWORD v78[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+D0h] [rbp-198h]
  __int128 v80; // [rsp+E0h] [rbp-188h]
  int v81[4]; // [rsp+F0h] [rbp-178h] BYREF
  void *v82; // [rsp+100h] [rbp-168h]
  size_t v83; // [rsp+108h] [rbp-160h]
  _QWORD v84[2]; // [rsp+110h] [rbp-158h] BYREF
  int v85[2]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v86; // [rsp+1F8h] [rbp-70h]
  __int16 v87; // [rsp+200h] [rbp-68h]
  __int128 v88; // [rsp+208h] [rbp-60h]
  __int128 v89; // [rsp+218h] [rbp-50h]

  v4 = *(_QWORD *)(a1 + 112);
  v5 = *(unsigned int *)(a1 + 120);
  if ( v4 )
    v6 = *(_DWORD *)(v4 - 4);
  else
    v6 = 0;
  if ( (_DWORD)v5 != v6 )
    goto LABEL_4;
  v68 = &v76;
  std::ios_base::ios_base((std::ios_base *)v85);
  v87 = 0;
  v88 = 0;
  v9 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v89 = 0;
  v10 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  *(_QWORD *)v85 = (char *)&`vtable for'std::ios + 16;
  v11 = *((_QWORD *)v9 - 3);
  v76 = v9;
  v86 = 0;
  *(char **)((char *)&v76 + v11) = v10;
  v77 = 0;
  v57 = (int)v10;
  std::ios::init();
  v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v13 = *(_QWORD *)(v12 - 24);
  *(_QWORD *)&v78[0] = v12;
  v14 = (_QWORD *)((char *)v78 + v13);
  v15 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v14 = v15;
  v59 = v15;
  std::ios::init();
  v16 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  *(_QWORD *)v63 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  *(_QWORD *)v65 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 64;
  v17 = *(_QWORD *)(v16 - 24);
  v61 = v16;
  v66 = (std::locale *)v81;
  *(char **)((char *)&v76 + v17) = *(char **)v63;
  v76 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v85 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v78[0] = _mm_unpacklo_epi64(
             (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 64),
             (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v78[1] = 0;
  *(_OWORD *)src = 0;
  v80 = 0;
  std::locale::locale((std::locale *)v81);
  v81[2] = 24;
  ptr = v84;
  *((_QWORD *)&v78[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v82 = v84;
  v83 = 0;
  LOBYTE(v84[0]) = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 840LL);
  *(_QWORD *)v55 = *(_QWORD *)(a1 + 8);
  v19 = (_BYTE *)v80;
  v73 = dest;
  v74 = 0;
  LOBYTE(dest[0]) = 0;
  if ( (_QWORD)v80 )
  {
    if ( src[0] >= (void *)v80 )
      v19 = src[0];
    if ( !src[0] )
      v19 = (_BYTE *)v80;
    v20 = v19 - (char *)src[1];
    v21 = v20;
    if ( (v20 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_replace");
    if ( v20 > 0xF )
    {
      if ( v20 > 0x1D )
      {
        v69 = v20;
        v46 = v20 + 1;
        if ( (__int64)(v20 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v69 = 30;
        v46 = 31;
      }
      n = v20;
      v70 = (size_t)src[1];
      v47 = (_QWORD *)operator new(v46);
      v48 = (const void *)v70;
      v21 = n;
      v22 = v47;
      if ( v70 )
      {
        v70 = n;
        memcpy(v47, v48, n);
        v21 = n;
      }
      if ( v73 != dest )
      {
        v70 = v21;
        operator delete(v73, dest[0] + 1LL);
        v21 = v70;
      }
      v73 = v22;
      dest[0] = v69;
    }
    else if ( src[1] == dest )
    {
      v69 = v20;
      std::string::_M_replace_cold();
      v21 = v69;
      v22 = v73;
    }
    else
    {
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          LOBYTE(dest[0]) = *(_BYTE *)src[1];
        }
        else
        {
          v69 = v20;
          memcpy(dest, src[1], v20);
          v21 = v69;
        }
      }
      v22 = dest;
    }
    v74 = v21;
    *((_BYTE *)v22 + v21) = 0;
    goto LABEL_16;
  }
  v44 = v83;
  if ( v83 > 0xF )
  {
    if ( (v83 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v83 > 0x1D )
    {
      v69 = v83;
      v52 = v83 + 1;
      if ( (__int64)(v83 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v69 = 30;
      v52 = 31;
    }
    v70 = v83;
    v53 = operator new(v52);
    v44 = v70;
    v51 = (_QWORD *)v53;
    if ( v73 != dest )
    {
      operator delete(v73, dest[0] + 1LL);
      v44 = v70;
    }
    v73 = v51;
    v50 = v82;
    dest[0] = v69;
    goto LABEL_66;
  }
  if ( v83 )
  {
    v50 = v82;
    v51 = dest;
    if ( v83 == 1 )
    {
      LOBYTE(dest[0]) = *(_BYTE *)v82;
      goto LABEL_46;
    }
LABEL_66:
    v69 = v44;
    memcpy(v51, v50, v44);
    v45 = v73;
    v44 = v69;
    goto LABEL_47;
  }
LABEL_46:
  v45 = dest;
LABEL_47:
  v74 = v44;
  *((_BYTE *)v45 + v44) = 0;
LABEL_16:
  sub_180C5A0(v72, v73);
  v23 = sub_15E3510(*(_QWORD *)v55, v72, 0, 0, v18, 0);
  v26 = sub_15DC610(v55[0], v23, 0, 0, v24, v25, (int)v85, v55[0], v57, v59, v61, v63[0], v65[0], v65[2], (int)v66, ptr);
  v27 = v73;
  v28 = v26;
  if ( v26 )
  {
    v29 = *(_DWORD *)(v26 + 8) + 1;
    *(_DWORD *)(v28 + 8) = v29;
    if ( v27 != dest )
    {
      operator delete(v27, dest[0] + 1LL);
      v29 = *(_DWORD *)(v28 + 8);
    }
    v69 = v28;
    *(_DWORD *)(v28 + 8) = v29 + 1;
  }
  else
  {
    if ( v73 != dest )
      operator delete(v73, dest[0] + 1LL);
    v69 = 0;
  }
  v30 = *(_QWORD **)(a1 + 112);
  if ( v30 )
  {
    v31 = *((_DWORD *)v30 - 1);
    if ( v31 == *((_DWORD *)v30 - 2) )
    {
      v40 = (3 * v31 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v31 + 8 >= (unsigned int)v41 || v31 >= v40 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D0F44((__int64 *)&v73, "Overflow encountered when expanding vector", v2);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v73);
        sub_233E40((__int64)&v73);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v30 - 1, v41);
      v43 = v42[1];
      v30 = v42 + 2;
      *v42 = v40;
      *(_QWORD *)(a1 + 112) = v42 + 2;
      LODWORD(v42) = v43;
      v34 = &v30[v43];
      v33 = (_DWORD)v42 + 1;
    }
    else
    {
      v32 = v31;
      v33 = v31 + 1;
      v34 = &v30[v32];
    }
  }
  else
  {
    v49 = (_QWORD *)sub_186B270(0x18u);
    v30 = v49 + 1;
    *v49 = 2;
    v33 = 1;
    *(_QWORD *)(a1 + 112) = v30;
    v34 = v30;
  }
  v35 = *(_QWORD *)(a1 + 8);
  *v34 = v28;
  *((_DWORD *)v30 - 1) = v33;
  v36 = sub_15DE370(v35);
  *(__m128i *)v65 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)v65),
                      (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  sub_1692DB0(a1 + 328, v28, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL), v36, 0);
  if ( v36 )
  {
    v37 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v37 )
      sub_15D7BC0(v35, v36);
  }
  if ( v28 )
  {
    v37 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v37 )
      sub_15D7BC0(*(_QWORD *)v56, v28);
  }
  v78[0] = _mm_load_si128((const __m128i *)v65);
  v76 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v85 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v82 != ptr )
    operator delete(v82, v84[0] + 1LL);
  *((_QWORD *)&v78[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v66);
  *(char **)((char *)&v76 + *(_QWORD *)(*(_QWORD *)v62 - 24LL)) = *(char **)v64;
  v38 = *(_QWORD *)(v12 - 24);
  *(_QWORD *)&v78[0] = v12;
  *(_QWORD *)((char *)v78 + v38) = *(_QWORD *)v60;
  v39 = *((_QWORD *)v9 - 3);
  v76 = v9;
  *(char **)((char *)&v76 + v39) = *(char **)v58;
  v77 = 0;
  *(_QWORD *)v85 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v54);
  v5 = *(unsigned int *)(a1 + 120);
  v4 = *(_QWORD *)(a1 + 112);
LABEL_4:
  v7 = v5 + 1;
  result = *(_QWORD *)(v4 + 8 * v5);
  *(_DWORD *)(a1 + 120) = v7;
  return result;
}

