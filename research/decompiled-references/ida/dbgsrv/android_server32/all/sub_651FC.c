/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_651FC
// Address: 0x000651FC

//----- (000651FC) --------------------------------------------------------
int __fastcall sub_651FC(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        int *a5,
        _DWORD *a6,
        int *a7,
        int a8,
        _DWORD *a9,
        unsigned int a10)
{
  void **v10; // r6
  void **v11; // r7
  _DWORD **v12; // r5
  void *v13; // r0
  void **v14; // r0
  void *v15; // r4
  _DWORD *v16; // r0
  int *v17; // r1
  int v18; // r6
  int v19; // r7
  unsigned int v20; // r1
  unsigned int v21; // r4
  int v22; // r7
  int v23; // r5
  unsigned int v24; // r1
  _DWORD *v25; // r6
  unsigned int v26; // r7
  unsigned int v27; // r2
  char *v28; // r1
  void *v29; // r0
  int v30; // r5
  int v31; // r0
  char *v32; // r1
  unsigned int v33; // r4
  int *v34; // r2
  int v35; // r3
  int v36; // r6
  int v37; // r4
  int v38; // r0
  unsigned int v39; // r1
  unsigned int v40; // r7
  size_t *v41; // r5
  char *v42; // r0
  int **v43; // r5
  void **v44; // r6
  int *v45; // r0
  int *v46; // r0
  void *v47; // r7
  int *v48; // r1
  int v49; // r4
  int **v50; // r5
  int v51; // r0
  void **v52; // r7
  int *v53; // r1
  int *v54; // r1
  void *v55; // r4
  int v56; // r0
  int *v57; // r1
  int *v58; // r7
  int **v59; // r5
  int v60; // r0
  void **v61; // r6
  int *v62; // r1
  int *v63; // r1
  void *v64; // r4
  int v65; // r0
  int *v66; // r1
  int **v67; // r4
  int *v68; // r0
  _DWORD *v69; // r0
  bool v70; // zf
  int v71; // r1
  int v72; // r6
  _DWORD *v73; // r4
  const char *v74; // r7
  size_t v75; // r0
  size_t v76; // r4
  unsigned int v77; // r6
  _DWORD *v78; // r2
  void *v79; // r0
  _DWORD *v80; // r6
  __int64 v82; // kr00_8
  int v83; // r0
  int v84; // r1
  int v85; // r0
  int v86; // r1
  int v87; // r0
  int v88; // r6
  unsigned int v89; // r7
  const void *v90; // r6
  int v91; // r0
  unsigned int v92; // r1
  int v93; // r0
  int *v94; // r1
  unsigned int v95; // r6
  int v96; // r5
  int v97; // r2
  int v98; // r1
  int v99; // r7
  char *v100; // r1
  const void *v101; // r1
  void *v102; // r0
  _DWORD *v103; // [sp+24h] [bp-B8h]
  int v104; // [sp+28h] [bp-B4h]
  unsigned int v105; // [sp+2Ch] [bp-B0h]
  unsigned int *v106; // [sp+30h] [bp-ACh]
  int v107; // [sp+34h] [bp-A8h]
  int v109; // [sp+3Ch] [bp-A0h]
  unsigned int v111; // [sp+48h] [bp-94h]
  int v112; // [sp+4Ch] [bp-90h]
  unsigned int v113; // [sp+4Ch] [bp-90h]
  void **v114; // [sp+58h] [bp-84h]
  int v115; // [sp+58h] [bp-84h]
  int v116; // [sp+58h] [bp-84h]
  void *v119[3]; // [sp+70h] [bp-6Ch] BYREF
  void *ptr; // [sp+7Ch] [bp-60h] BYREF
  unsigned int v121; // [sp+80h] [bp-5Ch]
  unsigned int v122; // [sp+84h] [bp-58h]
  int **v123; // [sp+88h] [bp-54h] BYREF
  int **v124; // [sp+8Ch] [bp-50h] BYREF
  int v125; // [sp+90h] [bp-4Ch]
  _DWORD v126[3]; // [sp+94h] [bp-48h] BYREF
  char v127; // [sp+A0h] [bp-3Ch]
  int v128; // [sp+A4h] [bp-38h]
  int v129; // [sp+A8h] [bp-34h]
  int v130; // [sp+ACh] [bp-30h]
  int v131; // [sp+B0h] [bp-2Ch]
  int v132; // [sp+B4h] [bp-28h]
  int v133; // [sp+B8h] [bp-24h]
  int v134; // [sp+BCh] [bp-20h]
  _DWORD v135[2]; // [sp+C0h] [bp-1Ch] BYREF
  __int64 v136; // [sp+C8h] [bp-14h] BYREF
  int v137; // [sp+D0h] [bp-Ch]
  int v138; // [sp+D4h] [bp-8h]

  v138 = 0;
  v137 = 0;
  v136 = -1;
  v135[0] = -2;
  v10 = *(void ***)(a1 + 164);
  v11 = (void **)(a1 + 164);
  v12 = (_DWORD **)(a1 + 160);
  if ( v10 )
  {
    v11 = (void **)(a1 + 164);
    while ( 1 )
    {
      v13 = v10[4];
      if ( (int)v13 <= a3 )
      {
        if ( (int)v13 >= a3 )
          goto LABEL_11;
        v14 = (void **)v10[1];
        v11 = v10 + 1;
        if ( !v14 )
          goto LABEL_11;
        ++v10;
      }
      else
      {
        v14 = (void **)*v10;
        if ( !*v10 )
        {
          v11 = v10;
          goto LABEL_11;
        }
      }
      v11 = v10;
      v10 = v14;
    }
  }
  v10 = (void **)(a1 + 164);
LABEL_11:
  v15 = *v11;
  if ( !*v11 )
  {
    v15 = operator new(0x20u);
    *((_DWORD *)v15 + 4) = a3;
    *((_DWORD *)v15 + 5) = 0;
    *((_DWORD *)v15 + 6) = 0;
    *((_DWORD *)v15 + 7) = 0;
    *(_DWORD *)v15 = 0;
    *((_DWORD *)v15 + 1) = 0;
    *((_DWORD *)v15 + 2) = v10;
    *v11 = v15;
    v16 = (_DWORD *)**v12;
    if ( v16 )
    {
      *v12 = v16;
      v17 = (int *)*v11;
    }
    else
    {
      v17 = (int *)v15;
    }
    sub_261FA(*(int **)(a1 + 164), v17);
    ++*(_DWORD *)(a1 + 168);
  }
  v114 = sub_65CD0((void ***)v15 + 5);
  v125 = 0;
  v124 = nullptr;
  v123 = (int **)&v124;
  v18 = a1;
  v109 = a1 + 80;
  v19 = 11;
  if ( (*(_DWORD *)(a1 + 96) & 0xFFFFFFF) == 7 )
    goto LABEL_132;
  v20 = *(_DWORD *)(a1 + 284);
  v106 = (unsigned int *)(a1 + 284);
  if ( !v20 )
    v20 = *(_DWORD *)(a1 + 332);
  sub_5F718((int)v114, v20);
  v107 = -1;
  v19 = 1;
  v18 = a1;
  if ( (*(int (__fastcall **)(int, int, int, void *, _DWORD))(*(_DWORD *)a1 + 112))(a1, a3, -1, *v114, 0) != 1 )
    goto LABEL_132;
  v21 = (*(int (__fastcall **)(int, void **))(*(_DWORD *)a1 + 228))(a1, v114);
  v19 = 2;
  if ( v21 == -1 )
    goto LABEL_132;
  v121 = 0;
  ptr = nullptr;
  v122 = 0;
  v22 = *(_DWORD *)(a1 + 128);
  v23 = (v22 + a6[1] - 1) & -v22;
  v24 = (v21 - v22 - v23) & 0xFFFFFFF0;
  v114[4] = (void *)(v24 + v23);
  v103 = v114 + 4;
  v25 = (_DWORD *)(a1 + 128);
  v105 = v24;
  v19 = 4;
  if ( !relocate_relobj(a6, v24, 0) )
    goto LABEL_127;
  ((void (__fastcall *)(void **, _DWORD *, _DWORD))loc_30B84)(&ptr, v103, *v25);
  ((void (__fastcall *)(void **, _DWORD, _DWORD))loc_30B84)(&ptr, *a6, a6[1]);
  v26 = *v25 + v23;
  v27 = v121;
  if ( v121 >= v26 )
  {
    if ( v121 != v26 )
    {
      LOBYTE(v126[0]) = 0;
      sub_370F6(&ptr, v26, v126);
    }
  }
  else
  {
    v28 = (char *)ptr;
    if ( v122 < v26 )
    {
      v28 = (char *)qvector_reserve((int)&ptr, ptr, *v25 + v23, 1u);
      ptr = v28;
      v27 = v121;
    }
    memset(&v28[v27], 0, v26 - v27);
    v121 = v26;
  }
  v29 = (void *)(v105 - *v25);
  v114[3] = v29;
  v19 = 2;
  if ( (unsigned int)v29 >= v21 )
  {
    v49 = v105;
    goto LABEL_128;
  }
  v30 = a1;
  v31 = (*(int (__fastcall **)(int, void **, int ***, void **))(*(_DWORD *)a1 + 224))(a1, v114, &v123, &ptr);
  v32 = (char *)v114[3] + v31;
  v114[3] = v32;
  if ( (int)(v121 - v31) >= 1 )
  {
    v19 = 5;
    v30 = a1;
    v33 = v121 - v31;
    if ( (*(int (__fastcall **)(int, char *, char *, unsigned int, _DWORD))(*(_DWORD *)a1 + 148))(
           a1,
           v32,
           (char *)ptr + v31,
           v33,
           0) != v33 )
      goto LABEL_127;
  }
  (*(void (__fastcall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)v30 + 156))(v30, 0, 4, *v103, -1);
  v34 = a5;
  if ( a5[1] )
  {
    v35 = 0;
    while ( 1 )
    {
      v36 = 20 * v35;
      v112 = *v34;
      v37 = *(_DWORD *)(*v34 + 20 * v35);
      v19 = 3;
      if ( v37 == *(_DWORD *)(a1 + 336) || v37 == *(_DWORD *)(a1 + 340) )
      {
        v49 = v105;
        goto LABEL_128;
      }
      v104 = v35;
      v38 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 304))(a1, v37);
      v39 = *(unsigned __int8 *)(v38 + 9);
      if ( v39 <= 0x12 && ((1 << v39) & 0x48038) != 0 )
        break;
      if ( *(_DWORD *)(v112 + v36 + 12) <= 8u && !(*(unsigned __int8 *)(v38 + 5) << 31) )
      {
        if ( v135[0] >= -1 )
        {
          if ( (_DWORD)v136 )
          {
            HIDWORD(v136) = 0;
            qfree((void *)v136);
            v137 = 0;
            LODWORD(v136) = 0;
          }
          v135[0] = -2;
        }
        _memcpy_chk(&v136);
        if ( *(_DWORD *)(v112 + v36 + 4) )
          v136 += v105;
        goto LABEL_46;
      }
      if ( v135[0] >= -1 )
      {
        if ( (_DWORD)v136 )
        {
          HIDWORD(v136) = 0;
          qfree((void *)v136);
          v137 = 0;
          LODWORD(v136) = 0;
        }
        v135[0] = -2;
      }
      v136 = 0;
      v137 = 0;
      v135[0] = 0;
      v41 = (size_t *)(v112 + v36 + 12);
      v40 = *v41;
      if ( *v41 )
      {
        v42 = (char *)qvector_reserve((int)&v136, nullptr, v40, 1u);
LABEL_44:
        LODWORD(v136) = v42;
        memset(&v42[HIDWORD(v136)], 0, v40 - HIDWORD(v136));
        HIDWORD(v136) = v40;
      }
LABEL_45:
      qmemcpy((void *)v136, *(const void **)(v112 + v36 + 8), *v41);
LABEL_46:
      v43 = v124;
      if ( v124 )
      {
        v44 = (void **)&v124;
        while ( 1 )
        {
          v45 = v43[4];
          if ( v37 >= (int)v45 )
          {
            if ( (int)v45 >= v37 )
              goto LABEL_56;
            v46 = v43[1];
            v44 = (void **)(v43 + 1);
            if ( !v46 )
              goto LABEL_56;
            ++v43;
          }
          else
          {
            v46 = *v43;
            if ( !*v43 )
            {
              v44 = (void **)v43;
              goto LABEL_56;
            }
          }
          v44 = (void **)v43;
          v43 = (int **)v46;
        }
      }
      v44 = (void **)&v124;
      v43 = (int **)&v124;
LABEL_56:
      v47 = *v44;
      if ( !*v44 )
      {
        v47 = operator new(0x30u);
        *((_BYTE *)v47 + 47) = 0;
        *((_BYTE *)v47 + 46) = 0;
        *((_BYTE *)v47 + 45) = 0;
        *((_BYTE *)v47 + 44) = 0;
        *((_BYTE *)v47 + 43) = 0;
        *((_BYTE *)v47 + 42) = 0;
        *((_BYTE *)v47 + 41) = 0;
        *((_BYTE *)v47 + 40) = 0;
        *((_DWORD *)v47 + 6) = -2;
        *((_DWORD *)v47 + 4) = v37;
        *(_DWORD *)v47 = 0;
        *((_DWORD *)v47 + 1) = 0;
        *((_DWORD *)v47 + 2) = v43;
        *((_DWORD *)v47 + 8) = -1;
        *((_DWORD *)v47 + 9) = -1;
        *v44 = v47;
        if ( *v123 )
        {
          v123 = (int **)*v123;
          v48 = (int *)*v44;
        }
        else
        {
          v48 = (int *)v47;
        }
        sub_261FA((int *)v124, v48);
        ++v125;
      }
      sub_63C28((int *)v47 + 6, (int)v135);
      v35 = v104 + 1;
      v34 = a5;
      if ( v104 + 1 >= (unsigned int)a5[1] )
        goto LABEL_77;
    }
    if ( v135[0] >= -1 )
    {
      if ( (_DWORD)v136 )
      {
        HIDWORD(v136) = 0;
        qfree((void *)v136);
        v137 = 0;
        LODWORD(v136) = 0;
      }
      v135[0] = -2;
    }
    v136 = 0;
    v137 = 0;
    v135[0] = -1;
    v40 = *(_DWORD *)(v112 + v36 + 12);
    v41 = (size_t *)(v112 + v36 + 12);
    if ( !v40 )
      goto LABEL_45;
    v42 = (char *)qvector_reserve((int)&v136, nullptr, *(_DWORD *)(v112 + v36 + 12), 1u);
    goto LABEL_44;
  }
