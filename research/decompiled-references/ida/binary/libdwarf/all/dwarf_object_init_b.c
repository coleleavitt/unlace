__int64 __fastcall dwarf_object_init_b(_QWORD *a1, Dwarf_Error *a2, __int64 a3, int a4, _QWORD *a5, Dwarf_Error *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 debug; // r15
  __m128i si128; // xmm0
  char v14; // al
  __m128i v15; // xmm0
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rbp
  char **p_s1; // rbx
  __int64 (__fastcall **v20)(__int64, __int64, char **, int *); // rax
  __int64 v21; // rdi
  int v22; // eax
  char *v23; // rbp
  int target_group_from_map; // eax
  unsigned int v25; // r13d
  unsigned int v26; // eax
  int v27; // r12d
  int v28; // eax
  int v29; // r8d
  int v30; // esi
  int v31; // eax
  __m128i v32; // xmm6
  __m128 v33; // xmm0
  int section; // eax
  __int64 v35; // r13
  unsigned __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // r13
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 (__fastcall **v41)(__int64, __int64, __int128 *, __int64 *); // rax
  __int64 v42; // rdi
  int v43; // eax
  int v44; // eax
  _BYTE *v45; // rbp
  __int64 v46; // r13
  int v47; // r12d
  __int64 v48; // rdi
  int v49; // eax
  char *v50; // rbx
  int v51; // r15d
  int v52; // eax
  unsigned int v53; // edx
  int v54; // eax
  __int64 v55; // rax
  const char **v56; // r15
  __int64 v57; // r12
  int v58; // eax
  int v59; // r12d
  __int64 v60; // rax
  __m128i v61; // xmm2
  __m128i v62; // xmm0
  __m128 v63; // xmm1
  __int64 v64; // rcx
  char *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  Dwarf_Unsigned v68; // rbx
  Dwarf_Error v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rsi
  Dwarf_Debug *v73; // rbx
  char *v74; // rsi
  int v75; // r12d
  int xu_index_header; // eax
  int v77; // r12d
  unsigned int v78; // edx
  int v79; // eax
  unsigned int v80; // eax
  unsigned int v82; // [rsp+10h] [rbp-268h]
  Dwarf_Debug v83; // [rsp+10h] [rbp-268h]
  unsigned __int64 v84; // [rsp+18h] [rbp-260h]
  unsigned __int64 v85; // [rsp+20h] [rbp-258h]
  unsigned __int64 v86; // [rsp+28h] [rbp-250h]
  unsigned __int64 v87; // [rsp+28h] [rbp-250h]
  int v88; // [rsp+30h] [rbp-248h]
  unsigned int v89; // [rsp+38h] [rbp-240h]
  __m128i v90; // [rsp+40h] [rbp-238h] BYREF
  void *ptr; // [rsp+50h] [rbp-228h]
  int v92; // [rsp+58h] [rbp-220h]
  int v93; // [rsp+5Ch] [rbp-21Ch]
  __int64 v94; // [rsp+60h] [rbp-218h]
  int v95; // [rsp+68h] [rbp-210h]
  int v96; // [rsp+6Ch] [rbp-20Ch]
  _BYTE *v97; // [rsp+70h] [rbp-208h]
  char **v98; // [rsp+78h] [rbp-200h]
  int v99; // [rsp+8Ch] [rbp-1ECh] BYREF
  unsigned int v100; // [rsp+90h] [rbp-1E8h] BYREF
  int v101; // [rsp+94h] [rbp-1E4h] BYREF
  __int64 v102; // [rsp+98h] [rbp-1E0h] BYREF
  __int64 v103; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-1D0h] BYREF
  char *s1; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v106; // [rsp+B8h] [rbp-1C0h]
  unsigned __int64 v107; // [rsp+D8h] [rbp-1A0h]
  __int64 v108; // [rsp+F8h] [rbp-180h] BYREF
  __int128 v109; // [rsp+100h] [rbp-178h] BYREF
  __int128 v110; // [rsp+110h] [rbp-168h]
  __int128 v111; // [rsp+120h] [rbp-158h]
  __int128 v112; // [rsp+130h] [rbp-148h]
  __int128 v113; // [rsp+140h] [rbp-138h]
  _BYTE v114[232]; // [rsp+150h] [rbp-128h] BYREF
  unsigned __int64 v115; // [rsp+238h] [rbp-40h]

  v115 = __readfsqword(0x28u);
  if ( !a5 )
  {
    _dwarf_error(0, a6, 465);
    return 1;
  }
  *a5 = 0;
  v9 = (__int64)a5;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(a1[1] + 32LL))(*a1);
  debug = _dwarf_get_debug(v10);
  if ( !debug || *(_QWORD *)debug != 3959286781LL )
  {
    dwarf_finish((Dwarf_Debug)debug, a2);
    _dwarf_error(0, a6, 23);
    return 1;
  }
  *(_QWORD *)(debug + 56) = a3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_94820);
  *(_QWORD *)(debug + 16) = debug;
  *(_QWORD *)(debug + 48) = a2;
  v14 = byte_B8D5C;
  *(__m128i *)(debug + 8312) = si128;
  v15 = _mm_load_si128((const __m128i *)&xmmword_94830);
  *(_BYTE *)(debug + 281) = v14;
  *(_QWORD *)(debug + 8344) = 12288;
  *(_QWORD *)(debug + 24) = debug;
  *(_QWORD *)(debug + 32) = 0;
  *(_QWORD *)(debug + 40) = debug;
  *(_QWORD *)(debug + 8) = a1;
  *(_QWORD *)(debug + 240) = v10;
  *(_DWORD *)(debug + 200) = a4;
  *(_QWORD *)(debug + 8296) = dwarf_memcpy_noswap_bytes;
  *(__m128i *)(debug + 8328) = v15;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(a1[1] + 8LL))(*a1) == 1 )
  {
    *(_BYTE *)(debug + 8360) = 1;
    *(_QWORD *)(debug + 8296) = dwarf_memcpy_swap_bytes;
  }
  else
  {
    *(_BYTE *)(debug + 8360) = 0;
  }
  *(_BYTE *)(debug + 232) = (*(__int64 (__fastcall **)(_QWORD))(a1[1] + 16LL))(*a1);
  *(_BYTE *)(debug + 280) = (*(__int64 (__fastcall **)(_QWORD))(a1[1] + 24LL))(*a1);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(a1[1] + 40LL))(*a1);
  v17 = *(_QWORD *)(debug + 224) == 0;
  *(_DWORD *)(debug + 208) = 0;
  v84 = v16;
  *(_DWORD *)(debug + 212) = v16;
  if ( !v17 )
  {
    _dwarf_error(debug, a6, 390);
    goto LABEL_56;
  }
  if ( !v16 )
  {
LABEL_32:
    v30 = 1;
    goto LABEL_57;
  }
  v95 = 0;
  v82 = 0;
  v18 = 0;
  v89 = 3;
  v93 = 0;
  v96 = 0;
  v94 = v9;
  p_s1 = &s1;
  v90 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)".group", (__m128i)(unsigned __int64)".group");
  do
  {
    v20 = (__int64 (__fastcall **)(__int64, __int64, char **, int *))a1[1];
    v21 = *a1;
    *(_OWORD *)p_s1 = 0;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    *((_OWORD *)p_s1 + 1) = 0;
    *((_OWORD *)p_s1 + 2) = 0;
    *((_OWORD *)p_s1 + 3) = 0;
    *((_OWORD *)p_s1 + 4) = 0;
    v22 = (*v20)(v21, v18, p_s1, &v99);
    if ( v22 == -1 )
    {
      v9 = v94;
      goto LABEL_56;
    }
    if ( v22 == 1 )
    {
      v45 = v114;
      _dwarf_error(debug, a6, v99);
LABEL_102:
      dwarfstring_constructor(v45);
      if ( a6 && *a6 )
      {
        v68 = dwarf_errno(*a6);
        dwarf_errmsg(*a6);
        dwarfstring_append();
        v69 = *a6;
        dwarf_dealloc_error(debug, *a6);
        *a6 = nullptr;
        _dwarf_free_all_of_one_debug((void *)debug);
        if ( v68 )
        {
          v70 = dwarfstring_string(v45, (const char *)v69);
          _dwarf_error_string(0, a6, v68, v70);
          dwarfstring_destructor(v45);
        }
      }
      else
      {
        _dwarf_free_all_of_one_debug((void *)debug);
      }
      return 1;
    }
    if ( v106 != 17 )
    {
      v23 = s1;
      if ( !(unsigned int)sub_2FE50(s1, v106, &v101) )
        goto LABEL_28;
      target_group_from_map = _dwarf_section_get_target_group_from_map(debug, v82, &v100, a6);
      if ( !target_group_from_map )
      {
        v25 = v100;
        v26 = v100;
        goto LABEL_17;
      }
      if ( target_group_from_map == 1 )
        goto LABEL_133;
      v26 = v100;
      v25 = 0;
LABEL_17:
      if ( !v26 && (unsigned int)_dwarf_dwo_groupnumber_given_name(v23) )
        v100 = 1;
      v27 = v106;
      if ( (_DWORD)v106 == 4 )
        goto LABEL_28;
      if ( (unsigned int)_dwarf_startswith(v23, ".rela.") )
        goto LABEL_28;
      if ( (unsigned int)_dwarf_startswith(v23, ".rel.") )
        goto LABEL_28;
      if ( v27 == 9 )
        goto LABEL_28;
      v101 = 0;
      if ( !strcmp(v23, ".strtab") || !strcmp(v23, ".symtab") || v25 )
        goto LABEL_28;
      v28 = _dwarf_insert_in_group_map(debug, v100, v82, v23, a6);
      if ( !v28 )
      {
        if ( v100 == 1 )
          ++v96;
        else
          v95 += v100 == 2;
        goto LABEL_28;
      }
      v9 = v94;
      v77 = v28;
LABEL_132:
      if ( v77 == 1 )
      {
LABEL_133:
        v45 = v114;
        goto LABEL_102;
      }
LABEL_56:
      v30 = 0;
      goto LABEL_57;
    }
    v32 = _mm_load_si128(&v90);
    memset(v114, 0, sizeof(v114));
    v33 = _mm_loadh_ps((const double *)&v108);
    *(_QWORD *)&v114[80] = 1;
    *(_QWORD *)&v114[24] = v18;
    *(_QWORD *)&v114[200] = v18;
    v114[224] = 1;
    *(__m128 *)&v114[8] = v33;
    *(__m128i *)&v114[184] = v32;
    section = _dwarf_load_section(debug, v114, a6);
    if ( section )
    {
      v9 = v94;
      v77 = section;
      _dwarf_malloc_section_free(v114);
      goto LABEL_132;
    }
    v35 = *(_QWORD *)v114;
    if ( !*(_QWORD *)v114 )
    {
      v45 = v114;
      _dwarf_error(debug, a6, 390);
      goto LABEL_102;
    }
    if ( v108 != 4
      || (v85 = *(_QWORD *)v114 + *(_QWORD *)&v114[8],
          *(_QWORD *)v114 + *(_QWORD *)&v114[8] < (unsigned __int64)(*(_QWORD *)v114 + 4LL))
      || (*(_QWORD *)&v109 = 0,
          v86 = v107,
          (*(void (__fastcall **)(__int128 *, _QWORD, __int64))(debug + 8296))(&v109, *(_QWORD *)v114, 4),
          v36 = v86,
          (_QWORD)v109 != 1)
      && (_QWORD)v109 != 0x1000000 )
    {
      v45 = v114;
      goto LABEL_101;
    }
    v87 = v86 >> 2;
    if ( v36 > 7 )
    {
      v97 = v114;
      v37 = v35 + v108;
      v38 = 1;
      v92 = 0;
      ptr = &v104;
      v98 = p_s1;
      while ( 1 )
      {
        v104 = 0;
        if ( v85 < v37 + 4 )
          break;
        *(_QWORD *)&v109 = 0;
        (*(void (__fastcall **)(__int128 *, __int64, __int64))(debug + 8296))(&v109, v37, 4);
        v40 = v109;
        v104 = v109;
        if ( v84 < (unsigned __int64)v109 )
        {
          *(_QWORD *)&v109 = 0;
          _dwarf_memcpy_swap_bytes(&v109, ptr, 4, v39);
          v40 = v109;
          if ( v84 < (unsigned __int64)v109 )
            break;
          v104 = v109;
        }
        v41 = (__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64 *))a1[1];
        v42 = *a1;
        v109 = 0;
        LODWORD(v102) = 0;
        LODWORD(v103) = 0;
        v110 = 0;
        v111 = 0;
        v112 = 0;
        v113 = 0;
        v43 = (*v41)(v42, v40, &v109, &v102);
        if ( v43 != -1 )
        {
          if ( v43 == 1 )
          {
            v45 = v97;
            _dwarf_malloc_section_free(v97);
            _dwarf_error(debug, a6, (int)v102);
            goto LABEL_102;
          }
          if ( (unsigned int)sub_2FE50((char *)v109, SDWORD2(v109), &v103) )
          {
            v44 = _dwarf_insert_in_group_map(debug, v89, (unsigned int)v104, v109, a6);
            if ( v44 )
            {
              v9 = v94;
              v77 = v44;
              _dwarf_malloc_section_free(v97);
              goto LABEL_132;
            }
            v92 = 1;
            v37 += 4;
          }
        }
        if ( v87 == ++v38 )
        {
          p_s1 = v98;
          _dwarf_malloc_section_free(v97);
          v78 = v93;
          if ( !v93 )
            v78 = v89;
          v93 = v78;
          if ( v92 )
          {
            ++*(_DWORD *)(debug + 208);
            ++v89;
          }
          goto LABEL_28;
        }
      }
      v45 = v97;
LABEL_101:
      _dwarf_malloc_section_free(v45);
      _dwarf_error(debug, a6, 390);
      goto LABEL_102;
    }
    _dwarf_malloc_section_free(v114);
    v80 = v93;
    if ( !v93 )
      v80 = v89;
    v93 = v80;
