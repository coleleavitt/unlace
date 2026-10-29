__int64 __fastcall sub_5EEAE0(__int64 a1, unsigned int a2, const char *a3, _QWORD *a4, char a5)
{
  __int64 v7; // rbx
  char *v8; // r13
  size_t v9; // rax
  size_t v10; // r15
  __int64 v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  bool v15; // zf
  int v16; // eax
  const char **v17; // rbx
  __int64 v18; // r15
  size_t v19; // rax
  char *v20; // rbp
  char *v21; // rax
  size_t v22; // rax
  char *v23; // rbp
  char *v24; // r14
  const char **v25; // r13
  int i; // r15d
  int v27; // eax
  unsigned int v28; // r15d
  const char *v30; // r15
  size_t v31; // rax
  const char **v32; // r13
  int j; // edx
  __int64 ea_name; // rax
  char v35; // bp
  const char *v36; // rbp
  size_t v37; // rax
  size_t v38; // r15
  size_t v39; // r12
  char *v40; // rdi
  int v41; // ecx
  char v42; // dl
  unsigned __int64 v43; // rdx
  signed __int64 v44; // rax
  signed __int64 v45; // rbp
  unsigned __int64 v46; // rax
  char *v47; // rsi
  size_t v48; // r13
  char *v49; // rax
  void *v50; // rax
  void *v51; // rax
  const char **v52; // r14
  char v53; // al
  _BYTE *v54; // rsi
  const char *v55; // r12
  char *v56; // rax
  char *v57; // rsi
  __int64 v58; // r13
  size_t v59; // rbp
  __int64 v60; // r15
  char *v61; // rax
  void *idati; // rax
  char *v63; // rax
  __int64 v64; // rbp
  size_t v65; // r15
  __int64 v66; // r13
  __int64 func; // rax
  void *v68; // rdi
  char *v69; // rdi
  void *v70; // r13
  void *v71; // rbp
  char *v72; // r15
  void *v73; // rdi
  void *v74; // rdi
  unsigned __int64 v75; // r15
  __int64 v78; // [rsp+10h] [rbp-128h]
  char v80; // [rsp+1Eh] [rbp-11Ah]
  char v81; // [rsp+1Fh] [rbp-119h]
  __int64 v82; // [rsp+28h] [rbp-110h] BYREF
  char *haystack; // [rsp+30h] [rbp-108h] BYREF
  __int128 v84; // [rsp+38h] [rbp-100h]
  void *src; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v86; // [rsp+58h] [rbp-E0h]
  _QWORD v87[4]; // [rsp+70h] [rbp-C8h] BYREF
  void *v88[4]; // [rsp+90h] [rbp-A8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v90; // [rsp+B8h] [rbp-80h] BYREF
  int v91; // [rsp+C8h] [rbp-70h]
  void *v92; // [rsp+D0h] [rbp-68h]
  __int128 v93; // [rsp+D8h] [rbp-60h]
  char v94; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v95; // [rsp+F8h] [rbp-40h]

  v80 = a5;
  v95 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 1480);
  if ( (unsigned int)getinf(5) == 10
    && (getinf(57) & 0xF) == 1
    && !(unsigned __int8)getinf_flag(3, 4)
    && !(unsigned __int8)is_spec_ea(a2) )
  {
    v28 = 0;
    if ( !(unsigned __int8)is_public_name(a2) )
      return v28;
  }
  haystack = nullptr;
  v84 = 0;
  if ( a3 )
  {
    v8 = nullptr;
    v9 = strlen(a3);
    v10 = v9;
    if ( v9 )
    {
      v48 = v9 + 1;
      v49 = (char *)qvector_reserve(&haystack, 0, v9 + 1, 1);
      *(_QWORD *)&v84 = v48;
      haystack = v49;
      memmove(v49, a3, v10);
      haystack[v10] = 0;
      v8 = haystack;
    }
  }
  else
  {
    ea_name = get_ea_name(&haystack, a2, 512, 0);
    v8 = haystack;
    if ( ea_name <= 0 )
      goto LABEL_46;
  }
  if ( (int)demangle_name(&haystack, v8, 104857607, 2) <= 0 )
  {
    v27 = sub_630FC0(0, &haystack);
    if ( v27 && !a5 )
    {
      v15 = v27 == 4;
      v50 = &qword_58 + 1;
      if ( v15 )
        v50 = &qword_48 + 1;
      v88[0] = v50;
      copy_tinfo_t(a4);
      v28 = 2;
      clear_tinfo_t(v88);
      v8 = haystack;
    }
    else
    {
      v8 = haystack;
      v28 = 0;
    }
    goto LABEL_37;
  }
  v11 = getinf(10);
  v8 = haystack;
  if ( (v11 & 0x8000) == 0 )
  {
    if ( (_QWORD)v84 )
    {
      v12 = strstr(haystack, "::");
      if ( v12 )
      {
        if ( v12 - v8 != -1 )
        {
          v13 = strstr(v8, " __thiscall ");
          if ( !v13 || v13 - v8 == -1 )
          {
LABEL_46:
            v28 = 0;
            goto LABEL_37;
          }
        }
      }
    }
  }
  v14 = strstr(v8, "operator delete");
  if ( !v14 )
  {
    v61 = strstr(v8, "operator new");
    if ( v61 )
    {
      v15 = v61[12] == 91;
      v61[8] = 95;
      if ( v15 && v61[13] == 93 )
        *((_WORD *)v61 + 6) = 24415;
      sub_5EA2E0(v8);
    }
    v81 = 0;
    goto LABEL_16;
  }
  v15 = v14[15] == 91;
  v14[8] = 95;
  if ( v15 && v14[16] == 93 )
    *(_WORD *)(v14 + 15) = 24415;
  if ( v8 + 2 >= v14 || *(v14 - 1) != 58 || *(v14 - 2) != 58 )
    goto LABEL_15;
  v40 = v14 - 2;
  if ( v8 >= v14 - 2 )
    goto LABEL_75;
  v41 = 0;
  while ( 1 )
  {
    v42 = *v40;
    if ( *v40 != 32 )
    {
      if ( v42 == 62 )
        ++v41;
      else
        v41 -= v42 == 60;
      goto LABEL_71;
    }
    if ( !v41 )
      break;
LABEL_71:
    if ( --v40 == v8 )
      goto LABEL_75;
  }
  ++v40;
