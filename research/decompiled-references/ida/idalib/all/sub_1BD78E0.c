__int64 __fastcall sub_1BD78E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 *v11; // rax
  _QWORD *v12; // rax
  _WORD *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r9
  _WORD *v21; // r15
  _BYTE *v22; // rax
  __int64 v23; // rax
  char v24; // bl
  __int64 v25; // rsi
  __int64 v26; // rdx
  void **v27; // rdi
  void *v28; // rbx
  void **v29; // rax
  int v30; // eax
  __int64 *v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  bool v45; // bp
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // ebx
  _WORD *v50; // r13
  __int64 v51; // rax
  __int64 v52; // r8
  char v53; // dl
  __int64 v54; // rcx
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _WORD *v61; // rbp
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // eax
  __int64 v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rbx
  __int64 v68; // rdx
  unsigned int v69; // r12d
  __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rbp
  __int64 v76; // rax
  unsigned int v77; // edx
  void **v78; // rdi
  bool v79; // cc
  __int64 v80; // rax
  char v81; // al
  void **v82; // rdi
  char v83; // [rsp+0h] [rbp-118h]
  unsigned int v84; // [rsp+0h] [rbp-118h]
  unsigned int v85; // [rsp+0h] [rbp-118h]
  unsigned int v86; // [rsp+0h] [rbp-118h]
  char v87; // [rsp+0h] [rbp-118h]
  unsigned int v89; // [rsp+8h] [rbp-110h]
  unsigned int v90; // [rsp+8h] [rbp-110h]
  unsigned int v91; // [rsp+10h] [rbp-108h]
  char v92; // [rsp+1Fh] [rbp-F9h]
  char v93; // [rsp+2Fh] [rbp-E9h] BYREF
  void *v94; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v95; // [rsp+38h] [rbp-E0h]
  char v96; // [rsp+3Ch] [rbp-DCh]
  void *v97; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v98; // [rsp+48h] [rbp-D0h]
  char v99; // [rsp+4Ch] [rbp-CCh]
  void *v100; // [rsp+50h] [rbp-C8h] BYREF
  void **v101; // [rsp+58h] [rbp-C0h]
  char v102; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v103; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v104; // [rsp+78h] [rbp-A0h]
  char v105; // [rsp+80h] [rbp-98h]
  char v106; // [rsp+84h] [rbp-94h]
  void *v107; // [rsp+90h] [rbp-88h] BYREF
  __int64 v108; // [rsp+98h] [rbp-80h]
  unsigned int v109; // [rsp+A0h] [rbp-78h] BYREF
  char v110; // [rsp+A4h] [rbp-74h]

  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 16);
  v83 = a6;
  v11 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v11 + 16) == 47 )
  {
    v12 = sub_F60F10(*v11, a2, a3, a4, (__int64)a5, a6);
    v9 = sub_6F3660((__int64)v12);
  }
  switch ( *(_BYTE *)(a1 + 1) )
  {
    case 7:
      if ( (**(_BYTE **)(a2 + 2320) & 8) == 0 )
        return 0;
      v13 = sub_1BC7290((_QWORD *)a2, a3);
      v110 &= ~1u;
      LOWORD(v107) = 0;
      v108 = 0;
      v109 = 0;
      if ( !(unsigned __int8)sub_C3D370((__int64)v13, (__int64)&v107, a2, 0, v14, v15) )
        goto LABEL_6;
      sub_A54D20(a4, (int *)&v109);
      v74 = a4 + 8;
      v75 = sub_21F90D0(a4, &v109, v73);
      if ( *(_QWORD *)(a4 + 8) == v75 )
        sub_21FFE60(&v103, v74);
      else
        sub_21F97A0(&v103, v74);
      if ( v103 == v75 )
      {
        v78 = (void **)v104;
        if ( (*(_BYTE *)(v104 + 20) & 7) != 1 )
          goto LABEL_94;
      }
      else
      {
        if ( (v106 & 7) != 1 )
        {
LABEL_94:
          sub_9955A0(&v103);
LABEL_6:
          if ( v109 > 1 )
            sub_A4F8E0((int *)&v109);
          return 0;
        }
        v78 = (void **)&v103;
      }
      if ( !(unsigned __int8)sub_21FB4A0(v78) )
        goto LABEL_94;
      *a5 = *((_QWORD *)v13 + 1);
      sub_9955A0(&v103);
      if ( v109 > 1 )
        sub_A4F8E0((int *)&v109);
      return 2;
    case 9:
      v31 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_36;
    case 0xA:
      if ( !sub_F58100(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL))
        || !sub_F58100(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL))
        || (unsigned int)sub_A637F0(a2, v10, v9, v17, v18) != 1 )
      {
        return 0;
      }
      v21 = sub_1BC7290((_QWORD *)a2, a3);
      result = 4;
      if ( (*(_DWORD *)v21 & 0x20000) != 0 )
        return result;
      v22 = *(_BYTE **)(a2 + 2320);
      v108 = 0;
      LOWORD(v107) = 0;
      v109 = 0;
      v110 &= ~1u;
      if ( ((*v22 & 8) == 0 || !(unsigned __int8)sub_C3D370((__int64)v21, (__int64)&v107, a2, 0, v19, v20))
        && !(unsigned __int8)sub_C3C290((unsigned __int64)v21, a2, (unsigned int *)a4, nullptr) )
      {
        result = 3;
LABEL_30:
        if ( v109 > 1 )
        {
          v84 = result;
          sub_A4F8E0((int *)&v109);
          return v84;
        }
        return result;
      }
      if ( (**(_BYTE **)(a2 + 2320) & 8) != 0 )
        sub_A54D20(a4, (int *)&v109);
      sub_995620((__int64)&v100, (_QWORD *)(a4 + 8));
      sub_995620((__int64)&v103, &v100);
      v23 = sub_A62D20((_QWORD *)a2, v9);
      v24 = sub_22028C0(&v103, v23, 1, &v97);
      v25 = sub_A62D20((_QWORD *)a2, v10);
      sub_22028C0(&v103, v25, 1, &v97);
      if ( (**(_BYTE **)(a2 + 2320) & 8) != 0 )
      {
        v27 = &v100;
        v28 = (void *)sub_21F90D0(&v103, v25, v26);
        if ( v100 == v28 )
          v27 = v101;
        if ( (*((_BYTE *)v27 + 20) & 7) == 1 )
        {
          v29 = (void **)&v103;
          if ( v28 == (void *)v103 )
            v29 = (void **)v104;
          if ( (*((_BYTE *)v29 + 20) & 7) == 1 && !(unsigned __int8)sub_21FB4A0(v27) )
          {
            v82 = (void **)&v103;
            if ( v28 == (void *)v103 )
              v82 = (void **)v104;
            if ( !(unsigned __int8)sub_21FB4A0(v82) )
            {
              v30 = 0;
              goto LABEL_29;
            }
          }
        }
        if ( (void *)v103 != v100
          || (v28 == (void *)v103 ? (v81 = sub_2201080(&v103, &v100)) : (v81 = sub_21F96E0(&v103, &v100)), !v81) )
        {
LABEL_28:
          *a5 = *((_QWORD *)v21 + 1);
          v30 = 2;
LABEL_29:
          v89 = v30;
          sub_9955A0(&v103);
          sub_9955A0(&v100);
          result = v89;
          goto LABEL_30;
        }
      }
      else if ( (v24 & 4) != 0 )
      {
        goto LABEL_28;
      }
      sub_9955A0(&v103);
      sub_9955A0(&v100);
      if ( v109 > 1 )
        sub_A4F8E0((int *)&v109);
      return 0;
    case 0xC:
      v31 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_52;
    case 0xF:
      v31 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( sub_F58100(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
LABEL_52:
        if ( sub_F58100(*v31) && sub_F60F80(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), a2, v57, v58, v59, v60) )
          return 1;
        if ( !sub_F61920(*v31, a2, v57, v58, v59, v60) || !sub_F58100(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL)) || v83 )
          return 0;
        v61 = sub_1BC7290((_QWORD *)a2, a3);
        result = 4;
        if ( (*(_DWORD *)v61 & 0x20000) != 0 )
          return result;
        sub_C3EB00((__int64)&v100, (unsigned __int64)v61, a2, nullptr, v62, v63);
        v64 = 3;
        if ( v102 )
        {
          v65 = sub_A62D20((_QWORD *)a2, v9);
          v67 = sub_21F90D0(a2, v9, v66);
          if ( v65 == v67 )
            sub_21FFBD0(&v103, v67);
          else
            sub_21FBA00(&v103, v65);
          v68 = BYTE4(v101) ^ 1u;
          if ( v103 == v67 )
            sub_2201FE0(&v103, &v100, v68, 1);
          else
            sub_21FB140(&v103, &v100, v68, 1);
          v95 = (unsigned int)v101;
          if ( (unsigned int)v101 > 0x40 )
            sub_2205510(&v94);
          else
            v94 = v100;
          v96 = BYTE4(v101);
          sub_2202BA0(&v103, &v94, 0, &v93);
          v69 = (unsigned int)v101;
          if ( (unsigned int)v101 <= 0x40 )
          {
            if ( v100 == v94 )
            {
LABEL_67:
              if ( v95 > 0x40 && v94 )
                operator delete[](v94);
              sub_9955A0(&v103);
              sub_98E4B0((__int64)&v100);
              return 0;
            }
            v97 = v100;
            v98 = (unsigned int)v101;
          }
          else
          {
            if ( (unsigned __int8)sub_2205D70(&v100, &v94) )
              goto LABEL_67;
            v98 = v69;
            sub_2205510(&v97);
          }
          v99 = BYTE4(v101);
          sub_B96770((__int64)&v107, (__int64 *)&v97);
          sub_A4FD20(a4, (__int64)&v107);
          if ( (unsigned int)v107 > 1 )
            sub_A4F8E0((int *)&v107);
          if ( v98 > 0x40 && v97 )
            operator delete[](v97);
          v79 = v95 <= 0x40;
          *a5 = *((_QWORD *)v61 + 1);
          if ( !v79 && v94 )
            operator delete[](v94);
          sub_9955A0(&v103);
          v64 = 2;
        }
        v90 = v64;
        sub_98E4B0((__int64)&v100);
        return v90;
      }
      if ( !sub_F61920(*v31, a2, v32, v33, v34, v35) )
        return 1;
