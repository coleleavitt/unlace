void __fastcall sub_BB4D70(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  char *v18; // rsi
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // rcx
  __int64 *v32; // r13
  __int64 *v33; // r15
  __int64 *i; // rcx
  const char *v35; // rdi
  char v36; // al
  __int64 v37; // rsi
  char *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rbp
  const char *v45; // rsi
  __int64 v46; // r12
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  _QWORD *v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // r14
  unsigned __int64 v54; // rdx
  __int64 v55; // rsi
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  _DWORD *v58; // rax
  __int64 v59; // rdi
  int v60; // edx
  int v61; // ecx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // eax
  __int64 v68; // rdx
  _QWORD *v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r13
  unsigned __int64 v72; // rax
  __int64 v73; // r12
  __int64 v74; // rdx
  unsigned __int64 v75; // rax
  _QWORD *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rsi
  _DWORD *v80; // rdx
  __int64 v81; // rdi
  int v82; // eax
  __int64 v83; // r14
  unsigned __int64 v84; // rdx
  __int64 v85; // rsi
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  _DWORD *v88; // rax
  __int64 v89; // rdi
  int v90; // edx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r12
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  _DWORD *v97; // rax
  __int64 v98; // rdi
  int v99; // edx
  int v100; // r14d
  int v101; // r15d
  const char *v102; // rdi
  _WORD *v103; // rdx
  const char *v104; // r15
  __int64 v105; // rax
  __int64 v106; // r15
  _BYTE *v107; // rax
  unsigned __int64 v108; // rax
  __int64 v109; // r12
  __int64 v110; // rax
  __int64 v111; // r15
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rdx
  unsigned __int64 v114; // rax
  _DWORD *v115; // rax
  __int64 v116; // rdi
  __int64 v117; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v118; // [rsp+28h] [rbp-80h] BYREF
  void *v119; // [rsp+30h] [rbp-78h] BYREF
  __int64 v120; // [rsp+38h] [rbp-70h]
  __int64 v121; // [rsp+40h] [rbp-68h] BYREF
  void *v122; // [rsp+50h] [rbp-58h] BYREF
  __int64 v123; // [rsp+58h] [rbp-50h]
  _BYTE v124[72]; // [rsp+60h] [rbp-48h] BYREF

  v3 = (__int64 *)(a2 + 40);
  sub_B86A00((__int64)&v119, v3);
  v117 = sub_BAB630(a2, (__int64)v3, v5, v6, v7, v8);
  v12 = *(_QWORD *)(a2 + 120);
  if ( !v12 )
  {
    v73 = *(_QWORD *)(a2 + 96);
    v74 = *(_QWORD *)(v73 + 88);
    v75 = v74 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v74 & 1) == 0 )
    {
      v76 = (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v74 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v77 = v74 & 2;
        if ( !(_DWORD)v77 )
          goto LABEL_86;
        v75 = sub_6E2500(v76, *(_QWORD *)(a2 + 96), v77, v9, v10, v11) & 0xFFFFFFFFFFFFFFFELL;
        v74 = v75 | 1;
        *(_QWORD *)(v73 + 88) = v75 | 1;
      }
    }
    if ( v75 )
    {
      if ( (v75 & 4) != 0 )
      {
        v80 = (_DWORD *)(v74 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v80 )
        {
          v81 = *(_QWORD *)v80;
          v82 = *(_DWORD *)(*(_QWORD *)v80 + 12LL);
          if ( v80[2] != v82 )
          {
            v80[2] = v82;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v81 + 152LL))(v81, v73);
          }
        }
      }
    }
    v12 = *(_QWORD *)(a2 + 120);
  }
  v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v13 && a2 == *v13 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      sub_BB26A0((const char **)a1, a2, 0, v9, v10, v11);
      sub_995540(*(_QWORD *)a1, "\n");
    }
    v14 = sub_995540(*(_QWORD *)a1, "@interface ");
    sub_227BF10(v14, v119, v120);
    v17 = *(_QWORD *)(a2 + 112);
    if ( v17 )
      sub_BB33C0((__int64 *)a1, v17);
    if ( !v117 )
    {
LABEL_18:
      v29 = *(_QWORD *)(a2 + 120);
      v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
      {
        v31 = *(unsigned int *)(v30 + 24);
        if ( !(_DWORD)v31 )
          goto LABEL_29;
        goto LABEL_20;
      }
      sub_BA8900(a2);
      v29 = *(_QWORD *)(a2 + 120);
      v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      v31 = *(unsigned int *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 24);
      if ( (_DWORD)v31 )
      {
LABEL_20:
        v32 = *(__int64 **)(v30 + 16);
        v33 = &v32[v31];
        for ( i = v32; ; i = *(__int64 **)(v30 + 16) )
        {
          v35 = *(const char **)a1;
          v36 = 44;
          v37 = 60;
          if ( v32 == i )
            v36 = 60;
          else
            v37 = 44;
          v38 = *((char **)v35 + 4);
          if ( (unsigned __int64)v38 < *((_QWORD *)v35 + 3) )
          {
            ++v32;
            *((_QWORD *)v35 + 4) = v38 + 1;
            *v38 = v36;
            sub_B72CF0(*(v32 - 1), (__int64)v35);
            if ( v32 == v33 )
              goto LABEL_28;
          }
          else
          {
            v39 = sub_227BA10(v35, v37);
            v40 = *v32++;
            sub_B72CF0(v40, v39);
            if ( v33 == v32 )
            {
LABEL_28:
              sub_995540(*(_QWORD *)a1, "> ");
              v29 = *(_QWORD *)(a2 + 120);
              break;
            }
          }
        }
      }
LABEL_29:
      if ( v29 )
      {
        v41 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v29 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_31;
        goto LABEL_96;
      }
      v46 = *(_QWORD *)(a2 + 96);
      v47 = *(_QWORD *)(v46 + 88);
      v48 = v47 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v47 & 1) == 0 )
      {
        v49 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v47 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v47 & 2) == 0 )
            goto LABEL_47;
          v83 = v49[2295];
          v84 = v46 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v83 )
          {
            v85 = v49[294];
            v49[304] += 24LL;
            v86 = (v85 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v49[295] >= v86 + 24 && v85 )
            {
              v49[294] = v86 + 24;
              v87 = (v85 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v87 = sub_986170((__int64)(v49 + 294), 24, 24, 3, v15, v16);
              v86 = v87 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v87 = v83;
            v84 = v86 | 4;
            *(_DWORD *)(v87 + 8) = 0;
            *(_QWORD *)(v87 + 16) = v46;
          }
          v48 = v84 & 0xFFFFFFFFFFFFFFFELL;
          v47 = v48 | 1;
          *(_QWORD *)(v46 + 88) = v48 | 1;
        }
      }
      if ( v48 )
      {
        if ( (v48 & 4) != 0 )
        {
          v88 = (_DWORD *)(v47 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v88 )
          {
            v89 = *(_QWORD *)v88;
            v90 = *(_DWORD *)(*(_QWORD *)v88 + 12LL);
            if ( v88[2] != v90 )
            {
              v88[2] = v90;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v89 + 152LL))(v89, v46);
            }
          }
        }
      }
      v29 = *(_QWORD *)(a2 + 120);
      v41 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v29 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
