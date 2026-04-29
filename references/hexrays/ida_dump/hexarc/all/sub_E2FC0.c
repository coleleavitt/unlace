unsigned __int64 __fastcall sub_E2FC0(_QWORD *a1, __int64 a2, char a3)
{
  _QWORD *v4; // r12
  __int64 v5; // rax
  char op_tinfo; // r13
  char v9; // al
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 flags; // rax
  unsigned __int64 v13; // rax
  char *v14; // rdx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  char does_return; // al
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // eax
  bool v25; // zf
  char v26; // al
  int v27; // eax
  __int64 v28; // rdi
  int v29; // r8d
  int v30; // r9d
  _BYTE *v31; // rsi
  int v32; // eax
  __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // r15
  int v36; // r9d
  unsigned __int64 v37; // r13
  char *v38; // rsi
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  char *v41; // r15
  __int64 *v42; // rsi
  unsigned int v43; // eax
  int v44; // edx
  char v45; // al
  int v46; // edx
  char v47; // al
  __int64 v48; // rax
  int v49; // ecx
  int v50; // r9d
  __int64 v51; // r12
  int v52; // r13d
  __int64 v53; // rsi
  int v54; // ecx
  char *v55; // r15
  int aflags; // eax
  __int64 v57; // rax
  __int64 v58; // rdi
  int v59; // eax
  int v60; // edx
  __int64 v61; // r13
  __int64 v62; // rbx
  _QWORD *v63; // r12
  __int64 v64; // rdi
  __int64 v65; // rdi
  const char *v66; // r8
  __int64 (*v67)(); // rdx
  __int64 (*v68)(); // rax
  char *v69; // rdi
  __int64 v70; // r12
  __int64 v71; // r14
  char *v72; // rbx
  __int64 v73; // rdi
  __int64 v74; // rdi
  char *v75; // rdi
  __int64 v76; // r12
  __int64 v77; // rbx
  char *v78; // r15
  __int64 v79; // rdi
  __int64 v80; // rdi
  __int64 v81; // rsi
  const char *v82; // rdi
  __int64 v83; // rax
  char v84; // dl
  __int64 v85; // rax
  char v86; // al
  unsigned __int64 v87; // rcx
  const char *v88; // r13
  _BYTE *v89; // rsi
  size_t v90; // r9
  __int64 v91; // r8
  char *v92; // rax
  __int64 first_dref_from; // rax
  void **p_src; // [rsp+0h] [rbp-100h]
  __int64 v95; // [rsp+8h] [rbp-F8h]
  __int64 v96; // [rsp+10h] [rbp-F0h]
  __int64 v97; // [rsp+18h] [rbp-E8h]
  char v98; // [rsp+23h] [rbp-DDh]
  int v99; // [rsp+24h] [rbp-DCh]
  char *v100; // [rsp+28h] [rbp-D8h]
  __int64 v101; // [rsp+28h] [rbp-D8h]
  __int64 v102; // [rsp+28h] [rbp-D8h]
  int v103; // [rsp+30h] [rbp-D0h]
  size_t v104; // [rsp+30h] [rbp-D0h]
  int v106; // [rsp+38h] [rbp-C8h]
  __int64 v107; // [rsp+38h] [rbp-C8h]
  char v108[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v109; // [rsp+48h] [rbp-B8h] BYREF
  char v110[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-A8h] BYREF
  void *src; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v113; // [rsp+68h] [rbp-98h]
  __int64 v114; // [rsp+78h] [rbp-88h]
  __int64 v115; // [rsp+80h] [rbp-80h] BYREF
  __int64 v116; // [rsp+88h] [rbp-78h] BYREF
  __int128 v117; // [rsp+90h] [rbp-70h]
  __int64 v118; // [rsp+A0h] [rbp-60h]
  __int128 v119; // [rsp+A8h] [rbp-58h]
  char v120; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v121; // [rsp+C8h] [rbp-38h]

  v4 = a1 + 37;
  v5 = *(_QWORD *)(a2 + 24);
  v121 = __readfsqword(0x28u);
  a1[38] = v5;
  clear_tinfo_t(a1 + 37);
  if ( !(unsigned __int8)sub_E0A70(a1[2], a1 + 40, a2, a3) )
    return v121 - __readfsqword(0x28u);
  get_ea_name(a1 + 3, a1[40], 512, 0);
  v103 = *(_DWORD *)a2;
  v98 = *(_DWORD *)a2 != 56;
  op_tinfo = get_op_tinfo(v4, a1[38], 0);
  v9 = 0;
  if ( !op_tinfo )
  {
    if ( !(unsigned __int8)sub_3797A0(a1[2], a1[40], v4, 2) )
    {
LABEL_10:
      if ( (*((_BYTE *)a1 + 356) & 2) == 0 )
        return v121 - __readfsqword(0x28u);
      if ( v103 == 56 )
      {
        v11 = a1[1];
        if ( *(_QWORD *)(a2 + 24) != *(_QWORD *)(v11 + 40) || *(char *)v11 >= 0 || !*(_BYTE *)(v11 + 328) )
          goto LABEL_18;
      }
      else
      {
        if ( (getinf(57) & 0xF) == 1 )
          *((_BYTE *)a1 + 365) = 1;
        v11 = a1[1];
        if ( *(_QWORD *)(v11 + 40) != *(_QWORD *)(a2 + 24) || *(char *)v11 >= 0 || !*(_BYTE *)(v11 + 328) )
        {
          flags = get_flags_ex(a1[40], 4);
          if ( (flags & 0x600) == 0x400 && (flags & 0xF00000) == 0x500000 )
          {
            first_dref_from = get_first_dref_from(a1[40]);
            if ( (unsigned __int8)sub_3797A0(a1[2], first_dref_from, v4, 2) )
              goto LABEL_53;
          }
LABEL_18:
          v13 = a1[4];
          if ( v13 <= 1 )
            goto LABEL_19;
          v81 = a1[3];
          src = nullptr;
          v113 = 0;
          if ( (int)demangle_name(&src, v81, 104857607, 2) <= 0 )
          {
            if ( src )
            {
              *(_QWORD *)&v113 = 0;
              qfree(src);
              v13 = a1[4];
              goto LABEL_19;
            }
LABEL_190:
            v13 = a1[4];
LABEL_19:
            v14 = (char *)s1;
            if ( v13 )
              v14 = (char *)a1[3];
            v15 = sub_DB8C0(a1, *(_QWORD *)(*a1 + 56LL), v14);
            v16 = *((_DWORD *)a1 + 87);
            *((_DWORD *)a1 + 90) = v15;
            if ( v16 < 0 || (v17 = a1[2], v16 >= *(_DWORD *)(v17 + 656)) )
            {
              *((_DWORD *)a1 + 90) = 0;
            }
            else if ( v15 )
            {
              BYTE4(v95) = 0;
              if ( a1[40] != -1 )
              {
                does_return = func_does_return();
                v17 = a1[2];
                BYTE4(v95) = does_return ^ 1;
              }
              sub_324D40(v108, *(_QWORD *)(v17 + 112), *(unsigned int *)(*(_QWORD *)(v17 + 112) + 80LL));
              if ( !a1[26] )
                goto LABEL_72;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 200LL))(
                     *(_QWORD *)(a1[21] + 112LL),
                     *(unsigned int *)a1[25]) )
              {
                v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                        *(_QWORD *)(a1[21] + 112LL),
                        *(unsigned int *)a1[25]);
                if ( a1[26] <= 1u
                  || (v19 = (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]), (unsigned int)v19 >= v20) )
                {
LABEL_31:
                  if ( v20 > 4 )
                    goto LABEL_72;
                  v21 = a1[21];
                  if ( *(_DWORD *)(*(_QWORD *)(v21 + 8) + 4LL) == 13 || !a1[26] )
                    goto LABEL_37;
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 112) + 200LL))(
                         *(_QWORD *)(v21 + 112),
                         *(unsigned int *)a1[25]) )
                  {
                    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                            *(_QWORD *)(a1[21] + 112LL),
                            *(unsigned int *)a1[25]);
                    if ( a1[26] <= 1u
                      || (v22 = (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]), (unsigned int)v22 >= v32) )
                    {
LABEL_71:
                      if ( v32 > 7 )
                      {
LABEL_37:
                        v23 = 9;
LABEL_73:
                        v109 = v23;
                        if ( (a1[11] & 0xFFFFFFFB) != 2 )
                          goto LABEL_74;
                        v84 = sub_5E300(a1 + 31);
                        v85 = 0;
                        if ( !v84 )
                          v85 = (int)(sub_5E680(a1 + 31) + 1);
                        if ( a1[16] == v85 )
                        {
                          v34 = a1 + 29;
                          v86 = sub_5E300(a1 + 29);
                          v87 = 0;
                          if ( !v86 )
                            v87 = (int)(sub_5E680(a1 + 29) + 1);
                          v33 = a1[21];
                          if ( v87 < a1[13] )
                          {
                            sub_324C20(v110, *(_QWORD *)(v33 + 112), *(unsigned int *)(*(_QWORD *)(v33 + 112) + 80LL));
LABEL_76:
                            v106 = 0;
                            if ( !(unsigned __int8)sub_5E300(v34) )
                              v106 = sub_5E680(v34) + 1;
                            v35 = 0;
                            if ( !(unsigned __int8)sub_5E300(v34) )
                              v35 = (int)(sub_5E680(v34) + 1);
                            if ( !(unsigned __int8)sub_5E300(a1 + 31) )
                              v35 += (int)(sub_5E680(a1 + 31) + 1);
                            v36 = *((_DWORD *)a1 + 87);
                            v99 = v35;
                            src = nullptr;
                            v114 = 0;
                            v115 = 0;
                            v116 = 0;
                            v118 = 0;
                            v120 = 16;
                            v113 = 0;
                            v117 = 0;
                            v119 = 0;
                            if ( v36 <= 0 )
                            {
                              v45 = 0;
                            }
                            else
                            {
                              v37 = 0;
                              v38 = nullptr;
                              v39 = 0;
                              v40 = 0;
                              while ( 1 )
                              {
                                if ( v39 < v40 + 1 )
                                {
                                  src = (void *)qvector_reserve(&src, v38, v40 + 1, 80);
                                  v38 = (char *)src;
                                  v40 = v113;
                                }
                                v41 = &v38[80 * v40];
                                v42 = (__int64 *)v108;
                                *(_DWORD *)v41 = 0;
                                *((_QWORD *)v41 + 1) = 0;
                                *((_QWORD *)v41 + 2) = 0;
                                *((_QWORD *)v41 + 5) = 0;
                                *((_QWORD *)v41 + 8) = 0;
                                *((_DWORD *)v41 + 18) = 0;
                                *(_OWORD *)(v41 + 24) = 0;
                                *((_OWORD *)v41 + 3) = 0;
                                *(_QWORD *)&v113 = v113 + 1;
                                if ( (int)v37 >= v106 )
                                {
                                  v42 = &v109;
                                  if ( v99 <= (int)v37 )
                                    v42 = (__int64 *)v110;
                                }
                                v100 = v41 + 64;
                                copy_tinfo_t(v41 + 64, v42);
                                if ( v37 < a1[13] && *(_DWORD *)(a1[12] + 4 * v37) == *((_DWORD *)a1 + 72) )
                                {
                                  if ( BYTE4(v95) )
                                  {
                                    if ( *((_BYTE *)a1 + 292) )
                                    {
                                      v43 = a1[45] & 0xFFFFFFF0;
                                      if ( v43 == 64 || (v44 = 240, v43 == 208) )
                                        v44 = 208;
                                      *((_DWORD *)a1 + 90) = v44;
                                    }
                                  }
                                  else
                                  {
                                    *((_DWORD *)v41 + 18) |= 2u;
                                    sub_325010(&tinfo_property, *(_QWORD *)(a1[2] + 112LL), v100);
                                    copy_tinfo_t(v100, &tinfo_property);
                                    clear_tinfo_t(&tinfo_property);
                                  }
                                }
                                if ( *((_DWORD *)a1 + 87) <= (int)++v37 )
                                  break;
                                v39 = *((_QWORD *)&v113 + 1);
                                v40 = v113;
                                v38 = (char *)src;
                              }
                              v45 = v120 & 0xF;
                            }
                            v46 = *((_DWORD *)a1 + 90);
                            if ( (v46 & 0xFFFFFF0F) != 0 || v46 == 192 )
                            {
                              v47 = v45 | 0xC0;
                            }
                            else
                            {
                              v47 = v46 | v45;
                              v46 = 0;
                            }
                            v120 = v47;
                            v48 = *a1;
                            HIDWORD(v114) = v46;
                            v101 = *(_QWORD *)(*(_QWORD *)(v48 + 480) + 112LL);
                            if ( BYTE4(v95) )
                            {
                              LODWORD(v114) = v114 | 2;
                              tinfo_property = 1;
                              copy_tinfo_t(&v115, &tinfo_property);
                              clear_tinfo_t(&tinfo_property);
                              if ( (unsigned int)(*((_DWORD *)a1 + 90) - 208) <= 0x2F && *((int *)a1 + 87) > 0 )
                              {
                                v51 = 0;
                                v52 = 0;
                                LODWORD(v95) = 0;
                                p_src = &src;
                                do
                                {
                                  v55 = (char *)src + 80 * v51;
                                  if ( v99 <= (int)v51 )
                                  {
                                    cleanup_argloc((char *)src + 80 * v51);
                                    *(_DWORD *)v55 = 1;
                                    *((_QWORD *)v55 + 1) = 0;
                                  }
                                  else
                                  {
                                    if ( (int)v51 < v106 )
                                    {
                                      v53 = v52++;
                                      v54 = *(_DWORD *)(a1[12] + 4 * v53);
                                    }
                                    else
                                    {
                                      v54 = *(_DWORD *)(a1[15] + 4LL * (int)v95);
                                      LODWORD(v95) = v95 + 1;
                                    }
                                    HIDWORD(v95) = v54;
                                    cleanup_argloc((char *)src + 80 * v51);
                                    v49 = HIDWORD(v95);
                                    *(_DWORD *)v55 = 3;
                                    *((_DWORD *)v55 + 2) = HIDWORD(v95);
                                  }
                                  ++v51;
                                }
                                while ( *((_DWORD *)a1 + 87) > (int)v51 );
                              }
                            }
                            else
                            {
                              aflags = get_aflags(a1[40]);
                              sub_E0960((__int64)a1, (__int64)&src, (aflags & 0x4000000) != 0);
                            }
                            v57 = a1[21];
                            if ( *(_DWORD *)(*(_QWORD *)(v57 + 8) + 4LL) == 13 || !a1[26] )
                              goto LABEL_127;
                            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v57 + 112) + 200LL))(
                                   *(_QWORD *)(v57 + 112),
                                   *(unsigned int *)a1[25]) )
                            {
                              v59 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                                      *(_QWORD *)(a1[21] + 112LL),
                                      *(unsigned int *)a1[25]);
                              if ( a1[26] <= 1u
                                || (v58 = (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]),
                                    (unsigned int)v58 >= v59) )
                              {
LABEL_119:
                                if ( v59 <= 7 )
                                {
                                  v49 = v106;
                                  v60 = v99 - v106 + ((((_BYTE)v99 - (_BYTE)v106) & 1) == 0) - 2;
                                  if ( v60 > 0 )
                                  {
                                    v61 = 80LL * v60;
                                    v62 = v61
                                        - 160
                                        - 160LL
                                        * ((v99 - v106 + (unsigned int)((((_BYTE)v99 - (_BYTE)v106) & 1) == 0) - 3) >> 1);
                                    do
                                    {
                                      v63 = (char *)src + v61;
                                      clear_tinfo_t((char *)src + v61 + 64);
                                      v64 = v63[5];
                                      if ( v64 )
                                      {
                                        v63[6] = 0;
                                        qfree(v64);
                                      }
                                      v65 = v63[2];
                                      if ( v65 )
                                      {
                                        v63[3] = 0;
                                        qfree(v65);
                                      }
                                      v61 -= 160;
                                      cleanup_argloc(v63);
                                      memmove(v63, v63 + 10, (_BYTE *)src + 80 * v113 - (_BYTE *)v63 - 80);
                                      *(_QWORD *)&v113 = v113 - 1;
                                    }
                                    while ( v62 != v61 );
                                  }
                                }
                                goto LABEL_127;
                              }
                            }
                            else if ( a1[26] <= 1u
                                   || (v58 = (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]),
                                       (unsigned int)v58 > 7) )
                            {
LABEL_127:
                              v66 = s1;
                              if ( a1[4] )
                                v66 = (const char *)a1[3];
                              v67 = sub_DD130;
                              v68 = *(__int64 (**)())(*(_QWORD *)v101 + 128LL);
                              if ( v68 != sub_DD130
                                && !((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, const char *, void **, char *))v68)(
                                      v101,
                                      *a1,
                                      *(_QWORD *)(*a1 + 56LL),
                                      a1[40],
                                      v66,
                                      &src,
                                      (char *)a1 + 348)
                                || (unsigned __int64)v113 >= *(int *)(a1[2] + 656LL) )
                              {
                                if ( v118 )
                                {
                                  *(_QWORD *)&v119 = 0;
                                  qfree(v118);
                                }
                                cleanup_argloc(&v116);
                                clear_tinfo_t(&v115);
                                v69 = (char *)src;
                                if ( src )
                                {
                                  v70 = v113;
                                  if ( (_QWORD)v113 )
                                  {
                                    v71 = 0;
                                    do
                                    {
                                      v72 = &v69[80 * v71];
                                      clear_tinfo_t(v72 + 64);
                                      v73 = *((_QWORD *)v72 + 5);
                                      if ( v73 )
                                      {
                                        *((_QWORD *)v72 + 6) = 0;
                                        qfree(v73);
                                      }
                                      v74 = *((_QWORD *)v72 + 2);
                                      if ( v74 )
                                      {
                                        *((_QWORD *)v72 + 3) = 0;
                                        qfree(v74);
                                      }
                                      cleanup_argloc(v72);
                                      v69 = (char *)src;
                                      ++v71;
                                    }
                                    while ( v70 != v71 );
                                  }
                                  *(_QWORD *)&v113 = 0;
                                  qfree(v69);
                                }
                                clear_tinfo_t(v110);
                                clear_tinfo_t(&v109);
                                clear_tinfo_t(v108);
                                return v121 - __readfsqword(0x28u);
                              }
                              sub_EB980(
                                (_DWORD)a1,
                                (unsigned int)&src,
                                (_DWORD)v67,
                                v49,
                                (_DWORD)v66,
                                v50,
                                (__int64)p_src,
                                v95,
                                (__int64)&v109,
                                (unsigned int)v110);
                              if ( v118 )
                              {
                                *(_QWORD *)&v119 = 0;
                                qfree(v118);
                              }
                              cleanup_argloc(&v116);
                              clear_tinfo_t(&v115);
                              v75 = (char *)src;
                              if ( src )
                              {
                                v76 = v113;
                                if ( (_QWORD)v113 )
                                {
                                  v77 = 0;
                                  do
                                  {
                                    v78 = &v75[80 * v77];
                                    clear_tinfo_t(v78 + 64);
                                    v79 = *((_QWORD *)v78 + 5);
                                    if ( v79 )
                                    {
                                      *((_QWORD *)v78 + 6) = 0;
                                      qfree(v79);
                                    }
                                    v80 = *((_QWORD *)v78 + 2);
                                    if ( v80 )
                                    {
                                      *((_QWORD *)v78 + 3) = 0;
                                      qfree(v80);
                                    }
                                    ++v77;
                                    cleanup_argloc(v78);
                                    v75 = (char *)src;
                                  }
                                  while ( v76 != v77 );
                                }
                                *(_QWORD *)&v113 = 0;
                                qfree(v75);
                              }
                              clear_tinfo_t(v97);
                              clear_tinfo_t(v96);
                              clear_tinfo_t(v108);
                              goto LABEL_53;
                            }
                            v59 = round_down_power2(v58);
                            goto LABEL_119;
                          }
                        }
                        else
                        {
LABEL_74:
                          v33 = a1[21];
                        }
                        sub_324D40(v110, *(_QWORD *)(v33 + 112), *(unsigned int *)(*(_QWORD *)(v33 + 112) + 80LL));
                        v34 = a1 + 29;
                        goto LABEL_76;
                      }
