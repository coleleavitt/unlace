__int64 __fastcall sub_4D7C00(__int64 a1, __int64 a2, __int64 *a3)
{
  char **v3; // rbp
  char **exception; // rbp
  unsigned int *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  _QWORD *v12; // rax
  int v13; // r14d
  unsigned __int64 v14; // rcx
  unsigned int v15; // r14d
  _QWORD *v16; // rax
  _DWORD *v17; // rcx
  unsigned int v18; // r15d
  size_t v19; // rsi
  unsigned int *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 *v23; // r15
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // r12
  char v33; // r14
  __int64 j; // r13
  __int64 v36; // r15
  __int64 v37; // rax
  _QWORD *v38; // rdx
  const char *v39; // r13
  _BYTE *v40; // rax
  size_t v41; // rax
  size_t v42; // r8
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 k; // rbx
  _QWORD *v46; // rax
  size_t v47; // rdx
  _QWORD *v48; // rax
  unsigned __int64 v49; // rdi
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  unsigned __int64 v52; // rdi
  _QWORD *v53; // rax
  void *v54; // rsi
  char v55; // [rsp+0h] [rbp-248h]
  __int64 v56; // [rsp+18h] [rbp-230h]
  __m128i v57; // [rsp+20h] [rbp-228h] BYREF
  std::locale *v58; // [rsp+30h] [rbp-218h]
  _QWORD *v59; // [rsp+38h] [rbp-210h]
  size_t v60; // [rsp+40h] [rbp-208h]
  __int64 v61; // [rsp+48h] [rbp-200h]
  void *v62; // [rsp+50h] [rbp-1F8h]
  size_t n; // [rsp+58h] [rbp-1F0h]
  _QWORD *i; // [rsp+68h] [rbp-1E0h] BYREF
  void *v65; // [rsp+70h] [rbp-1D8h] BYREF
  size_t v66; // [rsp+78h] [rbp-1D0h]
  _QWORD dest[2]; // [rsp+80h] [rbp-1C8h] BYREF
  _OWORD v68[2]; // [rsp+90h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+B0h] [rbp-198h]
  __int128 v70; // [rsp+C0h] [rbp-188h]
  char v71[8]; // [rsp+D0h] [rbp-178h] BYREF
  int v72; // [rsp+D8h] [rbp-170h]
  void *v73; // [rsp+E0h] [rbp-168h]
  char *v74; // [rsp+E8h] [rbp-160h]
  _QWORD v75[2]; // [rsp+F0h] [rbp-158h] BYREF
  _QWORD v76[28]; // [rsp+100h] [rbp-148h] BYREF
  __int16 v77; // [rsp+1E0h] [rbp-68h]
  __int128 v78; // [rsp+1E8h] [rbp-60h]
  __int128 v79; // [rsp+1F8h] [rbp-50h]

  v8 = (unsigned int *)(a1 + 16);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8), a1 + 16);
  i = nullptr;
  v11 = v9;
  v12 = *(_QWORD **)(a1 + 16);
  if ( v12 )
    v13 = *((_DWORD *)v12 - 1);
  else
    v13 = 0;
  v14 = *(unsigned int *)(a1 + 24);
  v15 = v13 - v14;
  if ( !v15 )
  {
    if ( (_DWORD)v14 )
    {
      v23 = &a3[v14];
      v46 = (_QWORD *)sub_186B270(0x18u);
      v14 = (unsigned __int64)(v46 + 1);
      *v46 = 2;
      v25 = 1;
      i = (_QWORD *)v14;
      v8 = (unsigned int *)v14;
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  v16 = (_QWORD *)sub_186B270(0x18u);
  v17 = v16 + 1;
  *v16 = 2;
  for ( i = v16 + 1; ; i = v20 + 2 )
  {
    v21 = *(v17 - 2);
    if ( v21 >= v15 )
      break;
    v18 = (3 * v21 + 1) >> 1;
    v19 = 8 * v18 + 8;
    if ( 8 * v21 + 8 >= (unsigned int)v19 || v21 >= v18 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v68, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v68);
      sub_233E40((__int64)v68);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v20 = (unsigned int *)sub_186B300(v17 - 2, v19);
    v17 = v20 + 2;
    *v20 = v18;
  }
  *(v17 - 1) = v15;
  v8 = nullptr;
  v14 = (unsigned __int64)memset(v17, 0, 8LL * v15);
  v22 = *(unsigned int *)(a1 + 24);
  v23 = &a3[v22];
  if ( !(_DWORD)v22 )
  {
    v12 = *(_QWORD **)(a1 + 16);
LABEL_11:
    if ( !v12 )
      goto LABEL_58;
    v14 = 0;
    goto LABEL_20;
  }
  do
  {
    v27 = *(_DWORD *)(v14 - 4);
    if ( v27 == *(_DWORD *)(v14 - 8) )
    {
      v28 = (3 * v27 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v68, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v68);
        sub_233E40((__int64)v68);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300((void *)(v14 - 8), v29);
      v31 = v30[1];
      v14 = (unsigned __int64)(v30 + 2);
      *v30 = v28;
      i = v30 + 2;
      v8 = &v30[2 * v31 + 2];
      v25 = v31 + 1;
    }
    else
    {
      v24 = v27;
      v25 = v27 + 1;
      v8 = (unsigned int *)(v14 + 8 * v24);
    }
LABEL_14:
    v26 = *a3++;
    *(_QWORD *)v8 = v26;
    *(_DWORD *)(v14 - 4) = v25;
  }
  while ( v23 != a3 );
  v12 = *(_QWORD **)(a1 + 16);
  v14 = *(unsigned int *)(a1 + 24);
  if ( v12 )
  {
LABEL_20:
    v10 = *((unsigned int *)v12 - 1);
    goto LABEL_21;
  }
  v10 = 0;
LABEL_21:
  if ( (_DWORD)v10 != (_DWORD)v14 )
  {
    if ( (_DWORD)v10 - (_DWORD)v14 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 367);
    }
    v32 = *v12;
    v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    if ( v32 <= 0x40000 )
    {
      if ( !v32 )
        goto LABEL_30;
      if ( !v33 )
        goto LABEL_26;
      goto LABEL_55;
    }
    std::ios_base::ios_base((std::ios_base *)v76);
    v78 = 0;
    v79 = 0;
    v76[27] = 0;
    v76[0] = (char *)&`vtable for'std::ios + 16;
    v77 = 0;
    v36 = `VTT for'std::ostringstream[1];
    v37 = `VTT for'std::ostringstream[2];
    v38 = (_QWORD *)((char *)v68 + *(_QWORD *)(v36 - 24));
    *(_QWORD *)&v68[0] = v36;
    *v38 = v37;
    v56 = v37;
    std::ios::init();
    v76[0] = (char *)&`vtable for'std::ostringstream + 64;
    v57.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
    v58 = (std::locale *)v71;
    v68[0] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    v68[1] = 0;
    *(_OWORD *)src = 0;
    v70 = 0;
    std::locale::locale((std::locale *)v71);
    v72 = 16;
    LOBYTE(v75[0]) = 0;
    *((_QWORD *)&v68[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v59 = v75;
    v73 = v75;
    v74 = nullptr;
    std::ios::init();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    if ( a2 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v39 = *(const char **)(a2 + 16);
      if ( ((unsigned __int8)v39 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
      }
      else
      {
        if ( v39 )
          strlen(v39);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v40 = (_BYTE *)v70;
    v66 = 0;
    v65 = dest;
    LOBYTE(dest[0]) = 0;
    if ( (_QWORD)v70 )
    {
      if ( src[0] >= (void *)v70 )
        v40 = src[0];
      if ( !src[0] )
        v40 = (_BYTE *)v70;
      v41 = v40 - (char *)src[1];
      v42 = v41;
      if ( (v41 & 0x8000000000000000LL) != 0LL )
      {
        v60 = (size_t)&v65;
        std::__throw_length_error("basic_string::_M_replace");
      }
      if ( v41 > 0xF )
      {
        if ( v41 > 0x1D )
        {
          v61 = v41;
          v49 = v41 + 1;
          if ( (__int64)(v41 + 1) < 0 )
          {
            v60 = (size_t)&v65;
            std::__throw_bad_alloc();
          }
        }
        else
        {
          v61 = 30;
          v49 = 31;
        }
        n = v41;
        v62 = src[1];
        v60 = (size_t)&v65;
        v50 = (_QWORD *)operator new(v49);
        v42 = n;
        v43 = v50;
        if ( v62 )
        {
          v60 = n;
          v51 = memcpy(v50, v62, n);
          v42 = n;
          v43 = v51;
        }
        if ( v65 != dest )
        {
          v62 = v43;
          v60 = v42;
          operator delete(v65, dest[0] + 1LL);
          v43 = v62;
          v42 = v60;
        }
        v65 = v43;
        dest[0] = v61;
      }
      else
      {
        v60 = (size_t)&v65;
        if ( src[1] == dest )
        {
          v61 = v41;
          std::string::_M_replace_cold();
          v42 = v61;
          v43 = v65;
        }
        else
        {
          if ( v41 )
          {
            if ( v41 == 1 )
            {
              LOBYTE(dest[0]) = *(_BYTE *)src[1];
            }
            else
            {
              v60 = v41;
              memcpy(dest, src[1], v41);
              v42 = v60;
            }
          }
          v43 = dest;
        }
      }
      v66 = v42;
      *((_BYTE *)v43 + v42) = 0;
LABEL_50:
      v57 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v57), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
      sub_1875640("%s", v55);
      if ( v65 != dest )
        operator delete(v65, dest[0] + 1LL);
      v68[0] = _mm_load_si128(&v57);
      v76[0] = (char *)&`vtable for'std::ostringstream + 64;
      if ( v73 != v59 )
        operator delete(v73, v75[0] + 1LL);
      *((_QWORD *)&v68[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
      std::locale::~locale(v58);
      v44 = *(_QWORD *)(v36 - 24);
      *(_QWORD *)&v68[0] = v36;
      *(_QWORD *)((char *)v68 + v44) = v56;
      v76[0] = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base((std::ios_base *)v76);
      if ( !v33 )
      {
LABEL_26:
        for ( j = 0; j != v32; ++j )
        {
          *i = j;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)a1 + 56LL))(a1, &i) )
            (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v11 + 40LL))(v11, &i);
        }
        goto LABEL_30;
      }
LABEL_55:
      for ( k = 0; k != v32; ++k )
      {
        *i = k;
        (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v11 + 40LL))(v11, &i);
      }
      goto LABEL_30;
    }
    v47 = (size_t)v74;
    if ( (unsigned __int64)v74 > 0xF )
    {
      if ( (__int64)v74 < 0 )
      {
        v60 = (size_t)&v65;
        std::__throw_length_error("basic_string::_M_create");
      }
      if ( (unsigned __int64)v74 > 0x1D )
      {
        v61 = (__int64)v74;
        v52 = (unsigned __int64)(v74 + 1);
        if ( (__int64)(v74 + 1) < 0 )
        {
          v60 = (size_t)&v65;
          std::__throw_bad_alloc();
        }
      }
      else
      {
        v61 = 30;
        v52 = 31;
      }
      v62 = v74;
      v60 = (size_t)&v65;
      v53 = (_QWORD *)operator new(v52);
      v47 = (size_t)v62;
      if ( v65 != dest )
      {
        v62 = v53;
        v60 = v47;
        operator delete(v65, dest[0] + 1LL);
        v53 = v62;
        v47 = v60;
      }
      v65 = v53;
      v54 = v73;
      dest[0] = v61;
    }
    else
    {
      if ( !v74 )
      {
LABEL_69:
        v48 = dest;
LABEL_70:
        v66 = v47;
        *((_BYTE *)v48 + v47) = 0;
        goto LABEL_50;
      }
      v54 = v73;
      if ( v74 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v73;
        goto LABEL_69;
      }
      v53 = dest;
    }
    v60 = v47;
    memcpy(v53, v54, v47);
    v48 = v65;
    v47 = v60;
    goto LABEL_70;
  }
LABEL_58:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned int *, __int64, unsigned __int64))(*(_QWORD *)a1 + 24LL))(
         a1,
         v8,
         v10,
         v14) )
  {
    (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v11 + 40LL))(v11, &i);
  }
LABEL_30:
  if ( i )
    sub_186B220(i - 1);
  return v11;
}

