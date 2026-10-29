void __fastcall sub_F9A7A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  unsigned int *v5; // rsi
  unsigned int *v6; // rbp
  unsigned int *v7; // rbx
  int v8; // r13d
  size_t v9; // r12
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // r10d
  __int64 *v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned int *v19; // rsi
  unsigned int *v20; // r13
  unsigned int *v21; // rbx
  int v22; // ebp
  size_t v23; // r12
  unsigned int v24; // eax
  __int64 v25; // r9
  __int64 *v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // r14
  unsigned int *v31; // rbp
  int v32; // r13d
  size_t v33; // rax
  const char *v34; // rbx
  void *v35; // rcx
  size_t v36; // rdx
  void *v37; // r12
  size_t v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // r8
  unsigned int v41; // r10d
  __int64 *v42; // r9
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  _QWORD *v46; // rbx
  unsigned int *v47; // rdx
  unsigned int v48; // r12d
  unsigned int v49; // esi
  unsigned int v50; // esi
  unsigned __int64 v51; // r12
  _DWORD *v52; // r14
  char v53; // r13
  unsigned int v54; // eax
  int v55; // eax
  void *v56; // r12
  __int64 v57; // rax
  _QWORD *v58; // rcx
  char *v59; // rdx
  _QWORD *v60; // r10
  unsigned int v61; // eax
  __int64 v62; // rdi
  __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  _QWORD *v66; // rcx
  char *v67; // rdx
  _QWORD *v68; // r11
  unsigned int v69; // eax
  __int64 v70; // rdi
  __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rcx
  char *v77; // rdx
  _QWORD *v78; // r11
  unsigned int v79; // eax
  __int64 v80; // rdi
  __int64 v81; // rdx
  unsigned __int64 v82; // rdx
  _QWORD *v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  const void *v87; // [rsp+0h] [rbp-E8h]
  const void *v88; // [rsp+0h] [rbp-E8h]
  _QWORD *i; // [rsp+0h] [rbp-E8h]
  void *v90; // [rsp+0h] [rbp-E8h]
  void *v91; // [rsp+0h] [rbp-E8h]
  char *sa; // [rsp+8h] [rbp-E0h]
  unsigned int *v94; // [rsp+10h] [rbp-D8h]
  unsigned int *v95; // [rsp+10h] [rbp-D8h]
  int v96; // [rsp+2Ch] [rbp-BCh]
  __int64 v97; // [rsp+30h] [rbp-B8h]
  __int64 v98; // [rsp+30h] [rbp-B8h]
  unsigned int v99; // [rsp+30h] [rbp-B8h]
  unsigned int v100; // [rsp+30h] [rbp-B8h]
  int v101; // [rsp+30h] [rbp-B8h]
  __int64 v102; // [rsp+30h] [rbp-B8h]
  int v103; // [rsp+30h] [rbp-B8h]
  __int64 v104; // [rsp+38h] [rbp-B0h]
  __int64 *v105; // [rsp+38h] [rbp-B0h]
  __int64 *v106; // [rsp+38h] [rbp-B0h]
  __int64 v107; // [rsp+40h] [rbp-A8h]
  _QWORD *v108; // [rsp+40h] [rbp-A8h]
  __int64 v109; // [rsp+40h] [rbp-A8h]
  unsigned int v110; // [rsp+40h] [rbp-A8h]
  unsigned int v111; // [rsp+40h] [rbp-A8h]
  unsigned int *v112; // [rsp+48h] [rbp-A0h]
  __int64 *v113; // [rsp+48h] [rbp-A0h]
  __int64 *v114; // [rsp+48h] [rbp-A0h]
  __int64 *v115; // [rsp+48h] [rbp-A0h]
  __int64 *v116; // [rsp+48h] [rbp-A0h]
  __int64 v117; // [rsp+50h] [rbp-98h]
  _QWORD *v118; // [rsp+50h] [rbp-98h]
  _QWORD *v119; // [rsp+50h] [rbp-98h]
  void *src; // [rsp+60h] [rbp-88h] BYREF
  size_t n; // [rsp+68h] [rbp-80h]
  char v123; // [rsp+70h] [rbp-78h] BYREF
  void *v124; // [rsp+80h] [rbp-68h] BYREF
  size_t v125; // [rsp+88h] [rbp-60h]
  _QWORD v126[2]; // [rsp+90h] [rbp-58h] BYREF
  __int16 v127; // [rsp+A0h] [rbp-48h]

  v104 = *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8);
  if ( v104 == *(_QWORD *)a1 )
  {
    v96 = 0;
    goto LABEL_15;
  }
  v4 = *(_QWORD *)a1;
  v96 = 0;
  do
  {
    v5 = *(unsigned int **)(v4 + 8);
    v6 = &v5[5 * *(_QWORD *)(v4 + 16)];
    if ( v6 == v5 )
      goto LABEL_14;
    v7 = *(unsigned int **)(v4 + 8);
    v8 = v96;
    do
    {
      while ( 1 )
      {
        if ( !v8 || !sub_F99120(*(_QWORD **)v4, (__int64)v7, a3) )
          goto LABEL_5;
        sub_F994D0((__int64)&v124, v7, v4);
        v9 = v125;
        v87 = v124;
        v10 = sub_2220DF0(v124, v125);
        v12 = sub_2220F70(a2, v87, v9, v10);
        v13 = (__int64 *)(*(_QWORD *)a2 + 8LL * v12);
        if ( *v13 )
        {
          if ( *v13 != -8 )
          {
            sub_965750((__int64 **)&src, v13, 0);
            v15 = *(_QWORD *)src;
            v16 = *(_QWORD **)(*(_QWORD *)src + 8LL);
            if ( v16 )
              goto LABEL_11;
LABEL_89:
            v80 = *(_QWORD *)(a2 + 120);
            if ( !v80
              || (v109 = v15,
                  v16 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v80 + 16LL))(
                                    v80,
                                    v87,
                                    v9),
                  v15 = v109,
                  (*(_QWORD *)(v109 + 8) = v16) == 0) )
            {
              v81 = *(_QWORD *)(a2 + 24);
              *(_QWORD *)(a2 + 104) += 24LL;
              v16 = (_QWORD *)((v81 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( *(_QWORD *)(a2 + 32) >= (unsigned __int64)(v16 + 3) && v81 )
              {
                *(_QWORD *)(a2 + 24) = v16 + 3;
              }
              else
              {
                v91 = (void *)v15;
                v16 = (_QWORD *)sub_962430(a2 + 24, 24, 24, 3, v14, v15);
                v15 = (__int64)v91;
              }
              v82 = *v16 & 0xFFFFF80000000000LL;
              v16[1] = 0;
              *v16 = v82 | 0x1FFFC05;
              *(_QWORD *)(v15 + 8) = v16;
              v16[2] = v15;
            }
            goto LABEL_11;
          }
          --*(_DWORD *)(a2 + 16);
        }
        v75 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 104) += v9 + 17;
        v76 = (_QWORD *)((v75 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        v77 = (char *)v76 + v9 + 17;
        if ( *(_QWORD *)(a2 + 32) >= (unsigned __int64)v77 && v75 )
        {
          *(_QWORD *)(a2 + 24) = v77;
        }
        else
        {
          v116 = v13;
          v111 = v12;
          v86 = sub_962430(a2 + 24, v9 + 17, v9 + 17, 3, v11, (__int64)v13);
          v13 = v116;
          v12 = v111;
          v76 = (_QWORD *)v86;
        }
        v78 = v76 + 2;
        if ( v9 )
        {
          v119 = v76;
          v115 = v13;
          v110 = v12;
          v85 = memcpy(v76 + 2, v87, v9);
          v76 = v119;
          v13 = v115;
          v12 = v110;
          v78 = v85;
        }
        *((_BYTE *)v78 + v9) = 0;
        *v76 = v9;
        v76[1] = 0;
        *v13 = (__int64)v76;
        ++*(_DWORD *)(a2 + 12);
        v79 = sub_2221390(a2, v12);
        sub_965750((__int64 **)&src, (__int64 *)(*(_QWORD *)a2 + 8LL * v79), 0);
        v15 = *(_QWORD *)src;
        v16 = *(_QWORD **)(*(_QWORD *)src + 8LL);
        if ( !v16 )
          goto LABEL_89;
LABEL_11:
        *(_DWORD *)v16 = ((unsigned __int16)(v8 + 36) << 9) | *(_DWORD *)v16 & 0xFE0001FF;
        if ( v124 != v126 )
          break;
LABEL_5:
        v7 += 5;
        ++v8;
        if ( v6 == v7 )
          goto LABEL_13;
      }
      operator delete(v124);
      v7 += 5;
      ++v8;
    }
    while ( v6 != v7 );
LABEL_13:
    v96 = v96 - 858993459 * ((unsigned __int64)((char *)v6 - (char *)v5 - 20) >> 2) + 1;
LABEL_14:
    v4 += 40;
  }
  while ( v104 != v4 );
LABEL_15:
  v17 = *(_QWORD *)(a1 + 56);
  v107 = v17 + 40LL * *(unsigned int *)(a1 + 64);
  if ( v17 == v107 )
    goto LABEL_28;
  v18 = *(_QWORD *)(a1 + 56);
  while ( 2 )
  {
    v19 = *(unsigned int **)(v18 + 8);
    v20 = &v19[5 * *(_QWORD *)(v18 + 16)];
    if ( v19 == v20 )
      goto LABEL_27;
    v21 = *(unsigned int **)(v18 + 8);
    v22 = v96;
    while ( 2 )
    {
      while ( 2 )
      {
        if ( !sub_F99120(*(_QWORD **)v18, (__int64)v21, a3) )
          goto LABEL_19;
        sub_F994D0((__int64)&v124, v21, v18);
        v23 = v125;
        v88 = v124;
        v24 = sub_2220DF0(v124, v125);
        v25 = (unsigned int)sub_2220F70(a2, v88, v23, v24);
        v26 = (__int64 *)(*(_QWORD *)a2 + 8 * v25);
        if ( !*v26 )
        {
LABEL_54:
          v57 = *(_QWORD *)(a2 + 24);
          *(_QWORD *)(a2 + 104) += v23 + 17;
          v58 = (_QWORD *)((v57 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          v59 = (char *)v58 + v23 + 17;
          if ( *(_QWORD *)(a2 + 32) >= (unsigned __int64)v59 && v57 )
          {
            *(_QWORD *)(a2 + 24) = v59;
          }
          else
          {
            v114 = v26;
            v103 = v25;
            v84 = sub_962430(a2 + 24, v23 + 17, v23 + 17, 3, (__int64)v26, v25);
            v26 = v114;
            LODWORD(v25) = v103;
            v58 = (_QWORD *)v84;
          }
          v60 = v58 + 2;
          if ( v23 )
          {
            v118 = v58;
            v113 = v26;
            v101 = v25;
            v83 = memcpy(v58 + 2, v88, v23);
            v58 = v118;
            v26 = v113;
            LODWORD(v25) = v101;
            v60 = v83;
          }
          *((_BYTE *)v60 + v23) = 0;
          *v58 = v23;
          v58[1] = 0;
          *v26 = (__int64)v58;
          ++*(_DWORD *)(a2 + 12);
          v61 = sub_2221390(a2, (unsigned int)v25);
          sub_965750((__int64 **)&src, (__int64 *)(*(_QWORD *)a2 + 8LL * v61), 0);
          v28 = *(_QWORD *)src;
          v29 = *(_QWORD **)(*(_QWORD *)src + 8LL);
          if ( !v29 )
            goto LABEL_60;
          goto LABEL_24;
        }
        if ( *v26 == -8 )
        {
          --*(_DWORD *)(a2 + 16);
          goto LABEL_54;
        }
        sub_965750((__int64 **)&src, v26, 0);
        v28 = *(_QWORD *)src;
        v29 = *(_QWORD **)(*(_QWORD *)src + 8LL);
        if ( v29 )
          goto LABEL_24;
LABEL_60:
        v62 = *(_QWORD *)(a2 + 120);
        if ( !v62
          || (v97 = v28,
              v29 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v62 + 16LL))(
                                v62,
                                v88,
                                v23),
              v28 = v97,
              (*(_QWORD *)(v97 + 8) = v29) == 0) )
        {
          v63 = *(_QWORD *)(a2 + 24);
          *(_QWORD *)(a2 + 104) += 24LL;
          v29 = (_QWORD *)((v63 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(a2 + 32) >= (unsigned __int64)(v29 + 3) && v63 )
          {
            *(_QWORD *)(a2 + 24) = v29 + 3;
          }
          else
          {
            v90 = (void *)v28;
            v29 = (_QWORD *)sub_962430(a2 + 24, 24, 24, 3, v28, v27);
            v28 = (__int64)v90;
          }
          v64 = *v29 & 0xFFFFF80000000000LL;
          v29[1] = 0;
          *v29 = v64 | 0x1FFFC05;
          *(_QWORD *)(v28 + 8) = v29;
          v29[2] = v28;
        }
LABEL_24:
        *(_DWORD *)v29 = ((unsigned __int16)(v22 + 36) << 9) | *(_DWORD *)v29 & 0xFE0001FF;
        if ( v124 == v126 )
        {
LABEL_19:
          v21 += 5;
          ++v22;
          if ( v20 == v21 )
            goto LABEL_26;
          continue;
        }
        break;
      }
      operator delete(v124);
      v21 += 5;
      ++v22;
      if ( v20 != v21 )
        continue;
      break;
    }
LABEL_26:
    v96 = v96 - 858993459 * ((unsigned __int64)((char *)v20 - (char *)v19 - 20) >> 2) + 1;
LABEL_27:
    v18 += 40;
    if ( v107 != v18 )
      continue;
    break;
  }
LABEL_28:
  v30 = *(_QWORD *)(a1 + 112);
  v117 = v30 + 40LL * *(unsigned int *)(a1 + 120);
  if ( v30 == v117 )
    goto LABEL_40;
  while ( 2 )
  {
    v31 = *(unsigned int **)(v30 + 8);
    v112 = v31;
    v94 = &v31[5 * *(_QWORD *)(v30 + 16)];
    if ( v31 == v94 )
      goto LABEL_39;
    v32 = (unsigned __int16)v96 + 36;
    while ( 2 )
    {
      while ( 2 )
      {
        v33 = 0;
        v34 = (const char *)(**(_QWORD **)v30 + *v31);
        if ( v34 )
          v33 = strlen(v34);
        v35 = *(void **)(v30 + 24);
        v36 = *(_QWORD *)(v30 + 32);
        v126[1] = v33;
        v126[0] = v34;
        v124 = v35;
        v125 = v36;
        v127 = 1286;
        sub_222F820(&src, &v124);
        v37 = src;
        v38 = n;
        v39 = sub_2220DF0(src, n);
        v41 = sub_2220F70(a2, v37, v38, v39);
        v42 = (__int64 *)(*(_QWORD *)a2 + 8LL * v41);
        if ( !*v42 )
        {
LABEL_67:
          v65 = *(_QWORD *)(a2 + 24);
          *(_QWORD *)(a2 + 104) += v38 + 17;
          v66 = (_QWORD *)((v65 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          v67 = (char *)v66 + v38 + 17;
          if ( *(_QWORD *)(a2 + 32) >= (unsigned __int64)v67 && v65 )
          {
            *(_QWORD *)(a2 + 24) = v67;
          }
          else
          {
            v106 = v42;
            v100 = v41;
            v74 = sub_962430(a2 + 24, v38 + 17, v38 + 17, 3, v40, (__int64)v42);
            v42 = v106;
            v41 = v100;
            v66 = (_QWORD *)v74;
          }
          v68 = v66 + 2;
          if ( v38 )
          {
            v108 = v66;
            v105 = v42;
            v99 = v41;
            v73 = memcpy(v66 + 2, v37, v38);
            v66 = v108;
            v42 = v105;
            v41 = v99;
            v68 = v73;
          }
          *((_BYTE *)v68 + v38) = 0;
          *v66 = v38;
          v66[1] = 0;
          *v42 = (__int64)v66;
          ++*(_DWORD *)(a2 + 12);
          v69 = sub_2221390(a2, v41);
          sub_965750((__int64 **)&v124, (__int64 *)(*(_QWORD *)a2 + 8LL * v69), 0);
          v44 = *(_QWORD *)v124;
          v45 = *(_QWORD **)(*(_QWORD *)v124 + 8LL);
          if ( !v45 )
            goto LABEL_73;
          goto LABEL_36;
        }
        if ( *v42 == -8 )
        {
          --*(_DWORD *)(a2 + 16);
          goto LABEL_67;
        }
        sub_965750((__int64 **)&v124, v42, 0);
        v44 = *(_QWORD *)v124;
        v45 = *(_QWORD **)(*(_QWORD *)v124 + 8LL);
        if ( v45 )
          goto LABEL_36;
LABEL_73:
        v70 = *(_QWORD *)(a2 + 120);
        if ( !v70
          || (v98 = v44,
              v45 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v70 + 16LL))(
                                v70,
                                v37,
                                v38),
              v44 = v98,
              (*(_QWORD *)(v98 + 8) = v45) == 0) )
        {
          v71 = *(_QWORD *)(a2 + 24);
          *(_QWORD *)(a2 + 104) += 24LL;
          v45 = (_QWORD *)((v71 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(a2 + 32) >= (unsigned __int64)(v45 + 3) && v71 )
          {
            *(_QWORD *)(a2 + 24) = v45 + 3;
          }
          else
          {
            v102 = v44;
            v45 = (_QWORD *)sub_962430(a2 + 24, 24, 24, 3, v43, v44);
            v44 = v102;
          }
          v72 = *v45 & 0xFFFFF80000000000LL;
          v45[1] = 0;
          *v45 = v72 | 0x1FFFC05;
          *(_QWORD *)(v44 + 8) = v45;
          v45[2] = v44;
        }
LABEL_36:
        *(_DWORD *)v45 = ((unsigned __int16)v32 << 9) | *(_DWORD *)v45 & 0xFE0001FF;
        if ( src != &v123 )
        {
          operator delete(src);
          v31 += 5;
          ++v32;
          if ( v94 == v31 )
            goto LABEL_38;
          continue;
        }
        break;
      }
      v31 += 5;
      ++v32;
      if ( v94 != v31 )
        continue;
      break;
    }
LABEL_38:
    v96 = v96 - 858993459 * ((unsigned __int64)((char *)v94 - (char *)v112 - 20) >> 2) + 1;
LABEL_39:
    v30 += 40;
    if ( v117 != v30 )
      continue;
    break;
  }
LABEL_40:
  v46 = *(_QWORD **)(a3 + 576);
  for ( i = *(_QWORD **)(a3 + 584); i != v46; v46 += 4 )
  {
    v51 = v46[1];
    v52 = (_DWORD *)*v46;
    v53 = 0;
    if ( v51 > 3 && *v52 == 761558131 )
    {
      v51 -= 4LL;
      ++v52;
      v53 = 1;
    }
    v54 = sub_2220DF0(v52, v51);
    v55 = sub_2221120(a2, v52, v51, v54);
    if ( v55 == -1 )
      sub_F9A1A0((__int64 **)&v124, (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)), 1);
    else
      sub_F9A1A0((__int64 **)&v124, (__int64 *)(*(_QWORD *)a2 + 8LL * v55), 1);
    v56 = v124;
    sub_F9A1A0((__int64 **)&v124, (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)), 1);
    if ( v124 != v56 )
    {
      v47 = *(unsigned int **)(*(_QWORD *)v56 + 8LL);
      v48 = *v47;
      v49 = (unsigned __int16)(*v47 >> 9);
      if ( v49 > 0x23 && v49 != 65534 )
      {
        v50 = v49 - 36;
        if ( v50 )
        {
          v95 = v47;
          sa = (char *)sub_F99770((__int64 *)a1, v50);
          if ( strchr(sa, 102) )
          {
            if ( v53 == (strchr(sa, 122) != nullptr) )
              *v95 = v48 & 0xFE0001FF | 0x1FFFC00;
          }
        }
      }
    }
  }
}

