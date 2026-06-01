unsigned __int64 __fastcall sub_19FC940(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        double a7,
        double a8)
{
  __int64 v10; // r14
  __int64 v11; // r13
  int v12; // eax
  char v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  char v24; // r9
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 *v38; // r14
  __int64 *v39; // r15
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  bool v43; // r14
  bool v44; // al
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  bool v54; // al
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // rbx
  unsigned int v60; // ecx
  unsigned __int64 v61; // rsi
  __int64 v62; // rbx
  __int64 v63; // rsi
  int v64; // r13d
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  char v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  char v74; // al
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  _QWORD *v78; // r13
  int v79; // r15d
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 *v86; // rax
  unsigned __int64 v87; // rsi
  __int64 v88; // rcx
  unsigned __int64 v89; // r12
  __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // r12
  _QWORD *v94; // [rsp+8h] [rbp-100h]
  __int64 v95; // [rsp+8h] [rbp-100h]
  __int64 v96; // [rsp+8h] [rbp-100h]
  __int64 v97; // [rsp+10h] [rbp-F8h]
  unsigned int v98; // [rsp+10h] [rbp-F8h]
  unsigned int v99; // [rsp+10h] [rbp-F8h]
  unsigned int v100; // [rsp+10h] [rbp-F8h]
  __int64 v101; // [rsp+18h] [rbp-F0h]
  char v102; // [rsp+18h] [rbp-F0h]
  __int64 v103; // [rsp+18h] [rbp-F0h]
  __int64 v104; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v105[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v106; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v107[25]; // [rsp+40h] [rbp-C8h] BYREF

  v105[0] = a4;
  v104 = a5;
  v10 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 57 > 1 )
  {
    v10 = sub_19F5590(v10, (__int64)a2, (__int64)a3, a4);
    v11 = *(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL);
    v13 = v10 == 0;
    if ( (unsigned __int8)(*(_BYTE *)(v11 + 16) - 57) <= 1u )
      goto LABEL_5;
  }
  else
  {
    v11 = *(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(unsigned __int8 *)(v11 + 16);
    if ( v12 == 57 || (v13 = 0, v12 == 58) )
    {
      v13 = 0;
      v94 = (_QWORD *)sub_168B6C0((__int64)a1);
      goto LABEL_12;
    }
  }
  v11 = sub_19F5590(v11, (__int64)a2, (__int64)a3, a4);
LABEL_5:
  v94 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( a6 && v13 )
  {
    v15 = *(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL);
    v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 57;
    if ( (unsigned int)v16 > 1 )
      v15 = sub_F63050(v15, a2, v16, v14);
    v17 = sub_160A600(*a1, *a3 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v15 + 32), 0x41u, 0, 0, a7, a8, 0);
    v18 = v105[0];
    *a3 = v17;
    v104 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( sub_19F5350(v18, v104) )
      return v19;
    v48 = *a1;
    v49 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
    if ( !sub_F58100(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL))
      || (v54 = sub_F58100(*(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL)), v51 = 39, !v54) )
    {
      if ( sub_F60F80(*v49, (__int64)v94, v50, v51, v52, v53)
        && sub_F60F80(*(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v94, v55, v56, v57, v58) )
      {
        LODWORD(v51) = 27;
      }
      else
      {
        LODWORD(v51) = !sub_F58100(*v49) ? 36 : 29;
      }
    }
    *a3 = sub_160A600(v48, *a3 & 0xFFFFFFFFFFFFFFFELL, v105[0], v51, 0, 0, a7, a8, 0);
    return v105[0];
  }
  v21 = -1;
  v22 = 0;
  if ( !v10 )
  {
    if ( !v11 )
      goto LABEL_44;
    goto LABEL_13;
  }
LABEL_12:
  v21 = *(_DWORD *)(v10 + 20);
  v22 = v21;
  if ( !v11 )
  {
LABEL_44:
    if ( !a6 )
    {
      if ( v10 && v21 < *(_DWORD *)(v10 + 20) )
      {
        v99 = v21;
        sub_19F5650(*a1, a2, v105, v21, a7, a8);
        v21 = v99;
      }
      goto LABEL_48;
    }
    v13 = 0;
    if ( v21 == v22 )
    {
LABEL_48:
      v100 = v21;
      sub_19F56E0(*a1, a3, &v104, v21, a7, a8);
      v21 = v100;
LABEL_40:
      if ( v13 )
        sub_19F56E0(*a1, a2, v105, v21, a7, a8);
      goto LABEL_24;
    }
LABEL_17:
    v25 = sub_EEB7E0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)a2, a7);
    sub_168B9F0((__int64)v107, a1, v25, 0xF4Du, 0);
    v26 = sub_1605D30((__int64)v107, v105);
    sub_1605D30(v26, &v104);
    sub_15F7200(v107);
    return 0;
  }
