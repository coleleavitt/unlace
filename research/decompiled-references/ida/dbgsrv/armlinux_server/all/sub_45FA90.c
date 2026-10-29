/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45FA90
// Address: 0x000000000045FA90

//----- (000000000045FA90) ----------------------------------------------------
unsigned __int64 __fastcall sub_45FA90(
        __int64 a1,
        void *a2,
        unsigned int a3,
        int a4,
        signed int **a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8,
        __int64 *a9,
        unsigned int a10)
{
  _QWORD *v11; // x24
  _DWORD *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x23
  __int64 v16; // x26
  __int64 v17; // x0
  __int64 v18; // x1
  _QWORD *v19; // x26
  _BOOL4 v20; // w0
  __int64 v21; // x0
  unsigned __int64 v22; // x26
  unsigned __int64 v23; // x2
  char *v24; // x25
  void **v25; // x19
  __int64 v26; // x0
  int v27; // w23
  unsigned __int64 v28; // x25
  char *v29; // x0
  unsigned __int64 v30; // x3
  __int64 v31; // x28
  char *v32; // x26
  __int64 v33; // x1
  int v34; // w0
  size_t v35; // x22
  const char *v36; // x19
  size_t v37; // x23
  void *v38; // x0
  unsigned __int64 v39; // x23
  char *v41; // x27
  __int64 v42; // x22
  __int64 v43; // x24
  __int64 i; // x23
  char *v45; // x0
  char *v46; // x27
  __int64 v47; // x28
  __int64 j; // x25
  char *v49; // x2
  void *v50; // x0
  __int64 v51; // x24
  __int64 v52; // x24
  _QWORD *v53; // x26
  char *v54; // x27
  char *v55; // x1
  __int64 v56; // x22
  __int64 k; // x28
  char *v58; // x3
  void *v59; // x0
  __int64 (__fastcall *v60)(__int64, void **); // x2
  unsigned __int64 v61; // x25
  __int64 v62; // x26
  __int64 v63; // x27
  __int64 v64; // x1
  void *v65; // x0
  int v66; // w0
  __int64 v67; // x2
  unsigned __int64 v68; // x26
  size_t v69; // x28
  unsigned __int64 v70; // x27
  size_t v71; // x28
  __int64 v72; // x1
  unsigned __int64 v73; // x26
  unsigned __int64 v74; // x1
  int v75; // w1
  void *v76; // x0
  unsigned __int64 v77; // x26
  __int64 v78; // x28
  __int64 *v79; // x27
  int v80; // w0
  size_t v81; // x22
  void *v82; // x0
  int v83; // w3
  __int64 v84; // x0
  __int64 (*v85)(); // x4
  int v86; // w25
  void *v87; // x1
  int v88; // w25
  void *v89; // x0
  char *v90; // x0
  unsigned __int64 v91; // x22
  unsigned __int64 v92; // x22
  int *v93; // x27
  signed int v94; // w26
  __int64 v95; // x28
  __int64 v96; // x0
  int v97; // w1
  bool v98; // zf
  unsigned int v99; // w1
  void *v101; // x0
  unsigned __int64 v102; // x25
  __int64 v103; // x0
  int *v104; // x25
  void *v105; // x27
  __int64 v106; // x0
  __int64 v107; // x1
  int v108; // w1
  int v109; // w0
  signed __int64 v110; // x27
  void *v111; // x3
  void *v112; // x0
  int v113; // w25
  unsigned __int64 v114; // x2
  void *v115; // x0
  void *v116; // x0
  void *v117; // x0
  unsigned __int64 v118; // x2
  char *v119; // x0
  unsigned __int64 v120; // x2
  char *v121; // x0
  void *v122; // x0
  __int64 v123; // x0
  int v124; // w2
  int *v125; // x26
  _DWORD *v126; // x25
  __int64 v127; // x0
  __int64 v128; // x1
  int v129; // w0
  signed __int64 v130; // x27
  void *v131; // x25
  void *v132; // x0
  __int64 v133; // x0
  int v134; // w2
  int *v135; // x26
  _DWORD *v136; // x25
  __int64 v137; // x0
  __int64 v138; // x1
  int v139; // w0
  signed __int64 v140; // x27
  void *v141; // x25
  void *v142; // x0
  int *v143; // x25
  void *v144; // x0
  void *v145; // x0
  void *v146; // x0
  void *v147; // x0
  void *v148; // x1
  void *v149; // x0
  __int64 v150; // x2
  void *v151; // x0
  void *v152; // x1
  void *v153; // x0
  __int64 *v154; // x1
  int v155; // w28
  int v156; // w26
  int v157; // w0
  int v158; // w0
  void *v159; // x0
  bool v160; // zf
  __int64 v161; // x1
  unsigned __int64 m; // x19
  int *v163; // x20
  char *v164; // x1
  const void *v165; // x1
  unsigned __int64 v166; // x19
  const void *v167; // x25
  void *v168; // x0
  __syscall_slong_t v172; // [xsp+78h] [xbp-138h]
  __int64 v173; // [xsp+80h] [xbp-130h]
  _QWORD *v176; // [xsp+A0h] [xbp-110h]
  void *v177; // [xsp+A0h] [xbp-110h]
  void *v178; // [xsp+A0h] [xbp-110h]
  int v180; // [xsp+ACh] [xbp-104h]
  void *v181; // [xsp+B8h] [xbp-F8h]
  void *v182; // [xsp+C0h] [xbp-F0h] BYREF
  unsigned __int64 v183; // [xsp+C8h] [xbp-E8h]
  unsigned __int64 v184; // [xsp+D0h] [xbp-E0h]
  char *v185[3]; // [xsp+D8h] [xbp-D8h] BYREF
  __int64 v186; // [xsp+F0h] [xbp-C0h] BYREF
  int v187; // [xsp+F8h] [xbp-B8h] BYREF
  __int64 v188; // [xsp+100h] [xbp-B0h]
  int *v189; // [xsp+108h] [xbp-A8h]
  int *v190; // [xsp+110h] [xbp-A0h]
  __int64 v191; // [xsp+118h] [xbp-98h]
  int v192; // [xsp+120h] [xbp-90h] BYREF
  void *v193; // [xsp+128h] [xbp-88h] BYREF
  unsigned __int64 v194; // [xsp+130h] [xbp-80h]
  __int64 v195; // [xsp+138h] [xbp-78h]
  int v196; // [xsp+140h] [xbp-70h] BYREF
  void *ptr; // [xsp+148h] [xbp-68h]
  size_t v198; // [xsp+150h] [xbp-60h]
  __int64 v199; // [xsp+158h] [xbp-58h]
  __int64 v200; // [xsp+160h] [xbp-50h] BYREF
  void *src; // [xsp+168h] [xbp-48h]
  size_t v202; // [xsp+170h] [xbp-40h]
  __int64 v203; // [xsp+178h] [xbp-38h]
  __int64 v204; // [xsp+180h] [xbp-30h]
  __int64 v205; // [xsp+188h] [xbp-28h]
  __int64 v206; // [xsp+190h] [xbp-20h]
  __int64 v207; // [xsp+198h] [xbp-18h]
  __int64 v208; // [xsp+1A0h] [xbp-10h]

  v11 = (_QWORD *)(a1 + 344);
  v13 = (_DWORD *)(a1 + 344);
  v192 = -2;
  v14 = *(_QWORD *)(a1 + 352);
  v193 = (void *)-1LL;
  v194 = 0;
  v195 = 0;
  if ( !v14 )
    goto LABEL_6;
  do
  {
    while ( (signed int)a3 <= *(_DWORD *)(v14 + 32) )
    {
      v13 = (_DWORD *)v14;
      v14 = *(_QWORD *)(v14 + 16);
      if ( !v14 )
        goto LABEL_4;
    }
    v14 = *(_QWORD *)(v14 + 24);
  }
  while ( v14 );
LABEL_4:
  if ( v11 == (_QWORD *)v13 || (v15 = (__int64)(v13 + 10), (signed int)a3 < v13[8]) )
  {
LABEL_6:
    v16 = (__int64)v13;
    v13 = sub_49E050(0x40u);
    v15 = (__int64)(v13 + 10);
    v13[8] = a3;
    *((_QWORD *)v13 + 5) = 0;
    *((_QWORD *)v13 + 6) = 0;
    *((_QWORD *)v13 + 7) = 0;
    v17 = sub_45F748((_QWORD *)(a1 + 336), v16, v13 + 8);
    v19 = (_QWORD *)v17;
    if ( !v18 )
    {
      v41 = *((char **)v13 + 5);
      if ( v41 )
      {
        v42 = *((_QWORD *)v13 + 6);
        if ( v42 )
        {
          v43 = 0;
          for ( i = 0; i != v42; ++i )
          {
            v45 = *(char **)&v41[v43];
            v46 = &v41[v43];
            if ( v45 )
            {
              v47 = *((_QWORD *)v46 + 1);
              if ( v47 )
              {
                for ( j = 0; j != v47; ++j )
                {
                  v49 = &v45[32 * j];
                  if ( *(int *)v49 >= -1 )
                  {
                    v50 = *((void **)v49 + 1);
                    if ( v50 )
                    {
                      *((_QWORD *)v49 + 2) = 0;
                      j__free(v50);
                    }
                  }
                  v45 = *(char **)v46;
                }
              }
              *((_QWORD *)v46 + 1) = 0;
              j__free(v45);
            }
            v43 += 48;
            v41 = *((char **)v13 + 5);
          }
        }
        *((_QWORD *)v13 + 6) = 0;
        j__free(v41);
      }
      v15 = (__int64)(v19 + 5);
      j__free_0(v13);
      v13 = v19;
      v21 = v19[6];
      v22 = v19[7];
      v23 = v21 + 1;
      if ( v21 + 1 <= v22 )
        goto LABEL_13;
      goto LABEL_62;
    }
    v20 = v17 != 0;
    if ( v11 == (_QWORD *)v18 )
      v20 = 1;
    if ( !v20 )
      LOBYTE(v20) = v13[8] < *(_DWORD *)(v18 + 32);
    sub_49F830(v20, (__int64)v13, (_QWORD *)v18, v11);
    ++*(_QWORD *)(a1 + 376);
  }
  v21 = *(_QWORD *)(v15 + 8);
  v22 = *(_QWORD *)(v15 + 16);
  v23 = v21 + 1;
  if ( v21 + 1 <= v22 )
  {
LABEL_13:
    v24 = *((char **)v13 + 5);
    goto LABEL_14;
  }
LABEL_62:
  v24 = (char *)sub_491288(v15, nullptr, v23, 0x30u);
  v51 = *(_QWORD *)(v15 + 8);
  v177 = *(void **)(v15 + 16);
  *(_QWORD *)(v15 + 16) = v22;
  v52 = v51 - 1;
  v53 = *((_QWORD **)v13 + 5);
  if ( v52 >= 0 )
  {
    v54 = v24;
    do
    {
      *(_QWORD *)v54 = *v53;
      *v53 = 0;
      *((_QWORD *)v54 + 1) = v53[1];
      v53[1] = 0;
      *((_QWORD *)v54 + 2) = v53[2];
      v53[2] = 0;
      *((_QWORD *)v54 + 3) = v53[3];
      *((_QWORD *)v54 + 4) = v53[4];
      v54[40] = *((_BYTE *)v53 + 40);
      v55 = (char *)*v53;
      if ( *v53 )
      {
        v56 = v53[1];
        if ( v56 )
        {
          for ( k = 0; k != v56; ++k )
          {
            v58 = &v55[32 * k];
            if ( *(int *)v58 >= -1 )
            {
              v59 = *((void **)v58 + 1);
              if ( v59 )
              {
                *((_QWORD *)v58 + 2) = 0;
                j__free(v59);
                v55 = (char *)*v53;
              }
            }
          }
        }
        v53[1] = 0;
        j__free(v55);
      }
      --v52;
      v53 += 6;
      v54 += 48;
    }
    while ( v52 != -1 );
    v53 = *((_QWORD **)v13 + 5);
  }
  j__free(v53);
  *((_QWORD *)v13 + 5) = v24;
  *(_QWORD *)(v15 + 16) = v177;
  v21 = *(_QWORD *)(v15 + 8);
LABEL_14:
  v25 = (void **)&v24[48 * v21];
  *v25 = nullptr;
  v25[1] = nullptr;
  v25[2] = nullptr;
  v25[3] = (void *)-1LL;
  v25[4] = (void *)-1LL;
  *((_BYTE *)v25 + 40) = 0;
  v187 = 0;
  v26 = *(_QWORD *)(v15 + 8);
  v188 = 0;
  v189 = &v187;
  *(_QWORD *)(v15 + 8) = v26 + 1;
  v190 = &v187;
  v191 = 0;
  if ( (*(_DWORD *)(a1 + 220) & 0xFFFFFFF) == 7 )
  {
    v37 = 54;
    v36 = "last event was an exception, cannot perform an appcall";
    goto LABEL_38;
  }
  v27 = *(_QWORD *)(a1 + 680);
  if ( !*(_QWORD *)(a1 + 680) )
    v27 = *(_DWORD *)(a1 + 776);
  if ( (void *)v27 != v25[1] )
  {
    v198 = 0;
    v199 = 0;
    ptr = (void *)-1LL;
    v28 = (unsigned __int64)v25[1];
    v196 = -2;
    if ( v27 < v28 )
    {
      v62 = 32LL * v27;
      v63 = v27;
      do
      {
        v64 = (__int64)*v25 + v62;
        if ( *(int *)v64 >= -1 )
        {
          v65 = *(void **)(v64 + 8);
          if ( v65 )
          {
            *(_QWORD *)(v64 + 16) = 0;
            j__free(v65);
          }
        }
        ++v63;
        v62 += 32;
      }
      while ( v28 != v63 );
    }
    else
    {
      if ( v27 <= v28 )
        goto LABEL_36;
      v29 = (char *)*v25;
      v30 = (unsigned __int64)v25[2];
      if ( *v25 <= &v196 && &v196 < (int *)&v29[32 * v30] )
      {
        LODWORD(v200) = -2;
        src = (void *)-1LL;
        v202 = 0;
        v203 = 0;
        if ( v27 > (unsigned __int64)v25[2] )
          *v25 = sub_491288((__int64)v25, *v25, v27, 0x20u);
        v77 = (unsigned __int64)v25[1];
        if ( v27 > v77 )
        {
          v78 = 32 * v77;
          do
          {
            v79 = (__int64 *)((char *)*v25 + v78);
            *(_DWORD *)v79 = -2;
            v79[1] = 0;
            v79[2] = 0;
            v79[3] = 0;
            if ( v79 != &v200 )
            {
              v80 = v200;
              if ( (int)v200 < -1 )
              {
                v79[1] = (__int64)src;
              }
              else
              {
                v79[1] = 0;
                v79[2] = 0;
                v81 = v202;
                if ( v202 )
                {
                  v82 = sub_491248(v202);
                  v79[1] = (__int64)v82;
                  v79[3] = v81;
                  memcpy(v82, src, v81);
                  v79[2] = v81;
                  v80 = v200;
                }
              }
              *(_DWORD *)v79 = v80;
            }
            ++v77;
            v78 += 32;
          }
          while ( v27 != v77 );
        }
        v25[1] = (void *)v27;
        if ( (int)v200 >= -1 && src )
        {
          v202 = 0;
          j__free(src);
        }
        goto LABEL_33;
      }
      if ( v27 <= v30
        || (v29 = (char *)sub_491288((__int64)v25, *v25, v27, 0x20u),
            v28 = (unsigned __int64)v25[1],
            *v25 = v29,
            v27 > v28) )
      {
        v31 = 32 * v28;
        while ( 1 )
        {
          v32 = &v29[v31];
          *(_DWORD *)&v29[v31] = -2;
          v33 = (__int64)&v29[v31 + 8];
          v176 = (_QWORD *)v33;
          *((_QWORD *)v32 + 1) = 0;
          *((_QWORD *)v32 + 2) = 0;
          *(_QWORD *)&v29[v31 + 24] = 0;
          if ( &v29[v31] != (char *)&v196 )
          {
            v34 = v196;
            if ( v196 < -1 )
            {
              *((_QWORD *)v32 + 1) = ptr;
            }
            else
            {
              *((_QWORD *)v32 + 1) = 0;
              *(_QWORD *)(v33 + 8) = 0;
              v35 = v198;
              if ( v198 )
              {
                v76 = sub_491248(v198);
                *((_QWORD *)v32 + 1) = v76;
                v176[2] = v35;
                memcpy(v76, ptr, v35);
                *((_QWORD *)v32 + 2) = v35;
                v34 = v196;
              }
            }
            *(_DWORD *)v32 = v34;
          }
          ++v28;
          v31 += 32;
          if ( v27 <= v28 )
            break;
          v29 = (char *)*v25;
        }
      }
    }
    v25[1] = (void *)v27;
LABEL_33:
    if ( v196 >= -1 && ptr )
    {
      v198 = 0;
      j__free(ptr);
    }
  }
LABEL_36:
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, void *, _QWORD))(*(_QWORD *)a1 + 224LL))(
         a1,
         a3,
         0xFFFFFFFFLL,
         *v25,
         0) != 1 )
  {
    v36 = "failed to read registers";
    v37 = 24;
LABEL_38:
    v38 = *(void **)a8;
    if ( v37 + 1 > *(_QWORD *)(a8 + 16) )
    {
      v38 = sub_491288(a8, *(void **)a8, v37 + 1, 1u);
      *(_QWORD *)a8 = v38;
    }
    *(_QWORD *)(a8 + 8) = v37 + 1;
    memmove(v38, v36, v37);
    *(_BYTE *)(*(_QWORD *)a8 + v37) = 0;
    goto LABEL_41;
  }
  v60 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 456LL);
  if ( (char *)v60 == (char *)sub_45B698 )
    v61 = *((_QWORD *)*v25 + 4 * *(int *)(a1 + 780) + 1);
  else
    v61 = v60(a1, v25);
  if ( v61 == -1 )
  {
    v37 = 30;
    v36 = "failed to allocate stack frame";
    goto LABEL_38;
  }
  v66 = *(_DWORD *)(a1 + 276);
  v182 = nullptr;
  v183 = 0;
  v67 = a6[1];
  v184 = 0;
  v68 = -v66 & (unsigned __int64)(v67 + v66 - 1);
  v39 = (v61 - v66 - v68) & 0xFFFFFFFFFFFFFFF0LL;
  v25[4] = (void *)(v39 + v68);
  v180 = (unsigned __int8)sub_49AD60(a6, v39, 0);
  if ( !v180 )
  {
    if ( v182 )
    {
      v183 = 0;
      j__free(v182);
      v75 = 4;
      goto LABEL_98;
    }
    v113 = 4;
LABEL_251:
    v36 = off_51AB98[v113];
    if ( !v36 )
      goto LABEL_100;
    goto LABEL_99;
  }
  v69 = *(int *)(a1 + 276);
  v70 = v183;
  if ( *(_DWORD *)(a1 + 276) )
  {
    v92 = v69 + v183;
    if ( v69 + v183 >= v183 )
    {
      if ( v69 + v183 <= v183 )
      {
LABEL_134:
        memcpy((char *)v182 + v70, v25 + 4, v69);
        v70 = v183;
        goto LABEL_89;
      }
    }
    else
    {
      if ( v183 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v183 & 0x8000000000000000LL) != 0 )
          v183 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_134;
      }
      v92 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v120 = v183;
    v121 = (char *)v182;
    if ( v184 < v92 )
    {
      v121 = (char *)sub_491288((__int64)&v182, v182, v92, 1u);
      v120 = v183;
      v182 = v121;
    }
    memset(&v121[v120], 0, v92 - v120);
    v183 = v92;
    goto LABEL_134;
  }
