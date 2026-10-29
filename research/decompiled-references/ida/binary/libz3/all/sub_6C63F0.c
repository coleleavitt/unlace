__int64 __fastcall sub_6C63F0(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  __int64 *v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *i; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r15
  __int64 v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  unsigned __int8 v30; // si
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r12
  void *v35; // r13
  int v36; // eax
  void *v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rdi
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // rax
  void *v43; // r12
  bool v44; // dl
  void *v45; // rdi
  int v46; // eax
  int v47; // eax
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r12
  void *v53; // r13
  int v54; // eax
  void *v55; // r12
  void *v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rax
  void *v60; // rdi
  int v61; // eax
  int v62; // edx
  __int64 v63; // rdx
  char v64; // cl
  char v65; // si
  __int64 v66; // rax
  char v67; // cl
  __int64 (__fastcall *v68)(int); // rax
  unsigned int v69; // eax
  int v71; // edx
  __int64 v72; // rdx
  char v73; // cl
  char v74; // si
  __int64 v75; // rax
  char v76; // cl
  void *v77; // [rsp+20h] [rbp-178h]
  void *v78; // [rsp+20h] [rbp-178h]
  __int64 v79; // [rsp+38h] [rbp-160h]
  __int64 v80; // [rsp+38h] [rbp-160h]
  char v81; // [rsp+4Bh] [rbp-14Dh]
  unsigned int v82; // [rsp+4Ch] [rbp-14Ch]
  char v85; // [rsp+6Bh] [rbp-12Dh]
  int v86; // [rsp+6Ch] [rbp-12Ch]
  int v87; // [rsp+74h] [rbp-124h] BYREF
  _BYTE v88[8]; // [rsp+78h] [rbp-120h] BYREF
  __int64 v89; // [rsp+80h] [rbp-118h] BYREF
  __int64 v90; // [rsp+88h] [rbp-110h]
  __int64 v91; // [rsp+90h] [rbp-108h] BYREF
  __int64 v92; // [rsp+98h] [rbp-100h]
  int v93[2]; // [rsp+A0h] [rbp-F8h] BYREF
  int v94[2]; // [rsp+A8h] [rbp-F0h]
  int v95[2]; // [rsp+B0h] [rbp-E8h] BYREF
  char v96[8]; // [rsp+B8h] [rbp-E0h]
  int v97[2]; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-D0h]
  __int64 v99; // [rsp+D0h] [rbp-C8h]
  __int64 v100; // [rsp+D8h] [rbp-C0h]
  __int64 v101; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v102; // [rsp+E8h] [rbp-B0h]
  __int64 v103; // [rsp+F0h] [rbp-A8h]
  __int64 v104; // [rsp+F8h] [rbp-A0h]
  _QWORD v105[2]; // [rsp+100h] [rbp-98h] BYREF
  _QWORD v106[2]; // [rsp+110h] [rbp-88h] BYREF
  __int64 v107; // [rsp+120h] [rbp-78h] BYREF
  __int64 v108; // [rsp+128h] [rbp-70h]
  __int64 v109; // [rsp+130h] [rbp-68h] BYREF
  __int64 v110; // [rsp+138h] [rbp-60h]
  __int64 v111; // [rsp+140h] [rbp-58h] BYREF
  __int64 v112; // [rsp+148h] [rbp-50h]
  __int64 v113; // [rsp+150h] [rbp-48h] BYREF
  __int64 v114; // [rsp+158h] [rbp-40h]

  v111 = 0;
  sub_1360C00(v88, a3, &v111);
  sub_18572D0(&v111);
  v6 = *a2;
  v7 = *a4;
  v8 = *(_DWORD *)(*a2 + 12);
  v9 = (*(_DWORD *)(*a4 + 12) - v8) ^ (v8 << 8);
  v10 = (v8 - v9) << 10;
  v11 = v9 ^ ((v8 - v9) << 16);
  v12 = v9 - v8;
  v13 = *(__int64 **)(a1 + 808);
  v14 = (v11 + v12) ^ v10;
  v15 = *(unsigned int *)(a1 + 816);
  v16 = v15 - 1;
  v15 *= 32;
  v17 = (__int64 *)((char *)v13 + v15);
  v18 = 32LL * (v14 & v16);
  v19 = &v13[(unsigned __int64)v18 / 8];
  if ( v18 != v15 )
  {
    for ( i = &v13[(unsigned __int64)v18 / 8]; v17 != i; i += 4 )
    {
      v21 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v14 && v6 == v21 && v7 == i[1] )
        {
          v22 = (_QWORD *)i[2];
          v23 = v22[9];
          if ( !v23 )
            goto LABEL_109;
          goto LABEL_11;
        }
      }
      else if ( !v21 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v13 == v19 )
  {
LABEL_8:
    sub_1872CE0("");
    sub_1873130(114, 2182);
  }
  while ( 1 )
  {
    v48 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
      break;
    if ( !v48 )
      goto LABEL_8;
LABEL_60:
    v13 += 4;
    if ( v19 == v13 )
      goto LABEL_8;
  }
  if ( *((_DWORD *)v13 + 6) != v14 || v6 != v48 || v7 != v13[1] )
    goto LABEL_60;
  v22 = (_QWORD *)v13[2];
  v23 = v22[9];
  if ( v23 )
  {
LABEL_11:
    v24 = *(_DWORD *)(v23 - 4);
    goto LABEL_12;
  }
