__int64 __fastcall sub_58A550(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4, unsigned int a5)
{
  __int64 v9; // rsi
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 *v12; // rsi
  char tinfo_property; // al
  unsigned int v14; // ebx
  unsigned int v16; // eax
  char v17; // r9
  int v18; // ebx
  char v19; // r8
  __int64 v20; // rdi
  void *v21; // rsi
  __int64 v22; // rcx
  signed int v23; // r13d
  unsigned int v24; // r10d
  __int64 v25; // rax
  int v26; // edi
  int v27; // esi
  __int64 *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  size_t v33; // r13
  size_t v34; // r14
  __int64 v35; // r12
  size_t v36; // rdx
  __int64 v37; // rsi
  unsigned int v38; // ebx
  char v39; // al
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned int v42; // eax
  int v43; // edx
  int v44; // eax
  unsigned __int64 v45; // rsi
  unsigned int v46; // eax
  unsigned __int64 *v47; // r13
  char *v48; // rsi
  char *v49; // rdi
  __int64 v50; // r13
  __int64 v51; // r12
  char *v52; // r14
  void *v53; // rdi
  void *v54; // rdi
  int v55; // r8d
  __int64 v56; // rdi
  int v57; // esi
  _QWORD *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  char v62; // al
  __int64 v63; // rbx
  char *v64; // rsi
  __int64 v65; // r11
  __int64 v66; // r10
  char v67; // r13
  __int64 v68; // rcx
  char enum_member_expr; // al
  const char *v70; // rsi
  int v71; // eax
  __int64 v72; // r9
  unsigned int v73; // eax
  unsigned int v74; // eax
  int v75; // edi
  __int64 v76; // rax
  int v77; // esi
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 *v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // rax
  unsigned int v84; // eax
  __int64 v85; // r8
  __int64 v86; // rdx
  unsigned int *v87; // rdx
  __int64 v88; // rdi
  __int64 custom_argloc; // rax
  char v90; // al
  __int64 v91; // rax
  void **v92; // rsi
  unsigned int v93; // eax
  __int64 v94; // rsi
  int v95; // edi
  __int64 v96; // rax
  int i; // esi
  _QWORD *v98; // rdx
  __int64 v99; // rcx
  __int64 *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rax
  int idcv_attr; // eax
  unsigned int v105; // eax
  int v106; // eax
  __int64 v107; // rax
  __int64 (__fastcall *v108)(char *, __int64, char *, __int64 *, __int64 *); // rax
  __int64 v109; // rax
  char *v110; // rax
  char *v111; // rdx
  int v112; // edi
  __int64 *v113; // r13
  int k; // esi
  _QWORD *v115; // rdx
  __int64 v116; // rcx
  _QWORD *v117; // rdx
  __int64 v118; // rcx
  size_t v119; // rax
  __int64 v120; // r10
  size_t v121; // r9
  size_t v122; // r8
  __int64 v123; // rsi
  size_t v124; // rdx
  char v125; // al
  char v126; // r13
  char v127; // bl
  __int64 v128; // rcx
  bool v129; // zf
  __int128 *v130; // rdi
  __int64 v131; // rax
  __int64 tinfo_bitfield_value; // rax
  unsigned int v133; // r13d
  __int16 flags; // ax
  __int64 v135; // rax
  char *v136; // rdi
  int v137; // r14d
  char *v138; // r12
  int v139; // eax
  int v140; // edi
  __int64 v141; // rax
  int j; // edx
  _QWORD *v143; // rcx
  __int64 v144; // rsi
  _QWORD *v145; // rbx
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // [rsp+8h] [rbp-5C8h]
  unsigned __int64 v149; // [rsp+10h] [rbp-5C0h]
  char v150; // [rsp+18h] [rbp-5B8h]
  char v151; // [rsp+18h] [rbp-5B8h]
  char v152; // [rsp+18h] [rbp-5B8h]
  char v153; // [rsp+18h] [rbp-5B8h]
  size_t v154; // [rsp+18h] [rbp-5B8h]
  char v155; // [rsp+24h] [rbp-5ACh]
  unsigned int v156; // [rsp+24h] [rbp-5ACh]
  __int64 v157; // [rsp+28h] [rbp-5A8h]
  char v158; // [rsp+28h] [rbp-5A8h]
  unsigned __int64 v159; // [rsp+28h] [rbp-5A8h]
  int v160; // [rsp+28h] [rbp-5A8h]
  size_t v161; // [rsp+28h] [rbp-5A8h]
  __int64 v163; // [rsp+30h] [rbp-5A0h]
  unsigned int v164; // [rsp+38h] [rbp-598h]
  unsigned int v165; // [rsp+38h] [rbp-598h]
  size_t v166; // [rsp+38h] [rbp-598h]
  char *v167; // [rsp+40h] [rbp-590h]
  __int64 *v168; // [rsp+40h] [rbp-590h]
  __int64 v169; // [rsp+40h] [rbp-590h]
  __int64 v170; // [rsp+40h] [rbp-590h]
  char v171; // [rsp+40h] [rbp-590h]
  __int64 v172; // [rsp+48h] [rbp-588h]
  __int64 v173; // [rsp+48h] [rbp-588h]
  __int64 tinfo_size; // [rsp+50h] [rbp-580h]
  int v175; // [rsp+50h] [rbp-580h]
  __int64 v176; // [rsp+50h] [rbp-580h]
  char v177; // [rsp+6Eh] [rbp-562h] BYREF
  char v178; // [rsp+6Fh] [rbp-561h] BYREF
  __int64 v179; // [rsp+70h] [rbp-560h] BYREF
  __int64 v180; // [rsp+78h] [rbp-558h] BYREF
  __int64 v181; // [rsp+80h] [rbp-550h] BYREF
  __int64 v182; // [rsp+88h] [rbp-548h]
  __int64 v183; // [rsp+90h] [rbp-540h] BYREF
  __int64 v184; // [rsp+98h] [rbp-538h]
  void *v185; // [rsp+A0h] [rbp-530h] BYREF
  __int128 v186; // [rsp+A8h] [rbp-528h]
  __int128 v187; // [rsp+B8h] [rbp-518h]
  __int64 v188; // [rsp+C8h] [rbp-508h]
  int v189; // [rsp+D0h] [rbp-500h]
  void *v190[3]; // [rsp+E0h] [rbp-4F0h] BYREF
  __int128 v191; // [rsp+F8h] [rbp-4D8h]
  void *ptr; // [rsp+108h] [rbp-4C8h]
  __int128 v193; // [rsp+110h] [rbp-4C0h]
  _OWORD v194[2]; // [rsp+120h] [rbp-4B0h] BYREF
  __int64 v195; // [rsp+140h] [rbp-490h]
  int v196; // [rsp+148h] [rbp-488h]
  __int64 v197; // [rsp+150h] [rbp-480h]
  char v198; // [rsp+158h] [rbp-478h]
  __int64 v199; // [rsp+160h] [rbp-470h] BYREF
  __int64 v200; // [rsp+168h] [rbp-468h]
  char v201[8]; // [rsp+170h] [rbp-460h] BYREF
  __int128 v202; // [rsp+178h] [rbp-458h] BYREF
  __int64 v203; // [rsp+188h] [rbp-448h]
  char s; // [rsp+190h] [rbp-440h] BYREF
  char v205[1022]; // [rsp+191h] [rbp-43Fh] BYREF
  char v206; // [rsp+58Fh] [rbp-41h] BYREF
  _BYTE v207[8]; // [rsp+590h] [rbp-40h] BYREF
  unsigned __int64 v208; // [rsp+598h] [rbp-38h]

  v9 = *a3;
  v208 = __readfsqword(0x28u);
  v10 = qword_2CA1698;
  v157 = *(_QWORD *)(qword_2CA1698 + 1480);
  tinfo_size = get_tinfo_size(0, v9, 0);
  if ( (_DWORD)tinfo_size == -1 )
  {
    v14 = 0;
    set_qerrno(1640, v9);
    return v14;
  }
  v167 = (char *)a2;
  if ( *(_BYTE *)a2 == 10 )
  {
    v167 = (char *)deref_idcv(a2, 0);
    if ( !v167 )
      return 0;
  }
  v11 = *a4;
  v155 = 0;
  if ( (*a4 & 0x40000000) == 0 )
  {
    if ( (v11 & 0x10) == 0 )
      *a4 = v11 | 0x40000000;
    v155 = 1;
  }
  v12 = (_QWORD *)(&dword_0 + 2);
  tinfo_property = get_tinfo_property(*a3, 2);
  v181 = 0;
  v182 = 0;
  if ( *(_BYTE *)a2 == 2 )
  {
    v151 = tinfo_property;
    v18 = *(_DWORD *)(a2 + 8);
    cleanup_argloc(&v181);
    v16 = *a4;
    LODWORD(v182) = v18;
    LODWORD(v181) = 6;
    v17 = v151;
    if ( (v16 & 1) == 0 )
    {
LABEL_19:
      LODWORD(v199) = v18;
      v19 = v17 & 0xF;
LABEL_20:
      v177 = 0;
      switch ( v19 )
      {
        case 0:
          goto LABEL_53;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
        case 14:
          goto LABEL_27;
        case 9:
          if ( (unsigned __int8)print_fpval(&s, 1024, &v199, (unsigned int)tinfo_size) )
            goto LABEL_38;
          if ( (*(_BYTE *)a4 & 0x40) != 0 )
          {
            set_qerrno(21, 1024);
            goto LABEL_7;
          }
          qstrncpy(&s, "?flt", 1024);
          break;
        case 11:
          goto LABEL_30;
        case 13:
          if ( (v17 & 0x3F) != 0x2D )
            goto LABEL_78;
          goto LABEL_54;
        default:
          if ( (v17 & 0x3F) == 1 )
          {
            set_qerrno(77, v12);
            goto LABEL_7;
          }
LABEL_53:
          if ( (_DWORD)tinfo_size )
          {
LABEL_54:
            s = 0;
            v38 = a4[1];
            switch ( tinfo_size )
            {
              case 1LL:
                v65 = 0;
                v66 = (unsigned __int8)v199;
                goto LABEL_123;
              case 2LL:
                v68 = (unsigned __int16)v199;
                goto LABEL_131;
              case 4LL:
                v68 = (unsigned int)v199;
                v65 = 0;
                v66 = (unsigned int)v199;
                goto LABEL_132;
              case 8LL:
                v68 = v199;
                v65 = 0;
                v66 = v199;
                goto LABEL_132;
              case 16LL:
                v66 = v199;
                v65 = v200;
                goto LABEL_141;
              default:
                goto LABEL_72;
            }
          }
          goto LABEL_71;
      }
      goto LABEL_38;
    }
  }
  else
  {
    if ( *(_BYTE *)a2 != 8 )
    {
      set_qerrno(1641, 2);
LABEL_7:
      v14 = 0;
      goto LABEL_8;
    }
    v12 = *(__int64 **)(a2 + 8);
    v150 = tinfo_property;
    copy_argloc(&v181, v12);
    v16 = *a4;
    v17 = v150;
    if ( (*a4 & 1) == 0 )
    {
      if ( (_DWORD)v181 != 6 )
      {
        if ( !under_debugger )
          interr(1147);
        goto LABEL_336;
      }
      v18 = v182;
      goto LABEL_19;
    }
  }
  if ( (v16 & 0x10) == 0 )
  {
    v152 = v17;
    v12 = &v181;
    (**(void (__fastcall ***)(__int64, __int64 *, _QWORD, _QWORD *))a1)(a1, &v181, 0, a3);
    v17 = v152;
  }
  v19 = v17 & 0xF;
  if ( (v17 & 0xF) == 0xB )
  {
    v177 = 0;
LABEL_30:
    v20 = *a3;
    v190[0] = nullptr;
    v190[1] = nullptr;
    get_tinfo_details(v20, 11, v190);
    v21 = v190[0];
    v175 = get_tinfo_size(0, v190[0], 0);
    if ( v175 <= 0 )
    {
      set_qerrno(1640, v21);
      goto LABEL_180;
    }
    v23 = a4[4];
    v24 = a4[3];
    *(_QWORD *)(a4 + 3) = 0;
    if ( !v23 )
      v23 = HIDWORD(v190[1]);
    if ( v23 > 0 )
    {
      s = 0;
      goto LABEL_35;
    }
    if ( !HIDWORD(v190[1]) && (*(_BYTE *)a4 & 1) != 0 )
    {
      v165 = v24;
      v106 = sub_587080((int *)&v181, (__int64)a3, (unsigned int)v175, v22);
      s = 0;
      v24 = v165;
      v23 = v106;
      if ( v106 > 0 )
      {
LABEL_35:
        if ( (*(_BYTE *)a4 & 0x10) != 0
          || (v164 = v24,
              v90 = sub_589EE0(a1, (unsigned int *)&v181, (__int64)a3, (__int64)v190, a4, v23, &v177),
              v24 = v164,
              v90) )
        {
          if ( v177
            || (unsigned __int8)sub_58CD90(
                                  a1,
                                  (unsigned int)&v181,
                                  (_DWORD)a3,
                                  (_DWORD)v167,
                                  v24,
                                  v23,
                                  v175,
                                  (__int64)v190,
                                  (__int64)a4) )
          {
            goto LABEL_37;
          }
        }
LABEL_180:
        clear_tinfo_t(v190);
        goto LABEL_7;
      }
    }
    else
    {
      s = 0;
    }
LABEL_37:
    clear_tinfo_t(v190);
    goto LABEL_38;
  }
  if ( (v17 & 0x2F) != 0xD )
  {
    v12 = &v181;
    v153 = v17 & 0xF;
    v158 = v17;
    v39 = sub_5870F0((__int64)&v199, (__int64)&v181, tinfo_size, a3);
    v17 = v158;
    v19 = v153;
    if ( !v39 )
    {
      v14 = sub_587850(a1, *a4);
      goto LABEL_8;
    }
    goto LABEL_20;
  }
  v177 = 0;
  switch ( v19 )
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
      if ( *v167 != 3 )
        goto LABEL_62;
      v40 = 3;
      if ( (unsigned int)(tinfo_size - 2) <= 6 )
        v40 = dword_238B760[(unsigned int)(tinfo_size - 2)];
      realtoasc(
        &s,
        1024,
        v167 + 8,
        *(char *)(v10 + v40 + 888) | (unsigned int)((*(_DWORD *)(v157 + 360) << 16) | (*(_DWORD *)(v157 + 364) << 8)));
      goto LABEL_38;
    case 13:
      if ( (v17 & 0x3F) == 0x2D )
        goto LABEL_22;
LABEL_78:
      v14 = sub_588570(a1, a4);
      if ( !(_BYTE)v14 && (get_tinfo_property(*a3, 2) & 0x3F) == 0x1D )
      {
        v94 = *a3;
        ptr = nullptr;
        v195 = 1;
        v196 = -1;
        v197 = 0;
        v198 = 0;
        memset(v190, 0, sizeof(v190));
        v191 = 0;
        v193 = 0;
        v194[0] = 0;
        if ( (int)find_tinfo_udt_member((int)v190) < 0 )
        {
          set_qerrno(1640, v94);
          goto LABEL_217;
        }
        v95 = *(_DWORD *)(a1 + 16);
        v201[0] = 2;
        v203 = 0;
        v96 = *(_QWORD *)(a1 + 8);
        v202 = 0;
        if ( v95 > 0 )
        {
          for ( i = 0; i != v95; ++i )
          {
            v98 = *(_QWORD **)(v96 + 32);
            if ( !v98 || (v99 = v98[1]) == 0 )
            {
              if ( !under_debugger )
                interr(3441);
              goto LABEL_336;
            }
            v96 = *v98 + 56 * v99 - 56;
          }
        }
        v100 = *(__int64 **)(v96 + 32);
        v101 = v100[1];
        v102 = *v100;
        if ( v100[2] < (unsigned __int64)(v101 + 1) )
        {
          v135 = qvector_reserve(v100, v102, v101 + 1, 56);
          *v100 = v135;
          v102 = v135;
          v101 = v100[1];
        }
        v103 = v102 + 56 * v101;
        *(_QWORD *)v103 = 0;
        *(_QWORD *)(v103 + 24) = 0;
        *(_DWORD *)(v103 + 48) = 0;
        *(_OWORD *)(v103 + 8) = 0;
        *(_OWORD *)(v103 + 32) = 0;
        ++v100[1];
        v185 = nullptr;
        *(_QWORD *)&v186 = 0;
        if ( (*(_BYTE *)a4 & 1) != 0 )
        {
          if ( *v167 == 2 )
          {
            v137 = *((_DWORD *)v167 + 2);
            cleanup_argloc(&v185);
            LODWORD(v185) = 6;
            LODWORD(v186) = v137;
          }
          else
          {
            if ( *v167 != 8 )
            {
              set_qerrno(1641, v102);
              cleanup_argloc(&v185);
              goto LABEL_216;
            }
            copy_argloc(&v185, *((_QWORD *)v167 + 1));
          }
        }
        (**(void (__fastcall ***)(__int64, void **, void *, _OWORD *))a1)(a1, &v185, v190[2], v194);
        if ( (*(_BYTE *)a4 & 1) == 0 )
        {
          idcv_attr = get_idcv_attr();
          if ( idcv_attr == 1538 )
          {
            v105 = sub_587850(a1, *a4);
            goto LABEL_214;
          }
          if ( idcv_attr )
          {
LABEL_215:
            cleanup_argloc(&v185);
LABEL_216:
            free_idcv(v201);
LABEL_217:
            clear_tinfo_t(v194);
            if ( ptr )
            {
              *(_QWORD *)&v193 = 0;
              qfree(ptr);
            }
            if ( v190[2] )
            {
              *(_QWORD *)&v191 = 0;
              qfree(v190[2]);
            }
            goto LABEL_99;
          }
          v167 = v201;
        }
        v105 = sub_58A550(a1, v167, v194, a4, 0);
LABEL_214:
        v14 = v105;
        goto LABEL_215;
      }
      v41 = *a3;
      v185 = nullptr;
      v188 = 0;
      v189 = 1;
      v186 = 0;
      v187 = 0;
      get_tinfo_details(v41, 13, &v185);
      v42 = a4[4];
      v43 = a4[3];
      if ( v42 )
      {
        v44 = v43 + v42;
        v45 = v44;
      }
      else
      {
        v45 = 0x7FFFFFFF;
        v44 = 0x7FFFFFFF;
      }
      *(_QWORD *)(a4 + 3) = 0;
      if ( (unsigned __int64)v186 < v45 )
        v44 = v186;
      if ( v43 >= v44 )
      {
LABEL_164:
        v14 = 1;
        goto LABEL_90;
      }
      v149 = (v43 + (unsigned __int64)(unsigned int)(v44 - v43)) << 7;
      v176 = (__int64)v43 << 7;
      while ( 1 )
      {
        v46 = *a4;
        v183 = 0;
        v47 = (unsigned __int64 *)((char *)v185 + v176);
        v184 = 0;
        v48 = (char *)v185 + v176 + 64;
        v156 = v46;
        v180 = 0;
        copy_tinfo_t(&v180);
        if ( (v156 & 1) == 0 )
          goto LABEL_146;
        v159 = *v47;
        if ( *v167 == 2 )
        {
          v74 = *((_DWORD *)v167 + 2);
LABEL_145:
          v160 = (v159 >> 3) + v74;
          cleanup_argloc(&v183);
          LODWORD(v183) = 6;
          LODWORD(v184) = v160;
          goto LABEL_146;
        }
        if ( *v167 != 8 )
          goto LABEL_89;
        v87 = *((unsigned int **)v167 + 1);
        v88 = *v87;
        if ( (_DWORD)v88 == 6 )
        {
          v74 = v87[2];
          goto LABEL_145;
        }
        if ( (int)v88 <= 6 )
          goto LABEL_89;
        v148 = *((_QWORD *)v167 + 1);
        custom_argloc = retrieve_custom_argloc(v88, v48);
        if ( !custom_argloc
          || !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64, _QWORD *, _QWORD, unsigned __int64 *))(custom_argloc + 56))(
                &v183,
                &v180,
                v148,
                a3,
                (unsigned int)v159,
                v47 + 2) )
        {
          goto LABEL_89;
        }