LABEL_89:
  v71 = a6[1];
  if ( !v71 )
    goto LABEL_90;
  v91 = v71 + v70;
  v178 = (void *)*a6;
  if ( v71 + v70 < v70 )
  {
    if ( v70 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v70 & 0x8000000000000000LL) != 0 )
        v183 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_129;
    }
    v91 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_198:
    v118 = v70;
    v119 = (char *)v182;
    if ( v184 < v91 )
    {
      v119 = (char *)sub_491288((__int64)&v182, v182, v91, 1u);
      v118 = v183;
      v182 = v119;
    }
    memset(&v119[v118], 0, v91 - v118);
    v183 = v91;
    goto LABEL_129;
  }
  if ( v71 + v70 > v70 )
    goto LABEL_198;
LABEL_129:
  memcpy((char *)v182 + v70, v178, v71);
  v70 = v183;
LABEL_90:
  v72 = *(int *)(a1 + 276);
  v73 = v72 + v68;
  if ( v73 > v70 )
  {
    v90 = (char *)v182;
    if ( v73 > v184 )
    {
      v90 = (char *)sub_491288((__int64)&v182, v182, v73, 1u);
      v70 = v183;
      v182 = v90;
    }
    memset(&v90[v70], 0, v73 - v70);
    v72 = *(int *)(a1 + 276);
    v183 = v73;
  }
  else if ( v73 < v70 )
  {
    v183 = v73;
  }
  v74 = v39 - v72;
  v25[3] = (void *)v74;
  if ( v74 < v61 )
  {
    v83 = 0;
    v84 = 0;
    v85 = *(__int64 (**)())(*(_QWORD *)a1 + 448LL);
    if ( v85 != sub_45B640 )
    {
      v83 = ((__int64 (__fastcall *)(__int64, void **, __int64 *, void **))v85)(a1, v25, &v186, &v182);
      v74 = (unsigned __int64)v25[3];
      v84 = v83;
    }
    v86 = v183;
    v87 = (void *)(v74 + v84);
    v25[3] = v87;
    v88 = v86 - v83;
    if ( v88 > 0
      && v88 != (*(__int64 (__fastcall **)(__int64, void *, char *, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
                  a1,
                  v87,
                  (char *)v182 + v84,
                  v88,
                  0) )
    {
      v89 = v182;
      if ( v182 )
      {
LABEL_121:
        v183 = 0;
        j__free(v89);
        v75 = 5;
        goto LABEL_98;
      }
      v113 = 5;
      goto LABEL_251;
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64, void *, __int64))(*(_QWORD *)a1 + 312LL))(
      a1,
      0,
      4,
      v25[4],
      0xFFFFFFFFLL);
    if ( a5[1] )
    {
      v93 = *a5;
      v94 = **a5;
      if ( v94 == *(_DWORD *)(a1 + 780) || v94 == *(_DWORD *)(a1 + 784) )
      {
LABEL_171:
        v113 = 3;
        if ( v182 )
        {
          v183 = 0;
          j__free(v182);
          v75 = 3;
          goto LABEL_98;
        }
        goto LABEL_251;
      }
      v95 = 0;
      while ( 1 )
      {
        v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 608LL))(a1, (unsigned int)v94);
        v97 = *(unsigned __int8 *)(v96 + 13);
        v98 = v97 == 15 || v97 == 18;
        v99 = (unsigned __int8)(v97 - 3);
        if ( v98 || v99 <= 2 )
          break;
        v114 = *((_QWORD *)v93 + 2);
        if ( v114 > 8 || (*(_DWORD *)(v96 + 8) & 0x100) != 0 )
        {
          if ( v192 >= -1 && v193 )
          {
            v194 = 0;
            j__free(v193);
          }
          v193 = nullptr;
          v194 = 0;
          v101 = nullptr;
          v195 = 0;
          v192 = 0;
          v102 = *((_QWORD *)v93 + 2);
          if ( v102 )
          {
LABEL_186:
            v193 = sub_491288((__int64)&v193, nullptr, v102, 1u);
            memset((char *)v193 + v194, 0, v102 - v194);
            v194 = v102;
            v101 = v193;
            v102 = *((_QWORD *)v93 + 2);
          }
LABEL_150:
          memcpy(v101, *((const void **)v93 + 1), v102);
          goto LABEL_151;
        }
        if ( v192 >= -1 )
        {
          if ( v193 )
          {
            v194 = 0;
            j__free(v193);
            v114 = *((_QWORD *)v93 + 2);
          }
          v192 = -2;
        }
        __memcpy_chk(&v193, *((_QWORD *)v93 + 1), v114, 24);
        if ( v93[1] )
          v193 = (char *)v193 + v39;
LABEL_151:
        v103 = v188;
        v104 = &v187;
        if ( !v188 )
          goto LABEL_157;
        do
        {
          if ( v94 > *(_DWORD *)(v103 + 32) )
          {
            v103 = *(_QWORD *)(v103 + 24);
          }
          else
          {
            v104 = (int *)v103;
            v103 = *(_QWORD *)(v103 + 16);
          }
        }
        while ( v103 );
        if ( v104 == &v187 || v94 < v104[8] )
        {
LABEL_157:
          v105 = sub_49E050(0x48u);
          *((_QWORD *)v105 + 7) = 0;
          *((_QWORD *)v105 + 8) = 0;
          *((_DWORD *)v105 + 8) = v94;
          *((_DWORD *)v105 + 10) = -2;
          *((_QWORD *)v105 + 6) = -1;
          v106 = sub_45F948(&v186, (__int64)v104, (int *)v105 + 8);
          v104 = (int *)v106;
          if ( v107 )
          {
            v104 = (int *)sub_45F630((__int64)&v186, v106, v107, (__int64)v105);
          }
          else
          {
            if ( *((int *)v105 + 10) >= -1 )
            {
              v116 = *((void **)v105 + 6);
              if ( v116 )
              {
                *((_QWORD *)v105 + 7) = 0;
                j__free(v116);
              }
            }
            j__free_0(v105);
          }
        }
        if ( &v192 != v104 + 10 )
        {
          v108 = v192;
          v109 = v104[10];
          if ( v192 < -1 )
          {
            if ( v109 >= -1 )
            {
              v115 = *((void **)v104 + 6);
              if ( v115 )
              {
                *((_QWORD *)v104 + 7) = 0;
                j__free(v115);
                v108 = v192;
              }
            }
            *((_QWORD *)v104 + 6) = v193;
          }
          else
          {
            v110 = v194;
            if ( v109 < -1 )
            {
              *((_QWORD *)v104 + 6) = 0;
              *((_QWORD *)v104 + 7) = 0;
              *((_QWORD *)v104 + 8) = 0;
              if ( v110 )
              {
                v117 = sub_491248(v110);
                *((_QWORD *)v104 + 6) = v117;
                *((_QWORD *)v104 + 8) = v110;
                memcpy(v117, v193, v110);
                *((_QWORD *)v104 + 7) = v110;
                v108 = v192;
              }
            }
            else
            {
              v111 = nullptr;
              if ( v194 )
              {
                v122 = sub_491248(v194);
                v111 = memcpy(v122, v193, v110);
              }
              v112 = *((void **)v104 + 6);
              if ( v112 )
              {
                *((_QWORD *)v104 + 7) = 0;
                v181 = v111;
                j__free(v112);
                v111 = v181;
              }
              v108 = v192;
              *((_QWORD *)v104 + 6) = v111;
              *((_QWORD *)v104 + 7) = v110;
              *((_QWORD *)v104 + 8) = v110;
            }
          }
          v104[10] = v108;
        }
        if ( ++v95 >= (unsigned __int64)a5[1] )
          goto LABEL_205;
        v93 = &(*a5)[8 * v95];
        v94 = *v93;
        if ( *v93 == *(_DWORD *)(a1 + 780) || v94 == *(_DWORD *)(a1 + 784) )
          goto LABEL_171;
      }
      if ( v192 >= -1 && v193 )
      {
        v194 = 0;
        j__free(v193);
      }
      v193 = nullptr;
      v194 = 0;
      v195 = 0;
      v192 = -1;
      v101 = nullptr;
      v102 = *((_QWORD *)v93 + 2);
      if ( v102 )
        goto LABEL_186;
      goto LABEL_150;
    }