LABEL_75:
  if ( (_QWORD)v84 )
  {
    v43 = v84 - 1;
    v44 = v14 - v40;
    v45 = v40 - v8;
    if ( v40 - v8 < (unsigned __int64)(v84 - 1) )
    {
      if ( v44 )
      {
        v46 = v45 + v44;
        v47 = v8;
        if ( v46 < v43 )
        {
          v75 = v43 - v46;
          memmove(v40, &v8[v46], v43 - v46);
          v45 += v75;
          v47 = haystack;
        }
        if ( *((_QWORD *)&v84 + 1) < (unsigned __int64)(v45 + 1) )
        {
          haystack = (char *)qvector_reserve(&haystack, v47, v45 + 1, 1);
          v47 = haystack;
        }
        *(_QWORD *)&v84 = v45 + 1;
        v47[v45] = 0;
      }
    }
  }
LABEL_15:
  sub_5EA2E0(v8);
  v81 = 1;
LABEL_16:
  v78 = v7;
  v16 = 20;
  v17 = (const char **)&off_2B087A0;
  while ( 2 )
  {
    v18 = v16;
    if ( strncmp(v8, *v17, v16) )
    {
      if ( algn_2B087E8 == (_BYTE *)++v17 )
        break;
      goto LABEL_18;
    }
    ++v17;
    v19 = strlen(v8);
    memmove(v8, &v8[v18], v19 + 1 - v18);
    if ( algn_2B087E8 != (_BYTE *)v17 )
    {
LABEL_18:
      v16 = strlen(*v17);
      continue;
    }
    break;
  }
  if ( v81 )
  {
    v20 = strchr(v8, 40);
    v21 = strstr(v8, "void");
    if ( !v21 || v20 < v21 )
    {
      v57 = haystack;
      if ( (_QWORD)v84 )
      {
        v58 = v84 + 5;
        v59 = v84 - 1;
        v60 = v84 + 4;
        if ( *((_QWORD *)&v84 + 1) >= (unsigned __int64)(v84 + 5) )
          goto LABEL_117;
      }
      else
      {
        if ( *((_QWORD *)&v84 + 1) > 5u )
        {
          *(_QWORD *)&v84 = 6;
          haystack[5] = 0;
LABEL_134:
          v63 = haystack;
          *(_DWORD *)haystack = 1684631414;
          v63[4] = 32;
          v8 = haystack;
          goto LABEL_24;
        }
        v59 = 0;
        v58 = 6;
        v60 = 5;
      }
      haystack = (char *)qvector_reserve(&haystack, haystack, v58, 1);
      v57 = haystack;
LABEL_117:
      *(_QWORD *)&v84 = v58;
      v57[v60] = 0;
      if ( v59 )
        memmove(haystack + 5, haystack, v59);
      goto LABEL_134;
    }
  }