LABEL_36:
      LOBYTE(v36) = sub_F65240(*v31, a2, a3, a4, (__int64)a5, a6);
      v37 = v36;
      v85 = sub_AAC1F0(a2, v10, v38, v39, v40);
      v45 = sub_F65240(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), v10, v41, v42, v43, v44);
      v49 = sub_AAC1F0(a2, v9, v46, v47, v48);
      v91 = ((_BYTE)v37 == v45) + v49;
      if ( v85 < v91 && ((_BYTE)v37 != 1 || v45) )
        return 0;
      v50 = sub_1BC7290((_QWORD *)a2, a3);
      v51 = sub_BFEF90((__int64)v50);
      if ( !v51 )
        goto LABEL_72;
      v53 = *(_BYTE *)(v51 + 68);
      if ( (v53 & 1) == 0 )
        BUG();
      v54 = *(_QWORD *)(v51 + 72);
      if ( (v53 & 0xC) != 0xC && (*(_BYTE *)(v51 + 68) & 0xC) != 0 )
        v54 = *(_QWORD *)(v54 + 8);
      v55 = 1;
      if ( (*(_DWORD *)v54 & 0x20000) == 0 )
      {
        v71 = sub_B78170(v51);
        if ( v85 > v71 )
        {
          if ( v71 < v91 )
          {
            v55 = v37 ^ 1u;
            LOBYTE(v55) = v45 | v37 ^ 1;
            if ( !(_BYTE)v55 )
            {
              v85 = v71;
              goto LABEL_45;
            }
            return 0;
          }
          v85 = v71;
        }
LABEL_72:
        v55 = 0;
      }
