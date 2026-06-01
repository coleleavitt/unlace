unsigned __int64 __fastcall sub_E9680(_QWORD *a1, __int64 a2, char a3)
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
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  bool v23; // zf
  char v24; // al
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // r8d
  int v29; // r9d
  _BYTE *v30; // rsi
  int v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // r15
  int v35; // r9d
  unsigned __int64 v36; // r13
  char *v37; // rsi
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  char *v40; // r15
  unsigned int v41; // eax
  int v42; // edx
  char v43; // al
  int v44; // edx
  char v45; // al
  __int64 v46; // rax
  int v47; // ecx
  int v48; // r9d
  __int64 v49; // r12
  int v50; // r13d
  __int64 v51; // rsi
  int v52; // ecx
  char *v53; // r15
  int aflags; // eax
  __int64 v55; // rax
  int v56; // eax
  int v57; // edx
  __int64 v58; // r13
  __int64 v59; // rbx
  _QWORD *v60; // r12
  __int64 v61; // rdi
  __int64 v62; // rdi
  const char *v63; // r8
  __int64 (*v64)(); // rdx
  __int64 (*v65)(); // rax
  char *v66; // rdi
  __int64 v67; // r12
  __int64 v68; // r14
  char *v69; // rbx
  __int64 v70; // rdi
  __int64 v71; // rdi
  char *v72; // rdi
  __int64 v73; // r12
  __int64 v74; // rbx
  char *v75; // r15
  __int64 v76; // rdi
  __int64 v77; // rdi
  char v78; // dl
  __int64 v79; // rax
  char v80; // al
  unsigned __int64 v81; // rcx
  const char *v82; // r13
  _BYTE *v83; // rsi
  size_t v84; // r9
  __int64 v85; // r8
  char *v86; // rax
  __int64 first_dref_from; // rax
  void **p_src; // [rsp+0h] [rbp-100h]
  __int64 v89; // [rsp+8h] [rbp-F8h]
  char v90; // [rsp+23h] [rbp-DDh]
  int v91; // [rsp+24h] [rbp-DCh]
  __int64 v92; // [rsp+28h] [rbp-D8h]
  __int64 v93; // [rsp+28h] [rbp-D8h]
  int v94; // [rsp+30h] [rbp-D0h]
  size_t v95; // [rsp+30h] [rbp-D0h]
  int v97; // [rsp+38h] [rbp-C8h]
  __int64 v98; // [rsp+38h] [rbp-C8h]
  char v99[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v100; // [rsp+48h] [rbp-B8h] BYREF
  char v101[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-A8h] BYREF
  void *src; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v104; // [rsp+68h] [rbp-98h]
  __int64 v105; // [rsp+78h] [rbp-88h]
  __int64 v106; // [rsp+80h] [rbp-80h]
  __int64 v107; // [rsp+88h] [rbp-78h]
  __int128 v108; // [rsp+90h] [rbp-70h]
  __int64 v109; // [rsp+A0h] [rbp-60h]
  __int128 v110; // [rsp+A8h] [rbp-58h]
  char v111; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v112; // [rsp+C8h] [rbp-38h]

  v4 = a1 + 37;
  v5 = *(_QWORD *)(a2 + 24);
  v112 = __readfsqword(0x28u);
  a1[38] = v5;
  clear_tinfo_t();
  if ( !(unsigned __int8)sub_E7130(a1[2], a1 + 40, a2, a3) )
    return v112 - __readfsqword(0x28u);
  get_ea_name();
  v94 = *(_DWORD *)a2;
  v90 = *(_DWORD *)a2 != 56;
  op_tinfo = get_op_tinfo();
  v9 = 0;
  if ( !op_tinfo )
  {
    if ( !(unsigned __int8)sub_3810A0(a1[2], a1[40], v4, 2) )
    {
LABEL_10:
      if ( (*((_BYTE *)a1 + 356) & 2) == 0 )
        return v112 - __readfsqword(0x28u);
      if ( v94 == 56 )
      {
        v26 = a1[1];
        if ( *(_QWORD *)(a2 + 24) != *(_QWORD *)(v26 + 40) || *(char *)v26 >= 0 || !*(_BYTE *)(v26 + 328) )
          goto LABEL_18;
      }
      else
      {
        if ( (getinf() & 0xF) == 1 )
          *((_BYTE *)a1 + 365) = 1;
        v11 = a1[1];
        if ( *(_QWORD *)(v11 + 40) != *(_QWORD *)(a2 + 24) || *(char *)v11 >= 0 || !*(_BYTE *)(v11 + 328) )
        {
          flags = get_flags_ex();
          if ( (flags & 0x600) == 0x400 && (flags & 0xF00000) == 0x500000 )
          {
            first_dref_from = get_first_dref_from();
            if ( (unsigned __int8)sub_3810A0(a1[2], first_dref_from, v4, 2) )
              goto LABEL_53;
          }
LABEL_18:
          v13 = a1[4];
          if ( v13 <= 1 )
            goto LABEL_19;
          src = nullptr;
          v104 = 0;
          if ( (int)demangle_name() <= 0 )
          {
            if ( src )
            {
              *(_QWORD *)&v104 = 0;
              qfree((__int64)src);
              v13 = a1[4];
              goto LABEL_19;
            }
LABEL_184:
            v13 = a1[4];
LABEL_19:
            v14 = (char *)s1;
            if ( v13 )
              v14 = (char *)a1[3];
            v15 = sub_E1F80(a1, *(_QWORD *)(*a1 + 56LL), v14);
            v16 = *((_DWORD *)a1 + 87);
            *((_DWORD *)a1 + 90) = v15;
            if ( v16 < 0 || (v17 = a1[2], v16 >= *(_DWORD *)(v17 + 656)) )
            {
              *((_DWORD *)a1 + 90) = 0;
            }
            else if ( v15 )
            {
              BYTE4(v89) = 0;
              if ( a1[40] != -1 )
              {
                does_return = func_does_return();
                v17 = a1[2];
                BYTE4(v89) = does_return ^ 1;
              }
              sub_32C270(v99, *(_QWORD *)(v17 + 112), *(unsigned int *)(*(_QWORD *)(v17 + 112) + 80LL));
              if ( !a1[26] )
                goto LABEL_72;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 200LL))(
                     *(_QWORD *)(a1[21] + 112LL),
                     *(unsigned int *)a1[25]) )
              {
                v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                        *(_QWORD *)(a1[21] + 112LL),
                        *(unsigned int *)a1[25]);
                if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v19 )
                {
LABEL_31:
                  if ( v19 > 4 )
                    goto LABEL_72;
                  v20 = a1[21];
                  if ( *(_DWORD *)(*(_QWORD *)(v20 + 8) + 4LL) == 13 || !a1[26] )
                    goto LABEL_37;
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v20 + 112) + 200LL))(
                         *(_QWORD *)(v20 + 112),
                         *(unsigned int *)a1[25]) )
                  {
                    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                            *(_QWORD *)(a1[21] + 112LL),
                            *(unsigned int *)a1[25]);
                    if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v31 )
                    {
LABEL_71:
                      if ( v31 > 7 )
                      {
LABEL_37:
                        v21 = 9;
LABEL_73:
                        v100 = v21;
                        if ( (a1[11] & 0xFFFFFFFB) != 2 )
                          goto LABEL_74;
                        v78 = sub_64880(a1 + 31);
                        v79 = 0;
                        if ( !v78 )
                          v79 = (int)(sub_64C00(a1 + 31) + 1);
                        if ( a1[16] == v79 )
                        {
                          v33 = a1 + 29;
                          v80 = sub_64880(a1 + 29);
                          v81 = 0;
                          if ( !v80 )
                            v81 = (int)(sub_64C00(a1 + 29) + 1);
                          v32 = a1[21];
                          if ( v81 < a1[13] )
                          {
                            sub_32C150(v101, *(_QWORD *)(v32 + 112), *(unsigned int *)(*(_QWORD *)(v32 + 112) + 80LL));
LABEL_76:
                            v97 = 0;
                            if ( !(unsigned __int8)sub_64880(v33) )
                              v97 = sub_64C00(v33) + 1;
                            v34 = 0;
                            if ( !(unsigned __int8)sub_64880(v33) )
                              v34 = (int)(sub_64C00(v33) + 1);
                            if ( !(unsigned __int8)sub_64880(a1 + 31) )
                              v34 += (int)(sub_64C00(a1 + 31) + 1);
                            v35 = *((_DWORD *)a1 + 87);
                            v91 = v34;
                            src = nullptr;
                            v105 = 0;
                            v106 = 0;
                            v107 = 0;
                            v109 = 0;
                            v111 = 16;
                            v104 = 0;
                            v108 = 0;
                            v110 = 0;
                            if ( v35 <= 0 )
                            {
                              v43 = 0;
                            }
                            else
                            {
                              v36 = 0;
                              v37 = nullptr;
                              v38 = 0;
                              v39 = 0;
                              while ( 1 )
                              {
                                if ( v38 < v39 + 1 )
                                {
                                  src = (void *)qvector_reserve((__int64)&src, (__int64)v37, v39 + 1, 80);
                                  v37 = (char *)src;
                                  v39 = v104;
                                }
                                v40 = &v37[80 * v39];
                                *(_DWORD *)v40 = 0;
                                *((_QWORD *)v40 + 1) = 0;
                                *((_QWORD *)v40 + 2) = 0;
                                *((_QWORD *)v40 + 5) = 0;
                                *((_QWORD *)v40 + 8) = 0;
                                *((_DWORD *)v40 + 18) = 0;
                                *(_OWORD *)(v40 + 24) = 0;
                                *((_OWORD *)v40 + 3) = 0;
                                *(_QWORD *)&v104 = v104 + 1;
                                copy_tinfo_t();
                                if ( v36 < a1[13] && *(_DWORD *)(a1[12] + 4 * v36) == *((_DWORD *)a1 + 72) )
                                {
                                  if ( BYTE4(v89) )
                                  {
                                    if ( *((_BYTE *)a1 + 292) )
                                    {
                                      v41 = a1[45] & 0xFFFFFFF0;
                                      if ( v41 == 64 || (v42 = 240, v41 == 208) )
                                        v42 = 208;
                                      *((_DWORD *)a1 + 90) = v42;
                                    }
                                  }
                                  else
                                  {
                                    *((_DWORD *)v40 + 18) |= 2u;
                                    sub_32C540(&tinfo_property, *(_QWORD *)(a1[2] + 112LL), v40 + 64);
                                    copy_tinfo_t();
                                    clear_tinfo_t();
                                  }
                                }
                                if ( *((_DWORD *)a1 + 87) <= (int)++v36 )
                                  break;
                                v38 = *((_QWORD *)&v104 + 1);
                                v39 = v104;
                                v37 = (char *)src;
                              }
                              v43 = v111 & 0xF;
                            }
                            v44 = *((_DWORD *)a1 + 90);
                            if ( (v44 & 0xFFFFFF0F) != 0 || v44 == 192 )
                            {
                              v45 = v43 | 0xC0;
                            }
                            else
                            {
                              v45 = v44 | v43;
                              v44 = 0;
                            }
                            v111 = v45;
                            v46 = *a1;
                            HIDWORD(v105) = v44;
                            v92 = *(_QWORD *)(*(_QWORD *)(v46 + 480) + 112LL);
                            if ( BYTE4(v89) )
                            {
                              LODWORD(v105) = v105 | 2;
                              tinfo_property = 1;
                              copy_tinfo_t();
                              clear_tinfo_t();
                              if ( (unsigned int)(*((_DWORD *)a1 + 90) - 208) <= 0x2F && *((int *)a1 + 87) > 0 )
                              {
                                v49 = 0;
                                v50 = 0;
                                LODWORD(v89) = 0;
                                p_src = &src;
                                do
                                {
                                  v53 = (char *)src + 80 * v49;
                                  if ( v91 <= (int)v49 )
                                  {
                                    cleanup_argloc();
                                    *(_DWORD *)v53 = 1;
                                    *((_QWORD *)v53 + 1) = 0;
                                  }
                                  else
                                  {
                                    if ( (int)v49 < v97 )
                                    {
                                      v51 = v50++;
                                      v52 = *(_DWORD *)(a1[12] + 4 * v51);
                                    }
                                    else
                                    {
                                      v52 = *(_DWORD *)(a1[15] + 4LL * (int)v89);
                                      LODWORD(v89) = v89 + 1;
                                    }
                                    HIDWORD(v89) = v52;
                                    cleanup_argloc();
                                    v47 = HIDWORD(v89);
                                    *(_DWORD *)v53 = 3;
                                    *((_DWORD *)v53 + 2) = HIDWORD(v89);
                                  }
                                  ++v49;
                                }
                                while ( *((_DWORD *)a1 + 87) > (int)v49 );
                              }
                            }
                            else
                            {
                              aflags = get_aflags();
                              sub_E7020((__int64)a1, (__int64)&src, (aflags & 0x4000000) != 0);
                            }
                            v55 = a1[21];
                            if ( *(_DWORD *)(*(_QWORD *)(v55 + 8) + 4LL) == 13 || !a1[26] )
                              goto LABEL_124;
                            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v55 + 112) + 200LL))(
                                   *(_QWORD *)(v55 + 112),
                                   *(unsigned int *)a1[25]) )
                            {
                              v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                                      *(_QWORD *)(a1[21] + 112LL),
                                      *(unsigned int *)a1[25]);
                              if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v56 )
                              {
LABEL_116:
                                if ( v56 <= 7 )
                                {
                                  v47 = v97;
                                  v57 = v91 - v97 + ((((_BYTE)v91 - (_BYTE)v97) & 1) == 0) - 2;
                                  if ( v57 > 0 )
                                  {
                                    v58 = 80LL * v57;
                                    v59 = v58
                                        - 160
                                        - 160LL
                                        * ((v91 - v97 + (unsigned int)((((_BYTE)v91 - (_BYTE)v97) & 1) == 0) - 3) >> 1);
                                    do
                                    {
                                      v60 = (char *)src + v58;
                                      clear_tinfo_t();
                                      v61 = v60[5];
                                      if ( v61 )
                                      {
                                        v60[6] = 0;
                                        qfree(v61);
                                      }
                                      v62 = v60[2];
                                      if ( v62 )
                                      {
                                        v60[3] = 0;
                                        qfree(v62);
                                      }
                                      v58 -= 160;
                                      cleanup_argloc();
                                      memmove(v60, v60 + 10, (_BYTE *)src + 80 * v104 - (_BYTE *)v60 - 80);
                                      *(_QWORD *)&v104 = v104 - 1;
                                    }
                                    while ( v59 != v58 );
                                  }
                                }
                                goto LABEL_124;
                              }
                            }
                            else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
                            {
LABEL_124:
                              v63 = s1;
                              if ( a1[4] )
                                v63 = (const char *)a1[3];
                              v64 = sub_E37F0;
                              v65 = *(__int64 (**)())(*(_QWORD *)v92 + 128LL);
                              if ( v65 != sub_E37F0
                                && !((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, const char *, void **, char *))v65)(
                                      v92,
                                      *a1,
                                      *(_QWORD *)(*a1 + 56LL),
                                      a1[40],
                                      v63,
                                      &src,
                                      (char *)a1 + 348)
                                || (unsigned __int64)v104 >= *(int *)(a1[2] + 656LL) )
                              {
                                if ( v109 )
                                {
                                  *(_QWORD *)&v110 = 0;
                                  qfree(v109);
                                }
                                cleanup_argloc();
                                clear_tinfo_t();
                                v66 = (char *)src;
                                if ( src )
                                {
                                  v67 = v104;
                                  if ( (_QWORD)v104 )
                                  {
                                    v68 = 0;
                                    do
                                    {
                                      v69 = &v66[80 * v68];
                                      clear_tinfo_t();
                                      v70 = *((_QWORD *)v69 + 5);
                                      if ( v70 )
                                      {
                                        *((_QWORD *)v69 + 6) = 0;
                                        qfree(v70);
                                      }
                                      v71 = *((_QWORD *)v69 + 2);
                                      if ( v71 )
                                      {
                                        *((_QWORD *)v69 + 3) = 0;
                                        qfree(v71);
                                      }
                                      cleanup_argloc();
                                      v66 = (char *)src;
                                      ++v68;
                                    }
                                    while ( v67 != v68 );
                                  }
                                  *(_QWORD *)&v104 = 0;
                                  qfree((__int64)v66);
                                }
                                clear_tinfo_t();
                                clear_tinfo_t();
                                clear_tinfo_t();
                                return v112 - __readfsqword(0x28u);
                              }
                              sub_F2040(
                                (_DWORD)a1,
                                (unsigned int)&src,
                                (_DWORD)v64,
                                v47,
                                (_DWORD)v63,
                                v48,
                                (__int64)p_src,
                                v89,
                                (__int64)&v100,
                                (unsigned int)v101);
                              if ( v109 )
                              {
                                *(_QWORD *)&v110 = 0;
                                qfree(v109);
                              }
                              cleanup_argloc();
                              clear_tinfo_t();
                              v72 = (char *)src;
                              if ( src )
                              {
                                v73 = v104;
                                if ( (_QWORD)v104 )
                                {
                                  v74 = 0;
                                  do
                                  {
                                    v75 = &v72[80 * v74];
                                    clear_tinfo_t();
                                    v76 = *((_QWORD *)v75 + 5);
                                    if ( v76 )
                                    {
                                      *((_QWORD *)v75 + 6) = 0;
                                      qfree(v76);
                                    }
                                    v77 = *((_QWORD *)v75 + 2);
                                    if ( v77 )
                                    {
                                      *((_QWORD *)v75 + 3) = 0;
                                      qfree(v77);
                                    }
                                    ++v74;
                                    cleanup_argloc();
                                    v72 = (char *)src;
                                  }
                                  while ( v73 != v74 );
                                }
                                *(_QWORD *)&v104 = 0;
                                qfree((__int64)v72);
                              }
                              clear_tinfo_t();
                              clear_tinfo_t();
                              clear_tinfo_t();
                              goto LABEL_53;
                            }
                            v56 = round_down_power2();
                            goto LABEL_116;
                          }
                        }
                        else
                        {
LABEL_74:
                          v32 = a1[21];
                        }
                        sub_32C270(v101, *(_QWORD *)(v32 + 112), *(unsigned int *)(*(_QWORD *)(v32 + 112) + 80LL));
                        v33 = a1 + 29;
                        goto LABEL_76;
                      }
