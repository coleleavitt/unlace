__int64 __fastcall sub_36AFC0(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rbp
  void *v6; // r13
  void *v7; // rdi
  __int64 v8; // r8
  _QWORD *v9; // r13
  int v10; // esi
  unsigned int v11; // edi
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  void *v14; // rdi
  __int64 v15; // rdi
  __int64 *v16; // r13
  __int64 v17; // r15
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r10d
  __int64 *v23; // rbx
  unsigned int v24; // r8d
  __int64 v25; // r9
  __int64 *v26; // rbp
  int v27; // esi
  __int64 v28; // r8
  __int64 *v29; // rdi
  __int64 *v30; // rax
  __int64 *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  void *v34; // rbx
  void *v35; // rbx
  __int64 v36; // rbx
  __int64 v38; // rbp
  __int64 *v39; // rax
  int v40; // r10d
  __int64 *v41; // rdx
  char *v42; // r15
  __int64 v43; // rax
  char *v44; // r11
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 *v47; // rsi
  __int64 *v48; // rax
  int v49; // esi
  int v50; // edx
  __int64 v51; // rsi
  __int64 v52; // rdx
  char v53; // di
  char v54; // di
  __int64 v55; // rsi
  __int64 v56; // rdx
  char v57; // di
  char v58; // di
  char *v59; // r15
  char *v60; // rbx
  void *v61; // rbp
  char *v62; // rsi
  int v63; // eax
  int v64; // edx
  __int64 v65; // rax
  char v66; // si
  __int64 v67; // rax
  char v68; // si
  int v69; // edx
  int v70; // esi
  __int64 v71; // rdx
  char v72; // di
  __int64 v73; // rdx
  char v74; // di
  char *v75; // rbx
  char *v76; // rbp
  void *v77; // r15
  _QWORD *v78; // rsi
  unsigned int v79; // ebx
  __int64 v80; // rbp
  __int64 v81; // rsi
  __int64 v82; // rax
  int v83; // eax
  int v84; // edx
  __int64 v85; // rax
  char v86; // si
  __int64 v87; // rax
  char v88; // si
  __int64 *v89; // [rsp+8h] [rbp-F0h]
  size_t v90; // [rsp+18h] [rbp-E0h]
  __int64 *v91; // [rsp+18h] [rbp-E0h]
  unsigned int v92; // [rsp+18h] [rbp-E0h]
  size_t v93; // [rsp+20h] [rbp-D8h]
  char *v94; // [rsp+20h] [rbp-D8h]
  __int64 v95; // [rsp+20h] [rbp-D8h]
  int v96; // [rsp+28h] [rbp-D0h]
  unsigned int v97; // [rsp+28h] [rbp-D0h]
  int v98; // [rsp+28h] [rbp-D0h]
  __int64 v99; // [rsp+30h] [rbp-C8h]
  char *v100; // [rsp+38h] [rbp-C0h]
  int v101; // [rsp+44h] [rbp-B4h]
  int v102[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v103; // [rsp+78h] [rbp-80h]
  int v104; // [rsp+80h] [rbp-78h] BYREF
  char v105; // [rsp+84h] [rbp-74h]
  __int64 v106; // [rsp+88h] [rbp-70h]
  __int64 v107; // [rsp+90h] [rbp-68h] BYREF
  const char *v108; // [rsp+98h] [rbp-60h] BYREF
  __int64 v109; // [rsp+A0h] [rbp-58h]
  int v110; // [rsp+A8h] [rbp-50h] BYREF
  char v111; // [rsp+ACh] [rbp-4Ch]
  __int64 v112; // [rsp+B0h] [rbp-48h]

  v2 = *(unsigned int *)(a1 + 100);
  v107 = 0;
  sub_1862370(&v107, "max_conflicts", v2);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), &v107);
  sub_18572D0(&v107);
  v3 = *(_QWORD **)(a1 + 64);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[5 * v4];
      do
      {
        while ( 1 )
        {
          v6 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v3 + 1);
          sub_182CBA0(v6, v3 + 3);
          if ( !*v3 )
            break;
          v7 = (void *)(*v3 - 8LL);
          v3 += 5;
          sub_186B220(v7);
          if ( v5 == v3 )
          {
            v3 = *(_QWORD **)(a1 + 64);
            goto LABEL_7;
          }
        }
        v3 += 5;
      }
      while ( v3 != v5 );
      v3 = *(_QWORD **)(a1 + 64);
    }
