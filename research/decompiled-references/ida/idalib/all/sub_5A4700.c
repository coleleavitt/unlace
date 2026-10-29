__int64 __fastcall sub_5A4700(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rsi
  __int64 v10; // r13
  int v11; // eax
  __int64 tinfo_property; // rax
  unsigned int v13; // ebx
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // r13d
  int v22; // r10d
  __int64 v23; // rax
  int v24; // edi
  int v25; // esi
  __int64 *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  size_t v31; // r13
  size_t v32; // r14
  __int64 v33; // r12
  size_t v34; // rdx
  __int64 v35; // rsi
  int v36; // ebx
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // eax
  int v41; // edx
  int v42; // eax
  unsigned __int64 v43; // rsi
  int v44; // eax
  __int64 *v45; // r13
  __int64 v46; // rdx
  char *v47; // rdi
  __int64 v48; // r13
  __int64 v49; // r12
  char *v50; // r14
  void *v51; // rdi
  void *v52; // rdi
  int v53; // r8d
  __int64 v54; // rdi
  int v55; // esi
  _QWORD *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  char v60; // al
  __int64 v61; // rbx
  char *v62; // rsi
  __int64 v63; // r11
  unsigned __int64 v64; // r10
  char v65; // r13
  unsigned __int64 v66; // rcx
  char enum_member_expr; // al
  const char *v68; // rsi
  int v69; // eax
  __int64 v70; // r9
  unsigned int v71; // eax
  __int64 v72; // rax
  int v73; // edi
  __int64 v74; // rax
  int v75; // esi
  _QWORD *v76; // rax
  __int64 v77; // rcx
  __int64 *v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // rax
  const char *v82; // rdx
  int v83; // eax
  char v84; // al
  __int64 v85; // rdx
  __int64 v86; // rdi
  __int64 custom_argloc; // rax
  char v88; // al
  __int64 v89; // rax
  void **v90; // rsi
  __int64 v91; // rdx
  int v92; // eax
  int v93; // edi
  __int64 v94; // rax
  int i; // esi
  _QWORD *v96; // rdx
  __int64 v97; // rcx
  __int64 *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rax
  int idcv_attr; // eax
  unsigned int v103; // eax
  __int64 v104; // rbx
  int v105; // eax
  __int64 v106; // rax
  __int64 (__fastcall *v107)(char *, __int64, char *, __int64 *, __int64 *); // rax
  __int64 v108; // rax
  char *v109; // rax
  char *v110; // rdx
  int v111; // edi
  __int64 *v112; // r13
  int k; // esi
  _QWORD *v114; // rdx
  __int64 v115; // rcx
  _QWORD *v116; // rdx
  __int64 v117; // rcx
  size_t v118; // rax
  __int64 v119; // r10
  size_t v120; // r9
  size_t v121; // r8
  __int64 v122; // rsi
  size_t v123; // rdx
  char v124; // al
  char v125; // r13
  char v126; // bl
  __int64 v127; // rcx
  bool v128; // zf
  __int128 *v129; // rdi
  __int64 v130; // rax
  __int64 tinfo_bitfield_value; // rax
  __int64 v132; // r13
  __int16 flags; // ax
  __int64 v134; // rax
  char *v135; // rdi
  __int64 v136; // rax
  int v137; // edi
  __int64 v138; // rax
  int j; // edx
  _QWORD *v140; // rcx
  __int64 v141; // rsi
  _QWORD *v142; // rbx
  __int64 v143; // rax
  __int64 v144; // rax
  char *v145; // r12
  __int64 v146; // r14
  __int64 v147; // [rsp+8h] [rbp-5D8h]
  unsigned __int64 v148; // [rsp+10h] [rbp-5D0h]
  __int64 v149; // [rsp+18h] [rbp-5C8h]
  __int64 v150; // [rsp+18h] [rbp-5C8h]
  __int64 v151; // [rsp+18h] [rbp-5C8h]
  unsigned __int8 v152; // [rsp+18h] [rbp-5C8h]
  size_t v153; // [rsp+18h] [rbp-5C8h]
  char v154; // [rsp+24h] [rbp-5BCh]
  char v155; // [rsp+24h] [rbp-5BCh]
  __int64 v156; // [rsp+28h] [rbp-5B8h]
  __int64 v157; // [rsp+28h] [rbp-5B8h]
  unsigned int *v158; // [rsp+28h] [rbp-5B8h]
  __int64 v159; // [rsp+28h] [rbp-5B8h]
  size_t v160; // [rsp+28h] [rbp-5B8h]
  __int64 v162; // [rsp+30h] [rbp-5B0h]
  int v163; // [rsp+38h] [rbp-5A8h]
  int v164; // [rsp+38h] [rbp-5A8h]
  size_t v165; // [rsp+38h] [rbp-5A8h]
  char *v166; // [rsp+40h] [rbp-5A0h]
  __int64 *v167; // [rsp+40h] [rbp-5A0h]
  unsigned __int64 v168; // [rsp+40h] [rbp-5A0h]
  unsigned __int64 v169; // [rsp+40h] [rbp-5A0h]
  char v170; // [rsp+40h] [rbp-5A0h]
  __int64 v171; // [rsp+48h] [rbp-598h]
  __int64 v172; // [rsp+48h] [rbp-598h]
  __int64 tinfo_size; // [rsp+50h] [rbp-590h]
  int v174; // [rsp+50h] [rbp-590h]
  __int64 v175; // [rsp+50h] [rbp-590h]
  char v176; // [rsp+6Eh] [rbp-572h] BYREF
  char v177; // [rsp+6Fh] [rbp-571h] BYREF
  __int64 v178; // [rsp+70h] [rbp-570h] BYREF
  __int64 v179; // [rsp+78h] [rbp-568h] BYREF
  __int64 v180; // [rsp+80h] [rbp-560h] BYREF
  __int64 v181; // [rsp+88h] [rbp-558h]
  __int64 v182; // [rsp+90h] [rbp-550h] BYREF
  __int64 v183; // [rsp+98h] [rbp-548h]
  void *v184; // [rsp+A0h] [rbp-540h] BYREF
  __int128 v185; // [rsp+A8h] [rbp-538h]
  __int128 v186; // [rsp+B8h] [rbp-528h]
  __int64 v187; // [rsp+C8h] [rbp-518h]
  int v188; // [rsp+D0h] [rbp-510h]
  void *ptr[3]; // [rsp+E0h] [rbp-500h] BYREF
  __int128 v190; // [rsp+F8h] [rbp-4E8h]
  void *v191; // [rsp+108h] [rbp-4D8h]
  __int128 v192; // [rsp+110h] [rbp-4D0h]
  _OWORD v193[3]; // [rsp+120h] [rbp-4C0h] BYREF
  __int64 v194; // [rsp+150h] [rbp-490h]
  int v195; // [rsp+158h] [rbp-488h]
  __int64 v196; // [rsp+160h] [rbp-480h]
  char v197; // [rsp+168h] [rbp-478h]
  unsigned __int64 v198; // [rsp+170h] [rbp-470h] BYREF
  __int64 v199; // [rsp+178h] [rbp-468h]
  char v200[8]; // [rsp+180h] [rbp-460h] BYREF
  __int128 v201; // [rsp+188h] [rbp-458h] BYREF
  __int64 v202; // [rsp+198h] [rbp-448h]
  char s; // [rsp+1A0h] [rbp-440h] BYREF
  char v204[1022]; // [rsp+1A1h] [rbp-43Fh] BYREF
  char v205; // [rsp+59Fh] [rbp-41h] BYREF
  _BYTE v206[8]; // [rsp+5A0h] [rbp-40h] BYREF
  unsigned __int64 v207; // [rsp+5A8h] [rbp-38h]

  v9 = *a3;
  v207 = __readfsqword(0x28u);
  v10 = qword_2CCB598;
  v156 = *(_QWORD *)(qword_2CCB598 + 1672);
  tinfo_size = get_tinfo_size(0, v9, 0);
  if ( (_DWORD)tinfo_size == -1 )
  {
    v13 = 0;
    set_qerrno(1640);
    return v13;
  }
  v166 = (char *)a2;
  if ( *(_BYTE *)a2 == 10 )
  {
    v166 = (char *)deref_idcv(a2, 0);
    if ( !v166 )
      return 0;
  }
  v11 = *(_DWORD *)a4;
  v154 = 0;
  if ( (*(_DWORD *)a4 & 0x40000000) == 0 )
  {
    if ( (v11 & 0x10) == 0 )
      *(_DWORD *)a4 = v11 | 0x40000000;
    v154 = 1;
  }
  tinfo_property = get_tinfo_property(*a3, 2);
  v180 = 0;
  v181 = 0;
  if ( *(_BYTE *)a2 == 2 )
  {
    v150 = tinfo_property;
    v17 = *(_QWORD *)(a2 + 8);
    cleanup_argloc(&v180);
    v15 = *(_DWORD *)a4;
    v181 = v17;
    LODWORD(v180) = 6;
    v16 = v150;
    if ( (v15 & 1) == 0 )
    {
LABEL_19:
      v198 = v17;
      v18 = v16 & 0xF;
LABEL_20:
      v176 = 0;
      switch ( (char)v18 )
      {
        case 0:
          goto LABEL_52;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
        case 14:
          goto LABEL_26;
        case 9:
          if ( (unsigned __int8)print_fpval(&s, 1024, &v198, (unsigned int)tinfo_size) )
            goto LABEL_37;
          if ( (*(_BYTE *)a4 & 0x40) != 0 )
          {
            set_qerrno(21);
            goto LABEL_7;
          }
          qstrncpy(&s, "?flt", 1024);
          break;
        case 11:
          goto LABEL_29;
        case 13:
          if ( (v16 & 0x3F) != 0x2D )
            goto LABEL_77;
          goto LABEL_53;
        default:
          if ( (v16 & 0x3F) == 1 )
          {
            set_qerrno(77);
            goto LABEL_7;
          }
LABEL_52:
          if ( (_DWORD)tinfo_size )
          {
LABEL_53:
            s = 0;
            v36 = *(_DWORD *)(a4 + 4);
            switch ( tinfo_size )
            {
              case 1LL:
                v63 = 0;
                v64 = (unsigned __int8)v198;
                goto LABEL_122;
              case 2LL:
                v66 = (unsigned __int16)v198;
                goto LABEL_130;
              case 4LL:
                v66 = (unsigned int)v198;
                v63 = 0;
                v64 = (unsigned int)v198;
                goto LABEL_131;
              case 8LL:
                v66 = v198;
                v63 = 0;
                v64 = v198;
                goto LABEL_131;
              case 16LL:
                v64 = v198;
                v63 = v199;
                goto LABEL_140;
              default:
                goto LABEL_71;
            }
          }
          goto LABEL_70;
      }
      goto LABEL_37;
    }
  }
  else
  {
    if ( *(_BYTE *)a2 != 8 )
    {
      set_qerrno(1641);
LABEL_7:
      v13 = 0;
      goto LABEL_8;
    }
    v149 = tinfo_property;
    copy_argloc(&v180, *(_QWORD *)(a2 + 8));
    v15 = *(_DWORD *)a4;
    v16 = v149;
    if ( (*(_DWORD *)a4 & 1) == 0 )
    {
      if ( (_DWORD)v180 != 6 )
      {
        if ( !under_debugger )
          interr(1147);
        goto LABEL_336;
      }
      v17 = v181;
      goto LABEL_19;
    }
  }
  if ( (v15 & 0x10) == 0 )
  {
    v151 = v16;
    (**(void (__fastcall ***)(__int64, __int64 *, _QWORD, _QWORD *))a1)(a1, &v180, 0, a3);
    v16 = v151;
  }
  v18 = v16 & 0xF;
  if ( (_BYTE)v18 == 11 )
  {
    v176 = 0;
LABEL_29:
    v19 = *a3;
    ptr[0] = nullptr;
    ptr[1] = nullptr;
    get_tinfo_details(v19, 11, ptr);
    v174 = get_tinfo_size(0, ptr[0], 0);
    if ( v174 <= 0 )
    {
      set_qerrno(1640);
      goto LABEL_180;
    }
    v21 = *(_DWORD *)(a4 + 16);
    v22 = *(_DWORD *)(a4 + 12);
    *(_QWORD *)(a4 + 12) = 0;
    if ( !v21 )
      v21 = HIDWORD(ptr[1]);
    if ( v21 > 0 )
    {
      s = 0;
      goto LABEL_34;
    }
    if ( !HIDWORD(ptr[1]) && (*(_BYTE *)a4 & 1) != 0 )
    {
      v164 = v22;
      v105 = sub_5A1140((__int64)&v180, (__int64)a3, (unsigned int)v174, v20);
      s = 0;
      v22 = v164;
      v21 = v105;
      if ( v105 > 0 )
      {
LABEL_34:
        if ( (*(_BYTE *)a4 & 0x10) != 0
          || (v163 = v22,
              v88 = sub_5A3FE0(a1, (unsigned int *)&v180, (__int64)a3, (__int64 *)ptr, (int *)a4, v21, &v176),
              v22 = v163,
              v88) )
        {
          if ( v176
            || (unsigned __int8)sub_5A6F60(
                                  a1,
                                  (unsigned int)&v180,
                                  (_DWORD)a3,
                                  (_DWORD)v166,
                                  v22,
                                  v21,
                                  (unsigned int)v174,
                                  (__int64)ptr,
                                  a4) )
          {
            goto LABEL_36;
          }
        }
LABEL_180:
        clear_tinfo_t(ptr);
        goto LABEL_7;
      }
    }
    else
    {
      s = 0;
    }
LABEL_36:
    clear_tinfo_t(ptr);
    goto LABEL_37;
  }
  if ( (v16 & 0x2F) != 0xD )
  {
    v152 = v16 & 0xF;
    v157 = v16;
    v37 = sub_5A11B0((__int64)&v198, (__int64)&v180, tinfo_size, a3);
    v16 = v157;
    v18 = v152;
    if ( !v37 )
    {
      v13 = sub_5A1940(a1, *(_DWORD *)a4);
      goto LABEL_8;
    }
    goto LABEL_20;
  }
  v176 = 0;
  switch ( (char)v18 )
  {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 14:
      goto LABEL_22;
    case 9:
      if ( *v166 != 3 )
        goto LABEL_61;
      v38 = 3;
      if ( (unsigned int)(tinfo_size - 2) <= 6 )
        v38 = dword_23AF8C0[(unsigned int)(tinfo_size - 2)];
      realtoasc(
        &s,
        1024,
        v166 + 8,
        *(char *)(v10 + v38 + 1056) | (unsigned int)((*(_DWORD *)(v156 + 368) << 16) | (*(_DWORD *)(v156 + 372) << 8)));
      goto LABEL_37;
    case 13:
      if ( (v16 & 0x3F) == 0x2D )
        goto LABEL_22;
LABEL_77:
      v13 = sub_5A2660(a1, (unsigned int *)a4);
      if ( !(_BYTE)v13 && (get_tinfo_property(*a3, 2) & 0x3F) == 0x1D )
      {
        v191 = nullptr;
        v194 = 1;
        v195 = -1;
        v196 = 0;
        v197 = 0;
        memset(ptr, 0, sizeof(ptr));
        v190 = 0;
        v192 = 0;
        v193[0] = 0;
        if ( (int)find_tinfo_udt_member((int)ptr) < 0 )
        {
          set_qerrno(1640);
          goto LABEL_217;
        }
        v93 = *(_DWORD *)(a1 + 16);
        v200[0] = 2;
        v202 = 0;
        v94 = *(_QWORD *)(a1 + 8);
        v201 = 0;
        if ( v93 > 0 )
        {
          for ( i = 0; i != v93; ++i )
          {
            v96 = *(_QWORD **)(v94 + 32);
            if ( !v96 || (v97 = v96[1]) == 0 )
            {
              if ( !under_debugger )
                interr(3441);
              goto LABEL_336;
            }
            v94 = *v96 + 56 * v97 - 56;
          }
        }
        v98 = *(__int64 **)(v94 + 32);
        v99 = v98[1];
        v100 = *v98;
        if ( v98[2] < (unsigned __int64)(v99 + 1) )
        {
          v134 = qvector_reserve(v98, v100, v99 + 1, 56);
          *v98 = v134;
          v100 = v134;
          v99 = v98[1];
        }
        v101 = v100 + 56 * v99;
        *(_QWORD *)v101 = 0;
        *(_QWORD *)(v101 + 24) = 0;
        *(_DWORD *)(v101 + 48) = 0;
        *(_OWORD *)(v101 + 8) = 0;
        *(_OWORD *)(v101 + 32) = 0;
        ++v98[1];
        v184 = nullptr;
        *(_QWORD *)&v185 = 0;
        if ( (*(_BYTE *)a4 & 1) != 0 )
        {
          if ( *v166 == 2 )
          {
            v146 = *((_QWORD *)v166 + 1);
            cleanup_argloc(&v184);
            LODWORD(v184) = 6;
            *(_QWORD *)&v185 = v146;
          }
          else
          {
            if ( *v166 != 8 )
            {
              set_qerrno(1641);
              cleanup_argloc(&v184);
              goto LABEL_216;
            }
            copy_argloc(&v184, *((_QWORD *)v166 + 1));
          }
        }
        (**(void (__fastcall ***)(__int64, void **, void *, _OWORD *))a1)(a1, &v184, ptr[2], v193);
        if ( (*(_BYTE *)a4 & 1) == 0 )
        {
          idcv_attr = get_idcv_attr(v200, v166, ptr[2], 1);
          if ( idcv_attr == 1538 )
          {
            v103 = sub_5A1940(a1, *(_DWORD *)a4);
            goto LABEL_214;
          }
          if ( idcv_attr )
          {
LABEL_215:
            cleanup_argloc(&v184);
LABEL_216:
            free_idcv(v200);
LABEL_217:
            clear_tinfo_t(v193);
            if ( v191 )
            {
              *(_QWORD *)&v192 = 0;
              qfree(v191);
            }
            if ( ptr[2] )
            {
              *(_QWORD *)&v190 = 0;
              qfree(ptr[2]);
            }
            goto LABEL_98;
          }
          v166 = v200;
        }
        v103 = sub_5A4700(a1, v166, v193, a4, 0);
LABEL_214:
        v13 = v103;
        goto LABEL_215;
      }
      v39 = *a3;
      v184 = nullptr;
      v187 = 0;
      v188 = 1;
      v185 = 0;
      v186 = 0;
      get_tinfo_details(v39, 13, &v184);
      v40 = *(_DWORD *)(a4 + 16);
      v41 = *(_DWORD *)(a4 + 12);
      if ( v40 )
      {
        v42 = v41 + v40;
        v43 = v42;
      }
      else
      {
        v43 = 0x7FFFFFFF;
        v42 = 0x7FFFFFFF;
      }
      *(_QWORD *)(a4 + 12) = 0;
      if ( (unsigned __int64)v185 < v43 )
        v42 = v185;
      if ( v41 >= v42 )
      {
LABEL_166:
        v13 = 1;
        goto LABEL_89;
      }
      v175 = 144LL * v41;
      v148 = 144 * (v41 + (unsigned __int64)(unsigned int)(v42 - v41));
      while ( 1 )
      {
        v44 = *(_DWORD *)a4;
        v182 = 0;
        v45 = (__int64 *)((char *)v184 + v175);
        v183 = 0;
        v155 = v44;
        v179 = 0;
        copy_tinfo_t(&v179);
        if ( (v155 & 1) == 0 )
          goto LABEL_145;
        v158 = *((unsigned int **)v166 + 1);
        if ( *v166 == 2 )
        {
          v72 = *((_QWORD *)v166 + 1);
LABEL_144:
          v159 = ((unsigned __int64)*v45 >> 3) + v72;
          cleanup_argloc(&v182);
          LODWORD(v182) = 6;
          v183 = v159;
          goto LABEL_145;
        }
        if ( *v166 != 8 )
          goto LABEL_88;
        v86 = *v158;
        if ( (_DWORD)v86 == 6 )
        {
          v72 = *((_QWORD *)v158 + 1);
          goto LABEL_144;
        }
        if ( (int)v86 <= 6 )
          goto LABEL_88;
        v147 = *v45;
        custom_argloc = retrieve_custom_argloc(v86, v166, v46);
        if ( !custom_argloc
          || !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned int *, _QWORD *, __int64, __int64 *))(custom_argloc + 56))(
                &v182,
                &v179,
                v158,
                a3,
                v147,
                v45 + 2) )
        {
          goto LABEL_88;
        }
