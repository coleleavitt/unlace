__int64 __fastcall sub_460D00(_QWORD *a1, __int64 a2, __int64 *a3)
{
  char **exception; // rbp
  char **v4; // rbp
  char **v5; // rbx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r12
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbp
  int v18; // eax
  __int64 *v19; // rcx
  int v21; // eax
  __int64 v22; // rsi
  int v23; // ebx
  __int64 *v24; // r12
  __int64 v25; // rax
  int v26; // r12d
  _DWORD *v27; // rax
  __int64 v28; // rbx
  char *v29; // rax
  int v30; // ecx
  _QWORD *v31; // rdi
  _QWORD *v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // r11
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // r10
  __int64 *v40; // rax
  __int64 v41; // r9
  _DWORD *v42; // rdi
  __int64 v43; // rdx
  __int64 *v44; // rbx
  __int64 v45; // rcx
  _DWORD *v46; // rdi
  int v47; // eax
  int v48; // r12d
  char *v49; // rcx
  int v50; // eax
  char *v51; // rdx
  unsigned int v52; // esi
  __int64 v53; // rax
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 *v58; // rcx
  __int64 v59; // r12
  __int64 *v60; // rdi
  unsigned __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 *v63; // rax
  __int64 v64; // r8
  _DWORD *v65; // rdi
  __int64 v66; // rcx
  _DWORD *v67; // rdi
  __int64 v68; // rbx
  char *v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // rsi
  unsigned int v72; // ebp
  unsigned int v73; // ecx
  unsigned int *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned int v77; // ebx
  unsigned int v78; // ecx
  unsigned int *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rsi
  unsigned __int64 v83; // rdx
  __int64 v84; // rsi
  _QWORD *v85; // rax
  unsigned int v86; // esi
  __int64 v87; // rdx
  __int64 *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rdx
  unsigned int v92; // ebx
  unsigned int v93; // edx
  unsigned int *v94; // rdx
  __int64 v95; // rdx
  int v96; // esi
  _QWORD *v97; // rax
  _QWORD *v98; // rdx
  unsigned __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // r15
  __int64 v102; // rbx
  char *v103; // r12
  __int64 v104; // rcx
  __int64 v105; // rdx
  _QWORD *v106; // rdi
  unsigned __int64 v107; // rdx
  __int64 v108; // rcx
  _QWORD *v109; // rax
  __int64 v110; // rbx
  char *v111; // r12
  unsigned int v112; // eax
  _QWORD *v113; // rdi
  unsigned __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  char *v117; // rax
  int v118; // edx
  _QWORD *v119; // rdi
  _QWORD *v120; // rbx
  unsigned __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v123; // rdx
  __int64 v124; // rcx
  unsigned __int64 v125; // rdx
  __int64 v126; // rcx
  unsigned __int64 v127; // rax
  __int64 v128; // rcx
  int v129; // [rsp+0h] [rbp-248h]
  __int64 v130; // [rsp+8h] [rbp-240h]
  _BYTE *v131; // [rsp+10h] [rbp-238h]
  __int64 *v132; // [rsp+18h] [rbp-230h]
  _QWORD *v133; // [rsp+20h] [rbp-228h]
  char *v134; // [rsp+28h] [rbp-220h]
  int v135; // [rsp+30h] [rbp-218h]
  int v136; // [rsp+38h] [rbp-210h]
  __int64 v137; // [rsp+40h] [rbp-208h] BYREF
  int v138; // [rsp+48h] [rbp-200h]
  int v139; // [rsp+50h] [rbp-1F8h]
  int v140; // [rsp+58h] [rbp-1F0h]
  void *v141; // [rsp+60h] [rbp-1E8h]
  void *v142; // [rsp+68h] [rbp-1E0h]
  __int64 v143; // [rsp+70h] [rbp-1D8h] BYREF
  int v144; // [rsp+78h] [rbp-1D0h]
  int v145; // [rsp+80h] [rbp-1C8h]
  int v146; // [rsp+88h] [rbp-1C0h]
  int v147; // [rsp+90h] [rbp-1B8h]
  int v148; // [rsp+98h] [rbp-1B0h]
  int v149; // [rsp+A0h] [rbp-1A8h]
  int v150; // [rsp+A8h] [rbp-1A0h]
  int v151; // [rsp+B0h] [rbp-198h]
  int v152; // [rsp+B8h] [rbp-190h]
  int v153; // [rsp+C0h] [rbp-188h]
  int v154; // [rsp+C8h] [rbp-180h]
  int v155; // [rsp+D0h] [rbp-178h]
  int v156; // [rsp+D8h] [rbp-170h]
  int v157; // [rsp+E0h] [rbp-168h]
  int v158; // [rsp+E8h] [rbp-160h]
  void *v159; // [rsp+F0h] [rbp-158h]
  void *v160; // [rsp+F8h] [rbp-150h]
  _BYTE v161[128]; // [rsp+100h] [rbp-148h] BYREF
  void *v162; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v163; // [rsp+188h] [rbp-C0h]
  _QWORD v164[23]; // [rsp+190h] [rbp-B8h] BYREF

  v9 = *((_DWORD *)a3 + 2);
  v10 = *a1;
  v11 = (__int64 *)*a3;
  if ( v9 <= 1 )
  {
LABEL_10:
    v17 = *v11;
    v133 = v164;
    v21 = *(_DWORD *)(*v11 + 24);
    v143 = v17;
    v142 = (void *)0x1000000001LL;
    v22 = *(_QWORD *)(v17 + 8LL * (unsigned int)(v21 - 1) + 32);
    v162 = v164;
    v132 = &v143;
    v23 = *(_DWORD *)(a2 + 24);
    v141 = &v143;
    v131 = v161;
    v159 = v161;
    v160 = (void *)0x1000000000LL;
    v163 = 0x1000000000LL;
    if ( v23 )
    {
      LODWORD(v134) = v10;
      v130 = v22;
      v26 = v23 - 1;
      if ( *(_QWORD *)(v10 + 848) == sub_15D1F10(*(_QWORD *)(a2 + 8LL * (unsigned int)(v23 - 1) + 32)) )
        v26 = v23;
      if ( v26 == 2 && *(_QWORD *)(*a1 + 864LL) == *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1) + 32) )
      {
        if ( (unsigned int)v163 < HIDWORD(v163) )
        {
          v24 = (__int64 *)v162;
          v25 = (unsigned int)(v163 + 1);
          *((_QWORD *)v162 + (unsigned int)v163) = v22;
          v9 = *((_DWORD *)a3 + 2);
          LODWORD(v163) = v25;
          goto LABEL_36;
        }
        v110 = (unsigned int)(2 * HIDWORD(v163));
        v111 = (char *)sub_186B270(8 * v110);
        v112 = v163;
        v113 = v162;
        if ( (_DWORD)v163 )
        {
          if ( (unsigned int)(v163 - 1) <= 2 || v111 == (char *)v162 + 8 )
          {
            v125 = 0;
            v126 = 8LL * (unsigned int)v163;
            do
            {
              *(_QWORD *)&v111[v125] = v113[v125 / 8];
              v125 += 8LL;
            }
            while ( v125 != v126 );
          }
          else
          {
            v114 = 0;
            v115 = 16LL * ((unsigned int)v163 >> 1);
            do
            {
              *(__m128i *)&v111[v114] = _mm_loadu_si128((const __m128i *)&v113[v114 / 8]);
              v114 += 16LL;
            }
            while ( v114 != v115 );
            if ( (v112 & 1) != 0 )
              *(_QWORD *)&v111[8 * (v112 & 0xFFFFFFFE)] = v113[v112 & 0xFFFFFFFE];
          }
        }
        if ( v113 != v164 && v113 )
        {
          sub_186B220(v113);
          v112 = v163;
        }
        v116 = v112;
        v25 = v112 + 1;
        v162 = v111;
        HIDWORD(v163) = v110;
        *(_QWORD *)&v111[8 * v116] = v22;
        LODWORD(v163) = v25;
        goto LABEL_33;
      }
      if ( *(_WORD *)(v22 + 4) )
      {
LABEL_21:
        if ( (unsigned int)v163 >= HIDWORD(v163) )
        {
          v130 = v22;
          v28 = (unsigned int)(2 * HIDWORD(v163));
          v29 = (char *)sub_186B270(8 * v28);
          v30 = v163;
          v31 = v162;
          v32 = v29;
          if ( (_DWORD)v163 )
          {
            if ( (unsigned int)(v163 - 1) <= 2 || v29 == (char *)v162 + 8 )
            {
              v99 = 0;
              v100 = 8LL * (unsigned int)v163;
              do
              {
                v32[v99 / 8] = v31[v99 / 8];
                v99 += 8LL;
              }
              while ( v100 != v99 );
            }
            else
            {
              v33 = 0;
              v34 = 16LL * ((unsigned int)v163 >> 1);
              do
              {
                *(__m128i *)&v32[v33 / 8] = _mm_loadu_si128((const __m128i *)&v31[v33 / 8]);
                v33 += 16LL;
              }
              while ( v33 != v34 );
              if ( (v30 & 1) != 0 )
                v32[v30 & 0xFFFFFFFE] = v31[v30 & 0xFFFFFFFE];
            }
          }
          if ( v31 != v164 && v31 )
          {
            v130 = v22;
            sub_186B220(v31);
            v30 = v163;
          }
          v25 = (unsigned int)(v30 + 1);
          v162 = v32;
          HIDWORD(v163) = v28;
          v32[v30] = v22;
          LODWORD(v163) = v30 + 1;
          goto LABEL_33;
        }
        v24 = (__int64 *)v162;
        v25 = (unsigned int)(v163 + 1);
        *((_QWORD *)v162 + (unsigned int)v163) = v22;
        v9 = *((_DWORD *)a3 + 2);
        LODWORD(v163) = v25;
LABEL_36:
        v35 = 0;
        v130 = 8 * v25;
        if ( v9 <= 1 )
          goto LABEL_52;
LABEL_37:
        v36 = *a1;
        v37 = *v24;
        v38 = *a3;
        v39 = *(_QWORD *)(*a1 + 856LL);
        if ( *v24 == v39 )
        {
          v63 = (__int64 *)(v38 + 8);
          v64 = v38 + 8LL * (v9 - 2) + 16;
          while ( 1 )
          {
            v43 = *v63;
            v44 = v63;
            v66 = *(_QWORD *)(*v63 + 8LL * (unsigned int)(*(_DWORD *)(*v63 + 24) - 1) + 32);
            if ( *(_QWORD *)(v36 + 864) == v66 )
              break;
            if ( !*(_WORD *)(v37 + 4) )
            {
              v67 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
              if ( v67 )
              {
                if ( !*v67 && v67[1] == 8 && *(_QWORD *)(v37 + 32) == v66 )
                  break;
              }
            }
            if ( !*(_WORD *)(v66 + 4) )
            {
              v65 = *(_DWORD **)(*(_QWORD *)(v66 + 16) + 24LL);
              if ( v65 )
              {
                if ( !*v65 && v65[1] == 8 && v37 == *(_QWORD *)(v66 + 32) )
                  break;
              }
            }
            if ( (__int64 *)v64 == ++v63 )
            {
              while ( 1 )
              {
LABEL_52:
                v50 = (int)v160;
                if ( (unsigned int)v160 >= HIDWORD(v160) )
                {
                  v68 = (unsigned int)(2 * HIDWORD(v160));
                  v51 = (char *)sub_186B270(8 * v68);
                  v50 = (int)v160;
                  v69 = (char *)v159;
                  if ( (_DWORD)v160 )
                  {
                    if ( (unsigned int)((_DWORD)v160 - 1) <= 2 || v51 == (char *)v159 + 8 )
                    {
                      v81 = 0;
                      v82 = 8LL * (unsigned int)v160;
                      do
                      {
                        *(_QWORD *)&v51[v81] = *(_QWORD *)&v69[v81];
                        v81 += 8;
                      }
                      while ( v82 != v81 );
                    }
                    else
                    {
                      v70 = 0;
                      v71 = 16LL * ((unsigned int)v160 >> 1);
                      do
                      {
                        *(__m128i *)&v51[v70] = _mm_loadu_si128((const __m128i *)&v69[v70]);
                        v70 += 16;
                      }
                      while ( v70 != v71 );
                      if ( (v50 & 1) != 0 )
                        *(_QWORD *)&v51[8 * (v50 & 0xFFFFFFFE)] = *(_QWORD *)&v69[8 * (v50 & 0xFFFFFFFE)];
                    }
                  }
                  if ( v69 && v69 != v161 )
                  {
                    v134 = v51;
                    sub_186B220(v69);
                    v50 = (int)v160;
                    v51 = v134;
                  }
                  v159 = v51;
                  HIDWORD(v160) = v68;
                }
                else
                {
                  v51 = (char *)v159;
                }
                v35 += 8;
                *(_QWORD *)&v51[8 * v50] = *v24;
                LODWORD(v160) = v50 + 1;
                if ( v35 == v130 )
                  goto LABEL_55;
LABEL_51:
                v9 = *((_DWORD *)a3 + 2);
                v24 = (__int64 *)((char *)v162 + v35);
                if ( v9 > 1 )
                  goto LABEL_37;
              }
            }
          }
LABEL_48:
          v47 = (int)v142;
          v48 = HIDWORD(v142);
          if ( (unsigned int)v142 >= HIDWORD(v142) )
            goto LABEL_74;
        }
        else
        {
          v40 = (__int64 *)(v38 + 8);
          v41 = v38 + 8LL * (v9 - 2) + 16;
          while ( 1 )
          {
            v43 = *v40;
            v44 = v40;
            v45 = *(_QWORD *)(*v40 + 8LL * (unsigned int)(*(_DWORD *)(*v40 + 24) - 1) + 32);
            if ( !*(_WORD *)(v37 + 4) )
            {
              v46 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
              if ( v46 )
              {
                if ( !*v46 && v46[1] == 8 && *(_QWORD *)(v37 + 32) == v45 )
                  break;
              }
            }
            if ( v39 == v45 && v37 == *(_QWORD *)(v36 + 864) )
              goto LABEL_48;
            if ( !*(_WORD *)(v45 + 4) )
            {
              v42 = *(_DWORD **)(*(_QWORD *)(v45 + 16) + 24LL);
              if ( v42 )
              {
                if ( !*v42 && v42[1] == 8 && v37 == *(_QWORD *)(v45 + 32) )
                  goto LABEL_48;
              }
            }
            if ( ++v40 == (__int64 *)v41 )
              goto LABEL_52;
          }
          v47 = (int)v142;
          v48 = HIDWORD(v142);
          if ( (unsigned int)v142 >= HIDWORD(v142) )
          {
LABEL_74:
            v59 = (unsigned int)(2 * v48);
            v49 = (char *)sub_186B270(8 * v59);
            v47 = (int)v142;
            v60 = (__int64 *)v141;
            if ( (_DWORD)v142 )
            {
              if ( (unsigned int)((_DWORD)v142 - 1) <= 2 || v49 == (char *)v141 + 8 )
              {
                v83 = 0;
                v84 = 8LL * (unsigned int)v142;
                do
                {
                  *(_QWORD *)&v49[v83] = v60[v83 / 8];
                  v83 += 8LL;
                }
                while ( v83 != v84 );
              }
              else
              {
                v61 = 0;
                v62 = 16LL * ((unsigned int)v142 >> 1);
                do
                {
                  *(__m128i *)&v49[v61] = _mm_loadu_si128((const __m128i *)&v60[v61 / 8]);
                  v61 += 16LL;
                }
                while ( v61 != v62 );
                if ( (v47 & 1) != 0 )
                  *(_QWORD *)&v49[8 * (v47 & 0xFFFFFFFE)] = v60[v47 & 0xFFFFFFFE];
              }
            }
            if ( v60 && v60 != &v143 )
            {
              v134 = v49;
              sub_186B220(v60);
              v47 = (int)v142;
              v49 = v134;
            }
            v141 = v49;
            v43 = *v44;
            HIDWORD(v142) = v59;
LABEL_50:
            v35 += 8;
            *(_QWORD *)&v49[8 * v47] = v43;
            LODWORD(v142) = v47 + 1;
            if ( v35 != v130 )
              goto LABEL_51;
            goto LABEL_55;
          }
        }
        v49 = (char *)v141;
        goto LABEL_50;
      }
    }
    else if ( *(_WORD *)(v22 + 4) )
    {
      v164[0] = v22;
      v24 = v164;
      LODWORD(v163) = 1;
LABEL_13:
      v25 = 1;
      goto LABEL_36;
    }
    v27 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
    if ( !v27 || *v27 || v27[1] != 6 )
      goto LABEL_21;
    LODWORD(v163) = 0;
    v89 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 32) + 24LL) - 1) + 32);
    v90 = *(unsigned int *)(v89 + 24);
    if ( (_DWORD)v90 )
    {
      v91 = v89 + 8 * v90;
      while ( v22 != *(_QWORD *)(v89 + 32) )
      {
        v89 += 8;
        if ( v89 == v91 )
          goto LABEL_147;
      }
      if ( HIDWORD(v163) )
      {
        v24 = (__int64 *)v162;
        v9 = *((_DWORD *)a3 + 2);
        *(_QWORD *)v162 = v22;
        LODWORD(v163) = 1;
        goto LABEL_13;
      }
      v130 = v22;
      v117 = (char *)sub_186B270(0);
      v118 = v163;
      v119 = v162;
      v120 = v117;
      if ( (_DWORD)v163 )
      {
        if ( (unsigned int)(v163 - 1) <= 2 || v117 == (char *)v162 + 8 )
        {
          v127 = 0;
          v128 = 8LL * (unsigned int)v163;
          do
          {
            v120[v127 / 8] = v119[v127 / 8];
            v127 += 8LL;
          }
          while ( v127 != v128 );
        }
        else
        {
          v121 = 0;
          v122 = 16LL * ((unsigned int)v163 >> 1);
          do
          {
            *(__m128i *)&v120[v121 / 8] = _mm_loadu_si128((const __m128i *)&v119[v121 / 8]);
            v121 += 16LL;
          }
          while ( v121 != v122 );
          if ( (v118 & 1) != 0 )
            v120[v118 & 0xFFFFFFFE] = v119[v118 & 0xFFFFFFFE];
        }
      }
      if ( v119 != v164 && v119 )
      {
        v130 = v22;
        sub_186B220(v119);
        v118 = v163;
      }
      v25 = (unsigned int)(v118 + 1);
      v162 = v120;
      HIDWORD(v163) = 0;
      v120[v118] = v22;
      LODWORD(v163) = v118 + 1;
      if ( v118 != -1 )
      {
        v9 = *((_DWORD *)a3 + 2);
        v24 = v120;
        goto LABEL_36;
      }
    }