LABEL_7:
    *((_DWORD *)v3 - 1) = 0;
  }
  if ( !*(_DWORD *)(a1 + 84) && !*(_DWORD *)(a1 + 88) )
    goto LABEL_17;
  v8 = *(unsigned int *)(a1 + 80);
  v9 = *(_QWORD **)(a1 + 72);
  v10 = 0;
  v11 = *(_DWORD *)(a1 + 80);
  v12 = &v9[5 * v8];
  v13 = v9;
  if ( v9 != v12 )
  {
    do
    {
      while ( *v13 )
      {
        *v13 = 0;
        v13 += 5;
        if ( v12 == v13 )
          goto LABEL_15;
      }
      v13 += 5;
      ++v10;
    }
    while ( v12 != v13 );
LABEL_15:
    if ( v11 > 0x10 && 3 * v11 < 4 * v10 )
    {
      if ( v9 )
      {
        v75 = (char *)v9;
        v76 = (char *)&v9[5 * v8];
        do
        {
          v77 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v75 + 8);
          v78 = v75 + 24;
          v75 += 40;
          sub_182CBA0(v77, v78);
        }
        while ( v75 != v76 );
        sub_186B220(v9);
        v79 = *(_DWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 72) = 0;
        v79 >>= 1;
        v80 = v79;
        *(_DWORD *)(a1 + 80) = v79;
        v81 = sub_186B270(40LL * v79);
        if ( !v79 )
          goto LABEL_82;
      }
      else
      {
        *(_QWORD *)(a1 + 72) = 0;
        v80 = v11 >> 1;
        *(_DWORD *)(a1 + 80) = v80;
        v81 = sub_186B270(40 * v80);
      }
      v82 = v81;
      do
      {
        *(_OWORD *)(v82 + 24) = 0;
        v82 += 40;
        *(_OWORD *)(v82 - 32) = 0;
        *(_QWORD *)(v82 - 40) = 0;
        *(_BYTE *)(v82 - 28) = 0;
        *(_DWORD *)(v82 - 16) = 1;
        *(_BYTE *)(v82 - 12) = 0;
      }
      while ( v82 != v81 + 40 * v80 );
LABEL_82:
      *(_QWORD *)(a1 + 72) = v81;
    }
  }
  *(_QWORD *)(a1 + 84) = 0;