LABEL_72:
                      v23 = 25;
                      goto LABEL_73;
                    }
                  }
                  else
                  {
                    if ( a1[26] <= 1u )
                      goto LABEL_37;
                    v22 = (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]);
                    if ( (unsigned int)v22 > 7 )
                      goto LABEL_37;
                  }
                  v32 = round_down_power2(v22);
                  goto LABEL_71;
                }
              }
              else
              {
                if ( a1[26] <= 1u )
                  goto LABEL_72;
                v19 = (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]);
                if ( (unsigned int)v19 > 7 )
                  goto LABEL_72;
              }
              v20 = round_down_power2(v19);
              goto LABEL_31;
            }
            return v121 - __readfsqword(0x28u);
          }
          tinfo_property = 0;
          if ( (unsigned __int8)parse_decl(&tinfo_property, 0, 0, src, 16769) )
            goto LABEL_187;
          v88 = "_QWORD ";
          if ( !*(_BYTE *)(a1[2] + 144LL) )
            v88 = "_DWORD ";
          v89 = src;
          if ( (_QWORD)v113 )
          {
            v90 = v113 - 1;
            v107 = v113 + 7;
            v91 = v113 + 6;
            if ( *((_QWORD *)&v113 + 1) >= (unsigned __int64)(v113 + 7) )
              goto LABEL_184;
          }
          else
          {
            if ( *((_QWORD *)&v113 + 1) > 7u )
            {
              *(_QWORD *)&v113 = 8;
              *((_BYTE *)src + 7) = 0;
LABEL_186:
              v92 = (char *)src;
              *(_DWORD *)src = *(_DWORD *)v88;
              *(_DWORD *)(v92 + 3) = *(_DWORD *)(v88 + 3);
              parse_decl(&tinfo_property, 0, 0, src, 16769);
LABEL_187:
              if ( !(_BYTE)tinfo_property
                || !sub_D9E90(&tinfo_property, v98)
                || !(unsigned __int8)sub_325640(&tinfo_property, a1[2], a1[40]) )
              {
                clear_tinfo_t(&tinfo_property);
                if ( src )
                {
                  *(_QWORD *)&v113 = 0;
                  qfree(src);
                }
                goto LABEL_190;
              }
              copy_tinfo_t(v4, &tinfo_property);
              clear_tinfo_t(&tinfo_property);
              if ( src )
              {
                *(_QWORD *)&v113 = 0;
                qfree(src);
              }
LABEL_53:
              *((_BYTE *)a1 + 366) = 1;
              return sub_E0BA0((__int64)a1, v98, 0);
            }
            v107 = 8;
            v90 = 0;
            v91 = 7;
          }
          v102 = v91;
          v104 = v90;
          src = (void *)qvector_reserve(&src, src, v107, 1);
          v91 = v102;
          v89 = src;
          v90 = v104;
