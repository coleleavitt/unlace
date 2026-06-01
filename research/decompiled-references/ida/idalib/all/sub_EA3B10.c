__int64 __fastcall sub_EA3B10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  _QWORD *v19; // r13
  void **v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 i; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r12d
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // r15
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v42; // rsi
  __int64 v43; // r13
  __int64 *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  char *v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 j; // r15
  unsigned int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 *v55; // rax
  __int64 v56; // rax
  __int64 k; // r15
  unsigned int v58; // eax
  __int64 v59; // rcx
  char *v60; // rcx
  _QWORD *v61; // r10
  __int64 v62; // r13
  __int64 v63; // r15
  __int64 v64; // r10
  unsigned __int8 *v65; // rax
  unsigned __int8 *v66; // rax
  __int64 v67; // r13
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int64 (__fastcall *v70)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v71; // rcx
  _QWORD *v72; // rcx
  unsigned __int64 (__fastcall *v73)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v74; // rcx
  _QWORD *v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 *v78; // rcx
  __int64 v79; // r15
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rax
  _DWORD *v84; // rax
  __int64 v85; // rdi
  int v86; // edx
  char v87; // si
  int v88; // eax
  int v89; // ecx
  unsigned __int8 *v90; // r14
  char *v91; // rax
  signed __int64 v92; // rdx
  unsigned __int8 v93; // al
  __int64 v94; // rsi
  unsigned __int8 *v95; // r15
  char *v96; // rax
  signed __int64 v97; // rdx
  unsigned __int8 v98; // al
  __int64 v99; // rsi
  char v100; // al
  char v101; // al
  __int64 v103; // [rsp+18h] [rbp-1F0h]
  void *v104; // [rsp+18h] [rbp-1F0h]
  unsigned int v105; // [rsp+18h] [rbp-1F0h]
  unsigned int *v106; // [rsp+18h] [rbp-1F0h]
  __int64 v107; // [rsp+18h] [rbp-1F0h]
  __int64 v108; // [rsp+18h] [rbp-1F0h]
  __int64 v109; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v110; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v111; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v112; // [rsp+20h] [rbp-1E8h]
  unsigned int v113; // [rsp+20h] [rbp-1E8h]
  unsigned __int64 v114; // [rsp+28h] [rbp-1E0h]
  __int64 v115; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v116; // [rsp+38h] [rbp-1D0h]
  int v117; // [rsp+40h] [rbp-1C8h]
  int v118; // [rsp+44h] [rbp-1C4h]
  void *v119; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v120; // [rsp+58h] [rbp-1B0h]
  __int64 v121; // [rsp+60h] [rbp-1A8h] BYREF
  void *v122; // [rsp+70h] [rbp-198h] BYREF
  __int64 v123; // [rsp+78h] [rbp-190h]
  __int64 v124; // [rsp+80h] [rbp-188h] BYREF
  unsigned __int8 *v125; // [rsp+90h] [rbp-178h] BYREF
  char v126; // [rsp+98h] [rbp-170h]
  unsigned __int8 *v127[10]; // [rsp+E0h] [rbp-128h] BYREF
  void *v128; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v129; // [rsp+138h] [rbp-D0h]
  _BYTE v130[64]; // [rsp+140h] [rbp-C8h] BYREF
  void *ptr; // [rsp+180h] [rbp-88h] BYREF
  __int64 v132; // [rsp+188h] [rbp-80h]
  _BYTE v133[120]; // [rsp+190h] [rbp-78h] BYREF

  v4 = 0;
  if ( a3 == a2 )
    return v4;
  sub_E9C270((__int64)&v119, a2);
  sub_E9C270((__int64)&v122, a3);
  v11 = *(_QWORD *)(a2 + 120);
  if ( a4 == (v11 & 0xFFFFFFFFFFFFFFF8LL) )
    goto LABEL_33;
  v12 = sub_BAB630(a2, a3, v11 & 0xFFFFFFFFFFFFFFF8LL, v8, v9, v10);
  v16 = *(_QWORD *)(a2 + 120);
  v17 = v12;
  if ( !v16 )
  {
    v67 = *(_QWORD *)(a2 + 96);
    v68 = *(_QWORD *)(v67 + 88);
    v69 = v68 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v68 & 1) == 0 )
    {
      v13 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v68 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v68 & 2) == 0 )
        {
LABEL_71:
          v19 = *(_QWORD **)(a4 + 8);
          v20 = nullptr;
          if ( !v19 )
          {
            if ( v17 )
              goto LABEL_73;
            goto LABEL_29;
          }
          goto LABEL_8;
        }
        v79 = v13[2295];
        v80 = v67 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v79 )
        {
          v81 = v13[294];
          v13[304] += 24LL;
          v82 = (v81 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v13[295] >= v82 + 24 && v81 )
          {
            v13[294] = v82 + 24;
            v83 = (v81 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v83 = sub_986170((__int64)(v13 + 294), 24, 24, 3, v14, v15);
            v82 = v83 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v83 = v79;
          v80 = v82 | 4;
          *(_DWORD *)(v83 + 8) = 0;
          *(_QWORD *)(v83 + 16) = v67;
        }
        v69 = v80 & 0xFFFFFFFFFFFFFFFELL;
        v68 = v69 | 1;
        *(_QWORD *)(v67 + 88) = v69 | 1;
      }
    }
    if ( v69 )
    {
      if ( (v69 & 4) != 0 )
      {
        v84 = (_DWORD *)(v68 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v84 )
        {
          v85 = *(_QWORD *)v84;
          v86 = *(_DWORD *)(*(_QWORD *)v84 + 12LL);
          if ( v84[2] != v86 )
          {
            v84[2] = v86;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v85 + 152LL))(v85, v67);
          }
        }
      }
    }
    v16 = *(_QWORD *)(a2 + 120);
  }
  v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_71;
  v16 &= 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v18 + 72) & 1) != 0 )
  {
    sub_BA8900(a2);
    v16 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v19 = *(_QWORD **)(a4 + 8);
  v20 = *(void ***)(v16 + 8);
  if ( !v19 )
  {
LABEL_27:
    if ( !v17 )
      goto LABEL_28;
    goto LABEL_16;
  }
LABEL_8:
  v21 = *(_QWORD *)(*v19 & 0xFFFFFFFFFFFFFFF0LL);
  v22 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 35;
  if ( (unsigned int)v22 > 1 )
    v21 = sub_F63050(v21, v16, v22, v13);
  for ( i = *(_QWORD *)(v21 + 24); ; i = *(_QWORD *)(v24 + 24) )
  {
    v24 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    LODWORD(i) = *(unsigned __int8 *)(v24 + 16);
    v25 = (unsigned int)(i - 35);
    if ( (unsigned int)v25 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
        goto LABEL_27;
      i = sub_F63050(v24, v16, v25, v13);
      v24 = i;
      if ( !i )
        goto LABEL_27;
      LOBYTE(i) = *(_BYTE *)(i + 16);
    }
    if ( (_BYTE)i == 36 )
      break;
  }
  v26 = sub_F62610(v24, v16, v25, v13, v14);
  if ( v17 && v26 )
  {
    v103 = v26;
    LOBYTE(v27) = v17 != 0;
    v28 = sub_BAC410(v17, v16, v26, v27, v14, v15);
    if ( v28 != (unsigned int)sub_BAC410(v103, v16, v103, v29, v30, v31) )
      goto LABEL_16;
    goto LABEL_28;
  }
  if ( (v26 || !v17) && (v17 || !v26) )
  {
LABEL_28:
    v16 = *(_QWORD *)(a2 + 120);
LABEL_29:
    v42 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v42 + 72) & 1) != 0 )
    {
      sub_BA8900(a2);
      v42 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( (unsigned __int8)sub_E9D1E0(a1, v42 + 16, a2, v119, v120, (__int64 *)(a4 + 16), a3, v122, v123) )
      goto LABEL_21;
    v11 = *(_QWORD *)(a2 + 120);
LABEL_33:
    v128 = v130;
    v129 = 0x400000000LL;
    ptr = v133;
    v132 = 0x400000000LL;
    if ( !v11 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), 0x400000000LL, (__int64)v133, v9, v10);
      v11 = *(_QWORD *)(a2 + 120);
    }
    v43 = 0;
    v44 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v44 )
    {
      v43 = *v44;
      v45 = *v44 + 48;
      if ( v43 )
        v43 = v45;
    }
    for ( j = sub_B8E970(a2 + 48); j; j = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL )
    {
      if ( (unsigned __int8)sub_EA4B10(j, v43) )
      {
        v51 = sub_E98680(j);
        v52 = (unsigned int)v129;
        if ( (unsigned int)v129 >= (unsigned __int64)HIDWORD(v129) )
        {
          v76 = v114 & 0xFFFFFFFF00000000LL | v51;
          v46 = (unsigned int)v129 + 1LL;
          v114 = v76;
          if ( HIDWORD(v129) < v46 )
          {
            v111 = v76;
            sub_2237220(&v128, v130, v46, 16);
            v52 = (unsigned int)v129;
            v76 = v111;
          }
          v47 = (char *)v128 + 16 * v52;
          *(_QWORD *)v47 = j;
          *((_QWORD *)v47 + 1) = v76;
          LODWORD(v129) = v129 + 1;
        }
        else
        {
          v47 = (char *)v128 + 16 * (unsigned int)v129;
          *(_QWORD *)v47 = j;
          *((_DWORD *)v47 + 2) = v51;
          LODWORD(v129) = v129 + 1;
        }
      }
    }
    v53 = *(_QWORD *)(a3 + 120);
    if ( !v53 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(a3 + 96) + 88LL), *(_QWORD *)(a3 + 96), v46, (__int64)v47, v48, v49);
      v53 = *(_QWORD *)(a3 + 120);
    }
    v54 = 0;
    v55 = (__int64 *)(v53 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v55 )
    {
      v54 = *v55;
      v56 = *v55 + 48;
      if ( v54 )
        v54 = v56;
    }
    for ( k = sub_B8E970(a3 + 48); k; k = *(_QWORD *)(k + 8) & 0xFFFFFFFFFFFFFFF8LL )
    {
      if ( (unsigned __int8)sub_EA4B10(k, v54) )
      {
        v58 = sub_E98680(k);
        v59 = (unsigned int)v132;
        if ( (unsigned int)v132 >= (unsigned __int64)HIDWORD(v132) )
        {
          v77 = v112 & 0xFFFFFFFF00000000LL | v58;
          v112 = v77;
          if ( HIDWORD(v132) < (unsigned __int64)(unsigned int)v132 + 1 )
          {
            v110 = v77;
            sub_2237220(&ptr, v133, (unsigned int)v132 + 1LL, 16);
            v59 = (unsigned int)v132;
            v77 = v110;
          }
          v78 = (__int64 *)((char *)ptr + 16 * v59);
          *v78 = k;
          v78[1] = v77;
          LODWORD(v132) = v132 + 1;
        }
        else
        {
          v60 = (char *)ptr + 16 * (unsigned int)v132;
          *(_QWORD *)v60 = k;
          *((_DWORD *)v60 + 2) = v58;
          LODWORD(v132) = v132 + 1;
        }
      }
    }
    sub_E9E370((__int64)&v115, (__int64 **)&v128, (__int64 **)&ptr);
    v62 = v117;
    if ( v117 == 15 || v118 == 15 )
    {
      sub_E9E6B0(a1, v61, a2, v119, v120, a3, v122, v123);
      goto LABEL_60;
    }
    if ( v117 != v118 )
    {
      sub_E9E810(a1, v61, a2, v119, v120, a3, v122, v123);
      goto LABEL_60;
    }
    v63 = v115;
    v64 = v116;
    if ( v117 != 13 )
    {
      if ( v117 == 14 )
      {
        v108 = v116;
        v100 = sub_E9DD70(a1, a2, v119, v120, v122, v123, v115, v116);
        v64 = v108;
        if ( v100 )
          goto LABEL_60;
      }
      else if ( v117 == 12 )
      {
        v109 = v116;
        v101 = sub_E9D5C0(a1, a2, (__int64)v119, v120, (__int64)v122, v123, v115, v116);
        v64 = v109;
        if ( v101 )
          goto LABEL_60;
      }
      goto LABEL_59;
    }
    v107 = v116;
    if ( (unsigned __int8)sub_E9C2C0((__int64)a1, a2, (__int64)v119, v120, (__int64)v122, v123, v115, v116) )
      goto LABEL_60;
    v64 = v107;
    v87 = *(_BYTE *)(v107 + 88) & 7;
    LOBYTE(v88) = *(_BYTE *)(v63 + 88) & 7;
    if ( (_BYTE)v88 )
    {
      v88 = (unsigned __int8)v88;
      v89 = 2;
      if ( !v87 )
        goto LABEL_116;
    }
    else
    {
      v88 = 2;
      if ( !v87 )
      {
LABEL_59:
        v106 = (unsigned int *)v64;
        sub_FC70B0(v127, *a1, *(unsigned int *)(v63 + 24), 2335);
        sub_E98080(v127, a2);
        sub_E97E40(v127, v120 == 0);
        sub_AEC220(v127, v119, v120);
        sub_E97E40(v127, v62);
        v65 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
        v126 = 1;
        v125 = v65;
        sub_AEC610((__int64 *)v127, (__int64 *)&v125);
        sub_AEA040((__int64)v127);
        sub_FC70B0(v127, *a1, v106[6], 2517);
        sub_E97E40(v127, v123 == 0);
        sub_AEC220(v127, v122, v123);
        sub_E97E40(v127, v62);
        v66 = (unsigned __int8 *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v106 + 16LL))(v106);
        v126 = 1;
        v125 = v66;
        sub_AEC610((__int64 *)v127, (__int64 *)&v125);
        sub_AEA040((__int64)v127);
LABEL_60:
        if ( ptr != v133 )
          free(ptr);
        if ( v128 != v130 )
          free(v128);
        goto LABEL_21;
      }
    }
    v89 = *(_BYTE *)(v107 + 88) & 7;