LABEL_72:
                      v21 = 25;
                      goto LABEL_73;
                    }
                  }
                  else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
                  {
                    goto LABEL_37;
                  }
                  v31 = round_down_power2();
                  goto LABEL_71;
                }
              }
              else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
              {
                goto LABEL_72;
              }
              v19 = round_down_power2();
              goto LABEL_31;
            }
            return v112 - __readfsqword(0x28u);
          }
          tinfo_property = 0;
          if ( (unsigned __int8)parse_decl() )
            goto LABEL_181;
          v82 = "_QWORD ";
          if ( !*(_BYTE *)(a1[2] + 144LL) )
            v82 = "_DWORD ";
          v83 = src;
          if ( (_QWORD)v104 )
          {
            v84 = v104 - 1;
            v98 = v104 + 7;
            v85 = v104 + 6;
            if ( *((_QWORD *)&v104 + 1) >= (unsigned __int64)(v104 + 7) )
              goto LABEL_178;
          }
          else
          {
            if ( *((_QWORD *)&v104 + 1) > 7u )
            {
              *(_QWORD *)&v104 = 8;
              *((_BYTE *)src + 7) = 0;
LABEL_180:
              v86 = (char *)src;
              *(_DWORD *)src = *(_DWORD *)v82;
              *(_DWORD *)(v86 + 3) = *(_DWORD *)(v82 + 3);
              parse_decl();
LABEL_181:
              if ( !(_BYTE)tinfo_property
                || !sub_E0550(&tinfo_property, v90)
                || !(unsigned __int8)sub_32CB80(&tinfo_property, a1[2], a1[40]) )
              {
                clear_tinfo_t();
                if ( src )
                {
                  *(_QWORD *)&v104 = 0;
                  qfree((__int64)src);
                }
                goto LABEL_184;
              }
              copy_tinfo_t();
              clear_tinfo_t();
              if ( src )
              {
                *(_QWORD *)&v104 = 0;
                qfree((__int64)src);
              }
LABEL_53:
              *((_BYTE *)a1 + 366) = 1;
              return sub_E7260((__int64)a1, v90, 0);
            }
            v98 = 8;
            v84 = 0;
            v85 = 7;
          }
          v93 = v85;
          v95 = v84;
          src = (void *)qvector_reserve((__int64)&src, (__int64)src, v98, 1);
          v85 = v93;
          v83 = src;
          v84 = v95;
