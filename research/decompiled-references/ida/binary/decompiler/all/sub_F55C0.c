unsigned __int64 __fastcall sub_F55C0(_QWORD *a1, __int64 a2, char a3)
{
  _QWORD *v4; // r12
  __int64 v5; // rax
  int v8; // r13d
  char op_tinfo; // r14
  char v10; // al
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 flags; // rax
  unsigned __int64 v14; // rax
  char *v15; // rdx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  char does_return; // al
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  bool v24; // zf
  char v25; // al
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdi
  int v29; // r8d
  int v30; // r9d
  _BYTE *v31; // rsi
  int v32; // eax
  __int64 v33; // rax
  _QWORD *v34; // rbx
  int v35; // r14d
  int v36; // r9d
  unsigned __int64 v37; // r14
  char *v38; // rsi
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  char *v41; // r13
  unsigned int v42; // eax
  int v43; // edx
  char v44; // al
  int v45; // edx
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // r12
  unsigned int v52; // ecx
  int aflags; // eax
  __int64 v54; // rax
  int v55; // eax
  int v56; // edx
  __int64 v57; // r13
  __int64 v58; // rbx
  _QWORD *v59; // r12
  const char *v60; // r8
  __int64 (*v61)(); // rdx
  __int64 (*v62)(); // rax
  char *v63; // rdi
  __int64 v64; // r12
  __int64 v65; // r15
  char *v66; // rbx
  char *v67; // rdi
  __int64 v68; // r12
  __int64 v69; // rbx
  char *v70; // r14
  char v71; // dl
  __int64 v72; // rax
  char v73; // al
  unsigned __int64 v74; // rcx
  _BYTE *v75; // rsi
  size_t v76; // r14
  __int64 v77; // r8
  __int64 v78; // rdx
  char *v79; // rax
  __int64 first_dref_from; // rax
  __int64 *p_tinfo_property; // [rsp+0h] [rbp-100h]
  char v82; // [rsp+8h] [rbp-F8h]
  char v83; // [rsp+Ch] [rbp-F4h]
  unsigned int v84; // [rsp+Ch] [rbp-F4h]
  int v85; // [rsp+20h] [rbp-E0h]
  int v86; // [rsp+24h] [rbp-DCh]
  char *v87; // [rsp+28h] [rbp-D8h]
  __int64 v88; // [rsp+30h] [rbp-D0h]
  int v90; // [rsp+38h] [rbp-C8h]
  const char *v91; // [rsp+38h] [rbp-C8h]
  int v92; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v93; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+50h] [rbp-B0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-A8h] BYREF
  void *src; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v97; // [rsp+68h] [rbp-98h]
  __int64 v98; // [rsp+78h] [rbp-88h]
  __int64 v99; // [rsp+80h] [rbp-80h]
  __int64 v100; // [rsp+88h] [rbp-78h]
  __int128 v101; // [rsp+90h] [rbp-70h]
  __int64 v102; // [rsp+A0h] [rbp-60h]
  __int128 v103; // [rsp+A8h] [rbp-58h]
  char v104; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v105; // [rsp+C8h] [rbp-38h]

  v4 = a1 + 37;
  v5 = *(_QWORD *)(a2 + 24);
  v105 = __readfsqword(0x28u);
  a1[38] = v5;
  clear_tinfo_t();
  if ( !(unsigned __int8)sub_E70A0(a1[2], a1 + 40, a2, a3) )
    return v105 - __readfsqword(0x28u);
  get_ea_name();
  v8 = *(_DWORD *)a2;
  HIBYTE(v85) = *(_DWORD *)a2 != 56;
  op_tinfo = get_op_tinfo();
  v10 = 0;
  if ( !op_tinfo )
  {
    if ( !(unsigned __int8)sub_37CA60(a1[2], a1[40], v4, 2) )
    {
LABEL_10:
      if ( (*((_BYTE *)a1 + 356) & 2) == 0 )
        return v105 - __readfsqword(0x28u);
      if ( v8 == 56 )
      {
        v27 = a1[1];
        if ( *(_QWORD *)(a2 + 24) != *(_QWORD *)(v27 + 40) || *(char *)v27 >= 0 || !*(_BYTE *)(v27 + 328) )
          goto LABEL_18;
      }
      else
      {
        if ( (getinf() & 0xF) == 1 )
          *((_BYTE *)a1 + 365) = 1;
        v12 = a1[1];
        if ( *(_QWORD *)(v12 + 40) != *(_QWORD *)(a2 + 24) || *(char *)v12 >= 0 || !*(_BYTE *)(v12 + 328) )
        {
          flags = get_flags_ex();
          if ( (flags & 0x600) == 0x400 && (flags & 0xF00000) == 0x500000 )
          {
            first_dref_from = get_first_dref_from();
            if ( (unsigned __int8)sub_37CA60(a1[2], first_dref_from, v4, 2) )
              goto LABEL_53;
          }
LABEL_18:
          v14 = a1[4];
          if ( v14 <= 1 )
            goto LABEL_19;
          src = 0;
          v97 = 0;
          if ( (int)demangle_name() <= 0 )
          {
            if ( src )
            {
              *(_QWORD *)&v97 = 0;
              qfree();
              v14 = a1[4];
              goto LABEL_19;
            }
LABEL_184:
            v14 = a1[4];
LABEL_19:
            v15 = (char *)s1;
            if ( v14 )
              v15 = (char *)a1[3];
            v16 = sub_EAB00(a1, *(_QWORD *)(*a1 + 56LL), v15);
            v17 = *((_DWORD *)a1 + 87);
            *((_DWORD *)a1 + 90) = v16;
            if ( v17 < 0 || (v18 = a1[2], v17 >= *(_DWORD *)(v18 + 656)) )
            {
              *((_DWORD *)a1 + 90) = 0;
            }
            else if ( v16 )
            {
              v83 = 0;
              if ( a1[40] != -1 )
              {
                does_return = func_does_return();
                v18 = a1[2];
                v83 = does_return ^ 1;
              }
              sub_328E20(&v92, *(_QWORD *)(v18 + 112), *(unsigned int *)(*(_QWORD *)(v18 + 112) + 80LL));
              if ( !a1[26] )
                goto LABEL_72;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 200LL))(
                     *(_QWORD *)(a1[21] + 112LL),
                     *(unsigned int *)a1[25]) )
              {
                v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                        *(_QWORD *)(a1[21] + 112LL),
                        *(unsigned int *)a1[25]);
                if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v20 )
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
                    if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v32 )
                    {
LABEL_71:
                      if ( v32 > 7 )
                      {
LABEL_37:
                        v22 = 9;
LABEL_73:
                        v93 = v22;
                        if ( (a1[11] & 0xFFFFFFFB) != 2 )
                          goto LABEL_74;
                        v71 = sub_63F80(a1 + 31);
                        v72 = 0;
                        if ( !v71 )
                          v72 = (int)(sub_64300(a1 + 31) + 1);
                        if ( a1[16] == v72 )
                        {
                          v34 = a1 + 29;
                          v73 = sub_63F80(a1 + 29);
                          v74 = 0;
                          if ( !v73 )
                            v74 = (int)(sub_64300(a1 + 29) + 1);
                          v33 = a1[21];
                          if ( v74 < a1[13] )
                          {
                            sub_328D00(&v94, *(_QWORD *)(v33 + 112), *(unsigned int *)(*(_QWORD *)(v33 + 112) + 80LL));
LABEL_76:
                            v90 = 0;
                            if ( !(unsigned __int8)sub_63F80(v34) )
                              v90 = sub_64300(v34) + 1;
                            v35 = 0;
                            if ( !(unsigned __int8)sub_63F80(v34) )
                              v35 = sub_64300(v34) + 1;
                            if ( !(unsigned __int8)sub_63F80(a1 + 31) )
                              v35 += sub_64300(a1 + 31) + 1;
                            v36 = *((_DWORD *)a1 + 87);
                            v86 = v35;
                            src = 0;
                            v98 = 0;
                            v99 = 0;
                            v100 = 0;
                            v102 = 0;
                            v104 = 16;
                            v97 = 0;
                            v101 = 0;
                            v103 = 0;
                            if ( v36 <= 0 )
                            {
                              v44 = 0;
                            }
                            else
                            {
                              v37 = 0;
                              v38 = 0;
                              v39 = 0;
                              v40 = 0;
                              while ( 1 )
                              {
                                if ( v39 < v40 + 1 )
                                {
                                  src = (void *)qvector_reserve();
                                  v38 = (char *)src;
                                  v40 = v97;
                                }
                                v41 = &v38[80 * v40];
                                *(_DWORD *)v41 = 0;
                                *((_QWORD *)v41 + 1) = 0;
                                *((_QWORD *)v41 + 2) = 0;
                                *((_QWORD *)v41 + 5) = 0;
                                *((_QWORD *)v41 + 8) = 0;
                                *((_DWORD *)v41 + 18) = 0;
                                *(_OWORD *)(v41 + 24) = 0;
                                *((_OWORD *)v41 + 3) = 0;
                                *(_QWORD *)&v97 = v97 + 1;
                                v87 = v41 + 64;
                                copy_tinfo_t();
                                if ( v37 < a1[13] && *(_DWORD *)(a1[12] + 4 * v37) == *((_DWORD *)a1 + 72) )
                                {
                                  if ( v83 )
                                  {
                                    if ( *((_BYTE *)a1 + 292) )
                                    {
                                      v42 = a1[45] & 0xFFFFFFF0;
                                      if ( v42 == 64 || (v43 = 240, v42 == 208) )
                                        v43 = 208;
                                      *((_DWORD *)a1 + 90) = v43;
                                    }
                                  }
                                  else
                                  {
                                    *((_DWORD *)v41 + 18) |= 2u;
                                    p_tinfo_property = &tinfo_property;
                                    sub_3290F0(&tinfo_property, *(_QWORD *)(a1[2] + 112LL), v87);
                                    copy_tinfo_t();
                                    clear_tinfo_t();
                                  }
                                }
                                if ( *((_DWORD *)a1 + 87) <= (int)++v37 )
                                  break;
                                v39 = *((_QWORD *)&v97 + 1);
                                v40 = v97;
                                v38 = (char *)src;
                              }
                              v44 = v104 & 0xF;
                            }
                            v45 = *((_DWORD *)a1 + 90);
                            if ( (v45 & 0xFFFFFF0F) != 0 || v45 == 192 )
                            {
                              v46 = v44 | 0xC0;
                            }
                            else
                            {
                              v46 = v45 | v44;
                              v45 = 0;
                            }
                            v104 = v46;
                            v47 = *a1;
                            HIDWORD(v98) = v45;
                            v48 = *(_QWORD *)(*(_QWORD *)(v47 + 480) + 112LL);
                            if ( v83 )
                            {
                              LODWORD(v98) = v98 | 2;
                              p_tinfo_property = &tinfo_property;
                              tinfo_property = 1;
                              copy_tinfo_t();
                              clear_tinfo_t();
                              if ( (unsigned int)(*((_DWORD *)a1 + 90) - 208) <= 0x2F && *((int *)a1 + 87) > 0 )
                              {
                                v51 = 0;
                                do
                                {
                                  v87 = (char *)src + 80 * v51;
                                  if ( v86 <= (int)v51 )
                                  {
                                    cleanup_argloc();
                                    *(_DWORD *)v87 = 1;
                                    *((_QWORD *)v87 + 1) = 0;
                                  }
                                  else
                                  {
                                    if ( (int)v51 < v90 )
                                      v52 = *(_DWORD *)(a1[12] + 4 * v51);
                                    else
                                      v52 = *(_DWORD *)(a1[15] + 4 * v51);
                                    v84 = v52;
                                    cleanup_argloc();
                                    v49 = v84;
                                    *(_DWORD *)v87 = 3;
                                    *((_DWORD *)v87 + 2) = v84;
                                  }
                                  ++v51;
                                }
                                while ( *((_DWORD *)a1 + 87) > (int)v51 );
                              }
                            }
                            else
                            {
                              aflags = get_aflags();
                              sub_F5130((__int64)a1, (__int64)&src, (aflags & 0x4000000) != 0);
                            }
                            v54 = a1[21];
                            if ( *(_DWORD *)(*(_QWORD *)(v54 + 8) + 4LL) == 13 || !a1[26] )
                              goto LABEL_124;
                            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v54 + 112) + 200LL))(
                                   *(_QWORD *)(v54 + 112),
                                   *(unsigned int *)a1[25]) )
                            {
                              v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                                      *(_QWORD *)(a1[21] + 112LL),
                                      *(unsigned int *)a1[25]);
                              if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v55 )
                              {
LABEL_116:
                                if ( v55 <= 7 )
                                {
                                  v49 = (unsigned int)v90;
                                  v56 = v86 - v90 + ((((_BYTE)v86 - (_BYTE)v90) & 1) == 0) - 2;
                                  if ( v56 > 0 )
                                  {
                                    v57 = 80LL * v56;
                                    v58 = v57
                                        - 160
                                        - 160LL
                                        * ((v86 - v90 + (unsigned int)((((_BYTE)v86 - (_BYTE)v90) & 1) == 0) - 3) >> 1);
                                    do
                                    {
                                      v59 = (char *)src + v57;
                                      clear_tinfo_t();
                                      if ( v59[5] )
                                      {
                                        v59[6] = 0;
                                        qfree();
                                      }
                                      if ( v59[2] )
                                      {
                                        v59[3] = 0;
                                        qfree();
                                      }
                                      v57 -= 160;
                                      cleanup_argloc();
                                      memmove(v59, v59 + 10, (_BYTE *)src + 80 * v97 - (_BYTE *)v59 - 80);
                                      *(_QWORD *)&v97 = v97 - 1;
                                    }
                                    while ( v58 != v57 );
                                  }
                                }
                                goto LABEL_124;
                              }
                            }
                            else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
                            {
LABEL_124:
                              v60 = s1;
                              if ( a1[4] )
                                v60 = (const char *)a1[3];
                              v61 = sub_CE280;
                              v62 = *(__int64 (**)())(*(_QWORD *)v48 + 128LL);
                              if ( v62 != sub_CE280
                                && !((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, const char *, void **, char *))v62)(
                                      v48,
                                      *a1,
                                      *(_QWORD *)(*a1 + 56LL),
                                      a1[40],
                                      v60,
                                      &src,
                                      (char *)a1 + 348)
                                || (unsigned __int64)v97 >= *(int *)(a1[2] + 656LL) )
                              {
                                if ( v102 )
                                {
                                  *(_QWORD *)&v103 = 0;
                                  qfree();
                                }
                                cleanup_argloc();
                                clear_tinfo_t();
                                v63 = (char *)src;
                                if ( src )
                                {
                                  v64 = v97;
                                  if ( (_QWORD)v97 )
                                  {
                                    v65 = 0;
                                    do
                                    {
                                      v66 = &v63[80 * v65];
                                      clear_tinfo_t();
                                      if ( *((_QWORD *)v66 + 5) )
                                      {
                                        *((_QWORD *)v66 + 6) = 0;
                                        qfree();
                                      }
                                      if ( *((_QWORD *)v66 + 2) )
                                      {
                                        *((_QWORD *)v66 + 3) = 0;
                                        qfree();
                                      }
                                      cleanup_argloc();
                                      v63 = (char *)src;
                                      ++v65;
                                    }
                                    while ( v64 != v65 );
                                  }
                                  *(_QWORD *)&v97 = 0;
                                  qfree();
                                }
                                clear_tinfo_t();
                                clear_tinfo_t();
                                clear_tinfo_t();
                                return v105 - __readfsqword(0x28u);
                              }
                              sub_E93E0(
                                a1,
                                (__int64)&src,
                                (__int64)v61,
                                v49,
                                (__int64)v60,
                                v50,
                                (int)p_tinfo_property,
                                v82,
                                (int)&v93,
                                (int)&v94,
                                v85,
                                (int)v87,
                                (int)&v92,
                                v90,
                                v92,
                                v93,
                                v94,
                                tinfo_property,
                                (int)src,
                                v97,
                                *((__int64 *)&v97 + 1));
                              if ( v102 )
                              {
                                *(_QWORD *)&v103 = 0;
                                qfree();
                              }
                              cleanup_argloc();
                              clear_tinfo_t();
                              v67 = (char *)src;
                              if ( src )
                              {
                                v68 = v97;
                                if ( (_QWORD)v97 )
                                {
                                  v69 = 0;
                                  do
                                  {
                                    v70 = &v67[80 * v69];
                                    clear_tinfo_t();
                                    if ( *((_QWORD *)v70 + 5) )
                                    {
                                      *((_QWORD *)v70 + 6) = 0;
                                      qfree();
                                    }
                                    if ( *((_QWORD *)v70 + 2) )
                                    {
                                      *((_QWORD *)v70 + 3) = 0;
                                      qfree();
                                    }
                                    ++v69;
                                    cleanup_argloc();
                                    v67 = (char *)src;
                                  }
                                  while ( v68 != v69 );
                                }
                                *(_QWORD *)&v97 = 0;
                                qfree();
                              }
                              clear_tinfo_t();
                              clear_tinfo_t();
                              clear_tinfo_t();
                              goto LABEL_53;
                            }
                            v55 = round_down_power2();
                            goto LABEL_116;
                          }
                        }
                        else
                        {
LABEL_74:
                          v33 = a1[21];
                        }
                        sub_328E20(&v94, *(_QWORD *)(v33 + 112), *(unsigned int *)(*(_QWORD *)(v33 + 112) + 80LL));
                        v34 = a1 + 29;
                        goto LABEL_76;
                      }