LABEL_116:
    if ( v89 != v88 )
    {
      v90 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
      sub_FC70B0(v127, *a1, *(unsigned int *)(v63 + 24), 2336);
      sub_E98080(v127, a2);
      sub_E97E40(v127, v120 == 0);
      sub_AEC220(v127, v119, v120);
      v125 = v90;
      v126 = 1;
      sub_AEC610((__int64 *)v127, (__int64 *)&v125);
      sub_E97E40(v127, 1);
      sub_FC70F0(&v125, v127);
      sub_AEA040((__int64)v127);
      v91 = (char *)sub_995750(v63);
      sub_AEC220(&v125, v91, v92);
      v93 = *(_BYTE *)(v63 + 88) & 7;
      v94 = v93;
      if ( !v93 )
        v94 = 2;
      sub_E97E40(&v125, v94);
      sub_AEA040((__int64)&v125);
      v95 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
      sub_FC70B0(v127, *a1, *(unsigned int *)(v107 + 24), 2518);
      sub_E97E40(v127, v123 == 0);
      sub_AEC220(v127, v122, v123);
      v125 = v95;
      v126 = 1;
      sub_AEC610((__int64 *)v127, (__int64 *)&v125);
      sub_E97E40(v127, 1);
      sub_FC70F0(&v125, v127);
      sub_AEA040((__int64)v127);
      v96 = (char *)sub_995750(v107);
      sub_AEC220(&v125, v96, v97);
      v98 = *(_BYTE *)(v107 + 88) & 7;
      v99 = v98;
      if ( !v98 )
        v99 = 2;
      sub_E97E40(&v125, v99);
      sub_AEA040((__int64)&v125);
      goto LABEL_60;
    }
    goto LABEL_59;
  }