LABEL_145:
        v73 = *(_DWORD *)(a1 + 16);
        v74 = *(_QWORD *)(a1 + 8);
        if ( v73 > 0 )
        {
          v75 = 0;
          while ( 1 )
          {
            v76 = *(_QWORD **)(v74 + 32);
            if ( !v76 )
              break;
            v77 = v76[1];
            if ( !v77 )
              break;
            ++v75;
            v74 = *v76 + 56 * v77 - 56;
            if ( v73 == v75 )
              goto LABEL_150;
          }
          if ( !under_debugger )
            interr(3441);
LABEL_336:
          BUG();
        }
LABEL_150:
        v78 = *(__int64 **)(v74 + 32);
        v79 = v78[1];
        v80 = *v78;
        if ( v78[2] < (unsigned __int64)(v79 + 1) )
        {
          v80 = qvector_reserve(v78, v80, v79 + 1, 56);
          *v78 = v80;
          v79 = v78[1];
        }
        v81 = v80 + 56 * v79;
        *(_OWORD *)(v81 + 8) = 0;
        *(_QWORD *)v81 = 0;
        *(_QWORD *)(v81 + 24) = 0;
        *(_DWORD *)(v81 + 48) = 0;
        *(_OWORD *)(v81 + 32) = 0;
        ++v78[1];
        (**(void (__fastcall ***)(__int64, __int64 *, __int64, __int64 *))a1)(a1, &v182, v45[2], &v179);
        v200[0] = 2;
        v202 = 0;
        v201 = 0;
        if ( (v155 & 1) != 0 )
        {
          v200[0] = 8;
          *(_QWORD *)&v201 = &v182;
          v84 = sub_5A4700(a1, v200, &v179, a4, *v45 & 7);
          goto LABEL_158;
        }
        v82 = haystack;
        if ( v45[3] )
          v82 = (const char *)v45[2];
        v83 = get_idcv_attr(v200, v166, v82, 1);
        if ( v83 != 1538 )
          break;
        if ( !(unsigned __int8)sub_5A1940(a1, v155) )
          goto LABEL_161;
