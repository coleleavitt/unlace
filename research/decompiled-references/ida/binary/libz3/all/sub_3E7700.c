__int64 __fastcall sub_3E7700(_DWORD *a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 v7; // r13
  _OWORD *v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  void (__fastcall ***v13)(_QWORD); // rbx
  bool v14; // zf
  __int64 result; // rax
  void *v16; // rdi
  int v17; // ecx
  unsigned int v18; // esi
  char *v19; // rax
  char *v20; // rdx
  _OWORD *v21; // rax
  __int64 v22; // rdx
  _OWORD *v23; // rsi
  _OWORD *v24; // rcx
  unsigned int *v25; // rax
  unsigned int *v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdi
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdi
  void (***v33)(void); // rdi
  _DWORD *v34; // rdi
  unsigned int v35; // r12d
  __int64 i; // rax
  __int64 v37; // rbp
  int v38; // edi
  char *v39; // rcx
  __int64 v40; // rax
  char *v41; // rsi
  __int64 v42; // rdx
  char *v43; // r8
  char *j; // rax
  __int64 v45; // rdx
  _QWORD *v46; // rax
  int v47; // r8d
  unsigned int v48; // r9d
  unsigned int *v49; // r12
  __int64 v50; // r13
  int v51; // edx
  int v52; // edi
  __int64 v53; // rbp
  int v54; // esi
  char *v55; // rcx
  __int64 v56; // rax
  char *v57; // r10
  __int64 v58; // rdx
  char *v59; // rdi
  char *k; // rax
  __int64 v61; // rdx
  int v62; // eax
  unsigned int v63; // eax
  int v64; // edx
  int v65; // ecx
  _DWORD *v66; // rax
  int *v67; // rax
  int v68; // ecx
  _DWORD *v69; // rax
  __m128i *v70; // rax
  __m128i *v71; // r8
  __m128 *v72; // rcx
  int v73; // edi
  __m128 v74; // xmm0
  __int64 v75; // rdx
  __m128i *v76; // r9
  __m128 *v77; // rdx
  __m128 *v78; // r10
  unsigned __int64 v79; // rsi
  __int64 v80; // r12
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // rax
  void (**v85)(void); // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __m128 *v90; // rdx
  __m128 *v91; // r10
  const __m128i *v92; // r9
  __m128i *v93; // r11
  __int64 v94; // rdx
  __m128i *v95; // rsi
  __m128i *v96; // rdx
  void *v97; // [rsp+0h] [rbp-1D8h]
  int v98; // [rsp+0h] [rbp-1D8h]
  unsigned int *v100; // [rsp+8h] [rbp-1D0h]
  void *v101; // [rsp+10h] [rbp-1C8h]
  unsigned int *v102; // [rsp+10h] [rbp-1C8h]
  _QWORD *v103; // [rsp+10h] [rbp-1C8h]
  _QWORD *v104; // [rsp+10h] [rbp-1C8h]
  unsigned int v105; // [rsp+18h] [rbp-1C0h]
  unsigned int *v106; // [rsp+18h] [rbp-1C0h]
  _QWORD *v107; // [rsp+18h] [rbp-1C0h]
  _QWORD *v108; // [rsp+18h] [rbp-1C0h]
  void *v109; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned int **v110; // [rsp+28h] [rbp-1B0h]
  __int64 v111; // [rsp+30h] [rbp-1A8h]
  __int64 v112; // [rsp+38h] [rbp-1A0h]
  const __m128i *v113; // [rsp+40h] [rbp-198h]
  __m128i *v114; // [rsp+48h] [rbp-190h]
  __m128 *v115; // [rsp+50h] [rbp-188h]
  __int64 *v116; // [rsp+58h] [rbp-180h]
  __m128 *v117; // [rsp+60h] [rbp-178h]
  __m128 *v118; // [rsp+68h] [rbp-170h]
  unsigned int *v119; // [rsp+70h] [rbp-168h] BYREF
  _DWORD *v120; // [rsp+78h] [rbp-160h] BYREF
  __int64 v121; // [rsp+80h] [rbp-158h] BYREF
  __int64 v122; // [rsp+88h] [rbp-150h] BYREF
  int v123[2]; // [rsp+90h] [rbp-148h] BYREF
  unsigned int *v124; // [rsp+98h] [rbp-140h] BYREF
  int v125[2]; // [rsp+A0h] [rbp-138h] BYREF
  int v126[4]; // [rsp+A8h] [rbp-130h] BYREF
  void *v127; // [rsp+B8h] [rbp-120h]
  unsigned int v128[4]; // [rsp+C0h] [rbp-118h]
  __int64 v129; // [rsp+D0h] [rbp-108h] BYREF
  unsigned int *v130; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v131; // [rsp+E0h] [rbp-F8h] BYREF
  _QWORD *v132; // [rsp+E8h] [rbp-F0h]
  void *v133; // [rsp+F0h] [rbp-E8h]
  __int64 v134; // [rsp+F8h] [rbp-E0h]
  char v135[16]; // [rsp+100h] [rbp-D8h] BYREF
  int v136[4]; // [rsp+110h] [rbp-C8h] BYREF
  _QWORD v137[3]; // [rsp+120h] [rbp-B8h] BYREF
  void *v138; // [rsp+138h] [rbp-A0h]
  __int64 v139; // [rsp+148h] [rbp-90h]
  void *v140; // [rsp+150h] [rbp-88h]
  _QWORD v141[3]; // [rsp+158h] [rbp-80h] BYREF
  void *v142; // [rsp+170h] [rbp-68h]
  __int64 v143; // [rsp+180h] [rbp-58h]
  void *v144; // [rsp+188h] [rbp-50h]
  char v145; // [rsp+190h] [rbp-48h]

  v7 = *a2;
  *(_QWORD *)v125 = v7;
  sub_1684300(v126, v7);
  v8 = (_OWORD *)sub_186B270(0x80u);
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v127 = v8;
  *(_QWORD *)v128 = 8;
  v128[2] = 0;
  v129 = v7;
  v130 = nullptr;
  v131 = v7;
  v132 = nullptr;
  v133 = nullptr;
  v134 = v7;
  sub_1684300(v135, v7);
  *(_QWORD *)v123 = 0;
  sub_14B7810((int)v136, v7, (int)v123, v9, v10, v11, v97);
  sub_18572D0(v123);
  v137[2] = 0;
  v138 = nullptr;
  v139 = 0;
  v137[0] = &off_1C62200;
  v140 = nullptr;
  v141[0] = &off_1C62200;
  v141[2] = 0;
  v142 = nullptr;
  v143 = 0;
  v144 = nullptr;
  v145 = 0;
  if ( !a4 )
  {
    v12 = a2[1];
    if ( !v12 || !*(_DWORD *)(v12 - 4) )
    {
      v141[0] = &off_1C62200;
      goto LABEL_5;
    }
  }
  if ( *(_QWORD *)&v128[1] )
  {
    v16 = v127;
    v17 = 0;
    v18 = v128[0];
    v19 = (char *)v127;
    v20 = (char *)v127 + 16 * v128[0];
    if ( v127 == v20 )
      goto LABEL_31;
    do
    {
      while ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0;
        v19 += 16;
        if ( v20 == v19 )
          goto LABEL_23;
      }
      v19 += 16;
      ++v17;
    }
    while ( v20 != v19 );
LABEL_23:
    if ( v18 <= 0x10 || 3 * v18 >= 4 * v17 )
      goto LABEL_31;
    if ( v16 )
    {
      sub_186B220(v16);
      v127 = nullptr;
      v128[0] >>= 1;
      v105 = v128[0];
      v101 = (void *)(16LL * v128[0]);
      v21 = (_OWORD *)sub_186B270((size_t)v101);
      v22 = (__int64)v101;
      if ( !v105 )
      {
LABEL_30:
        v127 = v21;
LABEL_31:
        *(_QWORD *)&v128[1] = 0;
        goto LABEL_32;
      }
    }
    else
    {
      v127 = nullptr;
      v128[0] = v18 >> 1;
      v21 = (_OWORD *)sub_186B270(16LL * (v18 >> 1));
      v22 = 16LL * (v18 >> 1);
    }
    v23 = (_OWORD *)((char *)v21 + v22);
    v24 = v21;
    if ( (v22 & 0x10) == 0 || (v24 = v21 + 1, *v21 = 0, v21 + 1 != v23) )
    {
      do
      {
        *v24 = 0;
        v24 += 2;
        *(v24 - 1) = 0;
      }
      while ( v24 != v23 );
    }
    goto LABEL_30;
  }