LABEL_109:
  v24 = 0;
LABEL_12:
  v25 = v22[13];
  if ( v25 )
    v24 += *(_DWORD *)(v25 - 4);
  v26 = v22[11];
  v27 = v22[15];
  if ( v26 )
  {
    v28 = *(_DWORD *)(v26 - 4);
    v82 = v28;
    v29 = v28;
    if ( v27 )
    {
      v29 = *(_DWORD *)(v27 - 4) + v28;
      if ( v24 < v29 )
      {
LABEL_17:
        if ( v23 )
        {
          v30 = 1;
          v82 = *(_DWORD *)(v23 - 4);
        }
        else
        {
          v82 = 0;
          v30 = 1;
        }
        goto LABEL_19;
      }
    }
    else if ( v24 < v28 )
    {
      goto LABEL_17;
    }
    v30 = 0;
    goto LABEL_19;
  }
  if ( v27 )
  {
    v29 = *(_DWORD *)(v27 - 4);
    if ( v24 < v29 )
      goto LABEL_17;
    v82 = 0;
    v30 = 0;
  }
  else
  {
    v82 = 0;
    v30 = 0;
    v29 = 0;
  }
LABEL_19:
  *(_QWORD *)v93 = 0;
  *(_QWORD *)v94 = 0;
  *(_QWORD *)v95 = 1;
  *(_QWORD *)v96 = 0;
  *(_QWORD *)v97 = 0;
  v98 = 0;
  v99 = 1;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 1;
  v104 = 0;
  v105[0] = 0;
  v105[1] = 0;
  v106[0] = 1;
  v106[1] = 0;
  v85 = sub_6C3A00(a1, v30, v22, (__int64)v88, (__int64)v93, &v87);
  if ( v24 >= v29 )
  {
    v49 = v22[15];
    if ( !v49 )
      goto LABEL_119;
    v50 = *(unsigned int *)(v49 - 4);
    v107 = 0;
    v108 = 0;
    v109 = 1;
    v110 = 0;
    if ( !(_DWORD)v50 )
      goto LABEL_120;
    v80 = v50;
    v51 = 0;
    v81 = 0;
    while ( 1 )
    {
      v59 = *(_QWORD *)(a1 + 8);
      v89 = 0;
      v90 = v59;
      sub_1361190(v88, *(_QWORD *)(v22[27] + 8 * v51), &v89);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL) == v89 )
        break;
      sub_6BFE30(v89, v90);