LABEL_13:
  v23 = *(_DWORD *)(v11 + 20);
  v24 = 1;
  if ( v21 > v23 )
    v21 = *(_DWORD *)(v11 + 20);
  if ( a6 )
  {
    v24 = 0;
    if ( v22 != v21 )
      goto LABEL_17;
  }
  if ( v21 < v23 )
  {
    v102 = v24;
    v98 = v21;
    sub_19F5650(*a1, a3, &v104, v21, a7, a8);
    v21 = v98;
    v24 = v102;
  }
  if ( !v10 || !v24 )
  {
    v13 &= v24;
    goto LABEL_40;
  }
  if ( *(_DWORD *)(v10 + 20) > v21 )
    sub_19F5650(*a1, a2, v105, v21, a7, a8);
LABEL_24:
  v27 = v104;
  if ( sub_19F5350(v105[0], v104) )
    return sub_ABBE20(v94, v29, v30, 0);
  v31 = v29 & 0xFFFFFFFFFFFFFFF0LL;
  v32 = *(_QWORD *)v31;
  v33 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v31 + 16LL) - 57;
  if ( (unsigned int)v33 > 1 )
    v32 = sub_F63050(v32, v27, v33, v28);
  v34 = *(_QWORD *)(v32 + 32);
  v35 = *(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL);
  v36 = (unsigned int)*(unsigned __int8 *)(v35 + 16) - 57;
  if ( (unsigned int)v36 > 1 )
    v35 = sub_F63050(v35, v27, v36, v28);
  v37 = *(_QWORD *)(v35 + 32);
  v38 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
  v97 = v37;
  if ( sub_F58100(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v39 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_31:
    v42 = v105[0];
    v95 = *a1;
    v101 = v104;
    v43 = sub_F58100(*v38);
    v44 = sub_F58100(*v39);
    if ( v43 )
    {
      if ( !v44 )
      {
        v47 = sub_160A600(v95, *a3 & 0xFFFFFFFFFFFFFFFELL, v42, 0x1Du, 0, 0, a7, a8, 0);
        goto LABEL_36;
      }
      if ( a6 || (int)sub_A637F0(*(_QWORD *)(v95 + 248), v34, v97, v45, v46) > 0 )
      {
        v47 = sub_160A600(v95, *a3 & 0xFFFFFFFFFFFFFFFELL, v42, 0x27u, 0, 0, a7, a8, 0);
LABEL_36:
        *a3 = v47;
        return v42;
      }
      v59 = a2;
      v60 = 39;
      v61 = *a2 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      if ( a6 )
      {
        v47 = sub_160A600(v95, *a3 & 0xFFFFFFFFFFFFFFFELL, v42, 0x24u, 0, 0, a7, a8, 0);
        goto LABEL_36;
      }
      v59 = a2;
      v60 = 29;
      v61 = *a2 & 0xFFFFFFFFFFFFFFFELL;
    }
    *v59 = sub_160A600(v95, v61, v101, v60, 0, 0, a7, a8, 0);
    return v101;
  }
  v39 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_F58100(*v39) )
    goto LABEL_31;
  v62 = *a1;
  v63 = v34;
  v106 = v34;
  v103 = v105[0];
  v107[0] = v97;
  v96 = v104;
  v64 = sub_AADE70(*(_QWORD **)(v62 + 248), v34, v97, v40, v41);
  v69 = sub_F65320(*v38, v63, v65, v66, v67, v68);
  v74 = sub_F65320(*v39, v63, v70, v71, v72, v73);
  if ( v69 == v74 )
  {
    if ( v64 < 0 && !a6 )
      return sub_19F5310(v62, a2, v96, a7, a8);
    return sub_19F5310(v62, a3, v103, a7, a8);
  }
  if ( v64 != (v69 == 0 ? -1 : 1) )
  {
    if ( !a6 && !v74 )
      return sub_19F5310(v62, a2, v96, a7, a8);
    return sub_19F5310(v62, a3, v103, a7, a8);
  }
  v78 = *(_QWORD **)(v62 + 248);
  v79 = sub_AAC1F0((__int64)v78, v106, v75, v76, v77);
  if ( v79 != (unsigned int)sub_AAC1F0((__int64)v78, v107[0], v80, v81, v82) )
  {
    if ( !a6 && !v69 )
      return sub_19F5310(v62, a2, v96, a7, a8);
    return sub_19F5310(v62, a3, v103, a7, a8);
  }
  if ( a6 )
    return sub_19F5310(v62, a3, v103, a7, a8);
  v86 = &v106;
  if ( !v69 )
    v86 = v107;
  v87 = *v86;
  v89 = sub_A70710(v78, *v86, v83, v84, v85);
  v90 = *(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF0LL);
  v91 = (unsigned int)*(unsigned __int8 *)(v90 + 16) - 57;
  if ( (unsigned int)v91 > 1 )
    v90 = sub_F63050(v90, v87, v91, v88);
  v92 = sub_A76A60((__int64)v78, v89, *(_DWORD *)(v90 + 20));
  sub_19F5310(v62, a3, v92, a7, a8);
  return sub_19F5310(v62, a2, v92, a7, a8);
}