LABEL_72:
                      v22 = 25;
                      goto LABEL_73;
                    }
                  }
                  else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
                  {
                    goto LABEL_37;
                  }
                  v32 = round_down_power2();
                  goto LABEL_71;
                }
              }
              else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
              {
                goto LABEL_72;
              }
              v20 = round_down_power2();
              goto LABEL_31;
            }
            return v105 - __readfsqword(0x28u);
          }
          v94 = 0;
          if ( (unsigned __int8)parse_decl() )
          {
LABEL_181:
            if ( !(_BYTE)v94 )
              goto LABEL_182;
            if ( v8 != 56 )
            {
              if ( (get_tinfo_property() & 0xF) != 0xA )
                goto LABEL_182;
              tinfo_property = 0;
              tinfo_property = get_tinfo_property();
              p_tinfo_property = &tinfo_property;
              copy_tinfo_t();
              clear_tinfo_t();
            }
            if ( (get_tinfo_property() & 0xF) == 0xC )
            {
              if ( !(unsigned __int8)sub_329720(&v94, a1[2], a1[40]) )
              {
                clear_tinfo_t();
                if ( !src )
                  goto LABEL_184;
                goto LABEL_183;
              }
              copy_tinfo_t();
              clear_tinfo_t();
              if ( src )
              {
                *(_QWORD *)&v97 = 0;
                qfree();
              }
LABEL_53:
              *((_BYTE *)a1 + 366) = 1;
              return sub_E7290((__int64)a1, SHIBYTE(v85), 0);
            }
LABEL_182:
            clear_tinfo_t();
            if ( !src )
              goto LABEL_184;
LABEL_183:
            *(_QWORD *)&v97 = 0;
            qfree();
            goto LABEL_184;
          }
          v91 = "_QWORD ";
          if ( !*(_BYTE *)(a1[2] + 144LL) )
            v91 = "_DWORD ";
          v75 = src;
          if ( (_QWORD)v97 )
          {
            v76 = v97 - 1;
            v77 = v97 + 6;
            v78 = v97 + 7;
            if ( *((_QWORD *)&v97 + 1) >= (unsigned __int64)(v97 + 7) )
              goto LABEL_178;
          }
          else
          {
            if ( *((_QWORD *)&v97 + 1) > 7u )
            {
              *(_QWORD *)&v97 = 8;
              *((_BYTE *)src + 7) = 0;
LABEL_180:
              v79 = (char *)src;
              *(_DWORD *)src = *(_DWORD *)v91;
              *(_DWORD *)(v79 + 3) = *(_DWORD *)(v91 + 3);
              parse_decl();
              goto LABEL_181;
            }
            v76 = 0;
            v78 = 8;
            v77 = 7;
          }
          v87 = (char *)v77;
          v88 = v78;
          src = (void *)qvector_reserve();
          v77 = (__int64)v87;
          v75 = src;
          v78 = v88;