LABEL_146:
        v75 = *(_DWORD *)(a1 + 16);
        v76 = *(_QWORD *)(a1 + 8);
        if ( v75 > 0 )
        {
          v77 = 0;
          while ( 1 )
          {
            v78 = *(_QWORD **)(v76 + 32);
            if ( !v78 )
              break;
            v79 = v78[1];
            if ( !v79 )
              break;
            ++v77;
            v76 = *v78 + 56 * v79 - 56;
            if ( v75 == v77 )
              goto LABEL_151;
          }
          if ( !under_debugger )
            interr(3441);
LABEL_336:
          BUG();
        }
LABEL_151:
        v80 = *(__int64 **)(v76 + 32);
        v81 = v80[1];
        v82 = *v80;
        if ( v80[2] < (unsigned __int64)(v81 + 1) )
        {
          v82 = qvector_reserve(v80, v82, v81 + 1, 56);
          *v80 = v82;
          v81 = v80[1];
        }
        v83 = v82 + 56 * v81;
        *(_OWORD *)(v83 + 8) = 0;
        *(_QWORD *)v83 = 0;
        *(_QWORD *)(v83 + 24) = 0;
        *(_DWORD *)(v83 + 48) = 0;
        *(_OWORD *)(v83 + 32) = 0;
        ++v80[1];
        (**(void (__fastcall ***)(__int64, __int64 *, unsigned __int64, __int64 *))a1)(a1, &v183, v47[2], &v180);
        v201[0] = 2;
        v203 = 0;
        v202 = 0;
        if ( (v156 & 1) != 0 )
        {
          v201[0] = 8;
          *(_QWORD *)&v202 = &v183;
          v85 = *v47 & 7;
          goto LABEL_156;
        }
        v84 = get_idcv_attr();
        v85 = v84;
        if ( v84 != 1538 )
          break;
        if ( !(unsigned __int8)sub_587850(a1, v156) )
          goto LABEL_159;
