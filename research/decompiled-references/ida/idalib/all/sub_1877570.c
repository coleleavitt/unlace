__int64 __fastcall sub_1877570(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // rbx
  int v8; // edx
  int v9; // r14d
  __int64 *v10; // rsi
  int v11; // esi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int8 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // r8d
  unsigned __int64 v25; // rcx
  unsigned __int8 v26; // si
  __int64 v27; // r12
  int v28; // eax
  __int64 v29; // r10
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  _QWORD *v35; // r14
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // r14
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rbx
  int v44; // edx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // [rsp+8h] [rbp-110h]
  __int64 v87; // [rsp+8h] [rbp-110h]
  __int64 v88; // [rsp+8h] [rbp-110h]
  unsigned int v89; // [rsp+8h] [rbp-110h]
  __int64 v90; // [rsp+10h] [rbp-108h]
  __int64 v91; // [rsp+10h] [rbp-108h]
  __int64 v92; // [rsp+10h] [rbp-108h]
  __int64 v93; // [rsp+10h] [rbp-108h]
  int v94; // [rsp+10h] [rbp-108h]
  __int64 v95; // [rsp+18h] [rbp-100h]
  unsigned __int8 v96[11]; // [rsp+2Ch] [rbp-ECh] BYREF
  unsigned __int8 v97; // [rsp+37h] [rbp-E1h] BYREF
  unsigned __int64 v98; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int64 v99; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v100; // [rsp+48h] [rbp-D0h] BYREF
  unsigned __int64 v101; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v102; // [rsp+58h] [rbp-C0h]
  _QWORD *v103; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v104[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v105; // [rsp+C8h] [rbp-50h]
  unsigned int v106; // [rsp+D0h] [rbp-48h]
  char v107; // [rsp+D4h] [rbp-44h]

  v5 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  v7 = 0;
  v96[0] = a4;
  if ( a2 && (a2 & 4) != 0 )
    v7 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = (a3 >> 1) & 3;
  if ( !v8 )
  {
    v9 = v5 != 0;
    goto LABEL_6;
  }
  v9 = 2;
  if ( v8 == 1 )
  {
LABEL_6:
    if ( *((_BYTE *)a1 + 35) )
      goto LABEL_7;
    return 1;
  }
  v19 = (*(_BYTE *)(v5 + 29) >> 5) & 3;
  v86 = *(_QWORD *)(*a1 + 248LL);
  if ( a2 && (a2 & 4) == 0 && (a2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v20 = sub_B72690(a1[1] + 72LL);
    if ( !v20 )
      BUG();
    v23 = *(_QWORD *)(v20 - 16);
    v24 = v19;
    if ( v23 )
    {
      v25 = v23 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v72 = sub_A7AA70(v86, v20 - 64, v21, 0, v19, v22);
      v24 = v19;
      v25 = v72;
    }
    v26 = *(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 12);
    v27 = v5 + 72;
    v28 = (v26 >> 2) & 3;
    if ( (v26 & 0xC) != 0xC )
      goto LABEL_28;
    if ( (v26 & 2) != 0 )
    {
      v28 = 2;
LABEL_28:
      if ( v24 == 2 )
      {
        v29 = 3;
      }
      else
      {
        v29 = (unsigned int)v28;
        if ( v28 <= v24 )
          v29 = v19;
      }
      goto LABEL_37;
    }
    v29 = 3;
    if ( v24 != 2 )
      v29 = v19;
  }
  else
  {
    v27 = v5 + 72;
    v30 = sub_B72690(v5 + 72);
    if ( !v30 )
      BUG();
    v34 = *(_QWORD *)(v30 - 16);
    if ( v34 )
      v25 = v34 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v25 = sub_A7AA70(v86, v30 - 64, v31, 0, v32, v33);
    v29 = v19;
  }
LABEL_37:
  v35 = (_QWORD *)*a1;
  v95 = v25;
  v101 = v5 | v29;
  v90 = v5 | v29;
  v36 = sub_B72690(v27);
  if ( v36 )
    v36 -= 64LL;
  v87 = v36;
  sub_168B9B0((__int64)&v101, (__int64)(v35 + 1), 0);
  v41 = sub_165FA10(v35, v87, v90, v95, 0, (__int64)&v101);
  if ( v101 && v102 )
    sub_1580C40(v102, v101);
  if ( !v41 )
  {
    v9 = 3;
    if ( *((_BYTE *)a1 + 35) )
    {
LABEL_7:
      v10 = (__int64 *)(*a1 + 8LL);
      if ( !v7 )
      {
        v43 = a2 & 0xFFFFFFFFFFFFFFF8LL;
        sub_168B9F0((__int64)&v101, v10, *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL), 0x1714u, 0);
        v44 = 6;
        if ( !a1[3] )
          v44 = *((_DWORD *)a1 + 4);
        if ( v105 )
        {
          sub_AE9DF0(v104, v44, 2u);
        }
        else if ( v107 )
        {
          v89 = v44;
          v79 = sub_168B9E0(&v101);
          v82 = v89;
          v83 = v79;
          v84 = (__int64)v103;
          if ( v103 )
          {
            v93 = v83;
            v84 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v103 + 32LL))(v103, *v103, v89);
            v83 = v93;
            v82 = v89;
          }
          v100 = v84;
          v94 = v82;
          v85 = sub_1587BC0(v83, &v100, v82, v83, v80, v81);
          sub_AE9DF0((unsigned __int8 **)(*v85 + 32LL * v106 + 8), v94, 2u);
        }
        v45 = sub_B72690(a1[1] + 72LL);
        if ( v45 )
          v45 -= 64LL;
        v98 = v45;
        v46 = sub_1852F10((__int64)&v101, (__int64 *)&v98);
        v97 = 0;
        v47 = sub_1588420(v46, &v97);
        v99 = sub_1839D10(*(__int64 **)(v43 + 16), (__int64)&v97, v48, v49, v50);
        v51 = sub_162B6D0(v47, (__int64 *)&v99);
        v52 = v51;
        if ( *(_BYTE *)(v51 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v51 + 32), v9, 2u);
        }
        else if ( *(_BYTE *)(v51 + 132) )
        {
          v73 = sub_168B9E0((_QWORD *)v51);
          v77 = *(_QWORD *)(v52 + 16);
          if ( v77 )
          {
            v92 = v73;
            v77 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 32LL))(v77);
            v73 = v92;
          }
          v100 = v77;
          v78 = sub_1587BC0(v73, &v100, v73, v74, v75, v76);
          sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * *(unsigned int *)(v52 + 128) + 8), v9, 2u);
        }
        v16 = v52;
        goto LABEL_17;
      }