LABEL_184:
          *(_QWORD *)&v113 = v107;
          v89[v91] = 0;
          if ( v90 )
            memmove((char *)src + 7, src, v90);
          goto LABEL_186;
        }
      }
      copy_tinfo_t(v4, v11 + 328);
      goto LABEL_53;
    }
    v9 = sub_36D3E0(a1[2], a1[40], 2);
  }
  *((_BYTE *)a1 + 366) = v9;
  if ( v103 != 56 && !(unsigned __int8)sub_32D3F0(v4, 0, 0) )
    clear_tinfo_t(v4);
  if ( (get_tinfo_property(a1[37], 2) & 0xF) == 0xA )
  {
    v28 = a1[37];
    src = nullptr;
    v113 = 0;
    if ( (v28 & 0x100) != 0 )
    {
      if ( get_tinfo_pdata(&src, v28, 0) )
      {
        v82 = s1;
        if ( (_QWORD)v113 )
          v82 = (const char *)src;
        v83 = stristr(v82, "WINDBG");
        v28 = a1[37];
        if ( v83 )
          *((_BYTE *)a1 + 365) = 1;
      }
      else
      {
        v28 = a1[37];
      }
    }
    tinfo_property = get_tinfo_property(v28, 10);
    copy_tinfo_t(v4, &tinfo_property);
    clear_tinfo_t(&tinfo_property);
    if ( src )
    {
      *(_QWORD *)&v113 = 0;
      qfree(src);
    }
  }
  if ( op_tinfo )
  {
    if ( (get_tinfo_property(a1[37], 2) & 0xF) == 0xC && (unsigned __int8)sub_325640(v4, a1[2], a1[40]) )
      goto LABEL_39;
    v10 = a1[38];
    if ( (unsigned __int8)sub_36C920(a1[2], v10) )
    {
LABEL_9:
      clear_tinfo_t(v4);
      goto LABEL_10;
    }
LABEL_63:
    v113 = 0;
    src = nullptr;
    if ( !(unsigned __int8)print_type(&src, v10, 0) )
    {
      v31 = src;
      if ( *((_QWORD *)&v113 + 1) <= 1u )
      {
        src = (void *)qvector_reserve(&src, src, 2, 1);
        v31 = src;
      }
      *(_QWORD *)&v113 = 2;
      *v31 = 63;
      *((_BYTE *)src + 1) = 0;
    }
    sub_329B90(a1[1], v10, 2, (_DWORD)src, v29, v30);
    if ( src )
    {
      *(_QWORD *)&v113 = 0;
      qfree(src);
    }
    goto LABEL_9;
  }
  sub_E20D0((__int64)a1, *(_QWORD *)(*a1 + 56LL), v98);
  if ( (get_tinfo_property(a1[37], 2) & 0xF) != 0xC || !(unsigned __int8)sub_325640(v4, a1[2], a1[40]) )
  {
    v10 = a1[40];
    if ( (unsigned __int8)sub_36C920(a1[2], v10) )
      goto LABEL_9;
    goto LABEL_63;
  }
LABEL_39:
  v24 = get_tinfo_property(a1[37], 23);
  *((_DWORD *)a1 + 87) = v24;
  v25 = v24 == 0;
  if ( v24 < 0 )
    goto LABEL_9;
  v26 = *((_BYTE *)a1 + 366);
  if ( !v25 )
  {
    if ( !v26 )
      goto LABEL_42;
    if ( (unsigned __int8)sub_E2A60(a1) )
      sub_E0BA0((__int64)a1, v98, 0);
    v26 = *((_BYTE *)a1 + 366);
  }
  if ( v26 && *((int *)a1 + 87) <= 0 )
    goto LABEL_9;
LABEL_42:
  v27 = get_tinfo_property(a1[37], 20);
  *((_DWORD *)a1 + 90) = v27;
  if ( !v27 )
    goto LABEL_9;
  if ( !*((_BYTE *)a1 + 366) )
    *((_DWORD *)a1 + 88) |= 4u;
  if ( v103 == 56 )
    a1[39] = a1[40];
  return get_tinfo_attrs(a1[37], a1 + 6, 1);
}