LABEL_96:
      if ( v80 == ++v51 )
        goto LABEL_44;
    }
    sub_1361190(v88, *(_QWORD *)(v22[15] + 8 * v51), &v89);
    if ( !(unsigned __int8)sub_1666AE0(a1 + 48, v89, &v107, &v111) )
    {
      sub_1872CE0("");
      sub_1873130(114, 2000);
    }
    v52 = v22[19] + 32 * v51;
    BYTE4(v111) &= 0xFCu;
    BYTE4(v113) &= 0xFCu;
    v53 = qword_1C7F2C0;
    LODWORD(v111) = 0;
    v112 = 0;
    LODWORD(v113) = 1;
    v114 = 0;
    if ( (*(_BYTE *)(v52 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v111, v52);
    else
      LODWORD(v111) = *(_DWORD *)v52;
    if ( (*(_BYTE *)(v52 + 20) & 1) != 0 )
    {
      sub_182C690(v53, &v113, v52 + 16);
    }
    else
    {
      v54 = *(_DWORD *)(v52 + 16);
      BYTE4(v113) &= ~1u;
      LODWORD(v113) = v54;
    }
    sub_1831690(qword_1C7F2C0, &v111);
    v78 = qword_1C7F2C0;
    if ( (_DWORD)v107
      && ((v111 & 0x100000000LL) != 0 || (_DWORD)v111 != 1 || (v113 & 0x100000000LL) != 0 || (_DWORD)v113 != 1) )
    {
      sub_1831650(qword_1C7F2C0, &v107, &v113);
      sub_1831650(v78, &v109, &v111);
      if ( (int)v109 < 0 )
      {
        sub_1831620(v78, &v107);
        sub_1831620(v78, &v109);
      }
      v91 = 0;
      v92 = 0;
      sub_1832C70(v78, &v107, &v109, &v91);
      if ( (v91 & 0x100000000LL) == 0 && (_DWORD)v91 == 1 )
      {
        sub_182CBA0(v78, &v91);
      }
      else
      {
        sub_1833EB0(v78, &v107, &v91, &v107);
        sub_1833EB0(v78, &v109, &v91, &v109);
        sub_182CBA0(v78, &v91);
      }
    }
    else
    {
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v107, (int *)&v107);
    }
    v55 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v111);
    sub_182CBA0(v55, &v113);
    v56 = qword_1C7F2C0;
    if ( v81 )
    {
      if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v97, (__int64)&v107) )
        goto LABEL_92;
      v56 = qword_1C7F2C0;
    }
    sub_27B950((__int64)v56, (__int64)v97, (int *)&v107);
    v86 = v51;