LABEL_205:
    if ( v192 >= -1 )
    {
      if ( v193 )
      {
        v194 = 0;
        j__free(v193);
      }
      v192 = -2;
    }
    v123 = v188;
    v193 = v25[3];
    if ( v188 )
    {
      v124 = *(_DWORD *)(a1 + 780);
      v125 = &v187;
      do
      {
        if ( *(_DWORD *)(v123 + 32) < v124 )
        {
          v123 = *(_QWORD *)(v123 + 24);
        }
        else
        {
          v125 = (int *)v123;
          v123 = *(_QWORD *)(v123 + 16);
        }
      }
      while ( v123 );
      if ( v125 != &v187 && v124 >= v125[8] )
        goto LABEL_218;
    }
    else
    {
      v125 = &v187;
    }
    v126 = sub_49E050(0x48u);
    v126[8] = *(_DWORD *)(a1 + 780);
    v126[10] = -2;
    *((_QWORD *)v126 + 6) = -1;
    *((_QWORD *)v126 + 7) = 0;
    *((_QWORD *)v126 + 8) = 0;
    v127 = sub_45F948(&v186, (__int64)v125, v126 + 8);
    v125 = (int *)v127;
    if ( v128 )
    {
      v125 = (int *)sub_45F630((__int64)&v186, v127, v128, (__int64)v126);
    }
    else
    {
      if ( (int)v126[10] >= -1 )
      {
        v149 = *((void **)v126 + 6);
        if ( v149 )
        {
          *((_QWORD *)v126 + 7) = 0;
          j__free(v149);
        }
      }
      j__free_0(v126);
    }