LABEL_28:
    v18 = ++v82;
  }
  while ( v82 < v84 );
  v29 = v96;
  v9 = v94;
  if ( !v95 )
  {
    v79 = 1;
    if ( v93 )
      v79 = v93;
    v30 = v79;
    if ( !v96 )
      goto LABEL_57;
    v31 = *(_DWORD *)(debug + 208);
LABEL_31:
    *(_DWORD *)(debug + 208) = v31 + 1;
    goto LABEL_32;
  }
  v30 = 2;
  v31 = *(_DWORD *)(debug + 208) + 1;
  *(_DWORD *)(debug + 208) = v31;
  if ( v29 )
    goto LABEL_31;
LABEL_57:
  if ( !*(_DWORD *)(debug + 200) )
    *(_DWORD *)(debug + 200) = v30;
  ptr = calloc(v84 + 1, 8u);
  if ( !ptr )
  {
    _dwarf_error(debug, a6, 248);
    goto LABEL_133;
  }
  if ( v84 )
  {
    v92 = 0;
    v46 = 0;
    v45 = v114;
    v83 = (Dwarf_Debug)debug;
    v90.m128i_i64[0] = v9;
    while ( 1 )
    {
      LODWORD(v104) = 0;
      LODWORD(s1) = 0;
      LODWORD(v109) = 0;
      v54 = _dwarf_section_get_target_group_from_map(v83, (unsigned int)v46, &s1, a6);
      if ( v54 )
      {
        if ( v54 == 1 )
        {
          debug = (__int64)v83;
          free(ptr);
          goto LABEL_102;
        }
        v47 = 0;
      }
      else
      {
        v47 = (int)s1;
      }
      v48 = *a1;
      memset(v114, 0, 80);
      v49 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64 *))a1[1])(v48, v46, v114, &v104);
      if ( v49 == -1 )
      {
        debug = (__int64)v83;
        free(ptr);
        goto LABEL_114;
      }
      if ( v49 == 1 )
        goto LABEL_112;
      v50 = *(char **)v114;
      if ( !(_DWORD)s1 )
        LODWORD(s1) = _dwarf_dwo_groupnumber_given_name(*(char **)v114) == -1;
      v88 = sub_2FE50(v50, *(int *)&v114[8], &v109);
      if ( !v88 )
        goto LABEL_77;
      v51 = *(_DWORD *)&v114[8];
      if ( *(_DWORD *)&v114[8] == 4 || (unsigned int)_dwarf_startswith(v50, ".rela.") )
      {
        LODWORD(v109) = 1;
      }
      else
      {
        v52 = _dwarf_startswith(v50, ".rel.");
        LODWORD(v109) = 0;
        if ( !v52 && v51 != 9 )
        {
          if ( strcmp(v50, ".strtab") )
          {
            if ( strcmp(v50, ".symtab") )
            {
              v53 = *((_DWORD *)v83 + 50);
              if ( v53 != v47
                && ((_DWORD)s1 != 1 || v53 <= 2 || (unsigned int)_dwarf_section_in_group_by_name(v83, v50)) )
              {
                goto LABEL_77;
              }
            }
          }
        }
      }
      v55 = *((unsigned int *)v83 + 2692);
      if ( (_DWORD)v55 )
      {
        v56 = (const char **)((char *)v83 + 8368);
        v57 = (__int64)v83 + 48 * v55 + 8368;
        while ( strcmp(v50, *v56) )
        {
          v56 += 6;
          if ( (const char **)v57 == v56 )
            goto LABEL_86;
        }
      }
      else
      {
LABEL_86:
        v58 = _dwarf_enter_section_in_de_debug_sections_array(v83, v50, v46, (unsigned int)s1, &v104);
        if ( v58 )
        {
          if ( v58 != -1 )
          {
LABEL_112:
            debug = (__int64)v83;
            free(ptr);
            _dwarf_error(v83, a6, (int)v104);
            goto LABEL_102;
          }
          v59 = *(_DWORD *)&v114[8];
          if ( *(_DWORD *)&v114[8] == 4 || (unsigned int)_dwarf_startswith(v50, ".rela.") )
            goto LABEL_92;
          v88 = _dwarf_startswith(v50, ".rel.");
          if ( v88 )
          {
            v88 = 0;
LABEL_92:
            LODWORD(v109) = v88;
            if ( *(_QWORD *)&v114[56] >= v84 )
            {
              debug = (__int64)v83;
              free(ptr);
              _dwarf_error(v83, a6, 88);
              goto LABEL_102;
            }
            v60 = *((_QWORD *)ptr + *(_QWORD *)&v114[56]);
            if ( v60 )
            {
              *(_QWORD *)(v60 + 120) = v46;
              v61 = _mm_loadl_epi64((const __m128i *)&v114[48]);
              v62 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v114[24]), v61);
              v63 = _mm_loadh_ps((const double *)&v114[72]);
              *(_BYTE *)(v60 + 225) = v88;
              *(__m128 *)(v60 + 136) = v63;
              *(__m128i *)(v60 + 152) = v62;
              *(_QWORD *)(v60 + 168) = v61.m128i_i64[0];
            }
            goto LABEL_77;
          }
          if ( v59 == 9 )
            goto LABEL_92;
        }
        else
        {
          v64 = (unsigned int)(*((_DWORD *)v83 + 2692) - 1);
          v65 = (char *)v83 + 48 * v64;
          v66 = *((_QWORD *)v65 + 1048);
          if ( *(_QWORD *)(v66 + 24) )
          {
            debug = (__int64)v83;
            _dwarf_error(v83, a6, *((int *)v65 + 2099));
LABEL_136:
            free(ptr);
            goto LABEL_102;
          }
          if ( *(_QWORD *)&v114[40] )
          {
            v71 = (unsigned int)s1;
            *(_QWORD *)(v66 + 24) = v46;
            v72 = *(_QWORD *)&v114[40];
            *(_QWORD *)(v66 + 80) = v71;
            *(_QWORD *)(v66 + 8) = v72;
            *(_QWORD *)(v66 + 32) = *(_QWORD *)&v114[24];
            *(_QWORD *)(v66 + 112) = *(_QWORD *)&v114[48];
            BYTE1(v71) = v114[17];
            *(_QWORD *)(v66 + 208) = *(_QWORD *)&v114[16];
            if ( (v71 & 0x800) != 0 )
              *(_BYTE *)(v66 + 106) = 1;
            *(_QWORD *)(v66 + 16) = *(_QWORD *)&v114[72];
            *(_QWORD *)(v66 + 216) = *(_QWORD *)&v114[64];
            v66 = *((_QWORD *)v83 + 6 * v64 + 1048);
          }
          else
          {
            v67 = *((int *)v65 + 2100);
            if ( (_DWORD)v67 )
            {
              debug = (__int64)v83;
              _dwarf_error(v83, a6, v67);
              goto LABEL_136;
            }
          }
          *((_QWORD *)ptr + v46) = v66;
          v92 += *((_DWORD *)v83 + 12 * v64 + 2101);
        }
      }