LABEL_92:
    v57 = v89;
    if ( v89 )
    {
      v58 = v90;
      v40 = (*(_DWORD *)(v89 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v58, v57);
    }
    v81 = 1;
    goto LABEL_96;
  }
  v31 = v22[13];
  if ( !v31 )
  {
LABEL_119:
    v107 = 0;
    v108 = 0;
    v109 = 1;
    v110 = 0;
LABEL_120:
    sub_25A130((char *)&v107);
    if ( !v85 )
      goto LABEL_121;
    goto LABEL_46;
  }
  v32 = *(unsigned int *)(v31 - 4);
  v107 = 0;
  v108 = 0;
  v109 = 1;
  v110 = 0;
  if ( !(_DWORD)v32 )
    goto LABEL_120;
  v79 = v32;
  v33 = 0;
  v81 = 0;
  do
  {
    while ( 1 )
    {
      v41 = *(_QWORD *)(a1 + 8);
      v89 = 0;
      v90 = v41;
      sub_1361190(v88, *(_QWORD *)(v22[25] + 8 * v33), &v89);
      if ( v89 == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL) )
        break;
      ++v33;
      sub_6BFE30(v89, v90);
      if ( v33 == v79 )
        goto LABEL_44;
    }
    sub_1361190(v88, *(_QWORD *)(v22[13] + 8 * v33), &v89);
    if ( !(unsigned __int8)sub_1666AE0(a1 + 48, v89, &v107, &v111) )
    {
      sub_1872CE0("");
      sub_1873130(114, 2000);
    }
    v34 = v22[18] + 32 * v33;
    BYTE4(v111) &= 0xFCu;
    BYTE4(v113) &= 0xFCu;
    v35 = qword_1C7F2C0;
    LODWORD(v111) = 0;
    v112 = 0;
    LODWORD(v113) = 1;
    v114 = 0;
    if ( (*(_BYTE *)(v34 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v111, v34);
    else
      LODWORD(v111) = *(_DWORD *)v34;
    if ( (*(_BYTE *)(v34 + 20) & 1) != 0 )
    {
      sub_182C690(v35, &v113, v34 + 16);
    }
    else
    {
      v36 = *(_DWORD *)(v34 + 16);
      BYTE4(v113) &= ~1u;
      LODWORD(v113) = v36;
    }
    sub_1831690(qword_1C7F2C0, &v111);
    v77 = qword_1C7F2C0;
    if ( (_DWORD)v107
      && ((v111 & 0x100000000LL) != 0 || (_DWORD)v111 != 1 || (v113 & 0x100000000LL) != 0 || (_DWORD)v113 != 1) )
    {
      sub_1831650(qword_1C7F2C0, &v107, &v113);
      sub_1831650(v77, &v109, &v111);
      if ( (int)v109 < 0 )
      {
        sub_1831620(v77, &v107);
        sub_1831620(v77, &v109);
      }
      v91 = 0;
      v92 = 0;
      sub_1832C70(v77, &v107, &v109, &v91);
      if ( (v91 & 0x100000000LL) == 0 && (_DWORD)v91 == 1 )
      {
        sub_182CBA0(v77, &v91);
      }
      else
      {
        sub_1833EB0(v77, &v107, &v91, &v107);
        sub_1833EB0(v77, &v109, &v91, &v109);
        sub_182CBA0(v77, &v91);
      }
    }
    else
    {
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v107, (int *)&v107);
    }
    v37 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v111);
    sub_182CBA0(v37, &v113);
    if ( !v81 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v107, (__int64)v97) )
    {
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v97, (int *)&v107);
      v86 = v33;
    }
    v38 = v89;
    if ( v89 )
    {
      v39 = v90;
      v40 = (*(_DWORD *)(v89 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v39, v38);
    }
    ++v33;
    v81 = 1;
  }
  while ( v33 != v79 );