LABEL_178:
          *(_QWORD *)&v97 = v78;
          v75[v77] = 0;
          if ( v76 )
            memmove((char *)src + 7, src, v76);
          goto LABEL_180;
        }
      }
      copy_tinfo_t();
      goto LABEL_53;
    }
    v10 = sub_3713A0(a1[2], a1[40], 2);
  }
  *((_BYTE *)a1 + 366) = v10;
  if ( v8 != 56 && !(unsigned __int8)sub_331790(v4, 0, 0) )
    clear_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    v28 = a1[37];
    src = 0;
    v97 = 0;
    if ( (v28 & 0x100) != 0 && get_tinfo_pdata() && stristr() )
      *((_BYTE *)a1 + 365) = 1;
    tinfo_property = get_tinfo_property();
    p_tinfo_property = &tinfo_property;
    copy_tinfo_t();
    clear_tinfo_t();
    if ( src )
    {
      *(_QWORD *)&v97 = 0;
      qfree();
    }
  }
  if ( op_tinfo )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC && (unsigned __int8)sub_329720(v4, a1[2], a1[40]) )
      goto LABEL_39;
    v11 = a1[38];
    if ( (unsigned __int8)sub_3708E0(a1[2], v11) )
    {
LABEL_9:
      clear_tinfo_t();
      goto LABEL_10;
    }