LABEL_45:
      v92 = v55;
      result = 4;
      if ( (*(_DWORD *)v50 & 0x20000) == 0 )
      {
        sub_C3EB00((__int64)&v103, (unsigned __int64)v50, a2, nullptr, v52, v55);
        if ( !v105 )
        {
          v56 = 3;
          if ( v92 && ((_BYTE)v37 != 1 || v45) )
            v56 = 4;
          goto LABEL_50;
        }
        if ( v85 >= v49 )
        {
          sub_C16810((__int64)&v107, (__int64)&v103, (unsigned int)(v104 + 1));
          sub_C18DB0((__int64)&v103, (__int64)&v107);
          if ( (unsigned int)v108 > 0x40 && v107 )
            operator delete[](v107);
          v98 = v104;
          if ( (unsigned int)v104 > 0x40 )
            sub_2205510(&v97);
          else
            v97 = (void *)v103;
          v99 = BYTE4(v104);
          v87 = BYTE4(v104);
          sub_2206A40(&v107, &v97);
          LODWORD(v101) = v108;
          BYTE4(v101) = v87;
          v100 = v107;
          sub_C18DB0((__int64)&v97, (__int64)&v100);
          if ( (unsigned int)v101 > 0x40 && v100 )
            operator delete[](v100);
          v99 = !v45;
          sub_C16810((__int64)&v107, (__int64)&v97, (unsigned int)v104);
          sub_C18DB0((__int64)&v97, (__int64)&v107);
          if ( (unsigned int)v108 > 0x40 && v107 )
            operator delete[](v107);
          v99 = BYTE4(v104);
          if ( v98 <= 0x40 )
          {
            if ( v97 == (void *)v103 )
            {
              v56 = 0;
              goto LABEL_50;
            }
          }
          else
          {
            if ( (unsigned __int8)sub_2205D70(&v97, &v103) )
            {
              if ( v97 )
              {
                operator delete[](v97);
                v56 = 0;
                goto LABEL_50;
              }
              goto LABEL_77;
            }
            if ( v97 )
              operator delete[](v97);
          }
          v76 = *((_QWORD *)v50 + 1);
          v77 = v104;
          LODWORD(v101) = v104;
          *a5 = v76;
          if ( v77 > 0x40 )
          {
LABEL_83:
            sub_2205510(&v100);
LABEL_84:
            BYTE4(v101) = BYTE4(v104);
            sub_B96770((__int64)&v107, (__int64 *)&v100);
            sub_A4FD20(a4, (__int64)&v107);
            if ( (unsigned int)v107 > 1 )
              sub_A4F8E0((int *)&v107);
            if ( (unsigned int)v101 > 0x40 && v100 )
              operator delete[](v100);
            v56 = 2;
            goto LABEL_50;
          }
        }
        else
        {
          if ( BYTE4(v104) )
          {
LABEL_77:
            v56 = 0;
LABEL_50:
            v86 = v56;
            sub_98E4B0((__int64)&v103);
            return v86;
          }
          v70 = 1LL << ((unsigned __int8)v104 - 1);
          if ( (unsigned int)v104 > 0x40 )
          {
            if ( (v70 & *(_QWORD *)(v103 + 8LL * ((unsigned int)(v104 - 1) >> 6))) == 0 )
              goto LABEL_77;
            v72 = *((_QWORD *)v50 + 1);
            LODWORD(v101) = v104;
            *a5 = v72;
            goto LABEL_83;
          }
          if ( (v70 & v103) == 0 )
            goto LABEL_77;
          v80 = *((_QWORD *)v50 + 1);
          LODWORD(v101) = v104;
          *a5 = v80;
        }
        v100 = (void *)v103;
        goto LABEL_84;
      }
      return result;
    case 0x16:
      if ( !sub_F57BD0(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL)) )
        return 0;
      return !sub_F57BD0(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
    default:
      return 0;
  }
}
