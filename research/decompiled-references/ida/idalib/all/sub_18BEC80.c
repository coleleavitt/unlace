__int64 __fastcall sub_18BEC80(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v9; // r13
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 *v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // r12
  unsigned int v38; // ecx
  unsigned __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // eax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rbp
  __int64 v51; // r9
  _QWORD *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  _BOOL8 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  char v68; // al
  unsigned __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rdx
  unsigned int v72; // ebp
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  char v83; // r12
  unsigned int v84; // edx
  bool v85; // al
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rcx
  __int64 v90; // r8
  _DWORD *v91; // rdi
  _QWORD *v92; // rdi
  __int64 v93; // rax
  unsigned __int64 v94; // rbp
  __int64 v95; // rax
  unsigned int v96; // eax
  __int64 v97; // [rsp+10h] [rbp-F8h]
  __int64 v98; // [rsp+10h] [rbp-F8h]
  unsigned int v99; // [rsp+10h] [rbp-F8h]
  void *v100; // [rsp+18h] [rbp-F0h]
  bool v101; // [rsp+18h] [rbp-F0h]
  unsigned int v102; // [rsp+18h] [rbp-F0h]
  __int64 v103; // [rsp+18h] [rbp-F0h]
  char v104; // [rsp+20h] [rbp-E8h]
  unsigned int v105; // [rsp+28h] [rbp-E0h]
  char v106; // [rsp+3Fh] [rbp-C9h] BYREF
  void *v107; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v108; // [rsp+48h] [rbp-C0h]
  char v109; // [rsp+4Ch] [rbp-BCh]
  void *v110; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v111; // [rsp+58h] [rbp-B0h]
  bool v112; // [rsp+5Ch] [rbp-ACh]
  void *v113; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v114; // [rsp+68h] [rbp-A0h]
  char v115; // [rsp+6Ch] [rbp-9Ch]
  __int64 v116; // [rsp+80h] [rbp-88h] BYREF
  __int64 v117; // [rsp+88h] [rbp-80h]
  unsigned int v118; // [rsp+90h] [rbp-78h] BYREF
  char v119; // [rsp+94h] [rbp-74h]
  void *v120; // [rsp+98h] [rbp-70h]
  unsigned int v121; // [rsp+A0h] [rbp-68h]
  char v122; // [rsp+A4h] [rbp-64h]

  v9 = a2;
  v11 = *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_QWORD *)(v11 + 8) & 7LL;
  if ( v12 | (*(__int64 *)(v11 + 8) >> 3) & 1 )
    v13 = (__int64 *)(sub_F64F00(
                        *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8),
                        (__int64)a2,
                        v12,
                        v12 | (*(__int64 *)(v11 + 8) >> 3) & 1,
                        a7)
                    & 0xFFFFFFFFFFFFFFF0LL);
  else
    v13 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)(*(_QWORD *)v14 + 8LL) & 7LL;
  v16 = v15 | (*(__int64 *)(*(_QWORD *)v14 + 8LL) >> 3) & 1;
  if ( v16 )
  {
    v17 = (__int64 *)(sub_F64F00(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8), (__int64)a2, v15, v16, a7)
                    & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *v17;
    v19 = (unsigned int)*(unsigned __int8 *)(*v17 + 16) - 57;
    if ( (unsigned int)v19 <= 1 )
      goto LABEL_5;
  }
  else
  {
    v17 = (__int64 *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *v17;
    v19 = (unsigned int)*(unsigned __int8 *)(*v17 + 16) - 57;
    if ( (unsigned int)v19 <= 1 )
      goto LABEL_5;
  }
  v18 = sub_18BBF30(v18, (__int64)a2, v19, v16);
  if ( !v18 )
  {
    sub_F58380(*v17);
    a2 = *(__int64 **)(a1 + 248);
    v20 = sub_F583D0(*(_QWORD *)(*(_QWORD *)(*v17 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2);
    goto LABEL_6;
  }
LABEL_5:
  v20 = *(_QWORD *)(v18 + 32);
LABEL_6:
  v21 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !sub_F610C0(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v19, v16, a7, a8)
    || !sub_F610C0(*v13, (__int64)a2, v22, v23, v24, v25) )
  {
    return 1;
  }
  if ( sub_F60F80(*v21, *(_QWORD *)(a1 + 248), v28, v29, v30, v31)
    && sub_F60F80(*v13, *(_QWORD *)(a1 + 248), v32, v33, v34, v35)
    && (unsigned int)sub_AADE70(*(_QWORD **)(a1 + 248), v20, (__int64)v13, v33, v34) )
  {
    v39 = *v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_DWORD *)v39 & 0x40000) != 0 )
    {
LABEL_67:
      v38 = 27;
      goto LABEL_68;
    }
    v116 = *(_QWORD *)(v39 + 8);
    v69 = sub_6D5440(&v116);
    v70 = *v9;
    v71 = *(_QWORD *)(a1 + 248);
    LOWORD(v116) = 0;
    v98 = v69;
    v117 = 0;
    v118 = 0;
    v119 &= ~1u;
    LOBYTE(v72) = sub_C3F220(v70 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v116, v71, 0, 0, 0);
    v102 = sub_AADE70(*(_QWORD **)(a1 + 248), v20, v98, v73, v74);
    v104 = sub_F65320(*(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFF0LL), v20, v75, v76, v77, v78);
    v83 = sub_F65320(*v21, v20, v79, v80, v81, v82);
    if ( (_BYTE)v72 )
    {
      v84 = v121;
      v114 = v121;
      if ( v121 > 0x40 )
      {
        sub_2205510(&v113);
        v84 = v114;
      }
      else
      {
        v113 = v120;
      }
      v115 = v122;
      if ( v104 && !v122 && (v105 = v84, v85 = sub_18BB800((__int64 *)&v113), v84 = v105, v85) )
        v86 = v105 + 1 - (unsigned int)sub_C16790((__int64)&v113);
      else
        v86 = v84 - (unsigned int)sub_C16760((__int64)&v113);
      v88 = v102;
      if ( (v102 & 0x80000000) == 0
        || (v99 = v86, v96 = sub_AAC1F0(*(_QWORD *)(a1 + 248), v20, v86, v87, v102), v86 = v99, v96 >= v99) )
      {
        LOBYTE(v72) = 0;
        if ( v104 != v83 )
          LOBYTE(v72) = (unsigned int)v86 > (unsigned int)sub_AAC1F0(*(_QWORD *)(a1 + 248), v20, v86, v87, v88);
      }
      if ( v114 > 0x40 && v113 )
        operator delete[](v113);
    }
    else
    {
      v72 = v102 >> 31;
    }
    if ( v118 > 1 )
      sub_A4F8E0((int *)&v118);
    if ( !(_BYTE)v72 )
    {
      v39 = *v9 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_67;
    }
    return 1;
  }
  v36 = *(_QWORD *)(a1 + 248);
  if ( sub_F60F80(*v21, v36, v32, v33, v34, v35) && sub_F58100(*v13) )
  {
    v37 = sub_A97D20(*(_QWORD *)(a1 + 248), *v21);
    if ( v37 == sub_A97D20(*(_QWORD *)(a1 + 248), *v13) )
    {
      v38 = 36;
      v39 = *v9 & 0xFFFFFFFFFFFFFFFELL;
LABEL_68:
      *v9 = sub_160A600(a1, v39, v20, v38, 0, 0, a4, a5, 0);
      goto LABEL_19;
    }
    return 1;
  }
  if ( !sub_F58100(*v21) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
    {
LABEL_19:
      v26 = 0;
      *v9 = sub_160A600(a1, *v9 & 0xFFFFFFFFFFFFFFFELL, (__int64)v17, 0x1Au, 0, 0, a4, a5, 0);
      return v26;
    }
    return 1;
  }
  v40 = *v13;
  LOBYTE(v41) = sub_F58100(*v13);
  v26 = v41;
  if ( (_BYTE)v41 )
  {
    a4 = 0.0;
    v103 = sub_21F90B0(v40, v36);
    sub_21FBFD0(&v116, 0.0);
    sub_22023D0(&v113, &v116, v103);
    sub_21F9830(&v116);
    v91 = (_DWORD *)(*v9 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v91 & 0x20000) != 0
      || (unsigned __int8)sub_C3D710((__int64)v91, (__int64 *)&v113, *(_QWORD *)(a1 + 248), 0, 0) )
    {
      sub_A637F0(*(_QWORD *)(a1 + 248), v20, (__int64)v13, v89, v90);
      v92 = *(_QWORD **)(a1 + 248);
      LOBYTE(v116) = 0;
      v93 = sub_A62D20(v92, v20);
      sub_22028C0(&v113, v93, 1, &v116);
      if ( (_BYTE)v116 )
      {
LABEL_74:
        sub_9955A0(&v113);
        return v26;
      }
    }
    else if ( (int)sub_A637F0(*(_QWORD *)(a1 + 248), v20, (__int64)v13, v89, v90) < 0 )
    {
      goto LABEL_74;
    }
    sub_9955A0(&v113);
    v38 = 39;
    v39 = *v9 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_68;
  }
  LOBYTE(v46) = sub_F60F80(*v13, *(_QWORD *)(a1 + 248), v42, v43, v44, v45);
  v26 = v46;
  if ( !(_BYTE)v46 )
    return 1;
  v39 = *v9 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_DWORD *)v39 & 0x40000) != 0 )
  {
LABEL_47:
    v38 = 29;
    goto LABEL_68;
  }
  v116 = *(_QWORD *)(v39 + 8);
  v47 = sub_6D5440(&v116);
  v48 = *(_QWORD *)(a1 + 248);
  LOWORD(v116) = 0;
  v49 = *v9;
  v50 = v47;
  v119 &= ~1u;
  v117 = 0;
  v118 = 0;
  if ( (unsigned __int8)sub_C3F220(v49 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v116, v48, 0, 0, v51) )
  {
    v108 = v121;
    if ( v121 > 0x40 )
      sub_2205510(&v107);
    else
      v107 = v120;
    v52 = *(_QWORD **)(a1 + 248);
    v109 = v122;
    v97 = sub_A62D20(v52, v20);
    v54 = sub_21F90D0(v52, v20, v53);
    v55 = v97;
    v100 = (void *)v54;
    if ( v97 == v54 )
    {
      v55 = v54;
      sub_21FFBD0(&v113, v54);
    }
    else
    {
      sub_21FBA00(&v113, v97);
    }
    v60 = sub_F65320(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL), v55, v56, v57, v58, v59);
    if ( v113 == v100 )
      sub_2201FE0(&v113, &v107, v60, 0);
    else
      sub_21FB140(&v113, &v107, v60, 0);
    v101 = !sub_F65320(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v107, v61, v62, v63, v64);
    v111 = sub_AAC1F0(*(_QWORD *)(a1 + 248), v50, v65, v66, v67);
    if ( v111 > 0x40 )
      sub_2205470(&v110, 0, 0);
    else
      v110 = nullptr;
    v106 = 0;
    v112 = v101;
    sub_2202BA0(&v113, &v110, 1, &v106);
    if ( v108 <= 0x40 )
      v68 = v107 == v110;
    else
      v68 = sub_2205D70(&v107, &v110);
    if ( v68 )
    {
      if ( v111 > 0x40 && v110 )
        operator delete[](v110);
      sub_9955A0(&v113);
      if ( v108 > 0x40 && v107 )
        operator delete[](v107);
      goto LABEL_44;
    }
    if ( v111 > 0x40 && v110 )
      operator delete[](v110);
    sub_9955A0(&v113);
    if ( v108 > 0x40 && v107 )
      operator delete[](v107);
  }
  else
  {
    v94 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL));
    v95 = sub_A62D20(*(_QWORD **)(a1 + 248), v20);
    if ( v94 <= (unsigned int)sub_21F9100(v95) )
    {
LABEL_44:
      if ( v118 > 1 )
        sub_A4F8E0((int *)&v118);
      v39 = *v9 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_47;
    }
  }
  if ( v118 > 1 )
    sub_A4F8E0((int *)&v118);
  return v26;
}