LABEL_147:
    v25 = *(unsigned int *)(v22 + 24);
    if ( !(_DWORD)v25 )
      goto LABEL_55;
    LODWORD(v101) = HIDWORD(v163);
    v102 = v22;
    v130 = v22 + 8 * v25;
    LODWORD(v25) = 0;
    do
    {
      if ( (unsigned int)v25 < (unsigned int)v101 )
      {
        v103 = (char *)v162;
      }
      else
      {
        v101 = (unsigned int)(2 * v101);
        v103 = (char *)sub_186B270(8 * v101);
        LODWORD(v25) = v163;
        v106 = v162;
        if ( (_DWORD)v163 )
        {
          if ( (unsigned int)(v163 - 1) <= 2 || v103 == (char *)v162 + 8 )
          {
            v123 = 0;
            v124 = 8LL * (unsigned int)v163;
            do
            {
              *(_QWORD *)&v103[v123] = v106[v123 / 8];
              v123 += 8LL;
            }
            while ( v123 != v124 );
          }
          else
          {
            v107 = 0;
            v108 = 16LL * ((unsigned int)v163 >> 1);
            do
            {
              *(__m128i *)&v103[v107] = _mm_loadu_si128((const __m128i *)&v106[v107 / 8]);
              v107 += 16LL;
            }
            while ( v107 != v108 );
            if ( (v25 & 1) != 0 )
              *(_QWORD *)&v103[8 * (v25 & 0xFFFFFFFE)] = v106[(unsigned int)v25 & 0xFFFFFFFE];
          }
        }
        if ( v106 != v164 && v106 )
        {
          sub_186B220(v106);
          LODWORD(v25) = v163;
        }
        v162 = v103;
        HIDWORD(v163) = v101;
      }
      v104 = *(_QWORD *)(v102 + 32);
      v105 = (unsigned int)v25;
      v102 += 8;
      v25 = (unsigned int)(v25 + 1);
      *(_QWORD *)&v103[8 * v105] = v104;
      LODWORD(v163) = v25;
    }
    while ( v102 != v130 );