LABEL_218:
    if ( &v192 != v125 + 10 )
    {
      v129 = v125[10];
      if ( v192 < -1 )
      {
        if ( v129 >= -1 )
        {
          v146 = *((void **)v125 + 6);
          if ( v146 )
          {
            *((_QWORD *)v125 + 7) = 0;
            j__free(v146);
          }
        }
        *((_QWORD *)v125 + 6) = v193;
      }
      else
      {
        v130 = v194;
        if ( v129 < -1 )
        {
          *((_QWORD *)v125 + 6) = 0;
          *((_QWORD *)v125 + 7) = 0;
          *((_QWORD *)v125 + 8) = 0;
          if ( v130 )
          {
            v147 = sub_491248(v130);
            v148 = v193;
            *((_QWORD *)v125 + 6) = v147;
            *((_QWORD *)v125 + 8) = v130;
            memcpy(v147, v148, v130);
            *((_QWORD *)v125 + 7) = v130;
          }
        }
        else
        {
          v131 = nullptr;
          if ( v194 )
          {
            v131 = sub_491248(v194);
            memcpy(v131, v193, v130);
          }
          v132 = *((void **)v125 + 6);
          if ( v132 )
          {
            *((_QWORD *)v125 + 7) = 0;
            j__free(v132);
          }
          *((_QWORD *)v125 + 6) = v131;
          *((_QWORD *)v125 + 7) = v130;
          *((_QWORD *)v125 + 8) = v130;
        }
      }
      v125[10] = v192;
    }
    v133 = v188;
    v193 = a2;
    if ( v188 )
    {
      v134 = *(_DWORD *)(a1 + 784);
      v135 = &v187;
      do
      {
        if ( *(_DWORD *)(v133 + 32) < v134 )
        {
          v133 = *(_QWORD *)(v133 + 24);
        }
        else
        {
          v135 = (int *)v133;
          v133 = *(_QWORD *)(v133 + 16);
        }
      }
      while ( v133 );
      if ( v135 != &v187 && v134 >= v135[8] )
        goto LABEL_236;
    }
    else
    {
      v135 = &v187;
    }
    v136 = sub_49E050(0x48u);
    v136[8] = *(_DWORD *)(a1 + 784);
    v136[10] = -2;
    *((_QWORD *)v136 + 6) = -1;
    *((_QWORD *)v136 + 7) = 0;
    *((_QWORD *)v136 + 8) = 0;
    v137 = sub_45F948(&v186, (__int64)v135, v136 + 8);
    v135 = (int *)v137;
    if ( v138 )
    {
      v135 = (int *)sub_45F630((__int64)&v186, v137, v138, (__int64)v136);
    }
    else
    {
      if ( (int)v136[10] >= -1 )
      {
        v153 = *((void **)v136 + 6);
        if ( v153 )
        {
          *((_QWORD *)v136 + 7) = 0;
          j__free(v153);
        }
      }
      j__free_0(v136);
    }