LABEL_162:
        if ( (_BYTE)v14 )
          goto LABEL_166;
LABEL_163:
        free_idcv(v201);
        clear_tinfo_t(&v180);
        cleanup_argloc(&v183);
        v176 += 128;
        if ( v176 == v149 )
          goto LABEL_164;
      }
      if ( v84 )
        goto LABEL_159;
LABEL_156:
      if ( (unsigned __int8)sub_58A550(a1, v201, &v180, a4, v85) )
        goto LABEL_162;
      if ( (_BYTE)v14 && (unsigned int)get_qerrno() == 1645 )
      {
        set_qerrno(0, v201);
LABEL_166:
        *(_DWORD *)(a1 + 48) = 0;
        *a4 &= ~0x40000000u;
        goto LABEL_163;
      }
LABEL_159:
      free_idcv(v201);
LABEL_89:
      v14 = 0;
      clear_tinfo_t(&v180);
      cleanup_argloc(&v183);
LABEL_90:
      v49 = (char *)v185;
      if ( v185 )
      {
        v50 = v186;
        if ( (_QWORD)v186 )
        {
          v51 = 0;
          do
          {
            v52 = &v49[128 * v51];
            clear_tinfo_t(v52 + 64);
            v53 = *((void **)v52 + 5);
            if ( v53 )
            {
              *((_QWORD *)v52 + 6) = 0;
              qfree(v53);
            }
            v54 = *((void **)v52 + 2);
            if ( v54 )
            {
              *((_QWORD *)v52 + 3) = 0;
              qfree(v54);
            }
            ++v51;
            v49 = (char *)v185;
          }
          while ( v50 != v51 );
        }
        *(_QWORD *)&v186 = 0;
        qfree(v49);
      }