LABEL_77:
      if ( v84 == ++v46 )
      {
        debug = (__int64)v83;
        v73 = (Dwarf_Debug *)v90.m128i_i64[0];
        free(ptr);
        if ( !v92 )
          goto LABEL_114;
        if ( *((_QWORD *)v83 + 862) || *((_QWORD *)v83 + 891) )
        {
          v102 = 0;
          v103 = 0;
          v104 = 0;
          s1 = nullptr;
          *(_QWORD *)&v109 = 0;
          *(_QWORD *)v114 = 0;
          if ( *((_QWORD *)v83 + 862) )
          {
            v74 = "cu";
            v75 = 0;
            goto LABEL_124;
          }
          while ( 1 )
          {
            v102 = 0;
            v74 = "tu";
            v75 = 1;
            v103 = 0;
            v104 = 0;
            s1 = nullptr;
            *(_QWORD *)&v109 = 0;
            *(_QWORD *)v114 = 0;
            if ( !*((_QWORD *)v83 + 891) )
              break;
LABEL_124:
            xu_index_header = dwarf_get_xu_index_header(
                                v83,
                                (__int64)v74,
                                (__int64)&v102,
                                (__int64)&v103,
                                (__int64)&v104,
                                (__int64)&s1,
                                (__int64)&v109,
                                (__int64)v114,
                                (__int64)a6);
            if ( xu_index_header == -1 )
            {
              if ( v75 == 1 )
                break;
            }
            else
            {
              if ( xu_index_header )
              {
                if ( xu_index_header == 1 )
                  goto LABEL_102;
                break;
              }
              if ( v75 )
              {
                *((_QWORD *)v83 + 1036) = v102;
                break;
              }
              *((_QWORD *)v83 + 1035) = v102;
            }
          }
        }
        _dwarf_harmless_init((char *)v83 + 10776);
        *v73 = v83;
        return 0;
      }
    }
  }
  free(ptr);
LABEL_114:
  _dwarf_free_all_of_one_debug((void *)debug);
  return 0xFFFFFFFFLL;
}