LABEL_31:
        if ( *v41 )
        {
LABEL_32:
          if ( *v41 )
          {
            v42 = sub_B8E970(*v41 + 48LL);
            if ( v42 )
            {
              if ( (*(_BYTE *)(v42 + 28) & 0x7F) == 0x32 )
              {
LABEL_64:
                v61 = 0;
                v62 = *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v62 )
                {
                  while ( (*(_BYTE *)(v62 + 28) & 0x7F) == 0x32 )
                  {
LABEL_80:
                    ++v61;
                    v62 = *(_QWORD *)(v62 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( !v62 )
                    {
                      if ( v61 == -1 )
                        goto LABEL_38;
                      goto LABEL_70;
                    }
                  }
                  while ( 1 )
                  {
                    v63 = *(_QWORD *)(v62 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v62 = v63;
                    if ( !v63 )
                      break;
                    if ( (*(_BYTE *)(v63 + 28) & 0x7F) == 0x32 )
                      goto LABEL_80;
                  }
                  if ( v61 == -1 )
                    goto LABEL_38;
                }
LABEL_70:
                sub_995540(*(_QWORD *)a1, "{\n");
                v67 = *(unsigned __int8 *)(a1 + 8);
                *(_DWORD *)(a1 + 32) += v67;
                v68 = *(_QWORD *)(a2 + 120);
                if ( v68 )
                {
                  v69 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( !v69 )
                  {
LABEL_79:
                    *(_DWORD *)(a1 + 32) -= v67;
                    sub_995540(*(_QWORD *)a1, "}\n");
                    sub_BBA540(a1, a2 + 48, 0);
LABEL_40:
                    v45 = "@end";
                    goto LABEL_41;
                  }
                  goto LABEL_72;
                }
                sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), 0, v64, v65, v66);
                v69 = (_QWORD *)(*(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL);
                if ( v69 )
                {
LABEL_72:
                  if ( *v69 )
                  {
                    v70 = sub_B8E970(*v69 + 48LL);
                    v71 = v70;
                    if ( v70 )
                    {
                      if ( (*(_BYTE *)(v70 + 28) & 0x7F) == 0x32 )
                      {
LABEL_127:
                        v100 = *(_DWORD *)(a1 + 32);
                        v101 = 0;
                        if ( v100 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v102 = *(const char **)a1;
                              v103 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
                              if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v103 > 1u )
                                break;
                              ++v101;
                              sub_227BF10(v102, "  ", 2);
                              if ( v100 == v101 )
                                goto LABEL_130;
                            }
                            ++v101;
                            *v103 = 8224;
                            *((_QWORD *)v102 + 4) += 2LL;
                          }
                          while ( v100 != v101 );
                        }
LABEL_130:
                        v104 = *(const char **)a1;
                        v105 = sub_B8C330(v71);
                        v118 = sub_BB3C50(v105, *(_QWORD *)(v71 + 48));
                        sub_F785A0(&v122, &v118, a1 + 8);
                        v106 = sub_227BF10(v104, v122, v123);
                        v107 = *(_BYTE **)(v106 + 32);
                        if ( (unsigned __int64)v107 >= *(_QWORD *)(v106 + 24) )
                        {
                          v106 = sub_227BA10(v106, 32);
                        }
                        else
                        {
                          *(_QWORD *)(v106 + 32) = v107 + 1;
                          *v107 = 32;
                        }
                        sub_B72CF0(v71, v106);
                        sub_995540(v106, ";\n");
                        if ( v122 != v124 )
                          operator delete(v122);
                        while ( 1 )
                        {
                          v108 = *(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                          v71 = v108;
                          if ( !v108 )
                            break;
                          if ( (*(_BYTE *)(v108 + 28) & 0x7F) == 0x32 )
                            goto LABEL_127;
                        }
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v72 = *(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                          v71 = v72;
                          if ( !v72 )
                            break;
                          if ( (*(_BYTE *)(v72 + 28) & 0x7F) == 0x32 )
                            goto LABEL_127;
                        }
                      }
                    }
                  }
                  goto LABEL_78;
                }
                if ( !*(_QWORD *)(a2 + 120) )
                {
                  v94 = *(_QWORD *)(a2 + 96);
                  v95 = *(_QWORD *)(v94 + 88);
                  v96 = v95 & 0xFFFFFFFFFFFFFFFELL;
                  if ( (v95 & 1) == 0 && (v95 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                  {
                    if ( (v95 & 2) == 0 )
                      goto LABEL_78;
                    v96 = sub_6E2500((_QWORD *)(v95 & 0xFFFFFFFFFFFFFFFCLL), *(_QWORD *)(a2 + 96), v96, v91, v92, v93)
                        & 0xFFFFFFFFFFFFFFFELL;
                    v95 = v96 | 1;
                    *(_QWORD *)(v94 + 88) = v96 | 1;
                  }
                  if ( v96 )
                  {
                    if ( (v96 & 4) != 0 )
                    {
                      v97 = (_DWORD *)(v95 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v97 )
                      {
                        v98 = *(_QWORD *)v97;
                        v99 = *(_DWORD *)(*(_QWORD *)v97 + 12LL);
                        if ( v97[2] != v99 )
                        {
                          v97[2] = v99;
                          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v98 + 152LL))(v98, v94);
                        }
                      }
                    }
                  }
                  v69 = (_QWORD *)(*(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v69 )
                    goto LABEL_72;
                }
LABEL_78:
                v67 = *(unsigned __int8 *)(a1 + 8);
                goto LABEL_79;
              }
              while ( 1 )
              {
                v43 = *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v42 = v43;
                if ( !v43 )
                  break;
                if ( (*(_BYTE *)(v43 + 28) & 0x7F) == 0x32 )
                  goto LABEL_64;
              }
            }
          }