LABEL_77:
  if ( v135[0] >= -1 )
  {
    if ( (_DWORD)v136 )
    {
      HIDWORD(v136) = 0;
      qfree((void *)v136);
      v137 = 0;
      LODWORD(v136) = 0;
    }
    v135[0] = -2;
  }
  v136 = (unsigned int)v114[3];
  v50 = v124;
  if ( v124 )
  {
    v51 = *(_DWORD *)(a1 + 336);
    v52 = (void **)&v124;
    while ( 1 )
    {
      v53 = v50[4];
      if ( v51 >= (int)v53 )
      {
        if ( (int)v53 >= v51 )
          goto LABEL_92;
        v54 = v50[1];
        v52 = (void **)(v50 + 1);
        if ( !v54 )
          goto LABEL_92;
        ++v50;
      }
      else
      {
        v54 = *v50;
        if ( !*v50 )
        {
          v52 = (void **)v50;
          goto LABEL_92;
        }
      }
      v52 = (void **)v50;
      v50 = (int **)v54;
    }
  }
  v52 = (void **)&v124;
  v50 = (int **)&v124;
LABEL_92:
  v55 = *v52;
  if ( !*v52 )
  {
    v55 = operator new(0x30u);
    v56 = *(_DWORD *)(a1 + 336);
    *((_BYTE *)v55 + 47) = 0;
    *((_BYTE *)v55 + 46) = 0;
    *((_BYTE *)v55 + 45) = 0;
    *((_BYTE *)v55 + 44) = 0;
    *((_BYTE *)v55 + 43) = 0;
    *((_BYTE *)v55 + 42) = 0;
    *((_BYTE *)v55 + 41) = 0;
    *((_BYTE *)v55 + 40) = 0;
    *((_DWORD *)v55 + 8) = -1;
    *((_DWORD *)v55 + 9) = -1;
    *((_DWORD *)v55 + 6) = -2;
    *((_DWORD *)v55 + 4) = v56;
    *(_DWORD *)v55 = 0;
    *((_DWORD *)v55 + 1) = 0;
    *((_DWORD *)v55 + 2) = v50;
    *v52 = v55;
    if ( *v123 )
    {
      v123 = (int **)*v123;
      v57 = (int *)*v52;
    }
    else
    {
      v57 = (int *)v55;
    }
    sub_261FA((int *)v124, v57);
    ++v125;
  }
  sub_63C28((int *)v55 + 6, (int)v135);
  v136 = a2;
  v58 = (int *)(a1 + 340);
  v59 = v124;
  if ( v124 )
  {
    v60 = *v58;
    v61 = (void **)&v124;
    while ( 1 )
    {
      v62 = v59[4];
      if ( v60 >= (int)v62 )
      {
        if ( (int)v62 >= v60 )
          goto LABEL_107;
        v63 = v59[1];
        v61 = (void **)(v59 + 1);
        if ( !v63 )
          goto LABEL_107;
        ++v59;
      }
      else
      {
        v63 = *v59;
        if ( !*v59 )
        {
          v61 = (void **)v59;
          goto LABEL_107;
        }
      }
      v61 = (void **)v59;
      v59 = (int **)v63;
    }
  }
  v61 = (void **)&v124;
  v59 = (int **)&v124;