LABEL_236:
    if ( &v192 != v135 + 10 )
    {
      v139 = v135[10];
      if ( v192 < -1 )
      {
        if ( v139 >= -1 )
        {
          v145 = *((void **)v135 + 6);
          if ( v145 )
          {
            *((_QWORD *)v135 + 7) = 0;
            j__free(v145);
          }
        }
        *((_QWORD *)v135 + 6) = v193;
      }
      else
      {
        v140 = v194;
        if ( v139 < -1 )
        {
          *((_QWORD *)v135 + 6) = 0;
          *((_QWORD *)v135 + 7) = 0;
          *((_QWORD *)v135 + 8) = 0;
          if ( v140 )
          {
            v151 = sub_491248(v140);
            v152 = v193;
            *((_QWORD *)v135 + 6) = v151;
            *((_QWORD *)v135 + 8) = v140;
            memcpy(v151, v152, v140);
            *((_QWORD *)v135 + 7) = v140;
          }
        }
        else
        {
          v141 = nullptr;
          if ( v194 )
          {
            v141 = sub_491248(v194);
            memcpy(v141, v193, v140);
          }
          v142 = *((void **)v135 + 6);
          if ( v142 )
          {
            *((_QWORD *)v135 + 7) = 0;
            j__free(v142);
          }
          *((_QWORD *)v135 + 6) = v141;
          *((_QWORD *)v135 + 7) = v140;
          *((_QWORD *)v135 + 8) = v140;
        }
      }
      v135[10] = v192;
    }
    v143 = v189;
    if ( v189 != &v187 )
    {
      while ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)a1 + 232LL))(
                a1,
                a3,
                (unsigned int)v143[8],
                v143 + 10,
                0) == 1 )
      {
        *((_BYTE *)v25 + 40) = 1;
        v143 = (int *)sub_49F6E8((__int64)v143);
        if ( v143 == &v187 )
          goto LABEL_255;
      }
      v113 = 6;
      if ( v182 )
      {
        v183 = 0;
        j__free(v182);
      }
      goto LABEL_251;
    }