LABEL_44:
  sub_25A130((char *)&v107);
  if ( !v81 )
  {
    if ( v85 )
      goto LABEL_46;
LABEL_121:
    v111 = 0;
    v112 = 0;
    v113 = 1;
    v114 = 0;
    sub_182CBA0(qword_1C7F2C0, &v113);
LABEL_122:
    v62 = v111;
    LODWORD(v111) = v101;
    LODWORD(v101) = v62;
    v63 = v112;
    v112 = v102;
    v102 = v63;
    v64 = BYTE4(v111) & 1;
    LOBYTE(v63) = BYTE4(v101) & 0xFC | BYTE4(v111) & 2;
    BYTE4(v111) = BYTE4(v101) & 1 | BYTE4(v111) & 0xFC | BYTE4(v101) & 2;
    BYTE4(v101) = v64 | v63;
    v65 = BYTE4(v103) & 2;
    LODWORD(v113) = v103;
    v66 = v104;
    v104 = v114;
    v114 = v66;
    LODWORD(v103) = 1;
    v67 = BYTE4(v103) & 1;
    BYTE4(v103) = BYTE4(v103) & 0xFC | BYTE4(v113) & 2;
    BYTE4(v113) = v67 | v65 | BYTE4(v113) & 0xFC;
    sub_25A130((char *)&v111);
    goto LABEL_123;
  }
  if ( !v85 || !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v93, (__int64)v97) )
  {
    v111 = 0;
    v112 = 0;
    v60 = qword_1C7F2C0;
    v113 = 1;
    v61 = v86 + 2 * v82 + 1;
    v114 = 0;
    if ( v61 < 0 )
      sub_1830C40(qword_1C7F2C0, &v111, (unsigned int)v61);
    else
      LODWORD(v111) = v86 + 2 * v82 + 1;
    sub_182CBA0(v60, &v113);
    goto LABEL_122;
  }
  if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v93, (__int64)v97) )
  {
LABEL_46:
    v42 = *(_QWORD *)(a1 + 8);
    v107 = 0;
    v108 = v42;
    sub_1361190(v88, *a2, &v107);
    if ( !(unsigned __int8)sub_1666AE0(a1 + 48, v107, v105, &v111) )
    {
      sub_1872CE0("");
      sub_1873130(114, 1950);
    }
    v43 = qword_1C7F2C0;
    if ( (v105[0] & 0x100000000LL) != 0 || (v93[1] & 1) != 0 )
    {
      if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v105, v93) )
        goto LABEL_50;
    }
    else if ( LODWORD(v105[0]) == v93[0] )
    {
LABEL_50:
      if ( (v106[0] & 0x100000000LL) != 0 || (v95[1] & 1) != 0 )
        v44 = (unsigned int)sub_182C7B0(v43, v106, v95) == 0;
      else
        v44 = LODWORD(v106[0]) == v95[0];
      v45 = qword_1C7F2C0;
      v46 = v87;
      if ( v44 )
      {
        v111 = 0;
        v47 = 2 * v87 + 1;
        v112 = 0;
        v113 = 1;
        v114 = 0;
        if ( v47 < 0 )
        {
LABEL_55:
          sub_1830C40(v45, &v111, (unsigned int)v47);
LABEL_138:
          sub_182CBA0(v45, &v113);
          v71 = v111;
          LODWORD(v111) = v101;
          LODWORD(v101) = v71;
          v72 = v112;
          v112 = v102;
          v102 = v72;
          v73 = BYTE4(v111) & 1;
          LOBYTE(v72) = BYTE4(v101) & 0xFC | BYTE4(v111) & 2;
          BYTE4(v111) = BYTE4(v101) & 1 | BYTE4(v111) & 0xFC | BYTE4(v101) & 2;
          BYTE4(v101) = v73 | v72;
          v74 = BYTE4(v103) & 2;
          LODWORD(v113) = v103;
          v75 = v104;
          v104 = v114;
          v114 = v75;
          LODWORD(v103) = 1;
          v76 = BYTE4(v103) & 1;
          BYTE4(v103) = BYTE4(v103) & 0xFC | BYTE4(v113) & 2;
          BYTE4(v113) = v76 | v74 | BYTE4(v113) & 0xFC;
          sub_25A130((char *)&v111);
          sub_6BFE30(v107, v108);
          goto LABEL_123;
        }
LABEL_137:
        LODWORD(v111) = v47;
        goto LABEL_138;
      }
LABEL_136:
      v47 = 2 * v46 + 2;
      v45 = qword_1C7F2C0;
      v111 = 0;
      v112 = 0;
      v113 = 1;
      v114 = 0;
      if ( v47 < 0 )
        goto LABEL_55;
      goto LABEL_137;
    }
    v46 = v87;
    goto LABEL_136;
  }
LABEL_123:
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, a2, *a4, &v101);
  v68 = *(__int64 (__fastcall **)(int))(*(_QWORD *)a1 + 32LL);
  if ( v68 == sub_6D1450 )
  {
    v69 = sub_182D020(qword_1C7F2C0, &v101);
    if ( !(unsigned __int8)sub_6C5D80(a1, *a2, *a4, v69, a4) )
    {
      sub_1872CE0("");
      sub_1873130(114, 1660);
    }
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64 *, __int64 *, __int64 *, _QWORD))v68)(a1, a2, &v101, a4, 0);
  }
  sub_25A130((char *)v105);
  sub_25A130((char *)&v101);
  sub_25A130((char *)v97);
  sub_25A130((char *)v93);
  return sub_13606C0(v88);
}