LABEL_107:
  v64 = *v61;
  if ( !*v61 )
  {
    v64 = operator new(0x30u);
    v65 = *v58;
    *((_BYTE *)v64 + 47) = 0;
    *((_BYTE *)v64 + 46) = 0;
    *((_BYTE *)v64 + 45) = 0;
    *((_BYTE *)v64 + 44) = 0;
    *((_BYTE *)v64 + 43) = 0;
    *((_BYTE *)v64 + 42) = 0;
    *((_BYTE *)v64 + 41) = 0;
    *((_BYTE *)v64 + 40) = 0;
    *((_DWORD *)v64 + 8) = -1;
    *((_DWORD *)v64 + 9) = -1;
    *((_DWORD *)v64 + 6) = -2;
    *((_DWORD *)v64 + 4) = v65;
    *(_DWORD *)v64 = 0;
    *((_DWORD *)v64 + 1) = 0;
    *((_DWORD *)v64 + 2) = v59;
    *v61 = v64;
    if ( *v123 )
    {
      v123 = (int **)*v123;
      v66 = (int *)*v61;
    }
    else
    {
      v66 = (int *)v64;
    }
    sub_261FA((int *)v124, v66);
    ++v125;
  }
  sub_63C28((int *)v64 + 6, (int)v135);
  v67 = v123;
  if ( v123 != (int **)&v124 )
  {
    while ( 1 )
    {
      v19 = 6;
      if ( (*(int (__fastcall **)(int, int, int *, int **, _DWORD))(*(_DWORD *)a1 + 116))(a1, a3, v67[4], v67 + 6, 0) != 1 )
        break;
      *((_BYTE *)v114 + 20) = 1;
      v68 = v67[1];
      if ( v68 )
      {
        do
        {
          v67 = (int **)v68;
          v68 = (int *)*v68;
        }
        while ( v68 );
      }
      else
      {
        v69 = v67 + 2;
        v70 = *v67[2] == (_DWORD)v67;
        v67 = (int **)v67[2];
        if ( !v70 )
        {
          do
          {
            v71 = *v69;
            v69 = (_DWORD *)(*v69 + 8);
            v67 = *(int ***)(v71 + 8);
          }
          while ( *v67 != (int *)v71 );
        }
      }
      if ( v67 == (int **)&v124 )
        goto LABEL_120;
    }
LABEL_127:
    v49 = v105;
    goto LABEL_128;
  }