LABEL_16:
  if ( !v20 )
  {
LABEL_73:
    v70 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL);
    if ( v70 == sub_BAC570 )
    {
      v71 = *(_QWORD *)(a2 + 120);
      if ( !v71 )
      {
        sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), (__int64)sub_BAC570, 0, v14, v15);
        v71 = *(_QWORD *)(a2 + 120);
      }
      v34 = *(unsigned int *)(a2 + 24);
      LODWORD(v33) = *(_DWORD *)(a2 + 60);
      LODWORD(v32) = *(_DWORD *)(a2 + 24);
      v72 = (_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v72 && a2 == *v72 )
        LODWORD(v32) = *(_DWORD *)(a2 + 84);
    }
    else
    {
      v33 = ((__int64 (__fastcall *)(__int64))v70)(a2);
      v34 = *(unsigned int *)(a2 + 24);
      v32 = HIDWORD(v33);
    }
    v20 = nullptr;
    v104 = nullptr;
    goto LABEL_18;
  }
  v104 = *v20;
  ptr = *v20;
  v132 = (__int64)(v20 + 1);
  LODWORD(v32) = sub_F6CE20(&ptr);
  LODWORD(v33) = sub_F6CCB0(&ptr);
  v34 = *(unsigned int *)(a2 + 24);