LABEL_164:
        if ( (_BYTE)v13 )
          goto LABEL_168;
LABEL_165:
        free_idcv(v200);
        clear_tinfo_t(&v179);
        cleanup_argloc(&v182);
        v175 += 144;
        if ( v175 == v148 )
          goto LABEL_166;
      }
      if ( v83 )
        goto LABEL_161;
      v84 = sub_5A4700(a1, v200, &v179, a4, 0);
LABEL_158:
      if ( v84 )
        goto LABEL_164;
      if ( (_BYTE)v13 && (unsigned int)get_qerrno() == 1645 )
      {
        set_qerrno(0);
LABEL_168:
        *(_DWORD *)(a1 + 48) = 0;
        *(_DWORD *)a4 &= ~0x40000000u;
        goto LABEL_165;
      }
LABEL_161:
      free_idcv(v200);
LABEL_88:
      v13 = 0;
      clear_tinfo_t(&v179);
      cleanup_argloc(&v182);
LABEL_89:
      v47 = (char *)v184;
      if ( v184 )
      {
        v48 = v185;
        if ( (_QWORD)v185 )
        {
          v49 = 0;
          do
          {
            v50 = &v47[144 * v49];
            clear_tinfo_t(v50 + 64);
            v51 = *((void **)v50 + 5);
            if ( v51 )
            {
              *((_QWORD *)v50 + 6) = 0;
              qfree(v51);
            }
            v52 = *((void **)v50 + 2);
            if ( v52 )
            {
              *((_QWORD *)v50 + 3) = 0;
              qfree(v52);
            }
            ++v49;
            v47 = (char *)v184;
          }
          while ( v48 != v49 );
        }
        *(_QWORD *)&v185 = 0;
        qfree(v47);
      }