LABEL_24:
  v22 = strlen(v8);
  v23 = &v8[v22];
  if ( v22 > 7 && !strcmp(v23 - 6, ")const") )
  {
    *(v23 - 5) = 0;
    v23 = &v8[strlen(v8)];
  }
  if ( v8 < v23 && *(v23 - 1) == 93 )
  {
    v52 = (const char **)&off_2B08780;
    do
    {
      if ( (unsigned __int64)(v23 - v8) > 7 && *(v23 - 7) == 91 && !strncmp(v23 - 6, *v52, 5u) )
      {
        v23 -= 7;
        if ( v8 < v23 )
        {
          do
          {
            if ( *(v23 - 1) != 32 )
              break;
            --v23;
          }
          while ( v8 != v23 );
        }
        *v23 = 0;
      }
      ++v52;
    }
    while ( v52 != (const char **)algn_2B08790 );
  }
  v24 = strchr(v8, 96);
  if ( v24 )
  {
    v25 = (const char **)off_2B08760;
    for ( i = 22; strncmp(v24, *v25, i); i = strlen(*v25) )
    {
      if ( algn_2B08778 == (_BYTE *)++v25 )
        goto LABEL_41;
    }
    v30 = &v24[i];
    v31 = strlen(v30);
    memmove(v24, v30, v31 + 1);
LABEL_41:
    v32 = (const char **)off_2B08740;
    for ( j = 29; ; j = strlen(*v32) )
    {
      if ( !strncmp(v24, *v32, j) )
      {
        v8 = haystack;
        v28 = 0;
        goto LABEL_37;
      }
      if ( off_2B08760 == (char **)++v32 )
        break;
    }
    v28 = strncmp(v24, "`vftable'", 9u);
    if ( !v28 )
    {
      if ( a5 )
        goto LABEL_49;
      v88[0] = nullptr;
      get_stock_tinfo(v88, 7);
      copy_tinfo_t(a4);
      v28 = 2;
      clear_tinfo_t(v88);
      v8 = haystack;
      goto LABEL_37;
    }
    v35 = *v24;
    if ( *v24 == 96 )
    {
      do
      {
        if ( (unsigned int)v35 > 0x7F )
        {
          *v24 = 95;
        }
        else
        {
          if ( !isalnum(v35) )
          {
            if ( v35 == 95 )
              goto LABEL_84;
            *v24 = 95;
          }
          if ( v35 == 39 )
            break;
        }
LABEL_84:
        v35 = *++v24;
      }
      while ( v35 );
    }
  }
  v36 = haystack;
  v82 = 0;
  if ( (getinf(57) & 0xF) == 6 && (unsigned __int8)getinf_flag(3, 4) && strstr(v36, "va_list") )
  {
    idati = *(void **)(v78 + 8);
    v88[1] = (void *)"va_list";
    LOWORD(v88[2]) = 256;
    if ( !idati )
      idati = (void *)get_idati(v36, "va_list");
    v88[0] = idati;
    if ( (unsigned __int8)create_tinfo(&v82, 61, 61, v88) )
    {
      v88[2] = (void *)(a2 | 0xFFFFFFFF00000000LL);
      *(__m128i *)v88 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B08550, (__m128i)(unsigned __int64)&v82);
      lower_type(*(_QWORD *)(v78 + 8), &v82, 0, v88);
    }
  }
  src = nullptr;
  v86 = 0;
  if ( v36 )
  {
    v37 = strlen(v36);
    v38 = v37 + 1;
    v39 = v37;
    src = (void *)qvector_reserve(&src, 0, v37 + 1, 1);
    *(_QWORD *)&v86 = v38;
    memmove(src, v36, v39);
    *((_BYTE *)src + v39) = 0;
    v36 = (const char *)src;
  }
  if ( !(unsigned __int8)parse_decl(a4, 0, *(_QWORD *)(v78 + 8), v36, 20873) )
  {
    v53 = getinf_flag(3, 4);
    v54 = src;
    v55 = "_QWORD ";
    if ( !v53 )
      v55 = "_DWORD ";
    if ( (_QWORD)v86 )
    {
      v64 = v86 + 7;
      v65 = v86 - 1;
      v66 = v86 + 6;
      if ( *((_QWORD *)&v86 + 1) >= (unsigned __int64)(v86 + 7) )
        goto LABEL_136;
    }
    else
    {
      if ( *((_QWORD *)&v86 + 1) > 7u )
      {
        *(_QWORD *)&v86 = 8;
        *((_BYTE *)src + 7) = 0;
        goto LABEL_113;
      }
      v65 = 0;
      v64 = 8;
      v66 = 7;
    }
    src = (void *)qvector_reserve(&src, src, v64, 1);
    v54 = src;
LABEL_136:
    *(_QWORD *)&v86 = v64;
    v54[v66] = 0;
    if ( v65 )
      memmove((char *)src + 7, src, v65);
LABEL_113:
    v56 = (char *)src;
    *(_DWORD *)src = *(_DWORD *)v55;
    *(_DWORD *)(v56 + 3) = *(_DWORD *)(v55 + 3);
    v80 = parse_decl(a4, 0, *(_QWORD *)(v78 + 8), src, 20873);
    if ( v80 )
      goto LABEL_55;
    goto LABEL_56;
  }