LABEL_18:
  v113 = v33;
  sub_FC70B0(&ptr, *a1, v34, 2336);
  sub_E98080((unsigned __int8 **)&ptr, a2);
  sub_E97E40((unsigned __int8 **)&ptr, v120 == 0);
  sub_AEC220((unsigned __int8 **)&ptr, v119, v120);
  LOBYTE(v129) = 1;
  v128 = (void *)__PAIR64__(v32, v113);
  sub_AEC610((__int64 *)&ptr, (__int64 *)&v128);
  sub_E97E40((unsigned __int8 **)&ptr, 0);
  sub_FC70F0(&v128, &ptr);
  sub_AEA040((__int64)&ptr);
  sub_E97E40((unsigned __int8 **)&v128, v20 != nullptr);
  sub_AE9DF0((unsigned __int8 **)&v128, (__int64)v104, 8u);
  sub_AEA040((__int64)&v128);
  if ( v19 )
  {
    v37 = (void *)*v19;
    v132 = (__int64)(v19 + 1);
    ptr = v37;
    LODWORD(v38) = sub_F6CE20(&ptr);
    LODWORD(v39) = sub_F6CCB0(&ptr);
    v40 = *(unsigned int *)(a3 + 24);
  }
  else
  {
    v73 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a3 + 16LL);
    if ( v73 == sub_BAC570 )
    {
      v74 = *(_QWORD *)(a3 + 120);
      if ( !v74 )
      {
        sub_A794E0((__int64 *)(*(_QWORD *)(a3 + 96) + 88LL), *(_QWORD *)(a3 + 96), (__int64)sub_BAC570, 0, v35, v36);
        v74 = *(_QWORD *)(a3 + 120);
      }
      v40 = *(unsigned int *)(a3 + 24);
      LODWORD(v39) = *(_DWORD *)(a3 + 60);
      LODWORD(v38) = *(_DWORD *)(a3 + 24);
      v75 = (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v75 && a3 == *v75 )
        LODWORD(v38) = *(_DWORD *)(a3 + 84);
    }
    else
    {
      v39 = ((__int64 (__fastcall *)(__int64))v73)(a3);
      v40 = *(unsigned int *)(a3 + 24);
      v38 = HIDWORD(v39);
    }
    v37 = nullptr;
  }
  v105 = v39;
  sub_FC70B0(&ptr, *a1, v40, 2518);
  sub_E97E40((unsigned __int8 **)&ptr, v123 == 0);
  sub_AEC220((unsigned __int8 **)&ptr, v122, v123);
  v128 = (void *)__PAIR64__(v38, v105);
  LOBYTE(v129) = 1;
  sub_AEC610((__int64 *)&ptr, (__int64 *)&v128);
  sub_E97E40((unsigned __int8 **)&ptr, 0);
  sub_FC70F0(&v128, &ptr);
  sub_AEA040((__int64)&ptr);
  sub_E97E40((unsigned __int8 **)&v128, v19 != nullptr);
  sub_AE9DF0((unsigned __int8 **)&v128, (__int64)v37, 8u);
  sub_AEA040((__int64)&v128);
LABEL_21:
  if ( v122 != &v124 )
    operator delete(v122);
  v4 = 1;
  if ( v119 != &v121 )
    operator delete(v119);
  return v4;
}