LABEL_98:
      v53 = *(_DWORD *)(a1 + 16);
      v54 = *(_QWORD *)(a1 + 8);
      v55 = 0;
      if ( v53 > 0 )
      {
        while ( 1 )
        {
          v56 = *(_QWORD **)(v54 + 32);
          if ( !v56 )
            break;
          v57 = v56[1];
          if ( !v57 )
            break;
          ++v55;
          v54 = *v56 + 56 * v57 - 56;
          if ( v53 == v55 )
            goto LABEL_102;
        }
        if ( !under_debugger )
          interr(3441);
        goto LABEL_336;
      }
LABEL_102:
      sub_5A1F00(v54, *(_DWORD *)(a1 + 56));
      v58 = *(_QWORD *)(a1 + 32);
      if ( !v58 )
        sub_5A1120();
      v59 = v58 - 1;
      v60 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v58 - 1);
      *(_QWORD *)(a1 + 32) = v59;
      if ( v60 )
        --*(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 48) += (*(char *)(a1 + 56) < 0) + 1;
LABEL_8:
      cleanup_argloc(&v180);
      return v13;
    default:
      if ( !(_DWORD)tinfo_size )
      {
LABEL_70:
        set_qerrno(1640);
        goto LABEL_7;
      }
LABEL_22:
      if ( *v166 != 2 && *v166 != 9 || (unsigned __int64)(int)tinfo_size > 8 )
      {
LABEL_61:
        set_qerrno(1642);
        goto LABEL_7;
      }
      a5 = 0;
      v198 = *((_QWORD *)v166 + 1);