LABEL_99:
      v55 = *(_DWORD *)(a1 + 16);
      v56 = *(_QWORD *)(a1 + 8);
      v57 = 0;
      if ( v55 > 0 )
      {
        while ( 1 )
        {
          v58 = *(_QWORD **)(v56 + 32);
          if ( !v58 )
            break;
          v59 = v58[1];
          if ( !v59 )
            break;
          ++v57;
          v56 = *v58 + 56 * v59 - 56;
          if ( v55 == v57 )
            goto LABEL_103;
        }
        if ( !under_debugger )
          interr(3441);
        goto LABEL_336;
      }
LABEL_103:
      sub_587E10(v56, *(_DWORD *)(a1 + 56));
      v60 = *(_QWORD *)(a1 + 32);
      if ( !v60 )
        sub_587060();
      v61 = v60 - 1;
      v62 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v60 - 1);
      *(_QWORD *)(a1 + 32) = v61;
      if ( v62 )
        --*(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 48) += (*(char *)(a1 + 56) < 0) + 1;
LABEL_8:
      cleanup_argloc(&v181);
      return v14;
    default:
      if ( !(_DWORD)tinfo_size )
      {
LABEL_71:
        set_qerrno(1640, v12);
        goto LABEL_7;
      }
LABEL_22:
      if ( *v167 == 2 )
      {
        if ( (unsigned __int64)(int)tinfo_size <= 4 )
        {
          LODWORD(v199) = *((_DWORD *)v167 + 2);
          goto LABEL_26;
        }
      }
      else if ( *v167 == 9 && (unsigned __int64)(int)tinfo_size <= 8 )
      {
        v199 = *((_QWORD *)v167 + 1);
LABEL_26:
        a5 = 0;
LABEL_27:
        s = 0;
        if ( (v19 & 0xFD) != 8 )
        {
          v38 = a4[1];
          switch ( tinfo_size )
          {
            case 1LL:
              v68 = (unsigned __int8)v199;
              if ( v19 == 14 )
                goto LABEL_278;
              v66 = (unsigned __int8)v199;
              v65 = 0;
LABEL_123:
              v67 = v17 & 0x3F;
              if ( (v17 & 0x3F) == 0x2D )
                goto LABEL_124;
              goto LABEL_133;
            case 2LL:
              v68 = (unsigned __int16)v199;
              v65 = 0;
              v66 = (unsigned __int16)v199;
              if ( v19 == 14 )
                goto LABEL_278;
              goto LABEL_132;
            case 4LL:
              v68 = (unsigned int)v199;
              v65 = 0;
              v66 = (unsigned int)v199;
              if ( v19 == 14 )
                goto LABEL_278;
              goto LABEL_132;
            case 8LL:
              v68 = v199;
              if ( v19 == 14 )
                goto LABEL_278;
LABEL_131:
              v66 = v68;
              v65 = 0;
              goto LABEL_132;
            case 16LL:
              v66 = v199;
              v65 = v200;
              v68 = v199;
              if ( v19 == 14 )
              {
LABEL_278:
                v171 = v17;
                tinfo_bitfield_value = read_tinfo_bitfield_value(*a3, v68, a5);
                v17 = v171;
                v68 = tinfo_bitfield_value;
                v66 = tinfo_bitfield_value;
                v65 = 0;
LABEL_132:
                v67 = v17 & 0x3F;
                if ( (v17 & 0x3F) != 0x2D )
                  goto LABEL_133;
              }
              else
              {
LABEL_141:
                v67 = v17 & 0x3F;
                if ( (v17 & 0x3F) != 0x2D )
                  goto LABEL_133;
                if ( v65 )
                {
                  set_qerrno(1643, v12);
                  goto LABEL_7;
                }
LABEL_124:
                v68 = v66;
              }
              v169 = v66;
              v172 = v65;
              memset(v190, 0, sizeof(v190));
              enum_member_expr = get_enum_member_expr(v190, a3, 0, v68);
              v66 = v169;
              v65 = v172;
              if ( enum_member_expr )
              {
                v70 = haystack;
                if ( v190[1] )
                  v70 = (const char *)v190[0];
                qstrncpy(&s, v70, 1024);
                if ( v190[0] )
                {
                  v190[1] = nullptr;
                  qfree(v190[0]);
                }
                goto LABEL_38;
              }
              if ( v190[0] )
              {
                v190[1] = nullptr;
                qfree(v190[0]);
                v66 = v169;
                v65 = v172;
              }
              v67 = 45;
LABEL_133:
              v170 = v66;
              v173 = v65;
              v71 = get_tinfo_property(*a3, 3);
              v72 = 8 * (unsigned int)(v71 == 2) + 64;
              v73 = (8 * (v71 == 2) + 64) | 0x10;
              if ( (*(_BYTE *)a4 & 0x20) != 0 )
                v72 = v73;
              if ( (v67 & 0xDF) == 0x12 )
              {
                v72 = (unsigned int)v72 | 3;
              }
              else if ( v38 == 16 )
              {
                v72 = (unsigned int)v72 | 1;
              }
              else if ( v38 == 8 )
              {
                v72 = (unsigned int)v72 | 2;
              }
              format_c_number(&s, 1024, v170, v173, (unsigned int)tinfo_size, v72);
              break;
            default:
LABEL_72:
              if ( !under_debugger )
                interr(600);
              goto LABEL_336;
          }
          goto LABEL_38;
        }
        switch ( tinfo_size )
        {
          case 1LL:
            v63 = (unsigned __int8)v199;
            goto LABEL_112;
          case 2LL:
            v63 = (unsigned __int16)v199;
            goto LABEL_112;
          case 4LL:
            v63 = (unsigned int)v199;
            goto LABEL_112;
          case 6LL:
            v63 = v199 & 0xFFFFFFFFFFFFLL;
            goto LABEL_112;
          case 8LL:
            v63 = v199;
LABEL_112:
            if ( v19 == 8 )
            {
              v64 = "false";
              if ( v63 )
                v64 = "true";
              qstrncpy(&s, v64, 1024);
LABEL_38:
              v14 = 1;
              if ( s )
              {
                v25 = *(_QWORD *)(a1 + 8);
                v26 = *(_DWORD *)(a1 + 16);
                v168 = (__int64 *)v25;
                if ( v26 > 0 )
                {
                  v27 = 0;
                  while ( 1 )
                  {
                    v28 = *(__int64 **)(v25 + 32);
                    if ( !v28 )
                      break;
                    v29 = v28[1];
                    if ( !v29 )
                      break;
                    v30 = *v28;
                    ++v27;
                    v25 = v30 + 56 * v29 - 56;
                    if ( v26 == v27 )
                    {
                      v168 = (__int64 *)(v30 + 56 * v29 - 56);
                      goto LABEL_45;
                    }
                  }
                  if ( !under_debugger )
                    interr(3441);
                  goto LABEL_336;
                }
LABEL_45:
                v31 = (_QWORD *)v168[4];
                if ( v31 )
                {
                  v32 = v31[1];
                  if ( v32 )
                    v168 = (__int64 *)(*v31 + 56 * v32 - 56);
                }
                v33 = strlen(&s);
                v34 = v33;
                v35 = v168[1];
                if ( v35 )
                {
                  --v35;
                  v34 = v33 + v35;
                }
                v36 = v34 + 1;
                v37 = *v168;
                if ( v168[2] < v34 + 1 )
                {
                  v37 = qvector_reserve(v168, v37, v36, 1);
                  v36 = v34 + 1;
                  *v168 = v37;
                }
                v168[1] = v36;
                *(_BYTE *)(v37 + v34) = 0;
                memmove((void *)(v35 + *v168), &s, v33);
                v168[3] = (v168[1] == 0) + v168[1] - 1;
                v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, v168);
              }
              goto LABEL_8;
            }
            v179 = 0;
            copy_tinfo_t(&v179);
            if ( (_DWORD)v181 == 6 )
            {
              cleanup_argloc(&v181);
              LODWORD(v181) = 6;
              LODWORD(v182) = v63;
              v190[0] = nullptr;
              v190[0] = (void *)get_tinfo_property(v179, 9);
              v92 = v190;
              copy_tinfo_t(&v179);
              clear_tinfo_t(v190);
            }
            else if ( (int)v181 <= 6
                   || (v91 = sub_6917B0(*(_QWORD *)(v10 + 1480), (unsigned int)v181, v86)) == 0
                   || (v92 = (void **)&v179,
                       !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64 *))(v91 + 72))(
                          &v181,
                          &v179,
                          &v181)) )
            {
              v14 = sub_587850(a1, *a4);
              goto LABEL_170;
            }
            v93 = *a4;
            v178 = 1;
            if ( (v93 & 0x310) != 0x100 )
              goto LABEL_195;
            if ( (_DWORD)v181 == 6 )
            {
              v109 = format_c_number(&s, 1024, (unsigned int)v182, 0, *(unsigned int *)(v10 + 1328), 1);
            }
            else
            {
              if ( (int)v181 <= 6
                || (v107 = retrieve_custom_argloc((unsigned int)v181, v92)) == 0
                || (v108 = *(__int64 (__fastcall **)(char *, __int64, char *, __int64 *, __int64 *))(v107 + 136)) == nullptr )
              {
LABEL_194:
                s = 0;
LABEL_195:
                v14 = sub_589EE0(a1, (unsigned int *)&v181, (__int64)a3, (__int64)&v179, a4, 0xFFFFFFFF, &v177);
                if ( (_BYTE)v14 )
                {
                  if ( v177 )
                  {
LABEL_199:
                    clear_tinfo_t(&v179);
                    goto LABEL_38;
                  }
                  if ( (*((_BYTE *)a4 + 1) & 1) == 0 )
                  {
                    if ( (_DWORD)v181 == 6 )
                    {
                      v133 = v182;
                      flags = get_flags_ex((unsigned int)v182, 4);
                      if ( (flags & 0xC000u) == 0 && (flags & 0x600) != 0x200 )
                        set_dummy_name(0xFFFFFFFFLL, v133);
                      v185 = nullptr;
                      v186 = 0;
                      if ( get_ea_name(&v185, v133, 0, 0) > 0 )
                      {
                        calc_c_cpp_name(&v185, v185, &v179, 1);
                        s = 38;
                        qstrncpy(v205, v185, 1023);
                      }
                      else if ( v133 )
                      {
                        s = 40;
                        memset(v190, 0, sizeof(v190));
                        if ( (unsigned __int8)print_tinfo((int)v190, 0, 0, 0, 0, (int)a3, 0, 0) )
                        {
                          v138 = (char *)v190[1] + (v190[1] == nullptr) - 1;
                          if ( v190[2] < v138 + 2 )
                            v190[0] = (void *)qvector_reserve(v190, v190[0], v138 + 2, 1);
                          v190[1] = v138 + 2;
                          *((_BYTE *)v190[0] + (unsigned __int64)v138) = 41;
                          *((_BYTE *)v190[0] + (unsigned __int64)v138 + 1) = 0;
                          v136 = (char *)qstpncpy(v205, v190[0], 1023);
                        }
                        else
                        {
                          strcpy(v205, "?)");
                          v136 = &v205[2];
                        }
                        format_c_number(v136, v207 - v136, v133, 0, (unsigned int)tinfo_size, 1);
                        if ( v190[0] )
                        {
                          v190[1] = nullptr;
                          qfree(v190[0]);
                        }
                      }
                      else
                      {
                        qstrncpy(&s, "NULL", 1024);
                      }
                      if ( v185 )
                      {
                        *(_QWORD *)&v186 = 0;
                        qfree(v185);
                      }
                    }
                    goto LABEL_199;
                  }
                  v125 = get_tinfo_property(v179, 2);
                  v126 = (v125 == 0) | v155 ^ 1;
                  if ( v126
                    || (v127 = v125 & 0xF, (v125 & 0xF) == 0xC)
                    || (v125 & 0x3F) == 1
                    || (_DWORD)v181 == 6 && !(unsigned __int8)is_loaded((unsigned int)v182)
                    || (int)v181 > 6 && !v178 )
                  {
                    sub_588790(a1, (*(char *)a4 < 0) + 1);
                    clear_tinfo_t(&v179);
                    goto LABEL_38;
                  }
                  if ( (*a4 & 0x10) != 0 )
                  {
                    if ( v127 == 10 )
                    {
                      v126 = sub_588570(a1, a4);
                      if ( !v126 )
                      {
                        if ( !under_debugger )
                          interr(625);
                        goto LABEL_336;
                      }
                      v140 = *(_DWORD *)(a1 + 16);
                      v141 = *(_QWORD *)(a1 + 8);
                      if ( v140 > 0 )
                      {
                        for ( j = 0; j != v140; ++j )
                        {
                          v143 = *(_QWORD **)(v141 + 32);
                          if ( !v143 || (v144 = v143[1]) == 0 )
                          {
                            if ( !under_debugger )
                              interr(3441);
                            goto LABEL_336;
                          }
                          v141 = *v143 + 56 * v144 - 56;
                        }
                      }
                      v145 = *(_QWORD **)(v141 + 32);
                      v146 = v145[1];
                      if ( v145[2] < (unsigned __int64)(v146 + 1) )
                      {
                        *v145 = qvector_reserve(v145, *v145, v146 + 1, 56);
                        v146 = v145[1];
                      }
                      v147 = *v145 + 56 * v146;
                      *(_QWORD *)v147 = 0;
                      *(_QWORD *)(v147 + 24) = 0;
                      *(_DWORD *)(v147 + 48) = 0;
                      *(_OWORD *)(v147 + 8) = 0;
                      *(_OWORD *)(v147 + 32) = 0;
                      ++v145[1];
                    }
                    else
                    {
                      *a4 &= ~0x40000000u;
                    }
                  }
                  v128 = 6;
                  v129 = (_DWORD)v181 == 6;
                  v130 = &v202;
                  v201[0] = 2;
                  while ( v128 )
                  {
                    *(_DWORD *)v130 = 0;
                    v130 = (__int128 *)((char *)v130 + 4);
                    --v128;
                  }
                  if ( v129 )
                  {
                    v139 = v182;
                    *a4 |= 1u;
                    LODWORD(v202) = v139;
                  }
                  else
                  {
                    v201[0] = 8;
                    *(_QWORD *)&v202 = &v181;
                  }
                  v14 = sub_58A550(a1, v201, &v179, a4, 0);
                  if ( v126 )
                    sub_5886E0(a1);
                  free_idcv(v201);
                }
LABEL_170:
                clear_tinfo_t(&v179);
                goto LABEL_8;
              }
              v109 = v108(&s, 1024, &v178, &v181, &v179);
            }
            v110 = &v205[v109 - 1];
            if ( v110 != &s )
            {
              if ( v110 >= v207 )
              {
                if ( !under_debugger )
                  interr(518);
                goto LABEL_336;
              }
              v111 = v110 + 1;
              *v110 = 58;
              if ( v110 + 1 >= v207 )
              {
                v206 = 0;
                v111 = &v206;
              }
              if ( *(char *)a4 < 0 )
              {
                *v111++ = 32;
                if ( v111 >= v207 )
                {
                  v206 = 0;
                  v111 = &v206;
                }
              }
              *v111 = 0;
              v112 = *(_DWORD *)(a1 + 16);
              v113 = *(__int64 **)(a1 + 8);
              if ( v112 > 0 )
              {
                for ( k = 0; k != v112; ++k )
                {
                  v115 = (_QWORD *)v113[4];
                  if ( !v115 || (v116 = v115[1]) == 0 )
                  {
                    if ( !under_debugger )
                      interr(3441);
                    goto LABEL_336;
                  }
                  v113 = (__int64 *)(*v115 + 56 * v116 - 56);
                }
              }
              v117 = (_QWORD *)v113[4];
              if ( v117 )
              {
                v118 = v117[1];
                if ( v118 )
                  v113 = (__int64 *)(*v117 + 56 * v118 - 56);
              }
              v119 = strlen(&s);
              v120 = v113[1];
              v121 = v119;
              v122 = v119;
              if ( v120 )
              {
                --v120;
                v122 = v119 + v120;
              }
              v123 = *v113;
              v124 = v122 + 1;
              if ( v113[2] < v122 + 1 )
              {
                v154 = v119;
                v161 = v122;
                v163 = v120;
                v166 = v122 + 1;
                v131 = qvector_reserve(v113, v123, v124, 1);
                *v113 = v131;
                v121 = v154;
                v123 = v131;
                v122 = v161;
                v120 = v163;
                v124 = v166;
              }
              v113[1] = v124;
              *(_BYTE *)(v123 + v122) = 0;
              memmove((void *)(v120 + *v113), &s, v121);
              v113[3] = (v113[1] == 0) + v113[1] - 1;
            }
            goto LABEL_194;
          default:
            if ( !under_debugger )
              interr(599);
            goto LABEL_336;
        }
      }
LABEL_62:
      set_qerrno(1642, v12);
      goto LABEL_7;
  }
}