LABEL_63:
    v97 = 0;
    src = 0;
    if ( !(unsigned __int8)print_type() )
    {
      v31 = src;
      if ( *((_QWORD *)&v97 + 1) <= 1u )
      {
        src = (void *)qvector_reserve();
        v31 = src;
      }
      *(_QWORD *)&v97 = 2;
      *v31 = 63;
      *((_BYTE *)src + 1) = 0;
    }
    sub_32DD50(a1[1], v11, 2, (_DWORD)src, v29, v30);
    if ( src )
    {
      *(_QWORD *)&v97 = 0;
      qfree();
    }
    goto LABEL_9;
  }
  sub_E8AF0((__int64)a1, *(_QWORD *)(*a1 + 56LL), SHIBYTE(v85));
  if ( (get_tinfo_property() & 0xF) != 0xC || !(unsigned __int8)sub_329720(v4, a1[2], a1[40]) )
  {
    v11 = a1[40];
    if ( (unsigned __int8)sub_3708E0(a1[2], v11) )
      goto LABEL_9;
    goto LABEL_63;
  }
LABEL_39:
  v23 = get_tinfo_property();
  *((_DWORD *)a1 + 87) = v23;
  v24 = v23 == 0;
  if ( v23 < 0 )
    goto LABEL_9;
  v25 = *((_BYTE *)a1 + 366);
  if ( !v24 )
  {
    if ( !v25 )
      goto LABEL_42;
    if ( (unsigned __int8)sub_F5240(a1) )
      sub_E7290((__int64)a1, SHIBYTE(v85), 0);
    v25 = *((_BYTE *)a1 + 366);
  }
  if ( v25 && *((int *)a1 + 87) <= 0 )
    goto LABEL_9;
LABEL_42:
  v26 = get_tinfo_property();
  *((_DWORD *)a1 + 90) = v26;
  if ( !v26 )
    goto LABEL_9;
  if ( !*((_BYTE *)a1 + 366) )
    *((_DWORD *)a1 + 88) |= 4u;
  if ( v8 == 56 )
    a1[39] = a1[40];
  return get_tinfo_attrs();
}