LABEL_55:
  if ( !(unsigned __int8)*a4 )
    goto LABEL_56;
  if ( (get_tinfo_property(*a4, 2) & 0xF) == 0xC )
  {
    func = get_func(a2);
    if ( func )
    {
      if ( (*(_BYTE *)(func + 8) & 1) != 0 )
      {
LABEL_150:
        memset(v88, 0, sizeof(v88));
        v68 = (void *)*a4;
        ptr = nullptr;
        v90 = 0u;
        v91 = 0;
        v92 = nullptr;
        v94 = 16;
        v93 = 0;
        get_tinfo_details(v68, 140, v88);
        LODWORD(v88[3]) |= 2u;
        v87[0] = 1;
        copy_tinfo_t(&ptr);
        clear_tinfo_t(v87);
        cleanup_argloc(&v90);
        create_tinfo(a4, 12, 12, v88);
        if ( v92 )
        {
          *(_QWORD *)&v93 = 0;
          qfree(v92);
        }
        cleanup_argloc(&v90);
        clear_tinfo_t(&ptr);
        v69 = (char *)v88[0];
        if ( v88[0] )
        {
          v70 = v88[1];
          if ( v88[1] )
          {
            v71 = nullptr;
            do
            {
              v72 = &v69[80 * (_QWORD)v71];
              clear_tinfo_t(v72 + 64);
              v73 = *((void **)v72 + 5);
              if ( v73 )
              {
                *((_QWORD *)v72 + 6) = 0;
                qfree(v73);
              }
              v74 = *((void **)v72 + 2);
              if ( v74 )
              {
                *((_QWORD *)v72 + 3) = 0;
                qfree(v74);
              }
              v71 = (char *)v71 + 1;
              cleanup_argloc(v72);
              v69 = (char *)v88[0];
            }
            while ( v70 != v71 );
          }
          v88[1] = nullptr;
          qfree(v69);
        }
      }
    }
    else if ( (get_aflags(a2) & 0x400000) != 0 )
    {
      goto LABEL_150;
    }
LABEL_96:
    v87[0] = off_2B08668;
    v87[1] = 4;
    v87[2] = a1;
    memset(v88, 0, sizeof(v88));
    ptr = nullptr;
    v91 = 0;
    v90 = 0;
    visit_subtypes((int)v87, (int)v88, (int)a4, 0, 0);
    if ( (v91 & 1) != 0 )
    {
      v51 = (void *)*a4;
      *a4 = v88[0];
      v88[0] = v51;
    }
    if ( ptr )
    {
      *(_QWORD *)&v90 = 0;
      qfree(ptr);
    }
    if ( v88[1] )
    {
      v88[2] = nullptr;
      qfree(v88[1]);
    }
    v28 = 2;
    clear_tinfo_t(v88);
    goto LABEL_57;
  }
  if ( !v80 )
    goto LABEL_96;
LABEL_56:
  v28 = 0;
LABEL_57:
  if ( src )
  {
    *(_QWORD *)&v86 = 0;
    qfree(src);
  }
  clear_tinfo_t(&v82);
LABEL_49:
  v8 = haystack;
LABEL_37:
  if ( v8 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v8);
  }
  return v28;
}