LABEL_255:
    v113 = a10 & 1;
    if ( (a10 & 1) != 0 )
    {
      v144 = v182;
      if ( !v182 )
        goto LABEL_42;
    }
    else
    {
      v150 = *(_QWORD *)a1;
      *(_BYTE *)(a1 + 216) = 1;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(v150 + 168))(a1, a1 + 200) != 1 )
      {
        if ( v182 )
        {
          v183 = 0;
          j__free(v182);
          v75 = 9;
          goto LABEL_98;
        }
        v113 = 9;
        goto LABEL_251;
      }
      LOBYTE(v202) = 0;
      HIDWORD(v202) = 0;
      v203 = 0;
      v204 = 0;
      v200 = 0xFFFFFFFFLL;
      src = (void *)-1LL;
      v205 = 0;
      v206 = 0;
      v207 = 0;
      v208 = 0;
      if ( a9 )
        v154 = a9;
      else
        v154 = &v200;
      v173 = (__int64)v154;
      v155 = a10 & 4;
      if ( (a10 & 4) != 0 )
      {
        v156 = HIWORD(a10);
        v155 = 1;
        if ( HIWORD(a10) )
          v172 = sub_492630() + 1000000LL * v156;
        else
          v172 = 0;
      }
      else
      {
        v156 = 40;
        v172 = 0;
      }
      while ( 1 )
      {
        do
        {
          if ( v155 )
          {
            if ( v155 == 2 )
            {
              if ( v156 <= 0 || (v156 = (v172 - sub_492630()) / 1000000, v156 <= 0) )
              {
                v113 = 12;
                if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, 0) <= 0 )
                  goto LABEL_308;
              }
            }
            else
            {
              v155 = 2;
            }
          }
          v157 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 136LL))(
                   a1,
                   v173,
                   (unsigned int)v156);
        }
        while ( !v157 );
        if ( v157 == -1 )
        {
          v113 = 8;
LABEL_308:
          sub_482ED0((__int64)&v200);
          v159 = v182;
          if ( v182 )
          {
LABEL_309:
            v183 = 0;
            j__free(v159);
LABEL_310:
            if ( !v113 )
              goto LABEL_42;
          }
          if ( v113 == 10 )
            goto LABEL_41;
          goto LABEL_251;
        }
        v158 = *(_DWORD *)(v173 + 20) & 0xFFFFFFF;
        if ( v158 == 2 || v158 == 4 && *(_DWORD *)(v173 + 4) == a3 )
        {
          sub_466FD0(a1, v173, 8u);
          v39 = -1;
          goto LABEL_315;
        }
        if ( v113 == 12 )
          break;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, void *))(*(_QWORD *)a1 + 464LL))(
               a1,
               a3,
               v173,
               v25[4]) )
        {
          goto LABEL_348;
        }
        if ( (*(_DWORD *)(v173 + 20) & 0xFFFFFFF) == 7 )
        {
          if ( (a10 & 2) == 0 && a8 != v173 + 40 )
          {
            v166 = *(_QWORD *)(v173 + 48);
            if ( v166 > 1 )
            {
              v167 = *(const void **)(v173 + 40);
              if ( v166 > *(_QWORD *)(a8 + 16) )
                *(_QWORD *)a8 = sub_491288(a8, *(void **)a8, *(_QWORD *)(v173 + 48), 1u);
              v168 = *(void **)a8;
              *(_QWORD *)(a8 + 8) = v166;
              memmove(v168, v167, v166 - 1);
              *(_BYTE *)(*(_QWORD *)a8 + v166 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(a8 + 8) = 0;
            }
          }
          sub_482FB0(a1 + 200, 0);
          *(_BYTE *)(a1 + 216) = 1;
          sub_482ED0((__int64)&v200);
          if ( v182 )
          {
            v183 = 0;
            j__free(v182);
          }
          goto LABEL_41;
        }
        if ( (unsigned int)sub_466FD0(a1, v173, 0xAu) )
        {
          v113 = 7;
          goto LABEL_308;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, v173);
        sub_482FB0(v173, 0);
      }
      sub_466FD0(a1, v173, 0xAu);
      sub_482FB0(v173, 0);