LABEL_8:
      sub_168B9F0((__int64)&v101, v10, *(_DWORD *)(v7 + 24), 0x1714u, 0);
      v11 = 6;
      if ( !a1[3] )
        v11 = *((_DWORD *)a1 + 4);
      if ( v105 )
      {
        sub_AE9DF0(v104, v11, 2u);
      }
      else if ( v107 )
      {
        v54 = sub_168B9E0(&v101);
        v57 = (__int64)v103;
        if ( v103 )
        {
          v88 = v54;
          v57 = (*(__int64 (__fastcall **)(_QWORD *))(*v103 + 32LL))(v103);
          v54 = v88;
        }
        v100 = v57;
        v58 = sub_1587BC0(v54, &v100, v53, v54, v55, v56);
        sub_AE9DF0((unsigned __int8 **)(*v58 + 32LL * v106 + 8), v11, 2u);
      }
      v12 = sub_B72690(a1[1] + 72LL);
      if ( v12 )
        v12 -= 64LL;
      v99 = v12;
      v13 = sub_1852F10((__int64)&v101, (__int64 *)&v99);
      LOBYTE(v98) = 1;
      v14 = sub_1588420(v13, (unsigned __int8 *)&v98);
      v15 = v14;
      if ( *(_BYTE *)(v14 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v14 + 32), v7, 0xAu);
      }
      else
      {
        if ( !*(_BYTE *)(v14 + 132) )
        {
LABEL_16:
          v16 = v15;
LABEL_17:
          v17 = sub_15890D0(v16, v96);
          LOBYTE(v100) = 0;
          sub_1588420(v17, (unsigned __int8 *)&v100);
          sub_15F7200(&v101);
          if ( v9 == 1 )
            sub_18F5080(*a1, v5);
          return 1;
        }
        v66 = sub_168B9E0((_QWORD *)v14);
        v70 = *(_QWORD *)(v15 + 16);
        if ( v70 )
        {
          v91 = v66;
          v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
          v66 = v91;
        }
        v100 = v70;
        v71 = sub_1587BC0(v66, &v100, v66, v67, v68, v69);
        sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * *(unsigned int *)(v15 + 128) + 8), v7, 0xAu);
      }
      if ( *(_BYTE *)(v15 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v15 + 32), v9, 2u);
      }
      else if ( *(_BYTE *)(v15 + 132) )
      {
        v61 = sub_168B9E0((_QWORD *)v15);
        v64 = *(_QWORD *)(v15 + 16);
        if ( v64 )
          v64 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v64 + 32LL))(*(_QWORD *)(v15 + 16));
        v100 = v64;
        v65 = sub_1587BC0(v61, &v100, v59, v60, v62, v63);
        sub_AE9DF0((unsigned __int8 **)(*v65 + 32LL * *(unsigned int *)(v15 + 128) + 8), v9, 2u);
      }
      goto LABEL_16;
    }
    return 1;
  }
  if ( v96[0] != 1 && v7 )
  {
    v42 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
      v42 = *(_QWORD *)v42;
    if ( (*(_BYTE *)(v42 + 8) & 0x7Fu) - 58 > 3 )
      BUG();
    if ( *(_BYTE *)(v42 + 9) >> 5 == 2 && *(char *)(v5 + 82) >= 0 )
    {
      if ( *((_DWORD *)a1 + 4)
        || (sub_7052B0((__int64 *)(*(_QWORD *)(v42 + 40) + 96LL), *(_QWORD *)(v42 + 40), v37, v38, v39, v40),
            *(char *)(*(_QWORD *)(v42 + 64) + 2LL) >= 0) )
      {
        if ( *((_BYTE *)a1 + 35) )
        {
          v9 = 4;
          v10 = (__int64 *)(*a1 + 8LL);
          goto LABEL_8;
        }
        return 1;
      }
    }
  }
  return 0;
}