LABEL_178:
          *(_QWORD *)&v104 = v98;
          v83[v85] = 0;
          if ( v84 )
            memmove((char *)src + 7, src, v84);
          goto LABEL_180;
        }
      }
      copy_tinfo_t();
      goto LABEL_53;
    }
    v9 = sub_374CE0(a1[2], a1[40], 2);
  }
  *((_BYTE *)a1 + 366) = v9;
  if ( v94 != 56 && !(unsigned __int8)sub_334C10(v4, 0, 0) )
    clear_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    v27 = a1[37];
    src = nullptr;
    v104 = 0;
    if ( (v27 & 0x100) != 0 && get_tinfo_pdata() && stristr() )
      *((_BYTE *)a1 + 365) = 1;
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    if ( src )
    {
      *(_QWORD *)&v104 = 0;
      qfree((__int64)src);
    }
  }
  if ( op_tinfo )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC && (unsigned __int8)sub_32CB80(v4, a1[2], a1[40]) )
      goto LABEL_39;
    v10 = a1[38];
    if ( (unsigned __int8)sub_374220(a1[2], v10) )
    {
LABEL_9:
      clear_tinfo_t();
      goto LABEL_10;
    }
LABEL_63:
    v104 = 0;
    src = nullptr;
    if ( !(unsigned __int8)print_type() )
    {
      v30 = src;
      if ( *((_QWORD *)&v104 + 1) <= 1u )
      {
        src = (void *)qvector_reserve((__int64)&src, (__int64)src, 2, 1);
        v30 = src;
      }
      *(_QWORD *)&v104 = 2;
      *v30 = 63;
      *((_BYTE *)src + 1) = 0;
    }
    sub_3311F0(a1[1], v10, 2, (_DWORD)src, v28, v29);
    if ( src )
    {
      *(_QWORD *)&v104 = 0;
      qfree((__int64)src);
    }
    goto LABEL_9;
  }
  sub_E8790((__int64)a1, *(_QWORD *)(*a1 + 56LL), v90);
  if ( (get_tinfo_property() & 0xF) != 0xC || !(unsigned __int8)sub_32CB80(v4, a1[2], a1[40]) )
  {
    v10 = a1[40];
    if ( (unsigned __int8)sub_374220(a1[2], v10) )
      goto LABEL_9;
    goto LABEL_63;
  }
LABEL_39:
  v22 = get_tinfo_property();
  *((_DWORD *)a1 + 87) = v22;
  v23 = v22 == 0;
  if ( v22 < 0 )
    goto LABEL_9;
  v24 = *((_BYTE *)a1 + 366);
  if ( !v23 )
  {
    if ( !v24 )
      goto LABEL_42;
    if ( (unsigned __int8)sub_E9120(a1) )
      sub_E7260((__int64)a1, v90, 0);
    v24 = *((_BYTE *)a1 + 366);
  }
  if ( v24 && *((int *)a1 + 87) <= 0 )
    goto LABEL_9;
LABEL_42:
  v25 = get_tinfo_property();
  *((_DWORD *)a1 + 90) = v25;
  if ( !v25 )
    goto LABEL_9;
  if ( !*((_BYTE *)a1 + 366) )
    *((_DWORD *)a1 + 88) |= 4u;
  if ( v94 == 56 )
    a1[39] = a1[40];
  return get_tinfo_attrs();
}