LABEL_17:
  *(_BYTE *)(a1 + 36) &= ~1u;
  v14 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 32) = -1;
  sub_182CBA0(v14, a1 + 48);
  v15 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 52) &= ~1u;
  *(_DWORD *)(a1 + 48) = 1;
  v16 = *(__int64 **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15) + 8);
  if ( !v16 )
    goto LABEL_38;
  v89 = &v16[*((unsigned int *)v16 - 1)];
  if ( v89 == v16 )
    goto LABEL_38;
  do
  {
    v17 = *v16;
    (*(void (__fastcall **)(int *, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 40LL))(v102, *(_QWORD *)(a1 + 16), *v16);
    v107 = v17;
    LODWORD(v108) = v102[0];
    BYTE4(v108) = v102[1] & 3 | BYTE4(v108) & 0xFC;
    v18 = v103;
    v103 = 0;
    v109 = v18;
    v110 = v104;
    v19 = *(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 88);
    v111 = v105 & 3 | v111 & 0xFC;
    v20 = v106;
    v106 = 0;
    v112 = v20;
    v21 = *(unsigned int *)(a1 + 80);
    v22 = 2 * v21;
    if ( 3 * (int)v21 < (unsigned int)(4 * v19) )
    {
      v38 = v22;
      v96 = 2 * v21;
      v93 = 40LL * v22;
      v90 = v93;
      v39 = (__int64 *)sub_186B270(v93);
      v40 = v96;
      v23 = v39;
      v25 = v93;
      if ( v96 )
      {
        v41 = &v39[5 * v38];
        do
        {
          *v39 = 0;
          v39 += 5;
          *((_OWORD *)v39 - 1) = 0;
          *((_OWORD *)v39 - 2) = 0;
          *((_DWORD *)v39 - 4) = 1;
          *((_BYTE *)v39 - 28) = 0;
          *((_BYTE *)v39 - 12) = 0;
        }
        while ( v41 != v39 );
      }
      v42 = *(char **)(a1 + 72);
      v24 = v96 - 1;
      v26 = &v23[v93 / 8];
      v43 = *(unsigned int *)(a1 + 80);
      v44 = &v42[40 * v43];
      if ( v42 != v44 )
      {
        do
        {
          while ( 1 )
          {
            v45 = *(_QWORD *)v42;
            if ( *(_QWORD *)v42 > 1u )
              break;
            v42 += 40;
            if ( v44 == v42 )
              goto LABEL_53;
          }
          v46 = 40LL * (*(_DWORD *)(v45 + 12) & v24);
          v47 = &v23[(unsigned __int64)v46 / 8];
          if ( v93 == v46 )
          {
LABEL_61:
            if ( v23 == v47 )
            {
LABEL_69:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v48 = v23;
            while ( *v48 )
            {
              v48 += 5;
              if ( v47 == v48 )
                goto LABEL_69;
            }
          }
          else
          {
            v48 = &v23[(unsigned __int64)v46 / 8];
            while ( *v48 )
            {
              v48 += 5;
              if ( v26 == v48 )
                goto LABEL_61;
            }
          }
          v49 = *((_DWORD *)v42 + 2);
          *v48 = v45;
          v42 += 40;
          v50 = *((_DWORD *)v48 + 2);
          *((_DWORD *)v48 + 2) = v49;
          v51 = *((_QWORD *)v42 - 3);
          *((_DWORD *)v42 - 8) = v50;
          v52 = v48[2];
          v48[2] = v51;
          v53 = *(v42 - 28);
          *((_QWORD *)v42 - 3) = v52;
          LOBYTE(v52) = *((_BYTE *)v48 + 12);
          *((_BYTE *)v48 + 12) = v53 & 2 | v52 & 0xFD;
          LOBYTE(v52) = v52 & 2 | *(v42 - 28) & 0xFD;
          *(v42 - 28) = v52;
          v54 = *((_BYTE *)v48 + 12);
          *((_BYTE *)v48 + 12) = v52 & 1 | v54 & 0xFE;
          LODWORD(v51) = *((_DWORD *)v42 - 4);
          *(v42 - 28) = v54 & 1 | *(v42 - 28) & 0xFE;
          LODWORD(v52) = *((_DWORD *)v48 + 6);
          *((_DWORD *)v48 + 6) = v51;
          v55 = *((_QWORD *)v42 - 1);
          *((_DWORD *)v42 - 4) = v52;
          v56 = v48[4];
          v48[4] = v55;
          v57 = *(v42 - 12);
          *((_QWORD *)v42 - 1) = v56;
          LOBYTE(v56) = *((_BYTE *)v48 + 28);
          *((_BYTE *)v48 + 28) = v57 & 2 | v56 & 0xFD;
          LOBYTE(v56) = v56 & 2 | *(v42 - 12) & 0xFD;
          *(v42 - 12) = v56;
          v58 = *((_BYTE *)v48 + 28) & 1;
          *((_BYTE *)v48 + 28) = v56 & 1 | *((_BYTE *)v48 + 28) & 0xFE;
          *(v42 - 12) = v58 | *(v42 - 12) & 0xFE;
        }
        while ( v44 != v42 );
LABEL_53:
        v43 = *(unsigned int *)(a1 + 80);
        v44 = *(char **)(a1 + 72);
      }
      if ( v44 )
      {
        if ( (_DWORD)v43 )
        {
          v94 = v44;
          v97 = v96 - 1;
          v99 = v25;
          v59 = &v44[40 * v43];
          v100 = (char *)v23 + v90;
          v101 = v40;
          v91 = v23;
          v60 = v44;
          do
          {
            v61 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v60 + 8);
            v62 = v60 + 24;
            v60 += 40;
            sub_182CBA0(v61, v62);
          }
          while ( v60 != v59 );
          v23 = v91;
          v44 = v94;
          v24 = v97;
          v25 = v99;
          v26 = (__int64 *)v100;
          v40 = v101;
        }
        v98 = v40;
        v95 = v25;
        v92 = v24;
        sub_186B220(v44);
        v24 = v92;
        v25 = v95;
        v40 = v98;
      }
      *(_QWORD *)(a1 + 72) = v23;
      v17 = v107;
      *(_DWORD *)(a1 + 80) = v40;
      *(_DWORD *)(a1 + 88) = 0;
    }
    else
    {
      v23 = *(__int64 **)(a1 + 72);
      v24 = v21 - 1;
      v25 = 40 * v21;
      v26 = &v23[5 * v21];
    }
    v27 = *(_DWORD *)(v17 + 12);
    v28 = v27 & v24;
    v29 = &v23[5 * v28];
    if ( 40 * v28 != v25 )
    {
      v30 = &v23[5 * v28];
      v31 = nullptr;
      while ( 1 )
      {
        v32 = *v30;
        if ( (unsigned __int64)*v30 > 1 )
        {
          if ( *(_DWORD *)(v32 + 12) == v27 && v32 == v17 )
          {
            v69 = *((_DWORD *)v30 + 2);
            v70 = (int)v108;
            *v30 = v17;
            *((_DWORD *)v30 + 2) = v70;
            LODWORD(v108) = v69;
            v71 = v30[2];
            v30[2] = v109;
            v109 = v71;
            LOBYTE(v71) = *((_BYTE *)v30 + 12);
            *((_BYTE *)v30 + 12) = BYTE4(v108) & 2 | v71 & 0xFD;
            BYTE4(v108) = v71 & 2 | BYTE4(v108) & 0xFD;
            v72 = *((_BYTE *)v30 + 12);
            *((_BYTE *)v30 + 12) = BYTE4(v108) & 1 | v72 & 0xFE;
            BYTE4(v108) = v72 & 1 | BYTE4(v108) & 0xFE;
            LODWORD(v71) = *((_DWORD *)v30 + 6);
            *((_DWORD *)v30 + 6) = v110;
            v110 = v71;
            v73 = v30[4];
            v30[4] = v112;
            v112 = v73;
            LOBYTE(v73) = *((_BYTE *)v30 + 28);
            *((_BYTE *)v30 + 28) = v111 & 2 | v73 & 0xFD;
            v111 = v73 & 2 | v111 & 0xFD;
            v74 = *((_BYTE *)v30 + 28) & 1;
            *((_BYTE *)v30 + 28) = v111 & 1 | *((_BYTE *)v30 + 28) & 0xFE;
            v111 = v74 | v111 & 0xFE;
            goto LABEL_37;
          }
        }
        else
        {
          if ( !v32 )
          {
            if ( v31 )
              goto LABEL_67;
            v31 = v30;
            goto LABEL_68;
          }
          v31 = v30;
        }
        v30 += 5;
        if ( v30 == v26 )
          goto LABEL_32;
      }
    }
    v31 = nullptr;
    while ( 1 )
    {
LABEL_32:
      if ( v29 == v23 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v33 = *v23;
      if ( (unsigned __int64)*v23 <= 1 )
        break;
      if ( *(_DWORD *)(v33 + 12) == v27 && v33 == v17 )
      {
        v83 = *((_DWORD *)v23 + 2);
        v84 = (int)v108;
        *v23 = v17;
        *((_DWORD *)v23 + 2) = v84;
        LODWORD(v108) = v83;
        v85 = v23[2];
        v23[2] = v109;
        v109 = v85;
        LOBYTE(v84) = *((_BYTE *)v23 + 12);
        *((_BYTE *)v23 + 12) = BYTE4(v108) & 2 | v84 & 0xFD;
        BYTE4(v108) = v84 & 2 | BYTE4(v108) & 0xFD;
        v86 = *((_BYTE *)v23 + 12);
        *((_BYTE *)v23 + 12) = BYTE4(v108) & 1 | v86 & 0xFE;
        BYTE4(v108) = v86 & 1 | BYTE4(v108) & 0xFE;
        LODWORD(v85) = *((_DWORD *)v23 + 6);
        *((_DWORD *)v23 + 6) = v110;
        v110 = v85;
        v87 = v23[4];
        v23[4] = v112;
        v112 = v87;
        LOBYTE(v84) = *((_BYTE *)v23 + 28);
        *((_BYTE *)v23 + 28) = v111 & 2 | v84 & 0xFD;
        v111 = v84 & 2 | v111 & 0xFD;
        v88 = *((_BYTE *)v23 + 28) & 1;
        *((_BYTE *)v23 + 28) = v111 & 1 | *((_BYTE *)v23 + 28) & 0xFE;
        v111 = v88 | v111 & 0xFE;
        goto LABEL_37;
      }
LABEL_31:
      v23 += 5;
    }
    if ( v33 )
    {
      v31 = v23;
      goto LABEL_31;
    }
    if ( v31 )
LABEL_67:
      --*(_DWORD *)(a1 + 88);
    else
      v31 = v23;
LABEL_68:
    v63 = *((_DWORD *)v31 + 2);
    v64 = (int)v108;
    *v31 = v17;
    *((_DWORD *)v31 + 2) = v64;
    LODWORD(v108) = v63;
    v65 = v31[2];
    v31[2] = v109;
    v109 = v65;
    LOBYTE(v64) = *((_BYTE *)v31 + 12);
    *((_BYTE *)v31 + 12) = BYTE4(v108) & 2 | v64 & 0xFD;
    BYTE4(v108) = v64 & 2 | BYTE4(v108) & 0xFD;
    v66 = *((_BYTE *)v31 + 12);
    *((_BYTE *)v31 + 12) = BYTE4(v108) & 1 | v66 & 0xFE;
    BYTE4(v108) = v66 & 1 | BYTE4(v108) & 0xFE;
    LODWORD(v65) = *((_DWORD *)v31 + 6);
    *((_DWORD *)v31 + 6) = v110;
    v110 = v65;
    v67 = v31[4];
    v31[4] = v112;
    v112 = v67;
    LOBYTE(v64) = *((_BYTE *)v31 + 28);
    *((_BYTE *)v31 + 28) = v111 & 2 | v64 & 0xFD;
    v111 = v64 & 2 | v111 & 0xFD;
    v68 = *((_BYTE *)v31 + 28) & 1;
    *((_BYTE *)v31 + 28) = v111 & 1 | *((_BYTE *)v31 + 28) & 0xFE;
    LOBYTE(v67) = v111;
    ++*(_DWORD *)(a1 + 84);
    v111 = v68 | v67 & 0xFE;
LABEL_37:
    v34 = qword_1C7F2C0;
    ++v16;
    sub_182CBA0(qword_1C7F2C0, &v108);
    sub_182CBA0(v34, &v110);
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v102);
    sub_182CBA0(v35, &v104);
  }
  while ( v89 != v16 );
LABEL_38:
  if ( *(_BYTE *)(a1 + 116) )
  {
    v107 = a1;
    v108 = "minimize_core";
    LOBYTE(v110) = 0;
    LOBYTE(v109) = 0;
    *(_QWORD *)v102 = 0;
    sub_1862300(v102, "minimize_core", 0);
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), v102);
    sub_18572D0(v102);
    sub_3684B0(a1);
    v36 = sub_368E80((_QWORD *)a1, (char *)v102);
    *(_QWORD *)v102 = 0;
    sub_1862300(v102, "minimize_core", 0);
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), v102);
    sub_18572D0(v102);
  }
  else
  {
    v36 = sub_3639A0(a1);
  }
  v107 = 0;
  sub_1862370(&v107, "max_conflicts", 0xFFFFFFFFLL);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), &v107);
  sub_18572D0(&v107);
  return v36;
}

