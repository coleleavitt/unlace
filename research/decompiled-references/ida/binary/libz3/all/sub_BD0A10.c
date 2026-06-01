__int64 __fastcall sub_BD0A10(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbp
  std::ios_base *v3; // rbx
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 *v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rdi
  __int64 v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __m128i v20; // xmm2
  _QWORD *v21; // rax
  int v22; // esi
  _QWORD *v23; // rax
  _BYTE *v24; // rax
  char *v25; // rax
  void *v26; // r8
  _QWORD *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // r9
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  _BYTE *v41; // rdx
  _QWORD *v42; // rax
  unsigned __int64 v43; // rdi
  _QWORD *v44; // rax
  const void *v45; // rsi
  void *v46; // rsi
  _QWORD *v47; // rax
  unsigned __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  int v52; // edi
  const double *v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // edx
  const double *v56; // rsi
  __int64 v57; // rdx
  const double *v58; // r8
  const double *i; // rax
  _DWORD *v60; // rdx
  __int64 v61; // rax
  unsigned int v62; // r15d
  unsigned int v63; // r9d
  __m128i *v64; // r12
  __m128i *v65; // rcx
  int v66; // esi
  __int64 v67; // rax
  __m128i *v68; // rdi
  __m128i *v69; // rax
  _DWORD *v70; // rdx
  _DWORD *v71; // rax
  _DWORD *v72; // rax
  __int64 v73; // rdi
  __m128i *v74; // rax
  __int64 m128i_i64; // r11
  __int64 v76; // r10
  __int64 v77; // rdi
  __m128i *v78; // r8
  const __m128i *v79; // rbx
  __int64 v80; // rax
  __m128i *v81; // rdx
  __m128i *v82; // rax
  size_t v83; // [rsp+8h] [rbp-290h]
  __int64 v84; // [rsp+10h] [rbp-288h]
  __int64 v85; // [rsp+10h] [rbp-288h]
  std::ios_base *v86; // [rsp+18h] [rbp-280h]
  unsigned int v87; // [rsp+18h] [rbp-280h]
  void *v88[2]; // [rsp+20h] [rbp-278h] BYREF
  __m128i v89; // [rsp+30h] [rbp-268h] BYREF
  char *v90; // [rsp+40h] [rbp-258h]
  __m128i v91; // [rsp+48h] [rbp-250h] BYREF
  size_t v92; // [rsp+58h] [rbp-240h]
  unsigned __int64 v93; // [rsp+68h] [rbp-230h] BYREF
  void *v94; // [rsp+70h] [rbp-228h] BYREF
  _BYTE *v95; // [rsp+78h] [rbp-220h]
  _QWORD dest[2]; // [rsp+80h] [rbp-218h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-208h] BYREF
  char v98; // [rsp+A0h] [rbp-1F8h] BYREF
  _OWORD v99[2]; // [rsp+E0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+100h] [rbp-198h]
  __int128 v101; // [rsp+110h] [rbp-188h]
  char v102[8]; // [rsp+120h] [rbp-178h] BYREF
  int v103; // [rsp+128h] [rbp-170h]
  void *v104; // [rsp+130h] [rbp-168h] BYREF
  char *v105; // [rsp+138h] [rbp-160h]
  _QWORD v106[2]; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v107[28]; // [rsp+150h] [rbp-148h] BYREF
  __int16 v108; // [rsp+230h] [rbp-68h]
  __int128 v109; // [rsp+238h] [rbp-60h]
  __int128 v110; // [rsp+248h] [rbp-50h]

  v2 = (_DWORD *)a2;
  v3 = (std::ios_base *)a1;
  v4 = *(_QWORD *)(a2 + 24);
  if ( !v4 || *(_DWORD *)(a1 + 56) != *(_DWORD *)v4 )
    goto LABEL_3;
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
LABEL_3:
      if ( a2 != *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL) )
      {
        sub_1872CE0("");
        sub_1873130(114, 131);
      }
      return sub_163B390(a1 + 32, 97);
    }
    v6 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v6 + 8) == 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, *(_QWORD *)v6);
      v8 = *(_QWORD *)(a1 + 96);
      *(_QWORD *)&v99[0] = v7;
      return sub_15E1AF0(v8);
    }
