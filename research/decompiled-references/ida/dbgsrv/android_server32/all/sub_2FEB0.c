/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2FEB0
// Address: 0x0002FEB0

//----- (0002FEB0) --------------------------------------------------------
void __fastcall sub_2FEB0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // r2
  unsigned int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r7
  __int64 v14; // r2
  int v15; // r4
  int v16; // r7
  int v17; // r1
  void **v18; // r3
  int v19; // r2
  int *v20; // r6
  int v21; // r4
  void (__fastcall *v22)(int, int, int, int, _DWORD, _DWORD); // r5
  __int64 v23; // r0
  int v24; // r4
  void (__fastcall *v25)(int, int, int, int, _DWORD, _DWORD); // r5
  __int64 v26; // r0
  int v27; // r0
  __int64 v28; // r2
  int v29; // r4
  void (__fastcall *v30)(int, int, int, int, _DWORD, _DWORD); // r5
  __int64 v31; // r0
  int v32; // r4
  void (__fastcall *v33)(int, int, int, int, _DWORD, _DWORD); // r5
  __int64 v34; // r0
  unsigned int v35; // r6
  int v36; // r5
  int v37; // r4
  void (__fastcall *v38)(int, int, int, int, _DWORD, _DWORD); // r5
  __int64 v39; // r0
  int v40; // r5
  char *v41; // r5
  char *v42; // r2
  void *v43; // r1
  char *v44; // r5
  char *v45; // r2
  void *v46; // r1
  int v47; // r4
  void (__fastcall *v48)(int, int, int, int, _DWORD, _DWORD); // r7
  __int64 v49; // r0
  _DWORD *v50; // r5
  unsigned int v51; // r0
  unsigned int v52; // r0
  int v53; // r4
  void (__fastcall *v54)(int, int, int, int, _DWORD, _DWORD); // r6
  __int64 v55; // r0
  unsigned __int8 *v56; // r0
  char *v57; // r5
  int v58; // r6
  void *v59; // r1
  unsigned int v60; // r4
  int *v61; // r1
  int v62; // r4
  char *v63; // r0
  char *v64; // r2
  char *v65; // r1
  int v66; // r5
  char *v67; // r7
  void *v68; // r0
  _DWORD *v69; // r4
  unsigned int v70; // r6
  int v71; // r4
  char *v72; // r4
  unsigned int v73; // r6
  int i; // r7
  void *v75; // r0
  char *v76; // r0
  int v77; // r6
  char *v78; // r7
  void *v79; // r0
  _DWORD *v80; // r5
  int v81; // r6
  char *v82; // r6
  unsigned int v83; // r4
  int j; // r7
  void *v85; // r0
  char *v86; // r5
  unsigned int v87; // r6
  int k; // r7
  void *v89; // r0
  char *v90; // r5
  unsigned int v91; // r6
  int m; // r7
  void *v93; // r0
  void *v94; // r0
  int v95; // [sp+0h] [bp-18Ch]
  int v96; // [sp+4h] [bp-188h]
  int v97; // [sp+8h] [bp-184h]
  int v98; // [sp+Ch] [bp-180h]
  int v99; // [sp+10h] [bp-17Ch]
  int v100; // [sp+28h] [bp-164h]
  __int64 *v101; // [sp+2Ch] [bp-160h]
  unsigned int *v102; // [sp+30h] [bp-15Ch]
  _DWORD *v103; // [sp+34h] [bp-158h]
  int v104; // [sp+34h] [bp-158h]
  int v105; // [sp+3Ch] [bp-150h]
  void (__fastcall **v107)(int, int, int, int, _DWORD, _DWORD); // [sp+50h] [bp-13Ch]
  int v108; // [sp+54h] [bp-138h]
  int v109; // [sp+58h] [bp-134h]
  char *v110; // [sp+60h] [bp-12Ch]
  char *v111; // [sp+60h] [bp-12Ch]
  int v112; // [sp+64h] [bp-128h]
  int *v113; // [sp+68h] [bp-124h]
  unsigned __int8 *v114; // [sp+6Ch] [bp-120h]
  void *v115; // [sp+74h] [bp-118h]
  unsigned int v116; // [sp+74h] [bp-118h]
  void *v117; // [sp+74h] [bp-118h]
  int v118; // [sp+78h] [bp-114h]
  void *v119; // [sp+78h] [bp-114h]
  unsigned int v120; // [sp+78h] [bp-114h]
  void *v121; // [sp+78h] [bp-114h]
  unsigned int v122; // [sp+80h] [bp-10Ch] BYREF
  unsigned int v123; // [sp+84h] [bp-108h] BYREF
  unsigned int v124; // [sp+88h] [bp-104h] BYREF
  void *ptr; // [sp+8Ch] [bp-100h] BYREF
  char *v126; // [sp+90h] [bp-FCh]
  unsigned int v127; // [sp+94h] [bp-F8h]
  void *v128[12]; // [sp+98h] [bp-F4h] BYREF
  void *v129[3]; // [sp+C8h] [bp-C4h] BYREF
  char *v130; // [sp+D4h] [bp-B8h]
  unsigned int v131; // [sp+D8h] [bp-B4h]
  int v132; // [sp+DCh] [bp-B0h]
  void *v133; // [sp+E0h] [bp-ACh]
  int v134; // [sp+E4h] [bp-A8h]
  int v135; // [sp+E8h] [bp-A4h]
  void *v136[3]; // [sp+108h] [bp-84h] BYREF
  char *v137; // [sp+114h] [bp-78h]
  unsigned int v138; // [sp+118h] [bp-74h]
  int v139; // [sp+11Ch] [bp-70h]
  void *v140; // [sp+120h] [bp-6Ch]
  int v141; // [sp+124h] [bp-68h]
  int v142; // [sp+128h] [bp-64h]
  void *v143[16]; // [sp+148h] [bp-44h] BYREF

  v9 = *(_DWORD *)(a1 + 168);
  if ( !v9 )
    sub_3072A(a1, a2, 0, a4, v95, v96, v97, v98, v99);
  v102 = (unsigned int *)a2;
  if ( !*(_BYTE *)(a1 + 176) )
    sub_30740();
  v10 = *(_DWORD *)(a1 + 60);
  if ( v10 <= v9 )
    sub_3072A(a1, v10, v9, a4, v95, v96, v97, v98, v99);
  v11 = v9 << 6;
  v12 = *(_DWORD *)(a1 + 56);
  v13 = v12 + v11;
  if ( !(v12 + v11) )
    sub_3072A(a1, v12, v11, a4, v95, v96, v97, v98, v99);
  v14 = *(_QWORD *)(v13 + 24);
  v108 = a1;
  v15 = v13;
  v16 = a1;
  qlseek(*(_DWORD *)(a1 + 364), *(_QWORD *)(a1 + 368) + v14, 0);
  memset(v128, 0, sizeof(v128));
  v107 = (void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(v16 + 384);
  v114 = (unsigned __int8 *)(v16 + 480);
  v101 = (__int64 *)(v16 + 368);
  v113 = (int *)(v16 + 364);
  v17 = 393;
  v105 = v15 + 32;
  v18 = &v143[14];
  v19 = -2;
  if ( *(_QWORD *)(v15 + 32) )
  {
    v109 = *(unsigned __int8 *)(v16 + 393);
    v20 = (int *)(v16 + 364);
    while ( 1 )
    {
      v21 = lreadbytes(*v20, &v128[4], 4, *v114);
      if ( v21 < 0 )
      {
        v22 = *v107;
        v23 = qlseek(*v20, 0, 1);
        v22(v16, 19, 4, v21, v23, HIDWORD(v23));
      }
      if ( !v128[4] )
      {
        sub_309EC(a3, (int)v128);
        goto LABEL_154;
      }
      v17 = -17;
      if ( v128[4] > (void *)0xFFFFFFEF )
        goto LABEL_154;
      v126 = nullptr;
      ptr = nullptr;
      v127 = 0;
      v24 = lreadbytes(*v20, &v128[5], 4, *v114);
      if ( v24 < 0 )
      {
        v25 = *v107;
        v26 = qlseek(*v20, 0, 1);
        v25(v16, 19, 4, v24, v26, HIDWORD(v26));
      }
      if ( !v128[5] )
        break;
      v27 = qlseek(*v20, 0, 1);
      v28 = *v101;
      v128[7] = nullptr;
      v128[6] = (void *)((char *)v128[3] + 4 - (char *)v128[5]);
      v118 = v27 - v28;
      v29 = lreadbytes(*v20, v143, 4, *v114);
      if ( v29 < 0 )
      {
        v30 = *v107;
        v31 = qlseek(*v113, 0, 1);
        v30(v16, 19, 4, v29, v31, HIDWORD(v31));
      }
      v32 = lreadbytes(*v113, &v124, 4, *v114);
      if ( v32 < 0 )
      {
        v33 = *v107;
        v34 = qlseek(*v113, 0, 1);
        v33(v16, 19, 4, v32, v34, HIDWORD(v34));
      }
      v35 = 0;
      if ( (int)v128[4] >= 12 )
      {
        v44 = (char *)v128[4] - 12;
        if ( v128[4] == &byte_9[3] )
          goto LABEL_107;
        v45 = v126;
        if ( v126 >= v44 )
        {
          if ( v126 != v44 )
          {
            LOBYTE(v123) = 0;
            sub_370F6(&ptr, (unsigned int)v44, &v123);
          }
        }
        else
        {
          v46 = ptr;
          if ( v127 < (unsigned int)v44 )
          {
            v46 = qvector_reserve((int)&ptr, ptr, (unsigned int)v44, 1u);
            ptr = v46;
            v45 = v126;
          }
          memset(&v45[(_DWORD)v46], 0, v44 - v45);
          v126 = v44;
        }
        v47 = lreadbytes(*v113, ptr, (signed int)v44, *v114);
        if ( v47 < 0 )
        {
          v48 = *v107;
          v49 = qlseek(*v113, 0, 1);
          v48(v108, 19, (int)v44, v47, v49, HIDWORD(v49));
        }
        if ( v109 == 2 )
          memrev((char *)ptr, (int)v44);
        v50 = (_DWORD *)*v102;
        v51 = *v102 + (v102[1] << 6);
        if ( *v102 >= v51 )
        {
          v16 = v108;
        }
        else
        {
          v17 = (int)v128[6];
          v16 = v108;
          do
          {
            v19 = v50[9];
            if ( (void *)v19 == v128[6] )
              break;
            v50 += 16;
          }
          while ( (unsigned int)v50 < v51 );
        }
        if ( v50 != (_DWORD *)v51 )
        {
          v123 = (unsigned int)ptr;
          v110 = &v126[(_DWORD)ptr];
          v52 = v50[7];
          if ( v52 )
            v61 = (int *)v50[6];
          else
            v61 = dword_B3DF8;
          if ( *(_BYTE *)v61 != 122 )
            goto LABEL_78;
          if ( unpack_xleb128(&v122, 32, 0, (_BYTE **)&v123, (unsigned int)v110) )
          {
            if ( v122 > (unsigned int)&v110[-v123] )
              v122 = (unsigned int)&v110[-v123];
            v128[1] = nullptr;
            ((void (__fastcall *)(void **))loc_30B84)(v128);
            v123 += v122;
            v52 = v50[7];
LABEL_78:
            if ( v52 < 2 || (v62 = v50[6], (v63 = strchr((const char *)(v62 + 1), 82)) == nullptr) )
            {
              v64 = (char *)v143[0];
              goto LABEL_83;
            }
            v64 = (char *)v143[0];
            v65 = (char *)v143[0] + v118;
            if ( &v63[-v62] == (char *)-1 )
LABEL_83:
              v65 = v64;
            v128[7] = v65;
            v128[8] = &v65[v124];
            v119 = v128[10];
            v103 = v50;
            if ( v128[10] )
            {
              v66 = 8;
              do
              {
                v67 = (char *)v128[9];
                v68 = *(void **)((char *)v128[9] + v66 - 8);
                v69 = (char *)v128[9] + v66 - 8;
                if ( v68 )
                {
                  *(_DWORD *)((char *)v128[9] + v66 - 4) = 0;
                  qfree(v68);
                  *v69 = 0;
                  *(_DWORD *)&v67[v66] = 0;
                }
                v66 += 28;
                ++v35;
              }
              while ( v35 < (unsigned int)v119 );
              v65 = (char *)v128[7];
              v16 = v108;
              v50 = v103;
            }
            v128[10] = nullptr;
            v122 = (unsigned int)v65;
            v70 = (unsigned int)v110;
            while ( v123 < v70 )
            {
              sub_30F28((int)v129, (int)v50);
              v71 = sub_30C14((int)&v128[9], (unsigned __int8 **)&v123, v70, (int)v129, v109 == 2, &v122);
              if ( v133 )
              {
                v134 = 0;
                qfree(v133);
                v135 = 0;
                v133 = nullptr;
              }
              v112 = v71;
              v72 = v130;
              if ( v130 )
              {
                v120 = v131;
                if ( v131 )
                {
                  v73 = 1;
                  for ( i = 8; ; i += 28 )
                  {
                    v75 = *(void **)&v72[i - 8];
                    if ( v75 )
                    {
                      *(_DWORD *)&v72[i - 4] = 0;
                      qfree(v75);
                      *(_DWORD *)&v72[i - 8] = 0;
                      *(_DWORD *)&v72[i] = 0;
                    }
                    if ( v73 >= v120 )
                      break;
                    ++v73;
                    v72 = v130;
                  }
                  v72 = v130;
                  v16 = v108;
                  v50 = v103;
                  v70 = (unsigned int)v110;
                }
                v131 = 0;
                qfree(v72);
                v132 = 0;
                v130 = nullptr;
              }
              if ( v129[0] )
              {
                v129[1] = nullptr;
                qfree(v129[0]);
                v129[2] = nullptr;
                v129[0] = nullptr;
              }
              if ( !v112 )
                goto LABEL_24;
            }
LABEL_107:
            sub_309EC(a3, (int)v128);
            v17 = (int)v128[4];
            v128[3] = (char *)v128[3] + (unsigned int)v128[4] + 4;
            v16 = v108;
            v20 = v113;
LABEL_149:
            v36 = 0;
            goto LABEL_150;
          }
        }
      }
LABEL_24:
      v36 = 1;
      v20 = v113;
LABEL_150:
      if ( ptr )
      {
        v126 = nullptr;
        qfree(ptr);
        v127 = 0;
        ptr = nullptr;
      }
      if ( !v36 )
      {
        v17 = *(_DWORD *)(v105 + 4);
        v19 = (int)v128[3];
        v18 = (void **)(((unsigned __int64)v128[3] - *(_QWORD *)v105) >> 32);
        if ( (unsigned __int64)(int)v128[3] < *(_QWORD *)v105 )
          continue;
      }
      goto LABEL_154;
    }
    memset(v143, 0, 0x3Du);
    v143[11] = nullptr;
    v143[10] = v128[4];
    v143[9] = v128[3];
    v37 = lreadbytes(*v20, &v143[15], 1, *v114);
    if ( v37 < 0 )
    {
      v38 = *v107;
      v39 = qlseek(*v20, 0, 1);
      v38(v16, 19, 1, v37, v39, HIDWORD(v39));
    }
    v40 = 1;
    if ( (int)v143[10] >= 5 )
    {
      v41 = (char *)v143[10] - 5;
      v42 = v126;
      if ( v126 >= (char *)v143[10] - 5 )
      {
        if ( v126 != (char *)v143[10] - 5 )
        {
          LOBYTE(v124) = 0;
          sub_370F6(&ptr, (unsigned int)v41, &v124);
          v20 = v113;
        }
      }
      else
      {
        v43 = ptr;
        if ( v127 < (unsigned int)v41 )
        {
          v43 = qvector_reserve((int)&ptr, ptr, (unsigned int)v41, 1u);
          ptr = v43;
          v42 = v126;
          v20 = v113;
        }
        memset(&v42[(_DWORD)v43], 0, v41 - v42);
        v126 = v41;
      }
      v53 = lreadbytes(*v20, ptr, (signed int)v41, *v114);
      if ( v53 < 0 )
      {
        v54 = *v107;
        v55 = qlseek(*v113, 0, 1);
        v54(v16, 19, (int)v41, v53, v55, HIDWORD(v55));
      }
      if ( v109 == 2 )
        memrev((char *)ptr, (int)v41);
      v143[7] = nullptr;
      v56 = (unsigned __int8 *)ptr;
      v124 = (unsigned int)ptr;
      v111 = &v126[(_DWORD)ptr];
      if ( ptr < &v126[(int)ptr] )
      {
        do
        {
          v124 = (unsigned int)(v56 + 1);
          v57 = (char *)v143[7] - 1;
          if ( !v143[7] )
            v57 = nullptr;
          v58 = *v56;
          v59 = v143[6];
          if ( v143[8] < v57 + 2 )
          {
            v59 = qvector_reserve((int)&v143[6], v143[6], (unsigned int)(v57 + 2), 1u);
            v143[6] = v59;
          }
          v143[7] = v57 + 2;
          v57[(_DWORD)v59] = v58;
          *((_BYTE *)v143[6] + (unsigned int)v57 + 1) = 0;
          if ( !v58 )
            break;
          v56 = (unsigned __int8 *)v124;
        }
        while ( v124 < (unsigned int)v111 );
      }
      v20 = v113;
      v40 = 1;
      if ( unpack_xleb128(&v143[12], 32, 0, (_BYTE **)&v124, (unsigned int)v111) )
      {
        if ( unpack_xleb128(&v143[13], 32, 1, (_BYTE **)&v124, (unsigned int)v111) )
        {
          v60 = 0;
          if ( unpack_xleb128(&v143[14], 32, 0, (_BYTE **)&v124, (unsigned int)v111) )
          {
            if ( v143[7] )
              v76 = (char *)v143[6];
            else
              v76 = byte_DE331;
            if ( *v76 == 122 )
            {
              if ( !unpack_xleb128(&v123, 32, 0, (_BYTE **)&v124, (unsigned int)v111) )
              {
                v40 = 1;
                goto LABEL_135;
              }
              ((void (__fastcall *)(void **, unsigned int, unsigned int))loc_30B84)(v143, v124, v123);
              v124 += v123;
            }
            v115 = v143[4];
            if ( v143[4] )
            {
              v77 = 8;
              do
              {
                v78 = (char *)v143[3];
                v79 = *(void **)((char *)v143[3] + v77 - 8);
                v80 = (char *)v143[3] + v77 - 8;
                if ( v79 )
                {
                  *(_DWORD *)((char *)v143[3] + v77 - 4) = 0;
                  qfree(v79);
                  *v80 = 0;
                  *(_DWORD *)&v78[v77] = 0;
                }
                v77 += 28;
                ++v60;
              }
              while ( v60 < (unsigned int)v115 );
            }
            v143[4] = nullptr;
            v16 = v108;
            v20 = v113;
            v40 = 1;
            while ( v124 < (unsigned int)v111 )
            {
              sub_30F28((int)v136, (int)v143);
              v81 = sub_30C14(
                      (int)&v143[3],
                      (unsigned __int8 **)&v124,
                      (unsigned int)v111,
                      (int)v136,
                      v109 == 2,
                      nullptr);
              if ( v140 )
              {
                v141 = 0;
                qfree(v140);
                v142 = 0;
                v140 = nullptr;
              }
              v100 = v81;
              v82 = v137;
              if ( v137 )
              {
                v116 = v138;
                if ( v138 )
                {
                  v83 = 1;
                  for ( j = 8; ; j += 28 )
                  {
                    v85 = *(void **)&v82[j - 8];
                    if ( v85 )
                    {
                      *(_DWORD *)&v82[j - 4] = 0;
                      qfree(v85);
                      *(_DWORD *)&v82[j - 8] = 0;
                      *(_DWORD *)&v82[j] = 0;
                    }
                    if ( v83 >= v116 )
                      break;
                    ++v83;
                    v82 = v137;
                  }
                  v82 = v137;
                  v16 = v108;
                  v40 = 1;
                }
                v138 = 0;
                qfree(v82);
                v139 = 0;
                v137 = nullptr;
              }
              v20 = v113;
              if ( v136[0] )
              {
                v136[1] = nullptr;
                qfree(v136[0]);
                v136[2] = nullptr;
                v136[0] = nullptr;
              }
              if ( !v100 )
                goto LABEL_135;
            }
            sub_30FC8((int)v102, (int)v143);
            v17 = (int)v143[10];
            v128[3] = (char *)v128[3] + (unsigned int)v143[10] + 4;
            v40 = 0;
          }
        }
      }
    }
LABEL_135:
    if ( v143[6] )
    {
      v143[7] = nullptr;
      qfree(v143[6]);
      v143[8] = nullptr;
      v143[6] = nullptr;
    }
    v104 = v40;
    v86 = (char *)v143[3];
    if ( v143[3] )
    {
      v117 = v143[4];
      if ( v143[4] )
      {
        v87 = 1;
        for ( k = 8; ; k += 28 )
        {
          v89 = *(void **)&v86[k - 8];
          if ( v89 )
          {
            *(_DWORD *)&v86[k - 4] = 0;
            qfree(v89);
            *(_DWORD *)&v86[k - 8] = 0;
            *(_DWORD *)&v86[k] = 0;
          }
          if ( v87 >= (unsigned int)v117 )
            break;
          ++v87;
          v86 = (char *)v143[3];
        }
        v86 = (char *)v143[3];
        v16 = v108;
        v20 = v113;
      }
      v143[4] = nullptr;
      qfree(v86);
      v143[5] = nullptr;
      v143[3] = nullptr;
    }
    v36 = v104;
    if ( v143[0] )
    {
      v143[1] = nullptr;
      qfree(v143[0]);
      v143[2] = nullptr;
      v143[0] = nullptr;
    }
    if ( v104 )
      goto LABEL_150;
    goto LABEL_149;
  }
LABEL_154:
  v90 = (char *)v128[9];
  if ( v128[9] )
  {
    v121 = v128[10];
    if ( v128[10] )
    {
      v91 = 1;
      for ( m = 8; ; m += 28 )
      {
        v93 = *(void **)&v90[m - 8];
        if ( v93 )
        {
          *(_DWORD *)&v90[m - 4] = 0;
          qfree(v93);
          *(_DWORD *)&v90[m - 8] = 0;
          *(_DWORD *)&v90[m] = 0;
        }
        if ( v91 >= (unsigned int)v121 )
          break;
        ++v91;
        v90 = (char *)v128[9];
      }
      v90 = (char *)v128[9];
    }
    v128[10] = nullptr;
    qfree(v90);
    v128[11] = nullptr;
    v128[9] = nullptr;
  }
  v94 = v128[0];
  if ( v128[0] )
  {
    v128[1] = nullptr;
    qfree(v128[0]);
    v94 = nullptr;
    v128[2] = nullptr;
    v128[0] = nullptr;
  }
  sub_3072A((int)v94, v17, v19, (int)v18, a5, a6, a7, a8, a9);
}
// 2FECA: variable 'v95' is possibly undefined
// 2FECA: variable 'v96' is possibly undefined
// 2FECA: variable 'v97' is possibly undefined
// 2FECA: variable 'v98' is possibly undefined
// 2FECA: variable 'v99' is possibly undefined
// 2FECE: variable 'a2' is possibly undefined
// 2FED2: variable 'a1' is possibly undefined
// 2FEE0: variable 'v9' is possibly undefined
// 2FEE2: variable 'a4' is possibly undefined
// 3071A: variable 'v17' is possibly undefined
// 3071A: variable 'v19' is possibly undefined
// 3071A: variable 'v18' is possibly undefined
// B3DF8: using guessed type int dword_B3DF8[41];