LABEL_348:
      sub_482FB0(a1 + 200, 0);
      v180 = 0;
LABEL_315:
      if ( v113 )
        v160 = 0;
      else
        v160 = v180 == 0;
      if ( !v160 )
      {
        sub_482ED0((__int64)&v200);
        v159 = v182;
        if ( !v182 )
          goto LABEL_310;
        goto LABEL_309;
      }
      if ( a4 > 0
        && ((unsigned __int64)a4 > a6[1]
         || a4 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
                    a1,
                    v39,
                    *a6,
                    a4,
                    0)) )
      {
        sub_482ED0((__int64)&v200);
        v89 = v182;
        if ( v182 )
          goto LABEL_121;
        v75 = 5;
        goto LABEL_98;
      }
      if ( a7 && a7[1] )
      {
        v161 = *(_QWORD *)(a1 + 680);
        memset(v185, 0, sizeof(v185));
        if ( !v161 )
          LODWORD(v161) = *(_DWORD *)(a1 + 776);
        sub_45E9A8(v185, (int)v161);
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)a1 + 224LL))(
               a1,
               a3,
               0xFFFFFFFFLL,
               v185[0],
               0) <= 0 )
        {
          sub_45ECD0(v185);
          sub_482ED0((__int64)&v200);
          if ( v182 )
          {
            v183 = 0;
            j__free(v182);
          }
          v75 = 1;
          goto LABEL_98;
        }
        for ( m = 0; m < a7[1]; ++m )
        {
          v163 = (int *)(*a7 + 32 * m);
          v164 = &v185[0][32 * *v163];
          if ( *(int *)v164 < -1 )
            v165 = v164 + 8;
          else
            v165 = *((const void **)v164 + 1);
          memcpy(*((void **)v163 + 1), v165, *((_QWORD *)v163 + 2));
          v163[1] = 0;
        }
        sub_45ECD0(v185);
      }
      sub_482ED0((__int64)&v200);
      v144 = v182;
      if ( !v182 )
        goto LABEL_42;
    }
    v183 = 0;
    j__free(v144);
    goto LABEL_42;
  }
  if ( !v182 )
  {
    v113 = 2;
    goto LABEL_251;
  }
  v183 = 0;
  j__free(v182);
  v75 = 2;
LABEL_98:
  v36 = off_51AB98[v75];
LABEL_99:
  v37 = strlen(v36);
  if ( v37 )
    goto LABEL_38;
LABEL_100:
  *(_QWORD *)(a8 + 8) = 0;
LABEL_41:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 432LL))(a1, a3);
  v39 = -1;
LABEL_42:
  sub_45F5D0((__int64)&v186, v188);
  if ( v192 >= -1 && v193 )
  {
    v194 = 0;
    j__free(v193);
  }
  return v39;
}
// 45FB70: variable 'v18' is possibly undefined
// 460528: variable 'v107' is possibly undefined
// 4608AC: variable 'v128' is possibly undefined
// 4609A0: variable 'v138' is possibly undefined
// 405E40: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 51AB98: using guessed type char *off_51AB98[13];
