__int64 __fastcall sub_986AB0(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // r13d
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r8
  void *v13; // r8
  void *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  int v21; // eax
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rax
  unsigned int v34; // ebx
  unsigned __int8 **v36; // rbp
  unsigned int v37; // eax
  __int64 v38; // rbp
  unsigned int v39; // eax
  _QWORD *v40; // rbx
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  int v44; // ecx
  unsigned __int64 v45; // rsi
  __int64 v46; // rdx
  int v47; // r8d
  int v48; // eax
  void *v49; // rdx
  int v50; // r13d
  int v51; // eax
  void *v52; // rdx
  int v53; // r13d
  int v54; // r13d
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rax
  char v58; // r12
  unsigned int v59; // r15d
  unsigned __int64 v60; // rax
  void *v61; // r13
  __int64 v62; // rax
  char v63; // r12
  unsigned int v64; // edx
  void *v65; // rax
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // r15d
  __int64 v69; // rax
  unsigned int v70; // r12d
  int v71; // [rsp+8h] [rbp-140h]
  unsigned __int64 v72; // [rsp+8h] [rbp-140h]
  unsigned int v73; // [rsp+8h] [rbp-140h]
  int v74; // [rsp+8h] [rbp-140h]
  unsigned __int64 v75; // [rsp+8h] [rbp-140h]
  void *v76; // [rsp+8h] [rbp-140h]
  int v77; // [rsp+8h] [rbp-140h]
  void *v78; // [rsp+10h] [rbp-138h]
  int v79; // [rsp+10h] [rbp-138h]
  __int64 v80; // [rsp+10h] [rbp-138h]
  __int64 v81; // [rsp+10h] [rbp-138h]
  int v82; // [rsp+18h] [rbp-130h]
  int v83; // [rsp+1Ch] [rbp-12Ch]
  void *v84; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v85; // [rsp+38h] [rbp-110h]
  char v86; // [rsp+3Ch] [rbp-10Ch]
  void *v87; // [rsp+40h] [rbp-108h]
  unsigned int v88; // [rsp+48h] [rbp-100h]
  char v89; // [rsp+4Ch] [rbp-FCh]
  void *v90; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v91; // [rsp+58h] [rbp-F0h]
  char v92; // [rsp+5Ch] [rbp-ECh]
  void *v93; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int v94; // [rsp+68h] [rbp-E0h]
  char v95; // [rsp+6Ch] [rbp-DCh]
  void *v96; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v97; // [rsp+78h] [rbp-D0h]
  char v98; // [rsp+7Ch] [rbp-CCh]
  void *v99; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v100; // [rsp+88h] [rbp-C0h]
  void *v101; // [rsp+90h] [rbp-B8h] BYREF
  unsigned int v102; // [rsp+98h] [rbp-B0h]
  void *v103; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned int v104; // [rsp+A8h] [rbp-A0h]
  char v105; // [rsp+ACh] [rbp-9Ch]
  void *v106; // [rsp+B0h] [rbp-98h] BYREF
  unsigned int v107; // [rsp+B8h] [rbp-90h]
  void *v108; // [rsp+C0h] [rbp-88h] BYREF
  unsigned int v109; // [rsp+C8h] [rbp-80h]
  void *v110; // [rsp+D0h] [rbp-78h] BYREF
  unsigned int v111; // [rsp+D8h] [rbp-70h]
  char v112; // [rsp+DCh] [rbp-6Ch]

  v6 = sub_97DE10(a1, a3);
  v7 = *(_QWORD *)(*(unsigned __int8 *)(a3 + 3) + a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + 8);
  if ( (*(_BYTE *)(v7 + 1) & 6) != 0 )
    v8 = ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8)
                                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                                   + 8LL)
                                                       & 0xFFFFFFFFFFFFFFF0LL)
                                           + 16LL)
        - 25 < 2)
       + 13;
  else
    v8 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v7 + 8));
  sub_97E960((__int64)&v96, *(_QWORD *)(a1 + 184), v8, 0);
  v111 = 64;
  v110 = nullptr;
  v112 = 0;
  v9 = sub_804370((__int64 *)&v96, (__int64 *)&v110);
  if ( v111 > 0x40 && v110 )
  {
    v71 = v9;
    operator delete[](v110);
    v9 = v71;
  }
  if ( v9 >= 0 )
  {
    if ( v97 <= 0x40 )
    {
      if ( v96 && ((unsigned __int64)v96 & ((unsigned __int64)v96 - 1)) == 0 )
      {
LABEL_9:
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        v11 = sub_70B280(
                v10,
                *(_QWORD *)(*(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a3 + 3))
                          + 8LL));
        v111 = v11;
        v12 = 1LL << ((unsigned __int8)v11 - 1);
        if ( v11 > 0x40 )
        {
          v80 = 1LL << ((unsigned __int8)v11 - 1);
          v73 = v11 - 1;
          sub_2585A50(&v110, 0, 0);
          v11 = v111;
          v12 = v80;
          if ( v111 > 0x40 )
          {
            *((_QWORD *)v110 + (v73 >> 6)) |= v80;
            v11 = v111;
            v13 = v110;
LABEL_12:
            v85 = v11;
            v84 = v13;
            v86 = 1;
            if ( (int)sub_804370((__int64 *)&v96, (__int64 *)&v84) > 0 )
            {
              v110 = (void *)sub_A2E130(a1, a3, 2178, 0);
              v36 = (unsigned __int8 **)v110;
              if ( v110 )
              {
                sub_97DF50((unsigned __int8 ***)&v110, (__int64)&v84);
                sub_8356A0(
                  v36,
                  *(_QWORD *)(*(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a3 + 3))
                            + 8LL),
                  8u);
                sub_97DF50((unsigned __int8 ***)&v110, (__int64)&v96);
              }
              goto LABEL_52;
            }
            v14 = (void *)sub_985340(
                            *(__int64 **)(a1 + 192),
                            *(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a3 + 3)));
            v15 = *(_QWORD *)(a1 + 184);
            v110 = v14;
            if ( (unsigned int)v14 > 0xB )
            {
              v16 = sub_A1A5A0(v15, v6);
              v17 = *(_DWORD *)(v16 + 48);
              if ( v17 )
              {
                v18 = *(_QWORD *)v16;
                if ( v17 == 1 )
                {
                  v69 = *(_QWORD *)(v16 + 24);
                  if ( v69 )
                    v18 *= *(unsigned int *)(v69 + 8);
                  v19 = *(_QWORD *)(v16 + 32) + v18;
                }
                else
                {
                  v19 = *(_QWORD *)(v16 + 24) + v18;
                }
                LODWORD(v72) = v19;
                v82 = v19;
LABEL_18:
                v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
                v21 = *(_DWORD *)(v16 + 48);
                if ( v21 == 1 )
                {
                  v22 = *(__int64 **)(v16 + 24);
                }
                else
                {
                  if ( (unsigned int)(v21 - 2) <= 1 )
                    BUG();
                  v22 = *(__int64 **)(*(_QWORD *)(v16 + 24) + 32LL);
                }
                v23 = *v22;
                v24 = 0;
                if ( (v23 & 2) == 0 )
                {
                  v25 = v23 & 0xFFFFFFFFFFFFFFFCLL;
                  v24 = v25;
                  if ( v25 )
                  {
                    if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 24 >= 0x1B )
                      v24 = 0;
                  }
                }
                v26 = sub_70E4E0(v20, v24, 0);
                v111 = 64;
                v78 = (void *)v26;
                v27 = (unsigned int)v72 | v26;
                v110 = (void *)(v27 & -(__int64)v27);
                if ( a2 == 764 )
                {
                  v75 = v27 & -(__int64)v27;
                  v112 = 0;
                  v48 = sub_804370((__int64 *)&v96, (__int64 *)&v110);
                  v49 = (void *)v75;
                  v50 = v48;
                  if ( v111 > 0x40 && v110 )
                  {
                    operator delete[](v110);
                    v49 = (void *)v75;
                  }
                  if ( v50 <= 0 )
                  {
                    *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = 1;
                  }
                  else
                  {
                    v76 = v49;
                    v111 = 64;
                    v110 = v78;
                    v112 = 0;
                    v51 = sub_804370((__int64 *)&v96, (__int64 *)&v110);
                    v52 = v76;
                    v53 = v51;
                    if ( v111 > 0x40 && v110 )
                    {
                      operator delete[](v110);
                      v52 = v76;
                    }
                    if ( v53 > 0 )
                      goto LABEL_101;
                    v111 = 64;
                    v110 = v52;
                    v112 = 0;
                    v54 = sub_804370((__int64 *)&v96, (__int64 *)&v110);
                    if ( v111 > 0x40 && v110 )
                      operator delete[](v110);
                    if ( v54 <= 0 )
                    {
LABEL_101:
                      v55 = *(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a3 + 3));
                      v56 = 2177;
LABEL_102:
                      v110 = (void *)sub_A2E130(a1, v55, v56, 0);
                      if ( v110 )
                        sub_97DF50((unsigned __int8 ***)&v110, (__int64)&v96);
LABEL_52:
                      v34 = 0;
LABEL_53:
                      if ( v85 > 0x40 && v84 )
                        operator delete[](v84);
                      goto LABEL_43;
                    }
                    *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = 0;
                  }
                }
                else
                {
                  v112 = 0;
                  v28 = sub_804370((__int64 *)&v96, (__int64 *)&v110);
                  if ( v111 > 0x40 && v110 )
                  {
                    v83 = v28;
                    operator delete[](v110);
                    v28 = v83;
                  }
                  if ( v28 > 0 )
                  {
                    v111 = 64;
                    v112 = 0;
                    v110 = v78;
                    v29 = sub_804370((__int64 *)&v96, (__int64 *)&v110);
                    if ( v111 > 0x40 && v110 )
                    {
                      v79 = v29;
                      operator delete[](v110);
                      v29 = v79;
                    }
                    if ( v29 <= 0 )
                    {
                      v30 = (unsigned __int64)v96;
                      if ( v97 > 0x40 )
                        v30 = *(_QWORD *)v96;
                      if ( a2 == 122 )
                        v31 = (unsigned int)v72 - (unsigned int)v72 % v30;
                      else
                        v31 = v30 * (((unsigned int)v72 - (unsigned __int64)(v82 != 0)) / v30 + (v82 != 0));
                      v32 = *(_QWORD *)(a1 + 184);
                      sub_8E61F0((__int64)&v110, v16, v31);
                      v33 = sub_A1A4E0(v32, 56);
                      sub_A1C070(v33, &v110);
                      sub_A1C0C0(&v110);
                      goto LABEL_80;
                    }
                    v55 = *(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a3 + 3));
                    v56 = 2176;
                    goto LABEL_102;
                  }
                  v62 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
                  sub_A1BFE0(v62, v16);
                }
LABEL_80:
                v34 = 1;
                goto LABEL_53;
              }
              v41 = *(_QWORD *)(v16 + 24);
              if ( v41 )
              {
                v42 = *(_DWORD *)(v16 + 32);
                if ( v42 > 0x10 )
                {
                  v46 = *(_QWORD *)v16;
                  if ( v42 != *(_QWORD *)v16 )
                  {
                    if ( v42 == -1 )
                    {
                      v57 = *(_QWORD *)(v41 + 32);
                      v45 = *(unsigned int *)(v57 + 12);
                      if ( *(_DWORD *)(v57 + 12) )
                        goto LABEL_111;
                    }
                    else
                    {
                      v81 = *(_QWORD *)v16;
                      v77 = *(_DWORD *)(v16 + 32);
                      v43 = sub_8E5480(v16);
                      v44 = v77;
                      LODWORD(v46) = v81;
                      v45 = *(unsigned int *)(v43 + 8);
                      if ( *(_DWORD *)(v43 + 8) )
                        goto LABEL_85;
                    }
                  }
                }
                else
                {
                  v74 = *(_DWORD *)(v16 + 32);
                  v43 = sub_8E5480(v16);
                  v44 = v74;
                  v45 = *(unsigned int *)(v43 + 8);
                  if ( *(_DWORD *)(v43 + 8) )
                  {
                    v46 = *(_QWORD *)v16;
                    v47 = 0;
                    if ( *(_QWORD *)v16 == v74 )
                    {
LABEL_87:
                      LODWORD(v46) = v46 - v47 - v44;
LABEL_111:
                      v72 = (unsigned int)v46 / v45;
                      v82 = v72;
                      goto LABEL_18;
                    }
LABEL_85:
                    v47 = 32;
                    if ( *(_QWORD *)(v43 + 32) )
                      v47 = 16;
                    goto LABEL_87;
                  }
                }
              }
              v82 = 0;
              LODWORD(v72) = 0;
              goto LABEL_18;
            }
            sub_97E960((__int64)&v93, v15, (unsigned int)v14, v6);
            if ( v98 )
            {
              sub_2587E20(&v110, &v96, v94);
              v37 = v111;
              v89 = 1;
            }
            else
            {
              sub_2587E80(&v110, &v96, v94);
              v37 = v111;
              v89 = 0;
            }
            v88 = v111;
            v87 = v110;
            if ( a2 == 123 )
            {
              v107 = v37;
              v63 = v95;
              if ( v37 > 0x40 )
                sub_2585B30(&v106);
              else
                v106 = v110;
              sub_25864C0(&v106, 1);
              v64 = v107;
              v107 = 0;
              v109 = v64;
              v108 = v106;
              if ( v64 > 0x40 )
              {
                sub_25869C0(&v108, 1);
                v64 = v109;
                v65 = v108;
              }
              else
              {
                v65 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v64) & ~(unsigned __int64)v106);
                if ( !v64 )
                  v65 = nullptr;
                v108 = v65;
              }
              v110 = v65;
              v111 = v64;
              v109 = 0;
              v100 = v88;
              if ( v88 > 0x40 )
                sub_2585B30(&v99);
              else
                v99 = v87;
              sub_25864C0(&v99, 1);
              v66 = v100;
              v100 = 0;
              v102 = v66;
              v101 = v99;
              sub_2586200(&v101, &v93);
              v67 = v102;
              v102 = 0;
              v68 = v111;
              v104 = v67;
              v103 = v101;
              if ( v111 > 0x40 )
              {
                sub_2586580(&v110, &v103);
                v68 = v111;
                v61 = v110;
                v67 = v104;
              }
              else
              {
                v61 = (void *)((unsigned __int64)v110 & (unsigned __int64)v101);
                v110 = (void *)((unsigned __int64)v110 & (unsigned __int64)v101);
              }
              v111 = 0;
              v91 = v68;
              v90 = v61;
              v92 = v63;
              if ( v67 > 0x40 && v103 )
                operator delete[](v103);
              if ( v102 > 0x40 && v101 )
                operator delete[](v101);
              if ( v100 > 0x40 && v99 )
                operator delete[](v99);
              if ( v111 > 0x40 && v110 )
                operator delete[](v110);
              if ( v109 > 0x40 && v108 )
                operator delete[](v108);
              if ( v107 > 0x40 && v106 )
                operator delete[](v106);
              sub_97E3E0(a1, (__int64)&v90, *(_QWORD *)(a3 + 8));
              if ( v68 <= 0x40 )
                goto LABEL_74;
              goto LABEL_151;
            }
            if ( a2 != 122 )
            {
              v107 = v37;
              v38 = *(_QWORD *)(a1 + 184);
              if ( v37 > 0x40 )
                sub_2585B30(&v106);
              else
                v106 = v110;
              sub_25864C0(&v106, 1);
              v39 = v107;
              v107 = 0;
              v109 = v39;
              v108 = v106;
              if ( v39 <= 0x40 )
              {
                v40 = (_QWORD *)((unsigned __int64)v93 & (unsigned __int64)v106);
                v111 = v39;
                v108 = (void *)((unsigned __int64)v93 & (unsigned __int64)v106);
                v110 = (void *)((unsigned __int64)v93 & (unsigned __int64)v106);
                v109 = 0;
                goto LABEL_66;
              }
              sub_2586580(&v108, &v93);
              v70 = v109;
              v40 = v108;
              v109 = 0;
              v111 = v70;
              v110 = v108;
              if ( v70 <= 0x40 )
              {
LABEL_66:
                if ( v40 )
                  *(_BYTE *)sub_A1A4E0(v38, 8) = 0;
                else
                  *(_BYTE *)sub_A1A4E0(v38, 8) = 1;
                goto LABEL_68;
              }
              if ( v70 - (unsigned int)sub_2587400(&v110) <= 0x40 )
              {
                if ( *v40 )
                  *(_BYTE *)sub_A1A4E0(v38, 8) = 0;
                else
                  *(_BYTE *)sub_A1A4E0(v38, 8) = 1;
              }
              else
              {
                *(_BYTE *)sub_A1A4E0(v38, 8) = 0;
                if ( !v40 )
                  goto LABEL_68;
              }
              operator delete[](v40);
LABEL_68:
              if ( v109 > 0x40 && v108 )
                operator delete[](v108);
              if ( v107 > 0x40 && v106 )
                operator delete[](v106);
              goto LABEL_74;
            }
            v107 = v37;
            v58 = v95;
            if ( v37 > 0x40 )
              sub_2585B30(&v106);
            else
              v106 = v110;
            sub_25864C0(&v106, 1);
            v59 = v107;
            v107 = 0;
            v109 = v59;
            v108 = v106;
            if ( v59 > 0x40 )
            {
              sub_25869C0(&v108, 1);
              v59 = v109;
              v60 = (unsigned __int64)v108;
              v109 = 0;
              v111 = v59;
              v110 = v108;
              if ( v59 > 0x40 )
              {
                sub_2586580(&v110, &v93);
                v59 = v111;
                v61 = v110;
                v111 = 0;
                v105 = v58;
                v104 = v59;
                v103 = v110;
                if ( v109 > 0x40 && v108 )
                  operator delete[](v108);
                if ( v107 <= 0x40 )
                {
LABEL_172:
                  sub_97E3E0(a1, (__int64)&v103, *(_QWORD *)(a3 + 8));
                  if ( v59 <= 0x40 )
                  {
LABEL_74:
                    if ( v88 > 0x40 && v87 )
                      operator delete[](v87);
                    if ( v94 > 0x40 && v93 )
                      operator delete[](v93);
                    goto LABEL_80;
                  }
LABEL_151:
                  if ( v61 )
                    operator delete[](v61);
                  goto LABEL_74;
                }
LABEL_170:
                if ( v106 )
                  operator delete[](v106);
                goto LABEL_172;
              }
            }
            else
            {
              v109 = 0;
              v60 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v59) & ~(unsigned __int64)v106;
              if ( !v59 )
                v60 = 0;
              v108 = (void *)v60;
            }
            v111 = 0;
            v110 = (void *)((unsigned __int64)v93 & v60);
            v61 = (void *)((unsigned __int64)v93 & v60);
            v104 = v59;
            v103 = (void *)((unsigned __int64)v93 & v60);
            v105 = v58;
            if ( v107 <= 0x40 )
            {
              sub_97E3E0(a1, (__int64)&v103, *(_QWORD *)(a3 + 8));
              goto LABEL_74;
            }
            goto LABEL_170;
          }
        }
        else
        {
          v110 = nullptr;
        }
        v13 = (void *)((unsigned __int64)v110 | v12);
        goto LABEL_12;
      }
    }
    else if ( (unsigned int)sub_25876C0(&v96) == 1 )
    {
      goto LABEL_9;
    }
  }
  v110 = (void *)sub_A2E130(a1, a3, 2214, 0);
  if ( v110 )
    sub_97DF50((unsigned __int8 ***)&v110, (__int64)&v96);
  v34 = 0;
LABEL_43:
  if ( v97 > 0x40 && v96 )
    operator delete[](v96);
  return v34;
}