LABEL_32:
  v25 = v130;
  if ( v130 )
  {
    v26 = &v130[2 * *(v130 - 1)];
    if ( v130 >= v26 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)v25;
        if ( *(_QWORD *)v25 )
        {
          v28 = v129;
          v14 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v14 )
            break;
        }
        v25 += 2;
        if ( v25 >= v26 )
          goto LABEL_39;
      }
      v106 = v25;
      v102 = v26;
      sub_15D7BC0(v28, v27);
      v26 = v102;
      v25 = v106 + 2;
    }
    while ( v106 + 2 < v102 );
LABEL_39:
    v25 = v130;
    if ( v130 )
LABEL_40:
      *(v25 - 1) = 0;
  }
  v29 = v132;
  if ( v132 )
  {
    v30 = &v132[*((unsigned int *)v132 - 1)];
    if ( v132 >= v30 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = v131;
          v14 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v29 >= v30 )
          goto LABEL_48;
      }
      v107 = v29;
      v103 = v30;
      sub_15D7BC0(v32, v31);
      v30 = v103;
      v29 = v107 + 1;
    }
    while ( v107 + 1 < v103 );
LABEL_48:
    v29 = v132;
    if ( v132 )
LABEL_49:
      *((_DWORD *)v29 - 1) = 0;
  }
  v33 = (void (***)(void))v133;
  if ( v133 )
  {
    v14 = (*((_DWORD *)v133 + 4))-- == 1;
    if ( v14 )
    {
      (**v33)();
      sub_186B220(v33);
    }
  }
  v133 = nullptr;
  v104 = v137;
  sub_15D08E0(v137);
  v108 = v141;
  sub_15D08E0(v141);
  v34 = v133;
  ++a1[4];
  v145 = 0;
  if ( v34 )
  {
    v14 = v34[4]-- == 1;
    if ( v14 )
    {
      v85 = *(void (***)(void))v34;
      v109 = v34;
      (*v85)();
      sub_186B220(v34);
    }
  }
  v133 = a1;
  v35 = 0;
  v145 = a4;
  for ( i = a2[1]; i; ++v35 )
  {
    if ( v35 >= *(_DWORD *)(i - 4) )
      break;
    sub_15D0A90(v137, *(_QWORD *)(i + 8LL * v35), 1);
    i = a2[1];
  }
  v37 = *a3;
  if ( !*(_WORD *)(*a3 + 4) )
  {
    v38 = *(_DWORD *)(v37 + 12);
    v39 = (char *)v127;
    v40 = 16LL * v128[0];
    v41 = (char *)v127 + v40;
    v42 = 16LL * (v38 & (v128[0] - 1));
    v43 = (char *)v127 + v42;
    if ( v42 != v40 )
    {
      for ( j = (char *)v127 + v42; v41 != j; j += 16 )
      {
        v45 = *(_QWORD *)j;
        if ( *(_QWORD *)j > 1u )
        {
          if ( *(_DWORD *)(v45 + 12) == v38 && v37 == v45 )
          {
LABEL_108:
            v80 = *((_QWORD *)j + 1);
            if ( v80 )
              ++*(_DWORD *)(v80 + 8);
            sub_3E5D20(v37, a3[1]);
            *a3 = v80;
            goto LABEL_111;
          }
        }
        else if ( !v45 )
        {
          goto LABEL_67;
        }
      }
    }
    if ( v127 != v43 )
    {
      do
      {
        v84 = *(_QWORD *)v39;
        if ( *(_QWORD *)v39 > 1u )
        {
          if ( *(_DWORD *)(v84 + 12) == v38 && v37 == v84 )
          {
            j = v39;
            goto LABEL_108;
          }
        }
        else if ( !v84 )
        {
          break;
        }
        v39 += 16;
      }
      while ( v43 != v39 );
    }
LABEL_67:
    v46 = (_QWORD *)sub_186B270(0x18u);
    v46[1] = v37;
    v49 = (unsigned int *)(v46 + 1);
    LODWORD(v115) = 1;
    *v46 = 0x100000002LL;
    v109 = nullptr;
    v110 = &v124;
LABEL_68:
    v50 = *(_QWORD *)&v49[2 * ((_DWORD)v115 - 1)];
    v51 = v125[0];
    v52 = *(_DWORD *)(v50 + 24);
    *(_QWORD *)v123 = *(_QWORD *)v125;
    if ( v52 )
    {
      LOBYTE(v111) = 0;
      v48 = 0;
      v100 = nullptr;
      LOBYTE(v114) = 0;
      v116 = &v121;
      do
      {
        v53 = *(_QWORD *)(v50 + 8LL * v48 + 32);
        if ( *(_WORD *)(v53 + 4) )
        {
          ++*(_DWORD *)(v53 + 8);
          LODWORD(v112) = v48;
          v122 = v53;
          v124 = v100;
          sub_3E6950(v110, &v122);
          v48 = v112;
          v100 = v124;
          goto LABEL_81;
        }
        v54 = *(_DWORD *)(v53 + 12);
        v55 = (char *)v127;
        v56 = 16LL * v128[0];
        v57 = (char *)v127 + v56;
        v58 = 16LL * (v54 & (v128[0] - 1));
        v59 = (char *)v127 + v58;
        if ( v58 != v56 )
        {
          for ( k = (char *)v127 + v58; v57 != k; k += 16 )
          {
            v61 = *(_QWORD *)k;
            if ( *(_QWORD *)k > 1u )
            {
              if ( *(_DWORD *)(v61 + 12) == v54 && v53 == v61 )
              {
LABEL_133:
                v86 = *((_QWORD *)k + 1);
                v121 = v86;
                if ( v86 )
                  ++*(_DWORD *)(v86 + 8);
                v112 = v86;
                LODWORD(v113) = v48;
                v124 = v100;
                sub_3E6950(v110, v116);
                v87 = v112;
                v48 = (unsigned int)v113;
                v100 = v124;
                LOBYTE(v51) = v53 != v112;
                LOBYTE(v114) = (v53 != v112) | (unsigned __int8)v114;
                if ( !(_BYTE)v111 )
                {
                  LOBYTE(v111) = v145;
                  if ( !v145 )
                  {
                    LODWORD(v112) = (_DWORD)v113;
                    LOBYTE(v111) = sub_15D37A0(v108, v87);
                    v48 = v112;
                  }
                }
                goto LABEL_81;
              }
            }
            else if ( !v61 )
            {
              goto LABEL_78;
            }
          }
        }
        if ( v127 != v59 )
        {
          do
          {
            v88 = *(_QWORD *)v55;
            if ( *(_QWORD *)v55 > 1u )
            {
              if ( *(_DWORD *)(v88 + 12) == v54 && v53 == v88 )
              {
                k = v55;
                goto LABEL_133;
              }
            }
            else if ( !v88 )
            {
              break;
            }
            v55 += 16;
          }
          while ( v59 != v55 );
        }
LABEL_78:
        if ( !v49 || (v62 = *(v49 - 1), v62 == *(v49 - 2)) )
        {
          LODWORD(v112) = v48;
          v119 = v49;
          sub_3A6B20(&v119);
          v49 = v119;
          v48 = v112;
          v62 = *(v119 - 1);
        }
        v51 = v62;
        *(_QWORD *)&v49[2 * v62] = v53;
        *(v49 - 1) = v62 + 1;
LABEL_81:
        ++v48;
      }
      while ( v48 < *(_DWORD *)(v50 + 24) );
      v63 = *(v49 - 1);
      if ( (unsigned int)v115 < v63 )
        goto LABEL_128;
      v14 = (_BYTE)v114 == 0;
      *(v49 - 1) = v63 - 1;
      if ( v14 )
      {
        v109 = (void *)v50;
      }
      else
      {
        if ( v100 )
        {
          v64 = *(v100 - 1);
          v65 = (int)v100;
        }
        else
        {
          v64 = 0;
          v65 = 0;
        }
        v66 = (_DWORD *)sub_15DC610(
                          v125[0],
                          *(_QWORD *)(v50 + 16),
                          v64,
                          v65,
                          v47,
                          v48,
                          v98,
                          (int)v100,
                          (int)v104,
                          (int)v108,
                          (int)v109,
                          (char)v110,
                          v111,
                          v112,
                          (int)v113,
                          v114);
        v109 = v66;
        v120 = v66;
        if ( v66 )
          ++v66[2];
        sub_3E6950(&v130, &v120);
      }
      if ( *((_WORD *)v109 + 2) )
        goto LABEL_92;
    }
    else
    {
      *(v49 - 1) = (_DWORD)v115 - 1;
      if ( *(_WORD *)(v50 + 4) )
      {
        v109 = (void *)v50;
        v100 = nullptr;
        if ( v145 )
          goto LABEL_97;
        goto LABEL_94;
      }
      v109 = (void *)v50;
      v100 = nullptr;
      LOBYTE(v111) = 0;
    }
    v67 = *(int **)(*((_QWORD *)v109 + 2) + 24LL);
    if ( v67 )
    {
      v68 = *v67;
      if ( v126[0] == *v67 && v67[1] == 1 && (v145 || (unsigned __int8)sub_15D37A0(v108, *((_QWORD *)v109 + 4))) )
      {
        v109 = (void *)sub_3F1DF0(
                         (unsigned int)v125,
                         (_DWORD)v109,
                         v51,
                         v68,
                         v47,
                         v48,
                         v98,
                         (__int64)v100,
                         (__int64)v104,
                         (__int64)v108,
                         (__int64)v109,
                         (__int64)v110,
                         v111);
        goto LABEL_97;
      }
    }
LABEL_92:
    if ( v145 )
    {
LABEL_97:
      LODWORD(v112) = 2 * v128[0];
      if ( 3 * v128[0] < 4 * (v128[1] + v128[2]) )
      {
        v111 = 16LL * (unsigned int)v112;
        v70 = (__m128i *)sub_186B270(v111);
        v71 = (__m128i *)v111;
        v90 = (__m128 *)v70;
        v91 = (__m128 *)&v70->m128i_i8[v111];
        if ( (_DWORD)v112 )
        {
          if ( (v111 & 0x10) == 0 || (v90 = (__m128 *)&v70[1], *v70 = 0, v91 != (__m128 *)&v70[1]) )
          {
            do
            {
              *v90 = 0;
              v90 += 2;
              v90[-1] = 0;
            }
            while ( v91 != v90 );
          }
        }
        v92 = (const __m128i *)v127;
        v93 = (__m128i *)((char *)v127 + 16 * v128[0]);
        LODWORD(v111) = v112 - 1;
        v72 = v91;
        if ( v127 != v93 )
        {
          do
          {
            if ( v92->m128i_i64[0] > 1uLL )
            {
              v94 = 16LL * (*(_DWORD *)(v92->m128i_i64[0] + 12) & (unsigned int)v111);
              v95 = &v70[(unsigned __int64)v94 / 0x10];
              if ( v71 == (__m128i *)v94 )
              {
LABEL_171:
                if ( v70 == v95 )
                {
LABEL_183:
                  v118 = v91;
                  v117 = v91;
                  v116 = (__int64 *)v71;
                  v115 = (__m128 *)v93;
                  v114 = v70;
                  v113 = v92;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v96 = v70;
                while ( v96->m128i_i64[0] )
                {
                  if ( v95 == ++v96 )
                    goto LABEL_183;
                }
              }
              else
              {
                v96 = &v70[(unsigned __int64)v94 / 0x10];
                while ( v96->m128i_i64[0] )
                {
                  if ( v91 == (__m128 *)++v96 )
                    goto LABEL_171;
                }
              }
              *v96 = _mm_loadu_si128(v92);
            }
            ++v92;
          }
          while ( v93 != v92 );
          v93 = (__m128i *)v127;
        }
        if ( v93 )
        {
          v115 = v91;
          v114 = v71;
          v113 = v70;
          sub_186B220(v93);
          v72 = v115;
          v71 = v114;
          v70 = (__m128i *)v113;
        }
        v127 = v70;
        v128[2] = 0;
        v128[0] = v112;
      }
      else
      {
        LODWORD(v111) = v128[0] - 1;
        v70 = (__m128i *)v127;
        v71 = (__m128i *)(16LL * v128[0]);
        v72 = (__m128 *)&v71->m128i_i8[(_QWORD)v127];
      }
      v73 = *(_DWORD *)(v50 + 12);
      v74 = _mm_loadh_ps((const double *)&v109);
      v75 = 16LL * (v73 & (unsigned int)v111);
      v76 = &v70[(unsigned __int64)v75 / 0x10];
      if ( (__m128i *)v75 != v71 )
      {
        v77 = (__m128 *)&v70[(unsigned __int64)v75 / 0x10];
        v78 = nullptr;
        while ( 1 )
        {
          v79 = v77->m128_u64[0];
          if ( v77->m128_u64[0] > 1 )
          {
            if ( *(_DWORD *)(v79 + 12) == v73 && v50 == v79 )
            {
              *v77 = v74;
              goto LABEL_128;
            }
          }
          else
          {
            if ( !v79 )
            {
              if ( v78 )
                goto LABEL_126;
              v78 = v77;
              goto LABEL_127;
            }
            v78 = v77;
          }
          if ( ++v77 == v72 )
            goto LABEL_150;
        }
      }
      v78 = nullptr;
      while ( 1 )
      {
LABEL_150:
        if ( v76 == v70 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v89 = v70->m128i_i64[0];
        if ( v70->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v89 + 12) == v73 && v50 == v89 )
          {
            *v70 = (__m128i)v74;
            goto LABEL_128;
          }
        }
        else
        {
          if ( !v89 )
          {
            if ( v78 )
LABEL_126:
              --v128[2];
            else
              v78 = (__m128 *)v70;
LABEL_127:
            *v78 = v74;
            ++v128[1];
LABEL_128:
            v124 = v100;
            sub_2334C0((__int64 *)v123);
            LODWORD(v115) = *(v49 - 1);
            if ( !(_DWORD)v115 )
            {
              if ( v109 )
                ++*((_DWORD *)v109 + 2);
              sub_3E5D20(*a3, a3[1]);
              *a3 = (__int64)v109;
              sub_186B220(v49 - 2);
              goto LABEL_111;
            }
            goto LABEL_68;
          }
          v78 = (__m128 *)v70;
        }
        ++v70;
      }
    }
    if ( (_BYTE)v111 )
    {
LABEL_182:
      sub_15D0A90(v108, v109, 1);
      goto LABEL_97;
    }
LABEL_94:
    if ( *((_WORD *)v109 + 2) )
      goto LABEL_97;
    v69 = *(_DWORD **)(*((_QWORD *)v109 + 2) + 24LL);
    if ( !v69 || v126[0] != *v69 || v69[1] || !(unsigned __int8)sub_15D37A0(v104, *((_QWORD *)v109 + 4)) )
      goto LABEL_97;
    goto LABEL_182;
  }
