void __fastcall sub_19DA280(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned int v7; // r14d
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  char *v14; // rbx
  char *v15; // r12
  _BYTE *j; // rax
  __int64 v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rdi
  __int64 *v20; // rbx
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r12
  char v28; // al
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  char *v34; // r14
  char *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r14
  __int64 v48; // rax
  _QWORD *v49; // rax
  int v50; // eax
  char *v51; // r13
  char *v52; // rbx
  _BYTE *i; // rax
  __int64 v54; // rsi
  unsigned int v55; // ecx
  __int64 v56; // rdi
  __int64 *v57; // rbx
  __int64 v58; // rsi
  __int64 v59; // rdi
  unsigned __int8 v60; // [rsp+Fh] [rbp-3E9h]
  __int64 v61; // [rsp+34h] [rbp-3C4h] BYREF
  int v62; // [rsp+3Ch] [rbp-3BCh]
  __int64 v63; // [rsp+40h] [rbp-3B8h] BYREF
  int v64; // [rsp+48h] [rbp-3B0h]
  int v65; // [rsp+4Ch] [rbp-3ACh]
  __int64 v66; // [rsp+50h] [rbp-3A8h]
  char v67; // [rsp+58h] [rbp-3A0h]
  _QWORD v68[10]; // [rsp+60h] [rbp-398h] BYREF
  int v69; // [rsp+B0h] [rbp-348h]
  char v70; // [rsp+B8h] [rbp-340h]
  __int64 v71; // [rsp+C0h] [rbp-338h]
  __int64 v72; // [rsp+D0h] [rbp-328h] BYREF
  char v73; // [rsp+D8h] [rbp-320h]
  _BYTE v74[12]; // [rsp+DCh] [rbp-31Ch]
  void *v75; // [rsp+E8h] [rbp-310h]
  unsigned __int8 *v76; // [rsp+F0h] [rbp-308h] BYREF
  _BYTE v77[16]; // [rsp+F8h] [rbp-300h] BYREF
  unsigned __int8 v78; // [rsp+108h] [rbp-2F0h]
  char v79; // [rsp+148h] [rbp-2B0h]
  unsigned int v80; // [rsp+150h] [rbp-2A8h]
  char v81; // [rsp+154h] [rbp-2A4h]
  _QWORD v82[4]; // [rsp+160h] [rbp-298h] BYREF
  char v83; // [rsp+180h] [rbp-278h]
  void *v84; // [rsp+188h] [rbp-270h]
  __int64 v85; // [rsp+190h] [rbp-268h]
  _QWORD v86[58]; // [rsp+198h] [rbp-260h] BYREF
  void *ptr; // [rsp+368h] [rbp-90h]
  __int64 v88; // [rsp+370h] [rbp-88h]
  _BYTE v89[32]; // [rsp+378h] [rbp-80h] BYREF
  __int64 *v90; // [rsp+398h] [rbp-60h]
  __int64 v91; // [rsp+3A0h] [rbp-58h]
  _QWORD v92[10]; // [rsp+3A8h] [rbp-50h] BYREF

  v7 = sub_C00A40(a2, a2, a3, a4, a5);
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(a1[33] + 32LL), 0x1C20u, v7, a1[33], v8, v9) == 1 )
    return;
  v10 = a1[29];
  v11 = (_QWORD *)a1[34];
  v86[56] = 0;
  v82[1] = v10;
  v84 = v86;
  v85 = 0x800000000LL;
  ptr = v89;
  v88 = 0x400000000LL;
  v90 = v92;
  v12 = a1[92];
  v86[57] = 0;
  v92[0] = 0;
  v92[1] = 1;
  v13 = *(_QWORD *)(v12 + 88);
  v82[0] = v11;
  v82[2] = 0;
  v82[3] = 0;
  v83 = 1;
  v91 = 0;
  if ( !(unsigned __int8)sub_12DA900(a2, v13, (__int64)v82, a6) )
    goto LABEL_3;
  v24 = (__int64)(a1 + 1);
  sub_168B9F0((__int64)&v72, a1 + 1, v7, 0x1C20u, 0);
  v25 = sub_C9AC10(a2);
  v26 = v25;
  if ( v79 )
  {
    v24 = v25;
    sub_AE9DF0(&v76, v25, 9u);
  }
  else if ( v81 )
  {
    v47 = sub_168B9E0(&v72);
    v48 = *(_QWORD *)&v74[4];
    if ( *(_QWORD *)&v74[4] )
      v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v74[4] + 32LL))(*(_QWORD *)&v74[4]);
    v63 = v48;
    v49 = sub_1587BC0(v47, &v63, v43, v44, v45, v46);
    v24 = v26;
    sub_AE9DF0((unsigned __int8 **)(*v49 + 32LL * v80 + 8), v26, 9u);
  }
  v61 = sub_EEC8C0(a2, v24, a6);
  v27 = sub_1587DB0((__int64)&v72, &v61);
  v63 = *(_QWORD *)v27;
  v64 = *(_DWORD *)(v27 + 8);
  v65 = *(_DWORD *)(v27 + 12);
  v66 = *(_QWORD *)(v27 + 16);
  v28 = *(_BYTE *)(v27 + 24);
  v70 = 0;
  v29 = *(_BYTE *)(v27 + 120) == 0;
  v67 = v28;
  if ( !v29 )
  {
    sub_FC70F0((__int64)v68, v27 + 32);
    v68[9] = *(_QWORD *)(v27 + 104);
    v50 = *(_DWORD *)(v27 + 112);
    v70 = 1;
    v69 = v50;
  }
  v71 = *(_QWORD *)(v27 + 128);
  sub_15F7200(&v72);
  if ( !v83 )
  {
    sub_15F7200(&v63);
    v51 = (char *)ptr;
    v52 = (char *)ptr + 8 * (unsigned int)v88;
    if ( ptr != v52 )
    {
      for ( i = ptr; ; i = ptr )
      {
        v54 = 0x40000000000LL;
        v55 = (unsigned int)((v51 - i) >> 3) >> 7;
        if ( v55 <= 0x1D )
          v54 = 4096LL << v55;
        v56 = *(_QWORD *)v51;
        v51 += 8;
        operator delete(v56, v54, 16);
        if ( v52 == v51 )
          break;
      }
    }
    v57 = v90;
    v21 = &v90[2 * (unsigned int)v91];
    if ( v90 == v21 )
      goto LABEL_12;
    do
    {
      v58 = v57[1];
      v59 = *v57;
      v57 += 2;
      operator delete(v59, v58, 16);
    }
    while ( v21 != v57 );
    goto LABEL_11;
  }
  v33 = (unsigned int)v85;
  v34 = (char *)v84;
  v35 = (char *)v84 + 56 * (unsigned int)v85;
  if ( v84 != v35 )
  {
    while ( 1 )
    {
      v41 = *(_DWORD *)v34;
      if ( *(_DWORD *)v34 == 1 )
        break;
      if ( !v41 )
      {
        sub_9EC740((__int64)&v72, *((_DWORD *)v34 + 6), *((_BYTE **)v34 + 1), *((_QWORD *)v34 + 2), v34[48]);
        goto LABEL_28;
      }
      if ( v41 == 2 )
      {
        v36 = sub_12D6370((unsigned int *)v34, v11, v33, v30, v31, v32);
        v74[8] = 0;
        *(_QWORD *)v74 = 0;
        v75 = v77;
        v76 = nullptr;
        v77[0] = 0;
        v78 = 0;
        v72 = v36;
        v73 = v37;
        goto LABEL_28;
      }
LABEL_30:
      v34 += 56;
      if ( v35 == v34 )
        goto LABEL_35;
    }
    v60 = v34[48];
    v42 = sub_12D6200((unsigned int *)v34, v11, v33, v30, v60, v32);
    v38 = *((unsigned int *)v34 + 6);
    v39 = v60;
    v75 = v77;
    v61 = v42;
    v62 = v37;
    v76 = nullptr;
    v77[0] = 0;
    LODWORD(v72) = v38;
    HIDWORD(v72) = v38;
    v73 = 0;
    *(_QWORD *)v74 = v42;
    v74[8] = v37;
    v78 = v60;
LABEL_28:
    sub_168ED20(&v63, (char *)&v72, v37, v38, v39, v40);
    if ( v75 != v77 )
      operator delete(v75);
    goto LABEL_30;
  }
LABEL_35:
  sub_15F7200(&v63);
LABEL_3:
  v14 = (char *)ptr;
  v15 = (char *)ptr + 8 * (unsigned int)v88;
  if ( ptr != v15 )
  {
    for ( j = ptr; ; j = ptr )
    {
      v17 = 0x40000000000LL;
      v18 = (unsigned int)((v14 - j) >> 3) >> 7;
      if ( v18 <= 0x1D )
        v17 = 4096LL << v18;
      v19 = *(_QWORD *)v14;
      v14 += 8;
      operator delete(v19, v17, 16);
      if ( v15 == v14 )
        break;
    }
  }
  v20 = v90;
  v21 = &v90[2 * (unsigned int)v91];
  if ( v90 == v21 )
    goto LABEL_12;
  do
  {
    v22 = v20[1];
    v23 = *v20;
    v20 += 2;
    operator delete(v23, v22, 16);
  }
  while ( v21 != v20 );
LABEL_11:
  v21 = v90;
LABEL_12:
  if ( v21 != v92 )
    free(v21);
  if ( ptr != v89 )
    free(ptr);
  if ( v84 != v86 )
    free(v84);
}
