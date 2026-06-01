__int64 __fastcall sub_D919D0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v6; // edx
  __int64 v8; // rsi
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // rdx
  void *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  _QWORD *v22; // rax
  __int64 *v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rdi
  unsigned int v34; // ebx
  __int64 v35; // rax
  unsigned int v37; // eax
  __int64 v38; // r8
  unsigned int v39; // edx
  unsigned __int64 v40; // rax
  unsigned int v41; // edx
  __int64 v42; // rbp
  unsigned __int64 v43; // rbx
  _QWORD *v44; // rbx
  void *v45; // rdi
  int v46; // eax
  void *v47; // rdx
  int v48; // r14d
  int v49; // eax
  void *v50; // rdx
  int v51; // r14d
  int v52; // r14d
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rax
  unsigned int v56; // r12d
  char v57; // r14
  void *v58; // rax
  __int64 v59; // r8
  unsigned int v60; // edx
  __int64 v61; // rcx
  unsigned __int64 v62; // rax
  char v63; // bp
  __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // [rsp+0h] [rbp-128h]
  unsigned int v67; // [rsp+0h] [rbp-128h]
  unsigned __int64 v68; // [rsp+0h] [rbp-128h]
  void *v69; // [rsp+0h] [rbp-128h]
  void *v70; // [rsp+8h] [rbp-120h]
  int v71; // [rsp+8h] [rbp-120h]
  int v72; // [rsp+1Ch] [rbp-10Ch]
  void *v73; // [rsp+20h] [rbp-108h] BYREF
  unsigned int v74; // [rsp+28h] [rbp-100h]
  char v75; // [rsp+2Ch] [rbp-FCh]
  void *v76; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v77; // [rsp+38h] [rbp-F0h]
  void *v78; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v79; // [rsp+48h] [rbp-E0h]
  char v80; // [rsp+4Ch] [rbp-DCh]
  void *v81; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v82; // [rsp+58h] [rbp-D0h]
  char v83; // [rsp+5Ch] [rbp-CCh]
  void *v84; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v85; // [rsp+68h] [rbp-C0h]
  char v86; // [rsp+6Ch] [rbp-BCh]
  void *v87; // [rsp+70h] [rbp-B8h] BYREF
  unsigned int v88; // [rsp+78h] [rbp-B0h]
  void *v89; // [rsp+80h] [rbp-A8h] BYREF
  unsigned int v90; // [rsp+88h] [rbp-A0h]
  char v91; // [rsp+8Ch] [rbp-9Ch]
  void *v92; // [rsp+90h] [rbp-98h] BYREF
  unsigned int v93; // [rsp+98h] [rbp-90h]
  int v94; // [rsp+A8h] [rbp-80h]
  __int64 *v95; // [rsp+B0h] [rbp-78h]
  void *v96; // [rsp+C0h] [rbp-68h] BYREF
  unsigned int v97; // [rsp+C8h] [rbp-60h]
  char v98; // [rsp+CCh] [rbp-5Ch]

  v6 = 13;
  v8 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  if ( (*(_BYTE *)(v8 + 1) & 6) == 0 )
    v6 = sub_D8A760(*(_QWORD *)(a1 + 184), v8, 13, a4, a5);
  sub_D8B1A0((__int64)&v84, *(_QWORD *)(a1 + 176), v6);
  v97 = 64;
  v96 = nullptr;
  v98 = 0;
  v9 = sub_98E2D0((__int64 *)&v84, (__int64 *)&v96);
  if ( v97 > 0x40 && v96 )
    operator delete[](v96);
  if ( v9 >= 0 )
  {
    if ( v85 <= 0x40 )
    {
      if ( v84 && ((unsigned __int64)v84 & ((unsigned __int64)v84 - 1)) == 0 )
      {
LABEL_9:
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        v11 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
        v14 = sub_AAC1F0(v10, *(_QWORD *)(v11 + 8), v11, v12, v13);
        v15 = v14 - 1;
        v97 = v14;
        if ( v14 > 0x40 )
        {
          sub_2205470(&v96, 0, 0);
          v14 = v97;
          v16 = 1LL << v15;
          if ( v97 > 0x40 )
          {
            *((_QWORD *)v96 + (v15 >> 6)) |= v16;
            v17 = v96;
LABEL_12:
            v74 = v14;
            v73 = v17;
            v75 = 1;
            if ( (int)sub_98E2D0((__int64 *)&v84, (__int64 *)&v73) > 0 )
            {
              v96 = (void *)sub_E33C10(a1, a2, 2380, 0);
              if ( v96 )
              {
                sub_D8AE80((unsigned __int8 ***)&v96, (__int64)&v73);
                if ( v96 )
                {
                  sub_AE9DF0(
                    (unsigned __int8 **)v96,
                    *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL),
                    8u);
                  if ( v96 )
                    sub_D8AE80((unsigned __int8 ***)&v96, (__int64)&v84);
                }
              }
              v34 = 0;
              goto LABEL_53;
            }
            v21 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
            if ( (*(_BYTE *)(v21 + 1) & 6) == 0 )
            {
              v37 = sub_D8A760(*(_QWORD *)(a1 + 184), v21, v18, v19, v20);
              if ( v37 <= 0xB )
              {
                sub_D8B1A0((__int64)&v81, *(_QWORD *)(a1 + 176), v37);
                if ( v86 )
                  sub_2206D90(&v96, &v84, v82);
                else
                  sub_2206DE0(&v96, &v84, v82);
                sub_2205B00(&v96, 1);
                v39 = v97;
                v40 = (unsigned __int64)v96;
                v77 = v97;
                v76 = v96;
                if ( a3 != 123 )
                {
                  if ( a3 != 122 )
                  {
                    v41 = v82;
                    v42 = *(_QWORD *)(a1 + 176);
                    v93 = v82;
                    if ( v82 > 0x40 )
                    {
                      sub_2205510(&v92);
                      v41 = v93;
                      if ( v93 > 0x40 )
                      {
                        sub_2205B60(&v92, &v76);
                        v56 = v93;
                        v44 = v92;
                        v93 = 0;
                        v97 = v56;
                        v96 = v92;
                        if ( v56 > 0x40 )
                        {
                          if ( v56 - (unsigned int)sub_2206780(&v96) > 0x40 || *v44 )
                          {
                            *(_BYTE *)sub_E216C0(v42, 8) = 0;
                            if ( !v44 )
                              goto LABEL_66;
                          }
                          else
                          {
                            *(_BYTE *)sub_E216C0(v42, 8) = 1;
                          }
                          operator delete[](v44);
                          goto LABEL_66;
                        }
LABEL_64:
                        if ( v44 )
                          *(_BYTE *)sub_E216C0(v42, 8) = 0;
                        else
                          *(_BYTE *)sub_E216C0(v42, 8) = 1;
LABEL_66:
                        if ( v93 <= 0x40 )
                          goto LABEL_69;
                        v45 = v92;
                        if ( !v92 )
                          goto LABEL_69;
                        goto LABEL_68;
                      }
                      v43 = (unsigned __int64)v92;
                      v40 = (unsigned __int64)v76;
                    }
                    else
                    {
                      v43 = (unsigned __int64)v81;
                    }
                    v44 = (_QWORD *)(v40 & v43);
                    v97 = v41;
                    v92 = v44;
                    v96 = v44;
                    v93 = 0;
                    goto LABEL_64;
                  }
                  v63 = v83;
                  v93 = v97;
                  if ( v97 > 0x40 )
                  {
                    sub_2205510(&v92);
                    v39 = v93;
                    if ( v93 > 0x40 )
                    {
                      sub_2205FC0(&v92, &v76);
                      v39 = v93;
                      v65 = (unsigned __int64)v92;
                      v93 = 0;
                      v97 = v39;
                      v96 = v92;
                      if ( v39 > 0x40 )
                      {
                        sub_2205B60(&v96, &v81);
                        v91 = v63;
                        v90 = v97;
                        v89 = v96;
                        if ( v93 > 0x40 && v92 )
                          operator delete[](v92);
LABEL_129:
                        sub_D8FFE0((_QWORD *)a1, (__int64)&v89, *(_QWORD *)(a2 + 8), v64, v38);
                        if ( v90 <= 0x40 )
                          goto LABEL_69;
                        v45 = v89;
                        if ( !v89 )
                          goto LABEL_69;
                        goto LABEL_68;
                      }
LABEL_128:
                      v90 = v39;
                      v89 = (void *)((unsigned __int64)v81 & v65);
                      v91 = v63;
                      goto LABEL_129;
                    }
                    v40 = (unsigned __int64)v92;
                  }
                  v64 = 0;
                  v65 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v39) & ~v40;
                  if ( !v39 )
                    v65 = 0;
                  goto LABEL_128;
                }
                v57 = v83;
                v93 = v97;
                if ( v97 > 0x40 )
                {
                  sub_2205510(&v92);
                  v39 = v93;
                  if ( v93 > 0x40 )
                  {
                    sub_2205FC0(&v92, &v76);
                    v58 = v92;
                    v39 = v93;
                    goto LABEL_106;
                  }
                  v40 = (unsigned __int64)v92;
                }
                v58 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v39) & ~v40);
                if ( !v39 )
                  v58 = nullptr;
                v92 = v58;
LABEL_106:
                v96 = v58;
                v97 = v39;
                v93 = 0;
                v88 = v82;
                if ( v82 > 0x40 )
                  sub_2205510(&v87);
                else
                  v87 = v81;
                sub_22059A0(&v87, &v76);
                v60 = v88;
                v88 = 0;
                v61 = v97;
                v90 = v60;
                v89 = v87;
                if ( v97 > 0x40 )
                {
                  sub_2205B60(&v96, &v89);
                  v61 = v97;
                  v62 = (unsigned __int64)v96;
                  v60 = v90;
                }
                else
                {
                  v62 = (unsigned __int64)v96 & (unsigned __int64)v87;
                  v96 = (void *)((unsigned __int64)v96 & (unsigned __int64)v87);
                }
                v97 = 0;
                v79 = v61;
                v78 = (void *)v62;
                v80 = v57;
                if ( v60 > 0x40 && v89 )
                  operator delete[](v89);
                if ( v88 > 0x40 && v87 )
                  operator delete[](v87);
                if ( v97 > 0x40 && v96 )
                  operator delete[](v96);
                if ( v93 > 0x40 && v92 )
                  operator delete[](v92);
                sub_D8FFE0((_QWORD *)a1, (__int64)&v78, *(_QWORD *)(a2 + 8), v61, v59);
                if ( v79 <= 0x40 )
                  goto LABEL_69;
                v45 = v78;
                if ( !v78 )
                  goto LABEL_69;
LABEL_68:
                operator delete[](v45);
LABEL_69:
                if ( v77 > 0x40 && v76 )
                  operator delete[](v76);
                if ( v82 > 0x40 && v81 )
                  operator delete[](v81);
                v34 = 1;
                goto LABEL_53;
              }
            }
            v66 = *(_QWORD *)(a1 + 176);
            sub_E21760(v66, 48);
            sub_E23260(&v92);
            sub_E21790(v66, 48);
            v67 = sub_CFE630((unsigned int *)&v92);
            v22 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
            if ( v94 == 1 )
            {
              v23 = v95;
            }
            else
            {
              if ( (unsigned int)(v94 - 2) <= 1 )
                BUG();
              v23 = (__int64 *)v95[4];
            }
            v24 = 0;
            if ( ((*v23 >> 1) & 1) == 0 )
            {
              v25 = *v23 & 0xFFFFFFFFFFFFFFFCLL;
              v24 = v25;
              if ( v25 )
              {
                if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 26 >= 0x1B )
                  v24 = 0;
              }
            }
            v26 = sub_AB0BF0(v22, v24, 0);
            v97 = 64;
            v70 = (void *)v26;
            v27 = v67 | v26;
            v96 = (void *)(v27 & -(__int64)v27);
            if ( a3 == 797 )
            {
              v68 = v27 & -(__int64)v27;
              v98 = 0;
              v46 = sub_98E2D0((__int64 *)&v84, (__int64 *)&v96);
              v47 = (void *)v68;
              v48 = v46;
              if ( v97 > 0x40 && v96 )
              {
                operator delete[](v96);
                v47 = (void *)v68;
              }
              if ( v48 <= 0 )
              {
                v34 = 1;
                *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = 1;
              }
              else
              {
                v69 = v47;
                v97 = 64;
                v96 = v70;
                v98 = 0;
                v49 = sub_98E2D0((__int64 *)&v84, (__int64 *)&v96);
                v50 = v69;
                v51 = v49;
                if ( v97 > 0x40 && v96 )
                {
                  operator delete[](v96);
                  v50 = v69;
                }
                if ( v51 > 0 )
                  goto LABEL_88;
                v97 = 64;
                v96 = v50;
                v98 = 0;
                v52 = sub_98E2D0((__int64 *)&v84, (__int64 *)&v96);
                if ( v97 > 0x40 && v96 )
                  operator delete[](v96);
                if ( v52 <= 0 )
                {
LABEL_88:
                  v53 = 2379;
                  v54 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
                  goto LABEL_93;
                }
                v34 = 1;
                *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = 0;
              }
            }
            else
            {
              v98 = 0;
              v28 = sub_98E2D0((__int64 *)&v84, (__int64 *)&v96);
              if ( v97 > 0x40 && v96 )
              {
                v72 = v28;
                operator delete[](v96);
                v28 = v72;
              }
              if ( v28 > 0 )
              {
                v97 = 64;
                v98 = 0;
                v96 = v70;
                v29 = sub_98E2D0((__int64 *)&v84, (__int64 *)&v96);
                if ( v97 > 0x40 && v96 )
                {
                  v71 = v29;
                  operator delete[](v96);
                  v29 = v71;
                }
                if ( v29 <= 0 )
                {
                  v30 = (unsigned __int64)v84;
                  if ( v85 > 0x40 )
                    v30 = *(_QWORD *)v84;
                  if ( a3 == 122 )
                    v31 = v30 * (v67 / v30);
                  else
                    v31 = v30 * ((v67 != 0) + (v67 - (unsigned __int64)(v67 != 0)) / v30);
                  v32 = *(_QWORD *)(a1 + 176);
                  sub_CFE430((__int64)&v96, (__int64)&v92, v31);
                  v33 = v32;
                  v34 = 1;
                  v35 = sub_E216C0(v33, 48);
                  sub_E23260(v35);
                  sub_E232A0(&v96);
                  goto LABEL_91;
                }
                v53 = 2378;
                v54 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
LABEL_93:
                v96 = (void *)sub_E33C10(a1, v54, v53, 0);
                if ( v96 )
                  sub_D8AE80((unsigned __int8 ***)&v96, (__int64)&v84);
                v34 = 0;
                goto LABEL_91;
              }
              v34 = 1;
              v55 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
              sub_E231E0(v55, &v92);
            }
LABEL_91:
            sub_E232A0(&v92);
LABEL_53:
            if ( v74 > 0x40 && v73 )
              operator delete[](v73);
            goto LABEL_39;
          }
        }
        else
        {
          v96 = nullptr;
          v16 = 1LL << v15;
        }
        v17 = (void *)((unsigned __int64)v96 | v16);
        goto LABEL_12;
      }
    }
    else if ( (unsigned int)sub_22069E0(&v84) == 1 )
    {
      goto LABEL_9;
    }
  }
  v96 = (void *)sub_E33C10(a1, a2, 2416, 0);
  if ( v96 )
    sub_D8AE80((unsigned __int8 ***)&v96, (__int64)&v84);
  v34 = 0;
LABEL_39:
  if ( v85 > 0x40 && v84 )
    operator delete[](v84);
  return v34;
}