LABEL_111:
  v124 = nullptr;
  *(_QWORD *)v123 = *(_QWORD *)v125;
  sub_2FD290((__int64)v123, (__int64)&v131);
  v81 = *a3;
  v122 = v81;
  if ( v81 )
    ++*(_DWORD *)(v81 + 8);
  sub_3E6950(&v124, &v122);
  v82 = sub_15E1AF0(v125[0]);
  v83 = v82;
  if ( v82 )
    ++*(_DWORD *)(v82 + 8);
  sub_3E5D20(*a3, a3[1]);
  *a3 = v83;
  sub_14B9B80(v136, a3);
  sub_2334C0((__int64 *)v123);
  v141[0] = &off_1C62200;
  if ( v144 )
    sub_186B220(v144);
LABEL_5:
  if ( v142 )
    sub_186B220(v142);
  v137[0] = &off_1C62200;
  if ( v140 )
    sub_186B220(v140);
  if ( v138 )
    sub_186B220(v138);
  sub_14B63F0(v136);
  v13 = (void (__fastcall ***)(_QWORD))v133;
  if ( v133 )
  {
    v14 = (*((_DWORD *)v133 + 4))-- == 1;
    if ( v14 )
    {
      (**v13)(v13);
      sub_186B220(v13);
    }
  }
  sub_2334C0(&v131);
  result = sub_2334C0(&v129);
  if ( v127 )
    return sub_186B220(v127);
  return result;
}