LABEL_33:
    if ( (_DWORD)v25 )
    {
      v9 = *((_DWORD *)a3 + 2);
      v24 = (__int64 *)v162;
      goto LABEL_36;
    }
LABEL_55:
    v52 = (unsigned int)v142;
    if ( (_DWORD)v142 == 1 )
    {
      v85 = (_QWORD *)a1[3];
      ++*(_DWORD *)(v17 + 8);
      if ( v85 )
      {
        v86 = *((_DWORD *)v85 - 1);
        if ( v86 == *((_DWORD *)v85 - 2) )
        {
          v92 = (3 * v86 + 1) >> 1;
          v93 = 8 * v92 + 8;
          if ( 8 * v86 + 8 >= v93 || v86 >= v92 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v137, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v137);
            sub_233E40((__int64)&v137);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (unsigned int *)sub_186B300(v85 - 1, v93);
          v85 = v94 + 2;
          *v94 = v92;
          v95 = v94[1];
          a1[3] = v85;
          v96 = v95;
          v88 = &v85[v95];
          v52 = v96 + 1;
        }
        else
        {
          v87 = v86;
          v52 = v86 + 1;
          v88 = &v85[v87];
        }
      }
      else
      {
        v109 = (_QWORD *)sub_186B270(0x18u);
        *v109 = 2;
        v85 = v109 + 1;
        a1[3] = v85;
        v88 = v85;
      }
      *v88 = v17;
      *((_DWORD *)v85 - 1) = v52;
    }
    else
    {
      v53 = sub_15DF030(
              *a1,
              v129,
              v130,
              (__int64)v161,
              (int)&v143,
              (int)v164,
              (int)v134,
              v135,
              v136,
              v137,
              v138,
              v139,
              v140,
              (int)v141,
              v142,
              v143,
              v144,
              v145,
              v146,
              v147,
              v148,
              v149,
              v150,
              v151,
              v152,
              v153,
              v154,
              v155,
              v156,
              v157,
              v158,
              (int)v159,
              v160);
      v17 = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      v54 = (_QWORD *)a1[3];
      if ( v54 )
      {
        v55 = *((_DWORD *)v54 - 1);
        if ( v55 == *((_DWORD *)v54 - 2) )
        {
          v77 = (3 * v55 + 1) >> 1;
          v78 = 8 * v77 + 8;
          if ( 8 * v55 + 8 >= v78 || v55 >= v77 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v137, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v137);
            sub_233E40((__int64)&v137);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v79 = (unsigned int *)sub_186B300(v54 - 1, v78);
          v80 = v79[1];
          v54 = v79 + 2;
          *v79 = v77;
          a1[3] = v79 + 2;
          LODWORD(v79) = v80;
          v58 = &v54[v80];
          v57 = (_DWORD)v79 + 1;
        }
        else
        {
          v56 = v55;
          v57 = v55 + 1;
          v58 = &v54[v56];
        }
      }
      else
      {
        v98 = (_QWORD *)sub_186B270(0x18u);
        *v98 = 2;
        v57 = 1;
        v54 = v98 + 1;
        a1[3] = v54;
        v58 = v54;
      }
      *v58 = v17;
      *((_DWORD *)v54 - 1) = v57;
    }
    if ( v162 && v162 != v133 )
      sub_186B220(v162);
    if ( v159 != v131 && v159 )
      sub_186B220(v159);
    if ( v141 != v132 && v141 )
      sub_186B220(v141);
    return v17;
  }
  v12 = 1;
  while ( 1 )
  {
    v13 = v11[v12];
    if ( *(_QWORD *)(v10 + 864) == *(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)(v13 + 24) - 1) + 32) )
      break;
    if ( ++v12 == v9 )
      goto LABEL_10;
  }
  v14 = (_QWORD *)a1[3];
  ++*(_DWORD *)(v13 + 8);
  if ( v14 )
  {
    v15 = *((_DWORD *)v14 - 1);
    if ( v15 == *((_DWORD *)v14 - 2) )
    {
      v72 = (3 * v15 + 1) >> 1;
      v73 = 8 * v72 + 8;
      if ( 8 * v15 + 8 >= v73 || v15 >= v72 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v162, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v162);
        sub_233E40((__int64)&v162);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v74 = (unsigned int *)sub_186B300(v14 - 1, v73);
      v75 = *a3;
      *v74 = v72;
      v14 = v74 + 2;
      v17 = *(_QWORD *)(v75 + v12 * 8);
      v76 = v74[1];
      a1[3] = v74 + 2;
      LODWORD(v74) = v76;
      v19 = &v14[v76];
      v18 = (_DWORD)v74 + 1;
    }
    else
    {
      v16 = v15;
      v17 = v13;
      v18 = v15 + 1;
      v19 = &v14[v16];
    }
  }
  else
  {
    v97 = (_QWORD *)sub_186B270(0x18u);
    *v97 = 2;
    v14 = v97 + 1;
    v17 = *(_QWORD *)(*a3 + v12 * 8);
    a1[3] = v97 + 1;
    v19 = v97 + 1;
    v18 = 1;
  }
  *v19 = v13;
  *((_DWORD *)v14 - 1) = v18;
  return v17;
}

