void __fastcall sub_14456E0(__int64 a1, __m128i *a2, double a3, double a4)
{
  unsigned __int16 v6; // bp
  char v7; // al
  __int64 v8; // r15
  __int64 v9; // r9
  __int16 v10; // r12
  char v11; // al
  __int16 v12; // r12
  __int64 (__fastcall *v13)(__int64, __int64, unsigned __int8 **); // rax
  __int64 v14; // rax
  bool v15; // zf
  const char *v16; // r8
  size_t v17; // rax
  const char *v18; // r8
  size_t v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rsi
  _BYTE *v22; // rax
  __int64 (__fastcall ***v23)(); // rdi
  __int64 v24; // rax
  _BYTE *v25; // rdx
  _BYTE *v26; // rdi
  __int16 v27; // ax
  __int16 v28; // ax
  __int16 v29; // dx
  __int16 v30; // ax
  __int16 v31; // dx
  int v32; // r14d
  int v33; // eax
  void *v34; // rax
  __int64 *v35; // rsi
  __int32 v36; // edx
  __int64 v37; // rsi
  int v38; // edx
  char *v39; // rdi
  int v40; // edx
  unsigned int v41; // r15d
  __int64 v42; // rax
  struct tm *v43; // rax
  char *v44; // rdi
  unsigned __int64 v45; // rdx
  _BYTE *v46; // rax
  __int64 (__fastcall ***v47)(); // rdi
  __int64 v48; // rax
  _BYTE *v49; // rdx
  int v50; // edx
  int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  struct tm *v58; // rax
  __int64 (__fastcall *v59)(__int64, __int64, unsigned __int8 **); // rax
  size_t v60; // rax
  char *v61; // rdx
  unsigned __int8 v62; // al
  unsigned __int64 v63; // r8
  __int64 v64; // rax
  _QWORD *v65; // r9
  char v66; // dl
  int v67; // eax
  int v68; // r12d
  __int16 v69; // ax
  int v70; // r12d
  __int16 v71; // ax
  unsigned __int16 v72; // r14
  char v73; // al
  int v74; // eax
  _WORD *v75; // rax
  __int16 v76; // ax
  int v77; // eax
  unsigned __int16 v78; // r12
  char v79; // al
  __int64 *v80; // rdi
  __int64 v81; // rcx
  _DWORD *v82; // rax
  _DWORD *v83; // rdx
  __int64 v84; // rax
  __int16 v85; // [rsp+16h] [rbp-442h]
  const char *src; // [rsp+18h] [rbp-440h]
  std::locale *v87; // [rsp+20h] [rbp-438h] BYREF
  _QWORD *v88; // [rsp+28h] [rbp-430h]
  __m128i v89; // [rsp+30h] [rbp-428h] BYREF
  __int64 v90; // [rsp+40h] [rbp-418h]
  char v91[8]; // [rsp+58h] [rbp-400h] BYREF
  void *dest; // [rsp+60h] [rbp-3F8h] BYREF
  __m128 v93; // [rsp+68h] [rbp-3F0h] BYREF
  char *s[2]; // [rsp+80h] [rbp-3D8h] BYREF
  _QWORD v95[2]; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 (__fastcall **v96)(); // [rsp+A0h] [rbp-3B8h] BYREF
  int v97; // [rsp+A8h] [rbp-3B0h]
  __int128 v98; // [rsp+B0h] [rbp-3A8h]
  _BYTE *v99; // [rsp+C0h] [rbp-398h]
  char v100; // [rsp+C8h] [rbp-390h]
  int v101; // [rsp+CCh] [rbp-38Ch]
  void **v102; // [rsp+D0h] [rbp-388h]
  void *v103; // [rsp+E0h] [rbp-378h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-370h]
  _BYTE v105[136]; // [rsp+F8h] [rbp-360h] BYREF
  void *ptr; // [rsp+180h] [rbp-2D8h] BYREF
  __m128i v107; // [rsp+188h] [rbp-2D0h] BYREF
  _BYTE v108[24]; // [rsp+198h] [rbp-2C0h] BYREF
  const void *v109; // [rsp+1B0h] [rbp-2A8h]
  _DWORD v110[133]; // [rsp+200h] [rbp-258h] BYREF
  char v111; // [rsp+414h] [rbp-44h]

  v6 = a2[1].m128i_u16[0];
  v7 = sub_141A630(v6);
  if ( v6 == 1 || v7 )
    v8 = 0;
  else
    v8 = a2->m128i_i64[1];
  if ( *(_QWORD *)(a1 + 296) == v8 )
  {
    sub_1450E60(a1, a2);
    return;
  }
  if ( *(_QWORD *)(a1 + 304) == v8 )
  {
    sub_14515D0(a1, a2);
    return;
  }
  ++*(_DWORD *)(a1 + 2340);
  v103 = v105;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v97 = 2;
  v96 = &off_2BEBEE0;
  v100 = 0;
  v101 = 1;
  v99 = nullptr;
  v98 = 0;
  v102 = &v103;
  sub_227B8B0(&v96, 0, 0, 0);
  v10 = a2[1].m128i_i16[1];
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i16[1] = v10 & 0xFFF7;
  v11 = v10;
  v12 = v10 & 2;
  v85 = v11 & 1;
  if ( *(_QWORD *)(a1 + 224) == v8 )
  {
    v32 = a2->m128i_i32[0];
    v33 = sub_13D1C70(a2->m128i_i32[0], 0, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 56));
    v34 = (void *)sub_101FD20(*(_QWORD *)(a1 + 88), v33 + v32);
    v35 = *(__int64 **)(a1 + 88);
    ptr = v34;
    v107.m128i_i32[0] = v36;
    sub_1022900((__int64)&ptr, v35, SHIDWORD(v34), 1);
    v37 = 1;
    if ( ptr )
      v37 = v107.m128i_u32[1];
    goto LABEL_65;
  }
  if ( *(_QWORD *)(a1 + 232) == v8 || *(_QWORD *)(a1 + 264) == v8 || *(_QWORD *)(a1 + 272) == v8 )
  {
    sub_1022900((__int64)s, *(__int64 **)(a1 + 88), a2->m128i_i32[0], 1);
    v16 = s[0];
    if ( *(_QWORD *)(a1 + 264) == v8 )
    {
      if ( s[0] )
      {
        v38 = HIDWORD(v95[0]);
        if ( !HIDWORD(v95[0]) )
        {
LABEL_83:
          ptr = v108;
          v107 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
LABEL_41:
          if ( *(_QWORD *)(a1 + 272) == v8 )
          {
            sub_1442220(&ptr, (const char **)s, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
LABEL_45:
            sub_13D11F0((__int64 *)&ptr);
            v22 = v99;
            if ( (unsigned __int64)v99 >= *((_QWORD *)&v98 + 1) )
            {
              v23 = (__int64 (__fastcall ***)())sub_227BA10(&v96, 34);
            }
            else
            {
              v23 = &v96;
              ++v99;
              *v22 = 34;
            }
            v24 = sub_227BF10(v23, ptr, v107.m128i_i64[0]);
            v25 = *(_BYTE **)(v24 + 32);
            if ( (unsigned __int64)v25 >= *(_QWORD *)(v24 + 24) )
            {
              sub_227BA10(v24, 34);
            }
            else
            {
              *(_QWORD *)(v24 + 32) = v25 + 1;
              *v25 = 34;
            }
            v26 = ptr;
            a2[1].m128i_i16[0] = 14;
            if ( v26 != v108 )
              free(v26);
            goto LABEL_51;
          }
          src = v16;
          v17 = j__strlen(v16);
          v18 = src;
          v19 = v17;
          if ( v17 > 0x100 )
          {
            sub_2236E10(&ptr, v108, v17, 1);
            v18 = src;
            v39 = (char *)ptr + v107.m128i_i64[0];
          }
          else
          {
            if ( !v17 )
            {
LABEL_44:
              v20 = *(_QWORD *)(a1 + 64);
              v21 = *(_QWORD *)(a1 + 56);
              v107.m128i_i64[0] = v19;
              sub_14421D0((__int64)&ptr, v21, v20);
              goto LABEL_45;
            }
            v39 = v108;
          }
          memcpy(v39, v18, v19);
          v19 += v107.m128i_i64[0];
          goto LABEL_44;
        }
        while ( 1 )
        {
          sub_1022900((__int64)&v89, *(__int64 **)(a1 + 88), v38, 1);
          v16 = (const char *)v89.m128i_i64[0];
          *(__m128i *)s = _mm_loadu_si128(&v89);
          v95[0] = v90;
          if ( !v89.m128i_i64[0] )
            break;
          v38 = HIDWORD(v95[0]);
          if ( !HIDWORD(v95[0]) )
            goto LABEL_83;
        }
      }
    }
    else
    {
      ptr = v108;
      v107 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      if ( s[0] )
        goto LABEL_41;
    }
    a2[1].m128i_i16[0] = 14;
    goto LABEL_51;
  }
  if ( *(_QWORD *)(a1 + 240) == v8 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1374);
    sub_AEA040((__int64)&ptr);
    if ( !*(_DWORD *)(a1 + 520) )
      sub_1441720((_DWORD *)(a1 + 520), (_DWORD *)(a1 + 524), a1);
    a2->m128i_i32[1] = 13;
    v50 = a2->m128i_i32[0];
    a2[1].m128i_i16[0] = 14;
    a2->m128i_i32[0] = sub_10209A0(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 520), v50, v50, 13, 1, 0, 0);
    goto LABEL_56;
  }
  if ( *(_QWORD *)(a1 + 248) == v8 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1374);
    sub_AEA040((__int64)&ptr);
    if ( !*(_DWORD *)(a1 + 524) )
      sub_1441720((_DWORD *)(a1 + 520), (_DWORD *)(a1 + 524), a1);
    a2->m128i_i32[1] = 10;
    v51 = a2->m128i_i32[0];
    a2[1].m128i_i16[0] = 14;
    a2->m128i_i32[0] = sub_10209A0(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 524), v51, v51, 10, 1, 0, 0);
    goto LABEL_56;
  }
  if ( *(_QWORD *)(a1 + 256) == v8 )
  {
    sub_1022900((__int64)&ptr, *(__int64 **)(a1 + 88), a2->m128i_i32[0], 1);
    if ( ptr && (sub_1022900((__int64)&ptr, *(__int64 **)(a1 + 88), v107.m128i_i32[3], 1), v40 = v107.m128i_i32[3], ptr) )
    {
      v41 = 0;
      do
      {
        ++v41;
        sub_1022900((__int64)&ptr, *(__int64 **)(a1 + 88), v40, 1);
        v40 = v107.m128i_i32[3];
      }
      while ( ptr );
      v37 = v41;
    }
    else
    {
      v37 = 0;
    }
    goto LABEL_65;
  }
  if ( *(_QWORD *)(a1 + 280) == v8 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1374);
    sub_AEA040((__int64)&ptr);
    dest = &v93.m128_u16[4];
    v93.m128_u64[0] = 0;
    v93.m128_i8[8] = 0;
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&ptr, 24);
    v87 = (std::locale *)v91;
    std::locale::locale((std::locale *)v91, "C");
    std::ios::imbue(s, v110, v91);
    std::locale::~locale((std::locale *)s);
    std::locale::~locale((std::locale *)v91);
    v42 = *(_QWORD *)(a1 + 40);
    if ( *(_BYTE *)(v42 + 336) )
    {
      s[0] = *(char **)(v42 + 328);
      v43 = gmtime((const time_t *)s);
      sub_1442350((std::ostream *)&v107.m128i_u64[1], (__int64)v43, "%a %b %e %T %Y");
      goto LABEL_87;
    }
    v52 = sub_1436660((_QWORD *)a1);
    if ( v52 )
    {
      v53 = *(unsigned int *)(v52 + 16);
      v54 = *(_QWORD **)(a1 + 88);
      LOBYTE(s[0]) = 0;
      if ( (unsigned int)(v53 + 1) > 1 )
      {
        if ( (int)v53 < 0 )
        {
          v63 = (unsigned int)(-2 - v53);
          v64 = *(_QWORD *)(v54[40] + 8LL * ((unsigned int)(-2 - v53) >> 6));
          if ( _bittest64(&v64, v63) )
          {
            v65 = (_QWORD *)(v54[34] + 8 * ((unsigned __int64)(int)v63 >> 5));
            if ( !*v65 )
            {
              v80 = (__int64 *)(v54[36] & 0xFFFFFFFFFFFFFFF8LL);
              v81 = *v80;
              v80[10] += 768;
              v82 = (_DWORD *)((v81 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v80[1] >= (unsigned __int64)(v82 + 192) && v81 )
              {
                *v80 = (__int64)(v82 + 192);
              }
              else
              {
                v88 = v65;
                LODWORD(v87) = v63;
                v82 = (_DWORD *)sub_986170((__int64)v80, 768, 768, 3, v63, (__int64)v65);
                v65 = v88;
                LOBYTE(v63) = (_BYTE)v87;
              }
              *v65 = v82;
              v83 = v82 + 192;
              do
              {
                *v82 = 0;
                v82 += 6;
                *((_OWORD *)v82 - 1) = 0;
                *((_QWORD *)v82 - 1) = 0;
              }
              while ( v82 != v83 );
            }
            v66 = (char)s[0];
            v55 = *v65 + 24 * (v63 & 0x1F);
          }
          else
          {
            v55 = sub_101F930((__int64)v54, v63, s);
            v66 = (char)s[0];
          }
          if ( v66 )
            goto LABEL_87;
        }
        else
        {
          v55 = v54[23] + 24 * v53;
        }
        if ( v55 && *(char *)(v55 + 3) >= 0 )
        {
          v56 = *(_QWORD *)((*(_QWORD *)(v55 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
          while ( v56 )
          {
            v57 = *(_QWORD *)(v56 + 8);
            if ( !v57 )
              break;
            v56 = v57 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v57 & 4) == 0 )
            {
              if ( v56 )
              {
                s[0] = *(char **)(v56 + 40);
                v58 = localtime((const time_t *)s);
                sub_1442350((std::ostream *)&v107.m128i_u64[1], (__int64)v58, "%a %b %e %T %Y");
              }
              break;
            }
          }
        }
      }
    }
LABEL_87:
    std::stringbuf::str(s, v108);
    v44 = (char *)dest;
    if ( (_QWORD *)s[0] == v95 )
    {
      v61 = s[1];
      if ( s[1] )
      {
        if ( s[1] == (_BYTE *)&dword_0 + 1 )
          *(_BYTE *)dest = v95[0];
        else
          memcpy(dest, s[0], (size_t)s[1]);
        v61 = s[1];
        v44 = (char *)dest;
      }
      v93.m128_u64[0] = (unsigned __int64)v61;
      v61[(_QWORD)v44] = 0;
      v44 = s[0];
      goto LABEL_91;
    }
    if ( dest == &v93.m128_u16[4] )
    {
      v87 = (std::locale *)v95[0];
      dest = s[0];
      v93 = _mm_loadh_ps((const double *)&v87);
    }
    else
    {
      v87 = (std::locale *)v95[0];
      v45 = v93.m128_u64[1];
      dest = s[0];
      v93 = _mm_loadh_ps((const double *)&v87);
      if ( v44 )
      {
        s[0] = v44;
        v95[0] = v45;
LABEL_91:
        s[1] = nullptr;
        *v44 = 0;
        if ( (_QWORD *)s[0] != v95 )
          operator delete(s[0]);
        if ( !v93.m128_u64[0] )
        {
          v60 = j__strlen("??? ??? ?? ??:??:?? ????");
          sub_99BDC0(&dest, 0, 0, "??? ??? ?? ??:??:?? ????", v60);
        }
        v46 = v99;
        if ( (unsigned __int64)v99 >= *((_QWORD *)&v98 + 1) )
        {
          v47 = (__int64 (__fastcall ***)())sub_227BA10(&v96, 34);
        }
        else
        {
          v47 = &v96;
          ++v99;
          *v46 = 34;
        }
        v48 = sub_227BF10(v47, dest, v93.m128_u64[0]);
        v49 = *(_BYTE **)(v48 + 32);
        if ( (unsigned __int64)v49 >= *(_QWORD *)(v48 + 24) )
        {
          sub_227BA10(v48, 34);
        }
        else
        {
          *(_QWORD *)(v48 + 32) = v49 + 1;
          *v49 = 34;
        }
        a2[1].m128i_i16[0] = 14;
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(&ptr);
        if ( dest != &v93.m128_u16[4] )
          operator delete(dest);
        goto LABEL_51;
      }
    }
    v44 = (char *)v95;
    s[0] = (char *)v95;
    goto LABEL_91;
  }
  if ( *(_QWORD *)(a1 + 504) == v8 )
  {
    sub_227B910(&v96, *(unsigned int *)(a1 + 536));
    a2[1].m128i_i16[0] = 7;
    if ( *(_DWORD *)(a1 + 532) )
    {
      sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1046);
      sub_AEA040((__int64)&ptr);
      sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 532), 111);
      sub_AEA040((__int64)&ptr);
    }
    goto LABEL_51;
  }
  if ( *(_QWORD *)(a1 + 288) == v8 )
  {
    v37 = *(unsigned int *)(a1 + 540);
    *(_DWORD *)(a1 + 540) = v37 + 1;
LABEL_65:
    sub_227B910(&v96, v37);
    a2[1].m128i_i16[0] = 7;
    goto LABEL_51;
  }
  if ( *(_QWORD *)(a1 + 336) == v8 )
  {
    ptr = (void *)a1;
    v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_14446B0;
    goto LABEL_38;
  }
  if ( *(_QWORD *)(a1 + 344) == v8 )
  {
    ptr = (void *)a1;
    v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_14446E0;
    goto LABEL_38;
  }
  if ( *(_QWORD *)(a1 + 352) == v8 )
  {
    ptr = (void *)a1;
    v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_14411B0;
    goto LABEL_38;
  }
  if ( *(_QWORD *)(a1 + 360) == v8 )
  {
    ptr = (void *)a1;
    v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1440F80;
    goto LABEL_38;
  }
  v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_143F240;
  if ( *(_QWORD *)(a1 + 408) == v8 )
  {
LABEL_38:
    sub_14402C0((__int64)&v96, (__int64)a2, v8, a1, 0, v9, v13, (__int64)&ptr);
LABEL_51:
    sub_145C860(a1, *v102, v102[1], a2, a2->m128i_u32[0], a2->m128i_u32[0]);
    v27 = a2[1].m128i_i16[1];
    if ( v85 )
      v28 = v27 | 1;
    else
      v28 = v27 & 0xFFFE;
    v29 = v28;
    v30 = v28 & 0xFFFD;
    v31 = v29 | 2;
    if ( v12 )
      v30 = v31;
    a2[1].m128i_i16[1] = v30 & 0xFFF7;
    goto LABEL_56;
  }
  if ( *(_QWORD *)(a1 + 368) == v8 )
  {
    ptr = (void *)a1;
    v59 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1440EF0;
    goto LABEL_127;
  }
  if ( *(_QWORD *)(a1 + 448) == v8 )
  {
    ptr = (void *)a1;
    v59 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1440F30;
    goto LABEL_127;
  }
  v14 = *(_QWORD *)(a1 + 432);
  if ( v14 == v8 || *(_QWORD *)(a1 + 440) == v8 )
  {
    ptr = (void *)a1;
    v15 = v14 == v8;
    v107.m128i_i64[0] = (__int64)s;
    v59 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1440B90;
    LOBYTE(s[0]) = v15;
LABEL_127:
    sub_14402C0((__int64)&v96, (__int64)a2, v8, a1, 1, v9, v59, (__int64)&ptr);
    goto LABEL_51;
  }
  if ( *(_QWORD *)(a1 + 384) == v8 )
  {
    v62 = sub_143FD20((__int64)a2, v8, a1, 0, 0, 0, (__m128i)0LL, a4);
LABEL_140:
    if ( a2[1].m128i_i16[0] == 23 )
    {
      sub_227B930(&v96, v62);
      a2[1].m128i_i16[0] = 7;
      goto LABEL_51;
    }
    goto LABEL_56;
  }
  if ( *(_QWORD *)(a1 + 392) == v8 )
  {
    v62 = sub_1442050((__int64 *)a1, a2->m128i_i32, v8, (__m128i)0LL, a4);
    goto LABEL_140;
  }
  if ( *(_QWORD *)(a1 + 376) == v8 )
  {
    v67 = sub_1441BC0(a1, a2, v8, (__m128i)0LL);
    if ( v67 != -1 )
    {
      a2[1].m128i_i16[0] = 7;
      sub_227B930(&v96, v67);
      goto LABEL_51;
    }
    goto LABEL_56;
  }
  if ( *(_QWORD *)(a1 + 400) == v8 )
  {
    ptr = (void *)a1;
    v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_14400C0;
    goto LABEL_38;
  }
  if ( *(_QWORD *)(a1 + 416) == v8 )
  {
    ptr = (void *)a1;
    v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1440200;
    goto LABEL_38;
  }
  if ( *(_QWORD *)(a1 + 424) == v8 )
  {
    sub_227BF10(&v96, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 488LL), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
    v75 = (_WORD *)sub_6F3470(
                     a1 + 552,
                     *(const void **)(*(_QWORD *)(a1 + 56) + 488LL),
                     *(_QWORD *)(*(_QWORD *)(a1 + 56) + 496LL));
    a2->m128i_i64[1] = (__int64)v75;
    a2[1].m128i_i16[0] = *v75 & 0x1FF;
    goto LABEL_51;
  }
  if ( *(_QWORD *)(a1 + 312) != v8 )
  {
    if ( *(_QWORD *)(a1 + 456) == v8 )
    {
      ptr = (void *)a1;
      v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1444EF0;
    }
    else if ( *(_QWORD *)(a1 + 464) == v8 )
    {
      ptr = (void *)a1;
      v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1441110;
    }
    else if ( *(_QWORD *)(a1 + 472) == v8 )
    {
      ptr = (void *)a1;
      v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1440A80;
    }
    else if ( *(_QWORD *)(a1 + 480) == v8 )
    {
      ptr = (void *)a1;
      v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1440FF0;
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 488) == v8;
      v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1440D80;
      ptr = (void *)a1;
      if ( !v15 )
        v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **))sub_1440C90;
    }
    goto LABEL_38;
  }
  v68 = a2->m128i_i32[0];
  do
  {
    sub_14634E0(a1, a2);
    v69 = a2[1].m128i_i16[0];
  }
  while ( v69 == 4 );
  if ( v69 != 22 )
  {
    v77 = sub_13DC060(v68, 0, *(__int64 **)(a1 + 88), *(_QWORD *)(a1 + 56), (__m128i)0LL, a4);
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), v77, 1120);
    sub_AE9DF0((unsigned __int8 **)&ptr, v8, 5u);
    sub_AE9DF0((unsigned __int8 **)&ptr, 22, 4u);
    sub_AEA040((__int64)&ptr);
    if ( !sub_10CCDE0(a2[1].m128i_i16[0]) )
    {
      v78 = a2[1].m128i_u16[0];
      v79 = sub_141A630(v78);
      if ( v78 != 1 && !v79 && a2->m128i_i64[1] )
        a2[1].m128i_i16[0] = 5;
    }
    goto LABEL_56;
  }
  v70 = a2->m128i_i32[0];
  do
  {
    sub_14634E0(a1, a2);
    v71 = a2[1].m128i_i16[0];
  }
  while ( v71 == 4 );
  if ( !sub_10CCDE0(v71) )
  {
    v72 = a2[1].m128i_u16[0];
    v73 = sub_141A630(v72);
    if ( v72 != 1 && !v73 && a2->m128i_i64[1] )
    {
      a2[1].m128i_i16[0] = 5;
      goto LABEL_162;
    }
  }
  if ( a2[1].m128i_i16[0] == 14 && (a2[1].m128i_i8[2] & 0x20) == 0 )
  {
    sub_13EE5A0((__int64)&ptr, a2->m128i_i32, 1, (_QWORD *)a1, 1);
    if ( !v111 )
    {
      v84 = sub_6F3470(a1 + 552, v109, (unsigned int)(v110[114] - (_DWORD)v109));
      a2[1].m128i_i16[0] = 5;
      a2->m128i_i64[1] = v84;
      sub_14420A0(&ptr);
      do
LABEL_162:
        sub_14634E0(a1, s);
      while ( LOWORD(v95[0]) == 4 );
      if ( LOWORD(v95[0]) != 23 )
      {
        v74 = sub_13DC060(a2->m128i_i32[0], 0, *(__int64 **)(a1 + 88), *(_QWORD *)(a1 + 56), (__m128i)0LL, a4);
        sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), v74, 1120);
        sub_AE9DF0((unsigned __int8 **)&ptr, a2[1].m128i_u16[0], 4u);
        sub_AE9DF0((unsigned __int8 **)&ptr, 23, 4u);
        sub_AEA040((__int64)&ptr);
        sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), v70, 109);
        sub_AE9DF0((unsigned __int8 **)&ptr, 22, 4u);
        sub_AEA040((__int64)&ptr);
      }
      goto LABEL_56;
    }
    sub_14420A0(&ptr);
  }
  else
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1135);
    sub_AE9DF0((unsigned __int8 **)&ptr, a2[1].m128i_u16[0], 4u);
    sub_AEA040((__int64)&ptr);
    v76 = a2[1].m128i_i16[0];
    if ( (unsigned __int16)(v76 - 1) > 1u && !sub_10CCDE0(v76) )
      goto LABEL_162;
  }
LABEL_56:
  v96 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v96);
  if ( v103 != v105 )
    free(v103);
}