LABEL_26:
      s = 0;
      if ( (v18 & 0xFD) != 8 )
      {
        v36 = *(_DWORD *)(a4 + 4);
        switch ( tinfo_size )
        {
          case 1LL:
            v66 = (unsigned __int8)v198;
            if ( (_BYTE)v18 == 14 )
              goto LABEL_278;
            v64 = (unsigned __int8)v198;
            v63 = 0;
LABEL_122:
            v65 = v16 & 0x3F;
            if ( (v16 & 0x3F) == 0x2D )
              goto LABEL_123;
            goto LABEL_132;
          case 2LL:
            v66 = (unsigned __int16)v198;
            v63 = 0;
            v64 = (unsigned __int16)v198;
            if ( (_BYTE)v18 == 14 )
              goto LABEL_278;
            goto LABEL_131;
          case 4LL:
            v66 = (unsigned int)v198;
            v63 = 0;
            v64 = (unsigned int)v198;
            if ( (_BYTE)v18 == 14 )
              goto LABEL_278;
            goto LABEL_131;
          case 8LL:
            v66 = v198;
            if ( (_BYTE)v18 == 14 )
              goto LABEL_278;
LABEL_130:
            v64 = v66;
            v63 = 0;
            goto LABEL_131;
          case 16LL:
            v64 = v198;
            v63 = v199;
            v66 = v198;
            if ( (_BYTE)v18 == 14 )
            {
LABEL_278:
              v170 = v16;
              tinfo_bitfield_value = read_tinfo_bitfield_value(*a3, v66, a5, v66, v18, v16);
              LOBYTE(v16) = v170;
              v66 = tinfo_bitfield_value;
              v64 = tinfo_bitfield_value;
              v63 = 0;
LABEL_131:
              v65 = v16 & 0x3F;
              if ( (v16 & 0x3F) != 0x2D )
                goto LABEL_132;
            }
            else
            {
LABEL_140:
              v65 = v16 & 0x3F;
              if ( (v16 & 0x3F) != 0x2D )
                goto LABEL_132;
              if ( v63 )
              {
                set_qerrno(1643);
                goto LABEL_7;
              }
LABEL_123:
              v66 = v64;
            }
            v168 = v64;
            v171 = v63;
            memset(ptr, 0, sizeof(ptr));
            enum_member_expr = get_enum_member_expr((__int64)ptr, (__int64)a3, 0, v66);
            v64 = v168;
            v63 = v171;
            if ( enum_member_expr )
            {
              v68 = haystack;
              if ( ptr[1] )
                v68 = (const char *)ptr[0];
              qstrncpy(&s, v68, 1024);
              if ( ptr[0] )
              {
                ptr[1] = nullptr;
                qfree(ptr[0]);
              }
              goto LABEL_37;
            }
            if ( ptr[0] )
            {
              ptr[1] = nullptr;
              qfree(ptr[0]);
              v64 = v168;
              v63 = v171;
            }
            v65 = 45;
LABEL_132:
            v169 = v64;
            v172 = v63;
            v69 = get_tinfo_property(*a3, 3);
            v70 = 8 * (unsigned int)(v69 == 2) + 64;
            v71 = (8 * (v69 == 2) + 64) | 0x10;
            if ( (*(_BYTE *)a4 & 0x20) != 0 )
              v70 = v71;
            if ( (v65 & 0xDF) == 0x12 )
            {
              v70 = (unsigned int)v70 | 3;
            }
            else if ( v36 == 16 )
            {
              v70 = (unsigned int)v70 | 1;
            }
            else if ( v36 == 8 )
            {
              v70 = (unsigned int)v70 | 2;
            }
            format_c_number(&s, 1024, v169, v172, (unsigned int)tinfo_size, v70);
            break;
          default:
LABEL_71:
            if ( !under_debugger )
              interr(600);
            goto LABEL_336;
        }
        goto LABEL_37;
      }
      return result;
  }
  switch ( tinfo_size )
  {
    case 1LL:
      v61 = (unsigned __int8)v198;
      goto LABEL_111;
    case 2LL:
      v61 = (unsigned __int16)v198;
      goto LABEL_111;
    case 4LL:
      v61 = (unsigned int)v198;
      goto LABEL_111;
    case 6LL:
      v61 = v198 & 0xFFFFFFFFFFFFLL;
      goto LABEL_111;
    case 8LL:
      v61 = v198;
LABEL_111:
      if ( (_BYTE)v18 == 8 )
      {
        v62 = "false";
        if ( v61 )
          v62 = "true";
        qstrncpy(&s, v62, 1024);
LABEL_37:
        v13 = 1;
        if ( s )
        {
          v23 = *(_QWORD *)(a1 + 8);
          v24 = *(_DWORD *)(a1 + 16);
          v167 = (__int64 *)v23;
          if ( v24 > 0 )
          {
            v25 = 0;
            while ( 1 )
            {
              v26 = *(__int64 **)(v23 + 32);
              if ( !v26 )
                break;
              v27 = v26[1];
              if ( !v27 )
                break;
              v28 = *v26;
              ++v25;
              v23 = v28 + 56 * v27 - 56;
              if ( v24 == v25 )
              {
                v167 = (__int64 *)(v28 + 56 * v27 - 56);
                goto LABEL_44;
              }
            }
            if ( !under_debugger )
              interr(3441);
            goto LABEL_336;
          }
LABEL_44:
          v29 = (_QWORD *)v167[4];
          if ( v29 )
          {
            v30 = v29[1];
            if ( v30 )
              v167 = (__int64 *)(*v29 + 56 * v30 - 56);
          }
          v31 = strlen(&s);
          v32 = v31;
          v33 = v167[1];
          if ( v33 )
          {
            --v33;
            v32 = v31 + v33;
          }
          v34 = v32 + 1;
          v35 = *v167;
          if ( v167[2] < v32 + 1 )
          {
            v35 = qvector_reserve(v167, v35, v34, 1);
            v34 = v32 + 1;
            *v167 = v35;
          }
          v167[1] = v34;
          *(_BYTE *)(v35 + v32) = 0;
          memmove((void *)(v33 + *v167), &s, v31);
          v167[3] = (v167[1] == 0) + v167[1] - 1;
          v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, v167);
        }
        goto LABEL_8;
      }
      v178 = 0;
      copy_tinfo_t(&v178);
      if ( (_DWORD)v180 == 6 )
      {
        v104 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 1672) + 24LL) + 16LL) & v61;
        cleanup_argloc(&v180);
        LODWORD(v180) = 6;
        v181 = v104;
        ptr[0] = nullptr;
        ptr[0] = (void *)get_tinfo_property(v178, 9);
        v90 = ptr;
        copy_tinfo_t(&v178);
        clear_tinfo_t(ptr);
      }
      else if ( (int)v180 <= 6
             || (v89 = sub_6B1FD0(*(_QWORD *)(v10 + 1672), (unsigned int)v180, v85)) == 0
             || (v90 = (void **)&v178,
                 !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64 *))(v89 + 72))(&v180, &v178, &v180)) )
      {
        v13 = sub_5A1940(a1, *(_DWORD *)a4);
        goto LABEL_172;
      }
      v92 = *(_DWORD *)a4;
      v177 = 1;
      if ( (v92 & 0x310) != 0x100 )
        goto LABEL_195;
      if ( (_DWORD)v180 == 6 )
      {
        v108 = format_c_number(&s, 1024, v181, 0, *(unsigned int *)(v10 + 1512), 1);
      }
      else
      {
        if ( (int)v180 <= 6
          || (v106 = retrieve_custom_argloc((unsigned int)v180, v90, v91)) == 0
          || (v107 = *(__int64 (__fastcall **)(char *, __int64, char *, __int64 *, __int64 *))(v106 + 136)) == nullptr )
        {
LABEL_194:
          s = 0;
LABEL_195:
          v13 = sub_5A3FE0(a1, (unsigned int *)&v180, (__int64)a3, &v178, (int *)a4, -1, &v176);
          if ( (_BYTE)v13 )
          {
            if ( v176 )
            {
LABEL_199:
              clear_tinfo_t(&v178);
              goto LABEL_37;
            }
            if ( (*(_BYTE *)(a4 + 1) & 1) == 0 )
            {
              if ( (_DWORD)v180 == 6 )
              {
                v132 = v181;
                flags = get_flags_ex(v181, 4);
                if ( (flags & 0xC000u) == 0 && (flags & 0x600) != 0x200 )
                  set_dummy_name(-1, v132);
                v184 = nullptr;
                v185 = 0;
                if ( get_ea_name(&v184, v132, 0, 0) > 0 )
                {
                  calc_c_cpp_name((char **)&v184, (const char *)v184, &v178, 1);
                  s = 38;
                  qstrncpy(v204, v184, 1023);
                }
                else if ( v132 )
                {
                  s = 40;
                  memset(ptr, 0, sizeof(ptr));
                  if ( (unsigned __int8)print_tinfo((unsigned int)ptr, 0, 0, 0, 0, (_DWORD)a3, 0, 0) )
                  {
                    v145 = (char *)ptr[1] + (ptr[1] == nullptr) - 1;
                    if ( ptr[2] < v145 + 2 )
                      ptr[0] = (void *)qvector_reserve(ptr, ptr[0], v145 + 2, 1);
                    ptr[1] = v145 + 2;
                    *((_BYTE *)ptr[0] + (unsigned __int64)v145) = 41;
                    *((_BYTE *)ptr[0] + (unsigned __int64)v145 + 1) = 0;
                    v135 = (char *)qstpncpy(v204, ptr[0], 1023);
                  }
                  else
                  {
                    strcpy(v204, "?)");
                    v135 = &v204[2];
                  }
                  format_c_number(v135, v206 - v135, v132, 0, (unsigned int)tinfo_size, 1);
                  if ( ptr[0] )
                  {
                    ptr[1] = nullptr;
                    qfree(ptr[0]);
                  }
                }
                else
                {
                  qstrncpy(&s, "NULL", 1024);
                }
                if ( v184 )
                {
                  *(_QWORD *)&v185 = 0;
                  qfree(v184);
                }
              }
              goto LABEL_199;
            }
            v124 = get_tinfo_property(v178, 2);
            v125 = (v124 == 0) | v154 ^ 1;
            if ( v125
              || (v126 = v124 & 0xF, (v124 & 0xF) == 0xC)
              || (v124 & 0x3F) == 1
              || (_DWORD)v180 == 6 && !(unsigned __int8)is_loaded(v181)
              || (int)v180 > 6 && !v177 )
            {
              sub_5A2880(a1, (*(char *)a4 < 0) + 1);
              clear_tinfo_t(&v178);
              goto LABEL_37;
            }
            if ( (*(_DWORD *)a4 & 0x10) != 0 )
            {
              if ( v126 == 10 )
              {
                v125 = sub_5A2660(a1, (unsigned int *)a4);
                if ( !v125 )
                {
                  if ( !under_debugger )
                    interr(625);
                  goto LABEL_336;
                }
                v137 = *(_DWORD *)(a1 + 16);
                v138 = *(_QWORD *)(a1 + 8);
                if ( v137 > 0 )
                {
                  for ( j = 0; j != v137; ++j )
                  {
                    v140 = *(_QWORD **)(v138 + 32);
                    if ( !v140 || (v141 = v140[1]) == 0 )
                    {
                      if ( !under_debugger )
                        interr(3441);
                      goto LABEL_336;
                    }
                    v138 = *v140 + 56 * v141 - 56;
                  }
                }
                v142 = *(_QWORD **)(v138 + 32);
                v143 = v142[1];
                if ( v142[2] < (unsigned __int64)(v143 + 1) )
                {
                  *v142 = qvector_reserve(v142, *v142, v143 + 1, 56);
                  v143 = v142[1];
                }
                v144 = *v142 + 56 * v143;
                *(_QWORD *)v144 = 0;
                *(_QWORD *)(v144 + 24) = 0;
                *(_DWORD *)(v144 + 48) = 0;
                *(_OWORD *)(v144 + 8) = 0;
                *(_OWORD *)(v144 + 32) = 0;
                ++v142[1];
              }
              else
              {
                *(_DWORD *)a4 &= ~0x40000000u;
              }
            }
            v127 = 6;
            v128 = (_DWORD)v180 == 6;
            v129 = &v201;
            v200[0] = 2;
            while ( v127 )
            {
              *(_DWORD *)v129 = 0;
              v129 = (__int128 *)((char *)v129 + 4);
              --v127;
            }
            if ( v128 )
            {
              v136 = v181;
              *(_DWORD *)a4 |= 1u;
              *(_QWORD *)&v201 = v136;
            }
            else
            {
              v200[0] = 8;
              *(_QWORD *)&v201 = &v180;
            }
            v13 = sub_5A4700(a1, v200, &v178, a4, 0);
            if ( v125 )
              sub_5A27D0(a1);
            free_idcv(v200);
          }
LABEL_172:
          clear_tinfo_t(&v178);
          goto LABEL_8;
        }
        v108 = v107(&s, 1024, &v177, &v180, &v178);
      }
      v109 = &v204[v108 - 1];
      if ( v109 != &s )
      {
        if ( v109 >= v206 )
        {
          if ( !under_debugger )
            interr(518);
          goto LABEL_336;
        }
        v110 = v109 + 1;
        *v109 = 58;
        if ( v109 + 1 >= v206 )
        {
          v205 = 0;
          v110 = &v205;
        }
        if ( *(char *)a4 < 0 )
        {
          *v110++ = 32;
          if ( v110 >= v206 )
          {
            v205 = 0;
            v110 = &v205;
          }
        }
        *v110 = 0;
        v111 = *(_DWORD *)(a1 + 16);
        v112 = *(__int64 **)(a1 + 8);
        if ( v111 > 0 )
        {
          for ( k = 0; k != v111; ++k )
          {
            v114 = (_QWORD *)v112[4];
            if ( !v114 || (v115 = v114[1]) == 0 )
            {
              if ( !under_debugger )
                interr(3441);
              goto LABEL_336;
            }
            v112 = (__int64 *)(*v114 + 56 * v115 - 56);
          }
        }
        v116 = (_QWORD *)v112[4];
        if ( v116 )
        {
          v117 = v116[1];
          if ( v117 )
            v112 = (__int64 *)(*v116 + 56 * v117 - 56);
        }
        v118 = strlen(&s);
        v119 = v112[1];
        v120 = v118;
        v121 = v118;
        if ( v119 )
        {
          --v119;
          v121 = v118 + v119;
        }
        v122 = *v112;
        v123 = v121 + 1;
        if ( v112[2] < v121 + 1 )
        {
          v153 = v118;
          v160 = v121;
          v162 = v119;
          v165 = v121 + 1;
          v130 = qvector_reserve(v112, v122, v123, 1);
          *v112 = v130;
          v120 = v153;
          v122 = v130;
          v121 = v160;
          v119 = v162;
          v123 = v165;
        }
        v112[1] = v123;
        *(_BYTE *)(v122 + v121) = 0;
        memmove((void *)(v119 + *v112), &s, v120);
        v112[3] = (v112[1] == 0) + v112[1] - 1;
      }
      goto LABEL_194;
    default:
      if ( !under_debugger )
        interr(599);
      goto LABEL_336;
  }
}
