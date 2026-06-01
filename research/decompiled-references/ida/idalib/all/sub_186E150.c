__int64 __fastcall sub_186E150(__int64 *a1, __int64 a2, __m128 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // r15
  unsigned int v20; // edx
  int v21; // r14d
  char *v22; // rax
  int v23; // esi
  int v24; // esi
  char v25; // di
  int v26; // r14d
  char *v27; // rax
  int v28; // r14d
  char *v29; // rax
  int v30; // r14d
  char *v31; // rax
  int v32; // r14d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 *v36; // r9
  unsigned __int64 v37; // rax
  _QWORD *v38; // rdx
  char *v39; // rax
  char v40; // cl
  __int64 result; // rax
  __int64 v42; // r14
  bool v43; // r15
  int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // r15
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  _QWORD *v49; // rdi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  char v52; // dl
  __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rbp
  __int64 v57; // rdx
  char v58; // al
  unsigned __int8 v59; // al
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r14
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r15
  __int64 v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbp
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  _QWORD *v81; // rax
  int v83; // [rsp+0h] [rbp-148h]
  __int64 v84; // [rsp+0h] [rbp-148h]
  unsigned __int8 v85; // [rsp+0h] [rbp-148h]
  unsigned __int8 v86; // [rsp+0h] [rbp-148h]
  __int64 v87; // [rsp+8h] [rbp-140h]
  bool v88; // [rsp+1Fh] [rbp-129h] BYREF
  __int64 v89; // [rsp+20h] [rbp-128h] BYREF
  __int64 *v90; // [rsp+28h] [rbp-120h] BYREF
  __int64 v91; // [rsp+30h] [rbp-118h] BYREF
  __int64 v92; // [rsp+38h] [rbp-110h] BYREF
  __int64 v93[2]; // [rsp+40h] [rbp-108h] BYREF
  unsigned __int64 v94; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD *v95; // [rsp+58h] [rbp-F0h]
  __int64 v96; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD *v97; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v98; // [rsp+70h] [rbp-D8h]
  __int64 v99; // [rsp+78h] [rbp-D0h]
  unsigned __int8 *v100; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int8 *v101; // [rsp+88h] [rbp-C0h] BYREF
  unsigned __int8 v102; // [rsp+D8h] [rbp-70h]
  unsigned int v103; // [rsp+E0h] [rbp-68h]
  char v104; // [rsp+E4h] [rbp-64h]
  unsigned int v105; // [rsp+E8h] [rbp-60h]
  char v106; // [rsp+ECh] [rbp-5Ch]
  void *v107; // [rsp+F0h] [rbp-58h]
  signed __int64 v108; // [rsp+F8h] [rbp-50h]
  _BYTE v109[72]; // [rsp+100h] [rbp-48h] BYREF

  sub_F22A90(&v96, *(_QWORD *)(a2 + 64));
  v89 = v96;
  v7 = sub_F22BD0(&v89, 0);
  v8 = sub_B8EAA0(a1[68]);
  v9 = (_QWORD *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
    v9 = (_QWORD *)*v9;
  v10 = sub_B8EAA0((__int64)v9);
  if ( !v10 || (v87 = v10, v15 = sub_B91570(v8, 0, v11, v12, v13, v14), v15 != sub_B91570(v87, 0, v87, v16, v17, v18)) )
  {
    sub_168B9F0((__int64)&v96, a1 + 1, *(_DWORD *)(a2 + 80), 0xE29u, 0);
    if ( v102 )
    {
      sub_AE9DF0(&v100, v7, 0xAu);
    }
    else if ( v104 )
    {
      v71 = sub_168B9E0(&v96);
      v72 = v98;
      if ( v98 )
        v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 32LL))(v98);
      v94 = v72;
      v73 = sub_1587BC0(v71, (__int64 *)&v94, v67, v68, v69, v70);
      sub_AE9DF0((unsigned __int8 **)(*v73 + 32LL * v103 + 8), v7, 0xAu);
    }
    sub_15F7200(&v96);
    LODWORD(v97) = 0;
    sub_1CCCAD0(a1, v7, v96, 0);
  }
  v19 = *(_DWORD **)a2;
  if ( (**(_DWORD **)a2 & 0x7F000) != 0
    || *(_BYTE *)v19 >> 6
    || (v58 = *((_BYTE *)v19 + 1), (v58 & 3) != 0)
    || (v58 & 0xC) != 0
    || (v59 = *((_BYTE *)v19 + 3), (v59 & 0x7C) != 0)
    || v19[42]
    || (v59 >> 7) | v19[1] & 1
    || (v19[1] & 4) != 0
    || (v19[1] & 0x30) != 0 )
  {
    v20 = *(_DWORD *)(a2 + 80);
    v96 = (__int64)a1;
    sub_168B9F0((__int64)&v97, a1 + 1, v20, 0xE21u, 0);
    v108 = 0;
    v107 = v109;
    v109[0] = 0;
    v21 = v19[42];
    v22 = sub_15AC850(*(_BYTE *)v19 & 7);
    sub_186DCB0((__int64)&v96, v21, v22);
    *(_BYTE *)v19 &= 0xC0u;
    *((_QWORD *)v19 + 21) = 0;
    *a5 = 0;
    if ( *((char *)v19 + 3) < 0 )
      v23 = v19[60];
    else
      v23 = v19[65];
    sub_186DCB0((__int64)&v96, v23, "inline");
    sub_186DCB0((__int64)&v96, v19[63], "_Noreturn");
    sub_186DCB0((__int64)&v96, v19[68], "constexpr");
    *((_BYTE *)v19 + 4) &= 0xCFu;
    v24 = v19[55];
    v19[68] = 0;
    sub_186DCB0((__int64)&v96, v24, (char *)"const");
    sub_186DCB0((__int64)&v96, v19[56], "__restrict");
    sub_186DCB0((__int64)&v96, v19[57], (char *)"volatile");
    sub_186DCB0((__int64)&v96, v19[58], (char *)"_Atomic");
    sub_186DCB0((__int64)&v96, v19[59], "__unaligned");
    *((_BYTE *)v19 + 3) &= 0x83u;
    v25 = *((_BYTE *)v19 + 1);
    v19[55] = 0;
    v26 = v19[46];
    *((_QWORD *)v19 + 28) = 0;
    *((_QWORD *)v19 + 29) = 0;
    v19[69] = 0;
    v27 = sub_15AC950(v25 & 3);
    sub_186DCB0((__int64)&v96, v26, v27);
    v28 = v19[47];
    v29 = sub_15AC980((*((_BYTE *)v19 + 1) >> 2) & 3);
    sub_186DCB0((__int64)&v96, v28, v29);
    v30 = v19[44];
    v31 = sub_15AC910(*(_BYTE *)v19 >> 6);
    sub_186DCB0((__int64)&v96, v30, v31);
    v32 = v19[48];
    v83 = (*v19 >> 12) & 0x7F;
    v37 = sub_16043A0(*(_QWORD **)(v96 + 248), *(_QWORD **)(v96 + 240), v33, v34, v35, v36);
    v95 = v38;
    v94 = v37;
    v39 = sub_15AC9B0(v83, (__int64)&v94);
    sub_186DCB0((__int64)&v96, v32, v39);
    *v19 &= 0xFFB80FFF;
    v19[48] = 0;
    if ( (_BYTE)v103 )
    {
      sub_AEC220(&v101, v107, v108);
    }
    else if ( v106 )
    {
      v64 = sub_168B9E0(&v97);
      v65 = v99;
      if ( v99 )
        v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
      v94 = v65;
      v66 = sub_1587BC0(v64, (__int64 *)&v94, v60, v61, v62, v63);
      sub_AEC220((unsigned __int8 **)(*v66 + 32LL * v105 + 8), v107, v108);
    }
    if ( v107 != v109 )
      operator delete(v107);
    sub_15F7200(&v97);
  }
  v40 = *(_BYTE *)(a2 + 720);
  result = 1;
  if ( (v40 & 1) != 0 || ((**(_DWORD **)a2 >> 12) & 0x7F) == 0x45 )
    return result;
  v84 = *(_QWORD *)(a2 + 128);
  v42 = v84 + 144LL * *(unsigned int *)(a2 + 136);
  if ( v84 == v42 )
  {
LABEL_48:
    result = 0;
    if ( (v40 & 0xC) != 0 )
    {
      sub_168B9F0((__int64)&v96, a1 + 1, *(_DWORD *)(a2 + 80), 0xE20u, 0);
      sub_15F7200(&v96);
      return 0;
    }
    return result;
  }
  v43 = 0;
  while ( 1 )
  {
    v44 = *(_DWORD *)(v42 - 144);
    if ( v44 == 6 )
      goto LABEL_46;
    if ( v44 != 3 || v43 )
    {
      sub_168B9F0((__int64)&v96, a1 + 1, *(_DWORD *)(*(_QWORD *)a2 + 160LL), 0xE27u, 0);
      v94 = *(_QWORD *)(a2 + 88);
      sub_1587DB0((__int64)&v96, (__int64 *)&v94);
      sub_15F7200(&v96);
      v40 = *(_BYTE *)(a2 + 720);
      goto LABEL_48;
    }
    if ( (*(_BYTE *)(v42 - 87) & 2) == 0 )
    {
      sub_168B9F0((__int64)&v96, a1 + 1, *(_DWORD *)(a2 + 80), 0xE23u, 0);
      v86 = v102;
      sub_15F7200(&v96);
      return v86;
    }
    v45 = *(_QWORD *)(v42 - 16);
    v90 = nullptr;
    v88 = 0;
    v46 = sub_1E5F010(v45, &v90);
    v47 = *v90;
    v97 = v90 + 1;
    v96 = v47;
    v48 = sub_F6E5D0(&v96);
    if ( !v48 )
      break;
    v49 = (_QWORD *)a1[31];
    v96 = *(_QWORD *)(v48 + 32);
    v43 = sub_AB7BF0(v49, &v96, &v89, 1u);
    v50 = sub_F22F50(&v96);
    if ( *(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF8LL | (*(__int64 *)(v50 + 8) >> 2) & 1 || !v43 )
    {
      v51 = sub_F22BD0(&v96, 0);
      v52 = 1;
      if ( v51 )
        v52 = v43 || (*(_BYTE *)(v51 + 28) & 0x7F) != 72;
      v88 = v52;
      goto LABEL_29;
    }
LABEL_46:
    v42 -= 144;
    if ( v84 == v42 )
    {
      v40 = *(_BYTE *)(a2 + 720);
      goto LABEL_48;
    }
  }
  if ( !(v46 & 7 | (v46 >> 3) & 1) )
  {
    v74 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
    if ( !(v74[1] & 7LL | ((__int64)v74[1] >> 3) & 1) )
      v88 = (*(_BYTE *)(*v74 + 17LL) & 4) != 0;
  }
LABEL_29:
  v53 = *v90;
  v93[1] = (__int64)(v90 + 1);
  v93[0] = v53;
  v54 = sub_F6CCB0(v93, a3);
  sub_168B9F0((__int64)&v96, a1 + 1, v54, 0xE1Fu, 0);
  if ( v102 )
  {
    sub_F23A70(&v100, v89);
  }
  else if ( v104 )
  {
    v77 = sub_168B9E0(&v96);
    v80 = v98;
    if ( v98 )
      v80 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 32LL))(v98);
    v94 = v80;
    v81 = sub_1587BC0(v77, (__int64 *)&v94, v75, v76, v78, v79);
    sub_F23A70((unsigned __int8 **)(*v81 + 32LL * v103 + 8), v89);
  }
  v91 = *v90;
  v55 = sub_162B6D0((__int64)&v96, &v91);
  v56 = sub_15890D0(v55, (unsigned __int8 *)&v88);
  v57 = *v90;
  v95 = v90 + 1;
  v94 = v57;
  v92 = sub_183A8D0((__int64 *)&v94, a3);
  v85 = *(_BYTE *)(sub_1587DB0(v56, &v92) + 120);
  sub_15F7200(&v96);
  return v85;
}