LABEL_120:
  if ( a10 << 31 )
  {
    v49 = v105;
    v19 = 0;
    goto LABEL_128;
  }
  v72 = 1;
  *(_BYTE *)(a1 + 92) = 1;
  v19 = 9;
  if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 84))(a1, v109) != 1 )
    goto LABEL_127;
  v73 = v126;
  v127 = 0;
  v126[1] = 0;
  v134 = 0;
  v133 = 0;
  v132 = 0;
  v131 = 0;
  v130 = 0;
  v129 = 0;
  v128 = 0;
  v126[0] = -1;
  v126[2] = -1;
  if ( a9 )
    v73 = a9;
  v115 = 40;
  if ( (a10 & 4) != 0 )
  {
    v115 = HIWORD(a10);
    if ( HIWORD(a10) )
    {
      v82 = get_nsec_stamp() + 1000000LL * (unsigned int)v115;
      v111 = HIDWORD(v82);
      v113 = v82;
      v72 = 1;
    }
    else
    {
      v111 = 0;
      v113 = 0;
      v115 = 0;
    }
  }
  else
  {
    v111 = 0;
    v113 = 0;
    v72 = 0;
  }
  v19 = 0;
  while ( 1 )
  {
    do
    {
      if ( v72 )
      {
        if ( v72 == 2 )
        {
          if ( v115 < 1 || (v72 = 2, v115 = (__int64)(__PAIR64__(v111, v113) - get_nsec_stamp()) / 1000000, v115 <= 0) )
          {
            v72 = 2;
            v19 = 12;
            if ( (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 76))(a1, 0) < 1 )
            {
              v107 = v105;
              goto LABEL_198;
            }
          }
        }
        else
        {
          v72 = 2;
        }
      }
      v83 = (*(int (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 68))(a1, v73, v115);
      v84 = 8;
    }
    while ( !v83 );
    if ( v83 == -1 )
    {
LABEL_166:
      v107 = v105;
      v19 = v84;
      goto LABEL_198;
    }
    v85 = v73[4] & 0xFFFFFFF;
    if ( v85 == 4 )
    {
      v86 = a3;
      if ( v73[1] == a3 )
      {
LABEL_167:
        sub_5FB66(a1, (int)v73, 8u);
        goto LABEL_198;
      }
    }
    else
    {
      v86 = a3;
      if ( v85 == 2 )
        goto LABEL_167;
    }
    if ( v19 == 12 )
    {
      sub_5FB66(a1, (int)v73, 0xAu);
      set_debug_event_code((int)v73, 0);
      v19 = 12;
      set_debug_event_code(v109, 0);
      v107 = v105;
      goto LABEL_198;
    }
    if ( (*(int (__fastcall **)(int, int, _DWORD *, _DWORD))(*(_DWORD *)a1 + 232))(a1, v86, v73, *v103) )
    {
      set_debug_event_code(v109, 0);
      if ( a4 < 1 )
        goto LABEL_201;
      v19 = 5;
      if ( a6[1] < (unsigned int)a4 )
      {
        v107 = v105;
        goto LABEL_198;
      }
      v70 = (*(int (__fastcall **)(int, unsigned int, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 148))(a1, v105, *a6, a4, 0) == a4;
      v91 = v105;
      if ( v70 )
      {
LABEL_201:
        if ( !a7 || !a7[1] )
        {
          v107 = v105;
          v19 = 0;
          goto LABEL_198;
        }
        memset(v119, 0, sizeof(v119));
        v92 = *v106;
        if ( !*v106 )
          v92 = *(_DWORD *)(a1 + 332);
        sub_5F718((int)v119, v92);
        v93 = (*(int (__fastcall **)(int, int, int, void *, _DWORD))(*(_DWORD *)a1 + 112))(a1, a3, -1, v119[0], 0);
        v19 = 1;
        v94 = a7;
        if ( v93 >= 1 )
        {
          v19 = 0;
          if ( a7[1] )
          {
            v95 = 0;
            v96 = 12;
            do
            {
              v97 = *v94;
              v116 = *v94 + v96;
              v98 = 24 * *(_DWORD *)(v116 - 12);
              v99 = *(_DWORD *)((char *)v119[0] + v98);
              v100 = (char *)v119[0] + v98;
              if ( v99 < -1 )
                v101 = v100 + 8;
              else
                v101 = *((const void **)v100 + 2);
              qmemcpy(*(void **)(v116 - 4), v101, *(_DWORD *)(v97 + v96));
              v19 = 0;
              *(_DWORD *)(v116 - 8) = 0;
              v96 += 20;
              ++v95;
              v94 = a7;
            }
            while ( v95 < a7[1] );
          }
        }
        sub_5F79C(v119);
        v91 = v105;
      }
      v107 = v91;
      goto LABEL_198;
    }
    if ( (v73[4] & 0xFFFFFFF) == 7 )
      break;
    v87 = sub_5FB66(a1, (int)v73, 0xAu);
    v84 = 7;
    if ( v87 )
      goto LABEL_166;
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 84))(a1, v73);
    set_debug_event_code((int)v73, 0);
  }
  v88 = v105;
  if ( (a10 & 2) == 0 && v73 + 8 != (_DWORD *)a8 )
  {
    v89 = v73[9];
    if ( v89 < 2 )
    {
      *(_DWORD *)(a8 + 4) = 0;
    }
    else
    {
      v90 = (const void *)v73[8];
      if ( *(_DWORD *)(a8 + 8) < v89 )
      {
        v102 = qvector_reserve(a8, *(void **)a8, v89, 1u);
        *(_DWORD *)a8 = v102;
      }
      else
      {
        v102 = *(void **)a8;
      }
      *(_DWORD *)(a8 + 4) = v89;
      memmove(v102, v90, v89 - 1);
      *(_BYTE *)(*(_DWORD *)a8 + v89 - 1) = 0;
      v88 = v105;
    }
  }
  set_debug_event_code(v109, 0);
  *(_BYTE *)(a1 + 92) = 1;
  v19 = 10;
  v107 = v88;