LABEL_155:
    sub_DBF6E(0);
  }
  v10 = *(__int64 **)(v4 + 8);
  if ( *((_BYTE *)v10 + 8) != 1 )
    goto LABEL_155;
  v11 = *v10;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL);
  if ( v11 == v12 )
  {
    v91.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
    v17 = `VTT for'std::ostringstream[1];
    v18 = `VTT for'std::ostringstream[2];
    v89 = _mm_unpacklo_epi64(
            (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
            (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    v84 = v18;
    v90 = (char *)&`vtable for'std::ios + 16;
    while ( 1 )
    {
      std::ios_base::ios_base((std::ios_base *)v107);
      v109 = 0;
      v107[0] = v90;
      v108 = 0;
      v110 = 0;
      v19 = (_QWORD *)((char *)v99 + *(_QWORD *)(v17 - 24));
      v107[27] = 0;
      *(_QWORD *)&v99[0] = v17;
      *v19 = v84;
      std::ios::init();
      v20 = _mm_load_si128(&v89);
      v99[1] = 0;
      v99[0] = v20;
      v107[0] = (char *)&`vtable for'std::ostringstream + 64;
      *(_OWORD *)src = 0;
      v101 = 0;
      std::locale::locale((std::locale *)v102);
      v103 = 16;
      v104 = v106;
      *((_QWORD *)&v99[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
      v105 = nullptr;
      LOBYTE(v106[0]) = 0;
      std::ios::init();
      v21 = (_QWORD *)std::__ostream_insert<char,std::char_traits<char>>();
      v22 = *((_DWORD *)v3 + 48);
      *(_DWORD *)((char *)v21 + *(_QWORD *)(*v21 - 24LL) + 24) = *(_DWORD *)((_BYTE *)v21 + *(_QWORD *)(*v21 - 24LL)
                                                                                          + 24)
                                                               & 0xFFFFFFB5
                                                               | 8;
      *((_DWORD *)v3 + 48) = v22 + 1;
      v23 = (_QWORD *)std::ostream::_M_insert<unsigned long>();
      *(_DWORD *)((char *)v23 + *(_QWORD *)(*v23 - 24LL) + 24) = *(_DWORD *)((_BYTE *)v23 + *(_QWORD *)(*v23 - 24LL)
                                                                                          + 24)
                                                               & 0xFFFFFFB5
                                                               | 2;
      std::__ostream_insert<char,std::char_traits<char>>();
      v24 = (_BYTE *)v101;
      v95 = nullptr;
      v94 = dest;
      LOBYTE(dest[0]) = 0;
      if ( (_QWORD)v101 )
      {
        if ( src[0] >= (void *)v101 )
          v24 = src[0];
        if ( !src[0] )
          v24 = (_BYTE *)v101;
        v25 = (char *)(v24 - (char *)src[1]);
        v26 = v25;
        if ( (__int64)v25 < 0 )
          std::__throw_length_error("basic_string::_M_replace");
        if ( (unsigned __int64)v25 > 0xF )
        {
          if ( (unsigned __int64)v25 > 0x1D )
          {
            v43 = (unsigned __int64)(v25 + 1);
            if ( (__int64)(v25 + 1) < 0 )
              std::__throw_bad_alloc();
            v92 = (size_t)v25;
          }
          else
          {
            v92 = 30;
            v43 = 31;
          }
          v91.m128i_i64[1] = (__int64)v25;
          v88[0] = src[1];
          v44 = (_QWORD *)operator new(v43);
          v45 = v88[0];
          v26 = (void *)v91.m128i_i64[1];
          v27 = v44;
          if ( v88[0] )
          {
            v88[0] = (void *)v91.m128i_i64[1];
            memcpy(v44, v45, v91.m128i_u64[1]);
            v26 = v88[0];
          }
          if ( v94 != dest )
          {
            v88[0] = v26;
            operator delete(v94, dest[0] + 1LL);
            v26 = v88[0];
          }
          v94 = v27;
          dest[0] = v92;
        }
        else if ( src[1] == dest )
        {
          v88[0] = v25;
          std::string::_M_replace_cold();
          v26 = v88[0];
          v27 = v94;
        }
        else
        {
          if ( v25 )
          {
            if ( v25 == (_BYTE *)&dword_0 + 1 )
            {
              LOBYTE(dest[0]) = *(_BYTE *)src[1];
            }
            else
            {
              v88[0] = v25;
              memcpy(dest, src[1], (size_t)v25);
              v26 = v88[0];
            }
          }
          v27 = dest;
        }
        v95 = v26;
        *((_BYTE *)v26 + (_QWORD)v27) = 0;
        goto LABEL_28;
      }
      v41 = v105;
      if ( (unsigned __int64)v105 > 0xF )
        break;
      if ( v105 )
      {
        v46 = v104;
        v47 = dest;
        if ( v105 != (_BYTE *)&dword_0 + 1 )
          goto LABEL_79;
        LOBYTE(dest[0]) = *(_BYTE *)v104;
      }
      v42 = dest;
LABEL_61:
      v95 = v41;
      v41[(_QWORD)v42] = 0;
LABEL_28:
      *(__m128i *)v88 = _mm_unpacklo_epi64(
                          _mm_loadl_epi64(&v91),
                          (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
      sub_180C5A0(&v93, v94);
      v28 = *((_QWORD *)v3 + 21);
      v29 = *((unsigned int *)v3 + 44);
      if ( v93 )
      {
        if ( (v93 & 7) == 1 )
          v30 = v93 >> 3;
        else
          LODWORD(v30) = *(_DWORD *)(v93 - 8);
      }
      else
      {
        LODWORD(v30) = -1640531495;
      }
      v31 = v29 - 1;
      v32 = 16 * v29;
      v33 = v28 + v32;
      v34 = 16LL * ((unsigned int)v30 & v31);
      v35 = v28 + v34;
      if ( v34 == v32 )
      {
LABEL_43:
        if ( v28 == v35 )
        {
LABEL_51:
          ptr[0] = (void *)v93;
          sub_6338A0((__int64)v3 + 168, (const __m128i **)ptr);
          sub_18007F0(ptr, v94);
          v9 = sub_1648610((char *)v3 + 64, ptr);
          if ( ptr[0] != &v98 && ptr[0] )
            sub_186B220(ptr[0]);
          sub_233E40((__int64)&v94);
          v99[0] = _mm_load_si128((const __m128i *)v88);
          v107[0] = (char *)&`vtable for'std::ostringstream + 64;
          sub_233E40((__int64)&v104);
          *((_QWORD *)&v99[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
          std::locale::~locale((std::locale *)v102);
          v40 = *(_QWORD *)(v17 - 24);
          *(_QWORD *)&v99[0] = v17;
          *(_QWORD *)((char *)v99 + v40) = v84;
          v107[0] = (char *)&`vtable for'std::ios + 16;
          std::ios_base::~ios_base((std::ios_base *)v107);
          return v9;
        }
        while ( 2 )
        {
          while ( 1 )
          {
            v39 = *(_DWORD *)(v28 + 4);
            if ( v39 != 2 )
              break;
            if ( (_DWORD)v30 != *(_DWORD *)v28 )
              goto LABEL_46;
            if ( v93 == *(_QWORD *)(v28 + 8) )
              goto LABEL_38;
            v28 += 16;
            if ( v35 == v28 )
              goto LABEL_51;
          }
          if ( !v39 )
            goto LABEL_51;
LABEL_46:
          v28 += 16;
          if ( v35 == v28 )
            goto LABEL_51;
          continue;
        }
      }
      v36 = v28 + v34;
      while ( 1 )
      {
        v37 = *(_DWORD *)(v36 + 4);
        if ( v37 != 2 )
        {
          if ( !v37 )
            goto LABEL_51;
          goto LABEL_34;
        }
        if ( (_DWORD)v30 == *(_DWORD *)v36 && v93 == *(_QWORD *)(v36 + 8) )
          break;
LABEL_34:
        v36 += 16;
        if ( v33 == v36 )
          goto LABEL_43;
      }
LABEL_38:
      if ( v94 != dest )
        operator delete(v94, dest[0] + 1LL);
      v99[0] = _mm_load_si128((const __m128i *)v88);
      v107[0] = (char *)&`vtable for'std::ostringstream + 64;
      if ( v104 != v106 )
        operator delete(v104, v106[0] + 1LL);
      *((_QWORD *)&v99[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
      std::locale::~locale((std::locale *)v102);
      v38 = *(_QWORD *)(v17 - 24);
      *(_QWORD *)&v99[0] = v17;
      *(_QWORD *)((char *)v99 + v38) = v84;
      v107[0] = v90;
      std::ios_base::~ios_base((std::ios_base *)v107);
    }
    if ( (__int64)v105 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( (unsigned __int64)v105 > 0x1D )
    {
      v48 = (unsigned __int64)(v105 + 1);
      if ( (__int64)(v105 + 1) < 0 )
        std::__throw_bad_alloc();
      v88[0] = v105;
    }
    else
    {
      v88[0] = &qword_18 + 6;
      v48 = 31;
    }
    v92 = (size_t)v105;
    v91.m128i_i64[1] = operator new(v48);
    sub_233E40((__int64)&v94);
    v47 = (_QWORD *)v91.m128i_i64[1];
    v46 = v104;
    v41 = (_BYTE *)v92;
    v94 = (void *)v91.m128i_i64[1];
    dest[0] = v88[0];
LABEL_79:
    v88[0] = v41;
    memcpy(v47, v46, (size_t)v41);
    v42 = v94;
    v41 = v88[0];
    goto LABEL_61;
  }
  if ( a2 == v12 )
    return sub_163B390(a1 + 32, 97);
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24), v11);
  v14 = (_QWORD *)v13;
  if ( v13 )
  {
    v15 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)&v99[0] = v13;
    return sub_15E1AF0(v15);
  }
  v49 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 40LL))(*(_QWORD *)(a1 + 24), v11);
  v50 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)&v99[0] = v49;
  v51 = sub_15E1AF0(v50);
  v52 = *(_DWORD *)(a2 + 12);
  v53 = *((const double **)v3 + 29);
  v9 = v51;
  v54 = *((unsigned int *)v3 + 60);
  v55 = v54 - 1;
  v54 *= 16;
  v56 = (const double *)((char *)v53 + v54);
  v57 = 16LL * (v52 & v55);
  v58 = &v53[(unsigned __int64)v57 / 8];
  if ( v57 != v54 )
  {
    for ( i = &v53[(unsigned __int64)v57 / 8]; v56 != i; i += 2 )
    {
      v60 = *(_DWORD **)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( v60[3] == v52 && v2 == v60 )
        {
          v53 = i;
LABEL_119:
          v73 = *((_QWORD *)v3 + 9);
          v99[0] = _mm_loadh_ps(v53 + 1);
          v9 = sub_15E1AF0(v73);
          goto LABEL_90;
        }
      }
      else if ( !v60 )
      {
        goto LABEL_90;
      }
    }
  }
  for ( ; v58 != v53; v53 += 2 )
  {
    v72 = *(_DWORD **)v53;
    if ( *(_QWORD *)v53 > 1u )
    {
      if ( v72[3] == v52 && v2 == v72 )
        goto LABEL_119;
    }
    else if ( !v72 )
    {
      break;
    }
  }
LABEL_90:
  *(_QWORD *)&v99[0] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  sub_BB70A0((_QWORD *)v3 + 33, v99);
  v61 = *((unsigned int *)v3 + 60);
  v62 = 2 * v61;
  if ( 3 * (int)v61 < (unsigned int)(4 * (*((_DWORD *)v3 + 61) + *((_DWORD *)v3 + 62))) )
  {
    v83 = 16LL * v62;
    v74 = (__m128i *)sub_186B270(v83);
    v64 = v74;
    m128i_i64 = (__int64)v74[v83 / 0x10].m128i_i64;
    if ( v62 )
    {
      if ( (v83 & 0x10) == 0 || (*v74 = 0, ++v74, (__m128i *)m128i_i64 != v74) )
      {
        do
        {
          *v74 = 0;
          v74 += 2;
          v74[-1] = 0;
        }
        while ( (__m128i *)m128i_i64 != v74 );
      }
    }
    v76 = *((_QWORD *)v3 + 29);
    v63 = v62 - 1;
    v65 = (__m128i *)m128i_i64;
    v77 = 16LL * *((unsigned int *)v3 + 60);
    v78 = (__m128i *)(v76 + v77);
    if ( v76 != v76 + v77 )
    {
      v86 = v3;
      v79 = *((const __m128i **)v3 + 29);
      v88[0] = v2;
      LODWORD(v90) = v62;
      do
      {
        if ( v79->m128i_i64[0] > 1uLL )
        {
          v80 = 16LL * (*(_DWORD *)(v79->m128i_i64[0] + 12) & v63);
          v81 = &v64[(unsigned __int64)v80 / 0x10];
          if ( v83 == v80 )
          {
LABEL_134:
            if ( v64 == v81 )
            {
LABEL_146:
              v89.m128i_i64[0] = m128i_i64;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v82 = v64;
            while ( v82->m128i_i64[0] )
            {
              if ( v81 == ++v82 )
                goto LABEL_146;
            }
          }
          else
          {
            v82 = &v64[(unsigned __int64)v80 / 0x10];
            while ( v82->m128i_i64[0] )
            {
              if ( (__m128i *)m128i_i64 == ++v82 )
                goto LABEL_134;
            }
          }
          *v82 = _mm_loadu_si128(v79);
        }
        ++v79;
      }
      while ( v78 != v79 );
      v3 = v86;
      v14 = nullptr;
      v2 = v88[0];
      v62 = (unsigned int)v90;
      v78 = *((__m128i **)v86 + 29);
    }
    if ( v78 )
    {
      v87 = v63;
      v85 = m128i_i64;
      sub_186B220(v78);
      v63 = v87;
      v65 = (__m128i *)v85;
    }
    *((_QWORD *)v3 + 29) = v64;
    *((_DWORD *)v3 + 60) = v62;
    *((_DWORD *)v3 + 62) = 0;
  }
  else
  {
    v63 = v61 - 1;
    v64 = *((__m128i **)v3 + 29);
    v83 = 16 * v61;
    v65 = &v64[v61];
  }
  v66 = v2[3];
  v67 = 16LL * (v66 & v63);
  v68 = &v64[(unsigned __int64)v67 / 0x10];
  if ( v83 == v67 )
  {
LABEL_102:
    if ( v64 == v68 )
    {
LABEL_120:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v71 = (_DWORD *)v64->m128i_i64[0];
      if ( v64->m128i_i64[0] > 1uLL )
      {
        if ( v71[3] == v66 && v2 == v71 )
        {
          v64->m128i_i64[0] = (__int64)v2;
          v64->m128i_i64[1] = v9;
          return v9;
        }
      }
      else
      {
        if ( !v71 )
        {
          if ( v14 )
            goto LABEL_144;
          v14 = v64->m128i_i64;
          goto LABEL_145;
        }
        v14 = v64->m128i_i64;
      }
      if ( v68 == ++v64 )
        goto LABEL_120;
    }
  }
  v69 = &v64[(unsigned __int64)v67 / 0x10];
  while ( 1 )
  {
    v70 = (_DWORD *)v69->m128i_i64[0];
    if ( v69->m128i_i64[0] <= 1uLL )
      break;
    if ( v70[3] == v66 && v2 == v70 )
    {
      v69->m128i_i64[0] = (__int64)v2;
      v69->m128i_i64[1] = v9;
      return v9;
    }
LABEL_98:
    if ( v65 == ++v69 )
      goto LABEL_102;
  }
  if ( v70 )
  {
    v14 = v69->m128i_i64;
    goto LABEL_98;
  }
  if ( v14 )
LABEL_144:
    --*((_DWORD *)v3 + 62);
  else
    v14 = v69->m128i_i64;
LABEL_145:
  *v14 = v2;
  v14[1] = v9;
  ++*((_DWORD *)v3 + 61);
  return v9;
}