LABEL_38:
          v44 = a2 + 48;
          if ( v117 || sub_B8E970(v44) )
          {
            sub_995540(*(_QWORD *)a1, "\n");
            sub_BBA540(a1, v44, 0);
          }
          else
          {
            sub_BBA540(a1, v44, 0);
            sub_995540(*(_QWORD *)a1, "\n");
          }
          goto LABEL_40;
        }
        goto LABEL_96;
      }
      if ( v29 )
      {
LABEL_96:
        v41 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_97:
        if ( !v41 )
          goto LABEL_38;
        goto LABEL_32;
      }
      v46 = *(_QWORD *)(a2 + 96);
LABEL_47:
      v50 = *(_QWORD *)(v46 + 88);
      v51 = v50 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v50 & 1) == 0 )
      {
        v52 = (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v50 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v50 & 2) == 0 )
            goto LABEL_38;
          v53 = v52[2295];
          v54 = v46 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v53 )
          {
            v55 = v52[294];
            v52[304] += 24LL;
            v56 = (v55 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v52[295] >= v56 + 24 && v55 )
            {
              v52[294] = v56 + 24;
              v57 = (v55 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v57 = sub_986170((__int64)(v52 + 294), 24, 24, 3, v15, v16);
              v56 = v57 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v57 = v53;
            v54 = v56 | 4;
            *(_DWORD *)(v57 + 8) = 0;
            *(_QWORD *)(v57 + 16) = v46;
          }
          v51 = v54 & 0xFFFFFFFFFFFFFFFELL;
          v50 = v51 | 1;
          *(_QWORD *)(v46 + 88) = v51 | 1;
        }
      }
      if ( v51 )
      {
        if ( (v51 & 4) != 0 )
        {
          v58 = (_DWORD *)(v50 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v58 )
          {
            v59 = *(_QWORD *)v58;
            v60 = *(_DWORD *)(*(_QWORD *)v58 + 12LL);
            if ( v58[2] != v60 )
            {
              v58[2] = v60;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 152LL))(v59, v46);
            }
          }
        }
      }
      v41 = (_QWORD *)(*(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL);
      goto LABEL_97;
    }
    v18 = " : ";
    v23 = sub_995540(*(_QWORD *)a1, " : ");
    v24 = *(_QWORD *)(a2 + 120);
    if ( !v24 )
    {
      v109 = *(_QWORD *)(a2 + 96);
      v110 = *(_QWORD *)(v109 + 88);
      v19 = v110 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v110 & 1) == 0 )
      {
        v20 = (_QWORD *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v110 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v110 & 2) == 0 )
            goto LABEL_145;
          v111 = v20[2295];
          v112 = v109 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v111 )
          {
            v18 = (char *)v20[294];
            v20[304] += 24LL;
            v113 = (unsigned __int64)(v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v20[295] >= v113 + 24 && v18 )
            {
              v20[294] = v113 + 24;
              v114 = (unsigned __int64)(v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v18 = (char *)&qword_18;
              v114 = sub_986170((__int64)(v20 + 294), 24, 24, 3, v21, v22);
              v113 = v114 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v114 = v111;
            v112 = v113 | 4;
            *(_DWORD *)(v114 + 8) = 0;
            *(_QWORD *)(v114 + 16) = v109;
          }
          v19 = v112 & 0xFFFFFFFFFFFFFFFELL;
          v110 = v19 | 1;
          *(_QWORD *)(v109 + 88) = v19 | 1;
        }
      }
      if ( v19 )
      {
        v19 &= 4u;
        if ( (_DWORD)v19 )
        {
          v115 = (_DWORD *)(v110 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v115 )
          {
            v116 = *(_QWORD *)v115;
            v19 = *(unsigned int *)(*(_QWORD *)v115 + 12LL);
            if ( v115[2] != (_DWORD)v19 )
            {
              v115[2] = v19;
              v18 = (char *)v109;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v116 + 152LL))(v116, v109);
            }
          }
        }
      }
      v24 = *(_QWORD *)(a2 + 120);
    }
    v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v25 )
    {
      if ( (*(_BYTE *)(v25 + 72) & 1) != 0 )
      {
        sub_BA8900(a2);
        v25 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v26 = *(_QWORD **)(v25 + 8);
      if ( v26 )
      {
        v27 = *(_QWORD *)(*v26 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v27 + 16) - 35 > 1 )
          v28 = sub_F63050(v27, v18, v19, v20) & 0xFFFFFFFFFFFFFFF0LL;
        else
          v28 = v27 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_16:
        v118 = v28;
        sub_F785A0(&v122, &v118, a1 + 8);
        sub_227BF10(v23, v122, v123);
        if ( v122 != v124 )
          operator delete(v122);
        goto LABEL_18;
      }
    }
LABEL_145:
    v28 = 0;
    goto LABEL_16;
  }
LABEL_86:
  v78 = sub_995540(*(_QWORD *)a1, "@class ");
  sub_227BF10(v78, v119, v120);
  v79 = *(_QWORD *)(a2 + 112);
  if ( v79 )
    sub_BB33C0((__int64 *)a1, v79);
  v45 = ";";
LABEL_41:
  sub_995540(*(_QWORD *)a1, v45);
  if ( v119 != &v121 )
    operator delete(v119);
}