LABEL_198:
  free_debug_event(v126);
  v49 = v107;
LABEL_128:
  if ( ptr )
  {
    v121 = 0;
    qfree(ptr);
    v122 = 0;
    ptr = nullptr;
  }
  if ( v19 )
  {
    v18 = a1;
    if ( v19 == 10 )
    {
LABEL_138:
      v49 = -1;
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v18 + 216))(v18, a3);
      goto LABEL_139;
    }
LABEL_132:
    v74 = off_DA2AC[v19];
    v75 = strlen(v74);
    if ( v75 )
    {
      v76 = v75;
      v77 = v75 + 1;
      v78 = (_DWORD *)a8;
      if ( *(_DWORD *)(a8 + 8) >= v75 + 1 )
      {
        v79 = *(void **)a8;
      }
      else
      {
        v79 = qvector_reserve(a8, *(void **)a8, v77, 1u);
        v78 = (_DWORD *)a8;
        *(_DWORD *)a8 = v79;
      }
      v78[1] = v77;
      v80 = v78;
      memmove(v79, v74, v76);
      *(_BYTE *)(*v80 + v76) = 0;
      v18 = a1;
    }
    else
    {
      *(_DWORD *)(a8 + 4) = 0;
    }
    goto LABEL_138;
  }
LABEL_139:
  sub_672BA((int)&v123, v124);
  if ( v135[0] >= -1 )
  {
    if ( (_DWORD)v136 )
    {
      HIDWORD(v136) = 0;
      qfree((void *)v136);
      v137 = 0;
      LODWORD(v136) = 0;
    }
    v135[0] = -2;
  }
  return v49;
}
// 65AAC: conditional instruction was optimized away because r7.4==0
// 1943C: using guessed type int __fastcall _memcpy_chk(_DWORD);
// DA2AC: using guessed type char *off_DA2AC[28];
