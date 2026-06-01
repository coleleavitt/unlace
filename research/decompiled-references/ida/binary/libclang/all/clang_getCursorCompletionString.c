__int64 __fastcall clang_getCursorCompletionString(
        int a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        const __m128i a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 CursorKind; // rbx
  _QWORD *v12; // rbx
  _QWORD *v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // r12
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  unsigned __int64 *v20; // rax
  _QWORD *v21; // rbp
  __int64 v22; // rax
  _QWORD *v23; // r9
  __int64 v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // r12
  _QWORD *v27; // rdi
  _QWORD *v28; // r12
  __int64 v29; // r13
  unsigned __int64 v30; // rdx
  __int64 *v31; // r15
  unsigned __int64 *v32; // rcx
  unsigned int v33; // r14d
  unsigned int v34; // edi
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // r8
  unsigned __int64 *v37; // r15
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // r14
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int8 v45; // bl
  int v46; // eax
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // r14
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rax
  _QWORD *v56; // r14
  volatile signed __int32 *v57; // r15
  volatile signed __int32 *v58; // rdx
  signed __int32 v59; // eax
  __int64 v60; // r15
  volatile signed __int32 *v61; // r12
  volatile signed __int32 *v62; // rdx
  signed __int32 v63; // eax
  int v64; // eax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rsi
  _QWORD *v71; // rcx
  __int64 *v72; // rdi
  __int64 *v73; // r12
  __int64 *v74; // rbp
  __int64 v75; // rdx
  int v76; // edi
  int v77; // edi
  int v78; // r9d
  _QWORD *v79; // r8
  __int64 v80; // rsi
  _QWORD *v81; // rcx
  __int64 v82; // r10
  __int64 v83; // rdx
  __int64 v84; // rbx
  unsigned __int64 v85; // rbx
  int v86; // r8d
  int v87; // edi
  unsigned int v88; // eax
  unsigned __int64 v89; // r9
  unsigned __int64 v90; // r13
  __int64 v91; // rbx
  __int64 v92; // rax
  _QWORD *v93; // rbx
  volatile signed __int32 *v94; // r14
  volatile signed __int32 *v95; // rcx
  signed __int32 v96; // eax
  __int64 v97; // r14
  volatile signed __int32 *v98; // rbx
  volatile signed __int32 *v99; // rcx
  signed __int32 v100; // eax
  unsigned __int64 v101; // rax
  int v102; // r10d
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdi
  __int64 v107; // rdi
  _QWORD *v108; // rcx
  __int64 *v109; // rbx
  __int64 *v110; // r12
  __int64 *v111; // rbp
  __int64 v112; // r11
  int v113; // edx
  int v114; // ebx
  int v115; // edi
  _QWORD *v116; // rsi
  __int64 v117; // rcx
  _QWORD *v118; // rdx
  __int64 v119; // r8
  __int64 v120; // rcx
  __int64 v121; // rbx
  unsigned __int64 v122; // rbx
  int v123; // r8d
  int v124; // eax
  unsigned int v125; // r14d
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rdx
  void **v133; // rdx
  __int64 v134; // rdx
  void **v135; // rdx
  void **v136; // rbx
  __int64 v137; // rdx
  void **v138; // rdx
  __int64 v139; // rdx
  void **v140; // rdx
  void **v141; // rbx
  unsigned __int64 *v142; // [rsp+28h] [rbp-180h]
  void *v143; // [rsp+28h] [rbp-180h]
  void *v144; // [rsp+28h] [rbp-180h]
  _QWORD *v145; // [rsp+28h] [rbp-180h]
  _QWORD *v146; // [rsp+28h] [rbp-180h]
  _QWORD *v147; // [rsp+28h] [rbp-180h]
  _QWORD *v148; // [rsp+28h] [rbp-180h]
  unsigned int v149; // [rsp+30h] [rbp-178h]
  _QWORD *v150; // [rsp+30h] [rbp-178h]
  unsigned int v151; // [rsp+30h] [rbp-178h]
  _QWORD *v152; // [rsp+30h] [rbp-178h]
  _QWORD *v153; // [rsp+38h] [rbp-170h]
  _QWORD *v154; // [rsp+38h] [rbp-170h]
  void **v155; // [rsp+40h] [rbp-168h]
  void **v156; // [rsp+48h] [rbp-160h]
  _QWORD v157[2]; // [rsp+50h] [rbp-158h] BYREF
  __m128i si128; // [rsp+60h] [rbp-148h]
  int v159; // [rsp+70h] [rbp-138h]
  void *v160[2]; // [rsp+78h] [rbp-130h]
  __int64 v161; // [rsp+88h] [rbp-120h]
  char v162; // [rsp+90h] [rbp-118h]
  __int128 v163; // [rsp+98h] [rbp-110h]
  __int64 v164; // [rsp+A8h] [rbp-100h]
  int v165; // [rsp+B0h] [rbp-F8h] BYREF
  char v166; // [rsp+B4h] [rbp-F4h]
  __int128 v167; // [rsp+B8h] [rbp-F0h]
  __int64 v168; // [rsp+C8h] [rbp-E0h]
  __int64 v169; // [rsp+D0h] [rbp-D8h]
  void *ptr; // [rsp+E8h] [rbp-C0h]
  int v171; // [rsp+F4h] [rbp-B4h]
  char v172; // [rsp+108h] [rbp-A0h]
  void *v173; // [rsp+110h] [rbp-98h]
  __int64 v174; // [rsp+118h] [rbp-90h]
  int v175; // [rsp+120h] [rbp-88h]
  char v176; // [rsp+124h] [rbp-84h]
  _BYTE v177[128]; // [rsp+128h] [rbp-80h] BYREF

  v9 = a7.m128i_i64[1];
  v10 = a9;
  CursorKind = (unsigned int)clang_getCursorKind(a1, a2, a3, a4, a5, a6, _mm_loadu_si128(&a7).m128i_i32[0]);
  if ( !(unsigned int)clang_isDeclaration(CursorKind) )
  {
    if ( (_DWORD)CursorKind != 501 )
      return 0;
    v20 = *(unsigned __int64 **)(v9 + 16);
    v142 = v20;
    if ( !v10 )
      BUG();
    v21 = *(_QWORD **)(v10 + 8);
    if ( (*((_BYTE *)v20 + 3) & 2) == 0 )
      goto LABEL_22;
    v28 = (_QWORD *)v21[8];
    v29 = v28[211];
    v30 = *(unsigned int *)(v29 + 16);
    v31 = *(__int64 **)v29;
    if ( (_DWORD)v30 )
    {
      v32 = v20;
      a2 = (unsigned int)(v30 - 1);
      v33 = ((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4);
      v34 = a2 & v33;
      v35 = (unsigned __int64 *)&v31[2 * ((unsigned int)a2 & v33)];
      v36 = *v35;
      if ( v32 == (unsigned __int64 *)*v35 )
      {
LABEL_39:
        v37 = v35 + 1;
        v38 = v35[1];
        if ( v38 )
        {
          v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v38 & 4) == 0 )
            goto LABEL_93;
          if ( v39 )
          {
            do
            {
              v39 = *(_QWORD *)v39;
LABEL_93:
              ;
            }
            while ( v39 && (*(_BYTE *)(v39 + 12) & 3) == 2 );
          }
        }
        else
        {
          v39 = 0;
        }
LABEL_42:
        if ( (*((_BYTE *)v142 + 4) & 0x10) != 0 )
        {
          a2 = (unsigned __int64)v142;
          sub_11F4EC0(v28, v142, v30, v32, v36);
          if ( (*((_BYTE *)v142 + 3) & 2) != 0 )
            goto LABEL_44;
          if ( (*((_BYTE *)v142 + 4) & 0x10) != 0 )
            goto LABEL_145;
        }
        else if ( (*((_BYTE *)v142 + 3) & 2) != 0 )
        {
LABEL_44:
          v40 = v28[7];
          v30 = *(unsigned __int8 *)(v40 + 18);
          if ( (v30 & 0x80u) != 0LL || (*(_BYTE *)(v40 + 20) & 0x20) != 0 )
          {
            a2 = *(unsigned int *)(v28[211] + 48LL);
            if ( (_DWORD)a2 )
            {
              v41 = *v37;
              if ( !*v37 || (v41 & 4) == 0 || (v42 = v41 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              {
                v43 = v28[16];
                v28[26] += 32LL;
                v42 = (v43 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                v30 = v42 + 32;
                if ( v28[17] >= v42 + 32 && v43 )
                  v28[16] = v30;
                else
                  v42 = sub_638E10((__int64)(v28 + 16), 32, 4);
                v44 = *v37;
                *(_QWORD *)(v42 + 8) = 0;
                *(_DWORD *)(v42 + 16) = 0;
                *(_BYTE *)(v42 + 20) = 0;
                *(_QWORD *)v42 = v44 & 0xFFFFFFFFFFFFFFF8LL;
                *(_QWORD *)(v42 + 24) = 0;
                *v37 = v42 | 4;
                a2 = *(unsigned int *)(v28[211] + 48LL);
              }
              if ( *(_DWORD *)(v42 + 16) != (_DWORD)a2 )
              {
                a2 = (unsigned __int64)v142;
                sub_11D0740(v28, v142, v42, v32, v36);
              }
              v45 = *(_BYTE *)(v42 + 20);
              if ( (*((_BYTE *)v142 + 4) & 0x10) == 0 )
                goto LABEL_57;
              goto LABEL_146;
            }
            v32 = v142;
            v45 = 0;
            if ( (*((_BYTE *)v142 + 4) & 0x10) == 0 )
              goto LABEL_59;
          }
          else
          {
            v32 = v142;
            v45 = 0;
            if ( (*((_BYTE *)v142 + 4) & 0x10) == 0 )
              goto LABEL_60;
          }
LABEL_145:
          v45 = 0;
LABEL_146:
          a2 = (unsigned __int64)v142;
          sub_11F4EC0(v28, v142, v30, v32, v36);
LABEL_57:
          if ( (*((_BYTE *)v142 + 3) & 2) == 0 )
            goto LABEL_123;
          v40 = v28[7];
          v30 = *(unsigned __int8 *)(v40 + 18);
LABEL_59:
          if ( (v30 & 0x80u) != 0LL )
          {
LABEL_61:
            v46 = *(_DWORD *)(v28[211] + 48LL);
            if ( v46 )
            {
              v47 = *v37;
              if ( !*v37 || (v47 & 4) == 0 || (v48 = v47 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              {
                v49 = v28[16];
                v28[26] += 32LL;
                v48 = (v49 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                v30 = v48 + 32;
                if ( v28[17] >= v48 + 32 && v49 )
                {
                  v28[16] = v30;
                }
                else
                {
                  a2 = 32;
                  v48 = sub_638E10((__int64)(v28 + 16), 32, 4);
                }
                v50 = *v37;
                *(_QWORD *)(v48 + 8) = 0;
                *(_DWORD *)(v48 + 16) = 0;
                *(_BYTE *)(v48 + 20) = 0;
                *(_QWORD *)v48 = v50 & 0xFFFFFFFFFFFFFFF8LL;
                *(_QWORD *)(v48 + 24) = 0;
                *v37 = v48 | 4;
                v46 = *(_DWORD *)(v28[211] + 48LL);
              }
              if ( *(_DWORD *)(v48 + 16) != v46 )
              {
                a2 = (unsigned __int64)v142;
                sub_11D0740(v28, v142, v48, v32, v36);
              }
              v51 = *(_QWORD *)(v48 + 8);
              if ( v51 > 7 )
              {
                if ( (v51 & 4) == 0 )
                {
                  v52 = v48 + 8;
                  v53 = 1;
LABEL_74:
                  v22 = *(_QWORD *)(*(_QWORD *)(v52 + 8 * v53 - 8) + 16LL);
LABEL_23:
                  v157[0] = 0;
                  v159 = 0;
                  v157[1] = v142;
                  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E550);
                  v161 = 0;
                  v162 = v162 & 0x80 | 0x40;
                  v164 = v22;
                  *(_OWORD *)v160 = 0;
                  v163 = 0;
                  v23 = (_QWORD *)v21[246];
                  if ( v23
                    || (v91 = operator new(0x70u),
                        *(_QWORD *)(v91 + 8) = 0x100000001LL,
                        *(_QWORD *)v91 = off_47CFF50,
                        memset((void *)(v91 + 16), 0, 0x60u),
                        *(_DWORD *)(v91 + 44) = 4,
                        *(_QWORD *)(v91 + 32) = v91 + 48,
                        *(_QWORD *)(v91 + 80) = v91 + 96,
                        *(_QWORD *)(v91 + 104) = 1,
                        v92 = operator new(0x28u),
                        *(_DWORD *)(v92 + 16) = 0,
                        v23 = (_QWORD *)v92,
                        *(_QWORD *)v92 = 0,
                        *(_QWORD *)(v92 + 8) = 0,
                        *(_QWORD *)(v92 + 24) = v91 + 16,
                        *(_QWORD *)(v92 + 32) = v91,
                        v93 = (_QWORD *)v21[246],
                        v21[246] = v92,
                        !v93) )
                  {
                    v24 = (__int64)v23;
                  }
                  else
                  {
                    v94 = (volatile signed __int32 *)v93[4];
                    if ( v94 )
                    {
                      v95 = v94 + 2;
                      if ( *((_QWORD *)v94 + 1) == 0x100000001LL )
                      {
                        v129 = *(_QWORD *)v94;
                        v130 = v93[4];
                        *((_QWORD *)v94 + 1) = 0;
                        (*(void (__fastcall **)(__int64, unsigned __int64, __int64, volatile signed __int32 *))(v129 + 16))(
                          v130,
                          a2,
                          0x100000001LL,
                          v95);
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 24LL))(v94);
                      }
                      else
                      {
                        if ( &_pthread_key_create )
                        {
                          v96 = _InterlockedExchangeAdd(v95, 0xFFFFFFFF);
                        }
                        else
                        {
                          v96 = *((_DWORD *)v94 + 2);
                          *((_DWORD *)v94 + 2) = v96 - 1;
                        }
                        if ( v96 == 1 )
                          sub_6111C0(v94);
                      }
                    }
                    operator delete();
                    operator delete(v93, 0x28u);
                    if ( v21[246] )
                    {
                      v24 = v21[246];
                      LODWORD(v23) = v24;
                    }
                    else
                    {
                      v97 = operator new(0x70u);
                      *(_QWORD *)(v97 + 8) = 0x100000001LL;
                      *(_QWORD *)v97 = off_47CFF50;
                      memset((void *)(v97 + 16), 0, 0x60u);
                      *(_DWORD *)(v97 + 44) = 4;
                      *(_QWORD *)(v97 + 32) = v97 + 48;
                      *(_QWORD *)(v97 + 80) = v97 + 96;
                      *(_QWORD *)(v97 + 104) = 1;
                      v24 = operator new(0x28u);
                      *(_DWORD *)(v24 + 16) = 0;
                      *(_QWORD *)v24 = 0;
                      *(_QWORD *)(v24 + 8) = 0;
                      *(_QWORD *)(v24 + 24) = v97 + 16;
                      *(_QWORD *)(v24 + 32) = v97;
                      v23 = (_QWORD *)v21[246];
                      v21[246] = v24;
                      if ( v23 )
                      {
                        v98 = (volatile signed __int32 *)v23[4];
                        if ( v98 )
                        {
                          v99 = v98 + 2;
                          if ( *((_QWORD *)v98 + 1) == 0x100000001LL )
                          {
                            v131 = *(_QWORD *)v98;
                            v146 = v23;
                            *((_QWORD *)v98 + 1) = 0;
                            (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, volatile signed __int32 *))(v131 + 16))(
                              v98,
                              40,
                              0x100000001LL,
                              v99);
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v98 + 24LL))(v98);
                            v23 = v146;
                          }
                          else
                          {
                            if ( &_pthread_key_create )
                            {
                              v100 = _InterlockedExchangeAdd(v99, 0xFFFFFFFF);
                            }
                            else
                            {
                              v100 = *((_DWORD *)v98 + 2);
                              *((_DWORD *)v98 + 2) = v100 - 1;
                            }
                            if ( v100 == 1 )
                            {
                              v148 = v23;
                              sub_6111C0(v98);
                              v23 = v148;
                            }
                          }
                        }
                        v144 = v23;
                        operator delete();
                        operator delete(v144, 0x28u);
                        v24 = v21[246];
                        LODWORD(v23) = 0;
                      }
                    }
                  }
                  v25 = *(_QWORD *)(v24 + 24);
                  v165 = 0;
                  v166 = 0;
                  v167 = 0;
                  v168 = 0;
                  v169 = 0;
                  v172 = 0;
                  v173 = v177;
                  v174 = 8;
                  v175 = 0;
                  v176 = 1;
                  v9 = sub_1367940((unsigned int)v157, v21[10], v21[8], (unsigned int)&v165, v25, (_DWORD)v23, 0);
                  if ( !v176 )
                    free(v173);
                  if ( v172 && v171 )
                    free(ptr);
                  v26 = v160[1];
                  v17 = v160[0];
                  if ( v160[1] == v160[0] )
                    goto LABEL_15;
                  do
                  {
                    v27 = (_QWORD *)v17[3];
                    if ( v27 != v17 + 5 )
                      operator delete(v27, v17[5] + 1LL);
                    v17 += 8;
                  }
                  while ( v26 != v17 );
                  goto LABEL_14;
                }
                v101 = v51 & 0xFFFFFFFFFFFFFFF8LL;
                v52 = *(_QWORD *)v101;
                v53 = *(unsigned int *)(v101 + 8);
                if ( v39 && (*(_BYTE *)(v39 + 12) & 3) == 0 )
                {
                  if ( v53 )
                    goto LABEL_74;
LABEL_125:
                  v90 = (4LL * v45) | v39 & 0xFFFFFFFFFFFFFFFBLL;
                  if ( v90 > 7 )
                  {
                    v22 = sub_1181E10(v90 & 0xFFFFFFFFFFFFFFF8LL, a2, v30, v32, v36);
                    if ( v22 )
                      v22 = *(_QWORD *)(v22 + 16);
                    goto LABEL_23;
                  }
                  goto LABEL_22;
                }
                if ( v53 )
                  goto LABEL_74;
LABEL_22:
                v22 = 0;
                goto LABEL_23;
              }
            }
LABEL_123:
            if ( v39 && (*(_BYTE *)(v39 + 12) & 3) == 0 )
              goto LABEL_125;
            goto LABEL_22;
          }
LABEL_60:
          if ( (*(_BYTE *)(v40 + 20) & 0x20) == 0 )
            goto LABEL_123;
          goto LABEL_61;
        }
        v45 = 0;
        goto LABEL_123;
      }
      v102 = 1;
      v32 = nullptr;
      while ( v36 != -4096 )
      {
        if ( v36 == -8192 && !v32 )
          v32 = v35;
        v34 = a2 & (v102 + v34);
        v35 = (unsigned __int64 *)&v31[2 * v34];
        v36 = *v35;
        if ( v142 == (unsigned __int64 *)*v35 )
          goto LABEL_39;
        ++v102;
      }
      if ( !v32 )
        v32 = v35;
      v87 = *(_DWORD *)(v29 + 8) + 1;
      v64 = 2 * v30;
      if ( 4 * v87 < (unsigned int)(3 * v30) )
      {
        v36 = (unsigned int)v30 >> 3;
        if ( (unsigned int)v36 < (int)v30 - *(_DWORD *)(v29 + 12) - v87 )
        {
LABEL_117:
          *(_DWORD *)(v29 + 8) = v87;
          if ( *v32 != -4096 )
            --*(_DWORD *)(v29 + 12);
          v32[1] = 0;
          v37 = v32 + 1;
          v39 = 0;
          *v32 = (unsigned __int64)v142;
          goto LABEL_42;
        }
        v151 = *(_DWORD *)(v29 + 16);
        v103 = ((((a2 | (a2 >> 1)) >> 2) | a2 | (a2 >> 1)) >> 4) | ((a2 | (a2 >> 1)) >> 2) | a2 | (a2 >> 1);
        v104 = ((((v103 >> 8) | v103) >> 16) | (v103 >> 8) | v103) + 1;
        if ( (unsigned int)v104 < 0x40 )
          LODWORD(v104) = 64;
        *(_DWORD *)(v29 + 16) = v104;
        v105 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v104, 8);
        v106 = *(unsigned int *)(v29 + 16);
        *(_QWORD *)v29 = v105;
        v107 = 16 * v106;
        v108 = &v105[(unsigned __int64)v107 / 8];
        if ( v31 )
        {
          *(_QWORD *)(v29 + 8) = 0;
          v109 = &v31[2 * v151];
          if ( v107 )
          {
            if ( (v107 & 0x10) == 0 || (*v105 = -4096, v105 += 2, v105 != v108) )
            {
              do
              {
                *v105 = -4096;
                v105 += 4;
                *(v105 - 2) = -4096;
              }
              while ( v105 != v108 );
            }
          }
          v152 = v28;
          v110 = v31;
          v154 = v21;
          v111 = v109;
          do
          {
            v112 = *v110;
            if ( *v110 != -4096 && v112 != -8192 )
            {
              v113 = *(_DWORD *)(v29 + 16);
              if ( !v113 )
              {
                *(_QWORD *)&dword_0 = *v110;
                BUG();
              }
              v114 = v113 - 1;
              v115 = 1;
              v116 = nullptr;
              LODWORD(v117) = (v113 - 1) & (((unsigned int)v112 >> 9) ^ ((unsigned int)v112 >> 4));
              v118 = (_QWORD *)(*(_QWORD *)v29 + 16LL * (unsigned int)v117);
              v119 = *v118;
              if ( v112 != *v118 )
              {
                while ( v119 != -4096 )
                {
                  if ( v119 == -8192 && !v116 )
                    v116 = v118;
                  v117 = v114 & (unsigned int)(v117 + v115);
                  v118 = (_QWORD *)(*(_QWORD *)v29 + 16 * v117);
                  v119 = *v118;
                  if ( v112 == *v118 )
                    goto LABEL_175;
                  ++v115;
                }
                if ( v116 )
                  v118 = v116;
              }
LABEL_175:
              *v118 = v112;
              v120 = v110[1];
              v110[1] = 0;
              v118[1] = v120;
              ++*(_DWORD *)(v29 + 8);
              v121 = v110[1];
              if ( v121 )
              {
                if ( (v121 & 4) != 0 )
                {
                  v122 = v121 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v122 )
                  {
                    v137 = *(_QWORD *)(v122 + 24);
                    if ( v137 )
                    {
                      if ( (v137 & 4) != 0 )
                      {
                        v138 = (void **)(v137 & 0xFFFFFFFFFFFFFFF8LL);
                        if ( v138 )
                        {
                          if ( *v138 != v138 + 2 )
                          {
                            v156 = v138;
                            free(*v138);
                            v138 = v156;
                          }
                          operator delete(v138, 0x30u);
                        }
                      }
                    }
                    v139 = *(_QWORD *)(v122 + 8);
                    if ( v139 )
                    {
                      if ( (v139 & 4) != 0 )
                      {
                        v140 = (void **)(v139 & 0xFFFFFFFFFFFFFFF8LL);
                        v141 = v140;
                        if ( v140 )
                        {
                          if ( *v140 != v140 + 2 )
                            free(*v140);
                          operator delete(v141, 0x30u);
                        }
                      }
                    }
                  }
                }
              }
            }
            v110 += 2;
          }
          while ( v111 != v110 );
          v28 = v152;
          v21 = v154;
          operator delete();
        }
        else
        {
          *(_QWORD *)(v29 + 8) = 0;
          if ( v105 != v108 )
          {
            if ( (v107 & 0x10) == 0 || (*v105 = -4096, v105 += 2, v105 != v108) )
            {
              do
              {
                *v105 = -4096;
                v105 += 4;
                *(v105 - 2) = -4096;
              }
              while ( v105 != v108 );
            }
          }
        }
        v123 = *(_DWORD *)(v29 + 16);
        v87 = *(_DWORD *)(v29 + 8) + 1;
        if ( v123 )
        {
          v36 = (unsigned int)(v123 - 1);
          v124 = 1;
          a2 = 0;
          v125 = v36 & v33;
          v32 = (unsigned __int64 *)(*(_QWORD *)v29 + 16LL * v125);
          v30 = *v32;
          if ( v142 != (unsigned __int64 *)*v32 )
          {
            while ( v30 != -4096 )
            {
              if ( v30 == -8192 && !a2 )
                a2 = (unsigned __int64)v32;
              v125 = v36 & (v124 + v125);
              v32 = (unsigned __int64 *)(*(_QWORD *)v29 + 16LL * v125);
              v30 = *v32;
              if ( v142 == (unsigned __int64 *)*v32 )
                goto LABEL_117;
              ++v124;
            }
            if ( a2 )
              v32 = (unsigned __int64 *)a2;
          }
          goto LABEL_117;
        }
LABEL_273:
        ++*(_DWORD *)(v29 + 8);
        BUG();
      }
    }
    else
    {
      v64 = 0;
    }
    v149 = *(_DWORD *)(v29 + 16);
    v65 = (unsigned int)(v64 - 1) | ((unsigned __int64)(unsigned int)(v64 - 1) >> 1);
    v66 = (((v65 >> 2) | v65) >> 4) | (v65 >> 2) | v65;
    v67 = ((((v66 >> 8) | v66) >> 16) | (v66 >> 8) | v66) + 1;
    if ( (unsigned int)v67 < 0x40 )
      LODWORD(v67) = 64;
    *(_DWORD *)(v29 + 16) = v67;
    v68 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v67, 8);
    v69 = *(unsigned int *)(v29 + 16);
    *(_QWORD *)v29 = v68;
    v70 = 16 * v69;
    v71 = &v68[(unsigned __int64)v70 / 8];
    if ( v31 )
    {
      *(_QWORD *)(v29 + 8) = 0;
      v72 = &v31[2 * v149];
      if ( v70 )
      {
        if ( (v70 & 0x10) == 0 || (*v68 = -4096, v68 += 2, v68 != v71) )
        {
          do
          {
            *v68 = -4096;
            v68 += 4;
            *(v68 - 2) = -4096;
          }
          while ( v68 != v71 );
        }
      }
      if ( v31 != v72 )
      {
        v150 = v28;
        v73 = v31;
        v153 = v21;
        v74 = v72;
        do
        {
          v75 = *v73;
          if ( *v73 != -4096 && v75 != -8192 )
          {
            v76 = *(_DWORD *)(v29 + 16);
            if ( !v76 )
            {
              *(_QWORD *)&dword_0 = *v73;
              BUG();
            }
            v77 = v76 - 1;
            v78 = 1;
            v79 = nullptr;
            LODWORD(v80) = v77 & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
            v81 = (_QWORD *)(*(_QWORD *)v29 + 16LL * (unsigned int)v80);
            v82 = *v81;
            if ( v75 != *v81 )
            {
              while ( v82 != -4096 )
              {
                if ( v82 == -8192 && !v79 )
                  v79 = v81;
                v80 = v77 & (unsigned int)(v80 + v78);
                v81 = (_QWORD *)(*(_QWORD *)v29 + 16 * v80);
                v82 = *v81;
                if ( v75 == *v81 )
                  goto LABEL_109;
                ++v78;
              }
              if ( v79 )
                v81 = v79;
            }
LABEL_109:
            *v81 = v75;
            v83 = v73[1];
            v73[1] = 0;
            v81[1] = v83;
            ++*(_DWORD *)(v29 + 8);
            v84 = v73[1];
            if ( v84 )
            {
              if ( (v84 & 4) != 0 )
              {
                v85 = v84 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v85 )
                {
                  v132 = *(_QWORD *)(v85 + 24);
                  if ( v132 )
                  {
                    if ( (v132 & 4) != 0 )
                    {
                      v133 = (void **)(v132 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v133 )
                      {
                        if ( *v133 != v133 + 2 )
                        {
                          v155 = v133;
                          free(*v133);
                          v133 = v155;
                        }
                        operator delete(v133, 0x30u);
                      }
                    }
                  }
                  v134 = *(_QWORD *)(v85 + 8);
                  if ( v134 )
                  {
                    if ( (v134 & 4) != 0 )
                    {
                      v135 = (void **)(v134 & 0xFFFFFFFFFFFFFFF8LL);
                      v136 = v135;
                      if ( v135 )
                      {
                        if ( *v135 != v135 + 2 )
                          free(*v135);
                        operator delete(v136, 0x30u);
                      }
                    }
                  }
                }
              }
            }
          }
          v73 += 2;
        }
        while ( v74 != v73 );
        v28 = v150;
        v21 = v153;
      }
      operator delete();
    }
    else
    {
      *(_QWORD *)(v29 + 8) = 0;
      if ( v68 != v71 )
      {
        if ( (v70 & 0x10) == 0 || (*v68 = -4096, v68 += 2, v68 != v71) )
        {
          do
          {
            *v68 = -4096;
            v68 += 4;
            *(v68 - 2) = -4096;
          }
          while ( v68 != v71 );
        }
      }
    }
    v86 = *(_DWORD *)(v29 + 16);
    v87 = *(_DWORD *)(v29 + 8) + 1;
    if ( v86 )
    {
      a2 = (unsigned __int64)v142;
      v36 = (unsigned int)(v86 - 1);
      v30 = (unsigned int)v142 >> 9;
      v88 = v36 & (v30 ^ ((unsigned int)v142 >> 4));
      v32 = (unsigned __int64 *)(*(_QWORD *)v29 + 16LL * v88);
      v89 = *v32;
      if ( v142 != (unsigned __int64 *)*v32 )
      {
        a2 = 1;
        v30 = 0;
        while ( v89 != -4096 )
        {
          if ( v89 == -8192 && !v30 )
            v30 = (unsigned __int64)v32;
          v88 = v36 & (a2 + v88);
          v32 = (unsigned __int64 *)(*(_QWORD *)v29 + 16LL * v88);
          v89 = *v32;
          if ( v142 == (unsigned __int64 *)*v32 )
            goto LABEL_117;
          a2 = (unsigned int)(a2 + 1);
        }
        if ( v30 )
          v32 = (unsigned __int64 *)v30;
      }
      goto LABEL_117;
    }
    goto LABEL_273;
  }
  if ( !v9 )
    return v9;
  if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 16 > 0x3E )
    return 0;
  if ( !v10 )
  {
    si128.m128i_i32[2] = 0;
    v159 = 0;
    v157[0] = v9;
    v161 = 0;
    v164 = 0;
    v162 = v162 & 0x80 | 0x40;
    si128.m128i_i64[0] = 50;
    *(_OWORD *)v160 = 0;
    v163 = 0;
    sub_120E050(v157, 1);
    BUG();
  }
  v157[0] = v9;
  v12 = *(_QWORD **)(v10 + 8);
  si128.m128i_i64[0] = 50;
  *(_OWORD *)v160 = 0;
  v163 = 0;
  si128.m128i_i32[2] = 0;
  v159 = 0;
  v161 = 0;
  v162 = v162 & 0x80 | 0x40;
  v164 = 0;
  sub_120E050(v157, 1);
  v13 = (_QWORD *)v12[246];
  if ( v13
    || (v54 = operator new(0x70u),
        *(_QWORD *)(v54 + 8) = 0x100000001LL,
        *(_QWORD *)v54 = off_47CFF50,
        memset((void *)(v54 + 16), 0, 0x60u),
        *(_DWORD *)(v54 + 44) = 4,
        *(_QWORD *)(v54 + 32) = v54 + 48,
        *(_QWORD *)(v54 + 80) = v54 + 96,
        *(_QWORD *)(v54 + 104) = 1,
        v55 = operator new(0x28u),
        *(_DWORD *)(v55 + 16) = 0,
        v13 = (_QWORD *)v55,
        *(_QWORD *)v55 = 0,
        *(_QWORD *)(v55 + 8) = 0,
        *(_QWORD *)(v55 + 24) = v54 + 16,
        *(_QWORD *)(v55 + 32) = v54,
        v56 = (_QWORD *)v12[246],
        v12[246] = v55,
        !v56) )
  {
    v14 = (__int64)v13;
  }
  else
  {
    v57 = (volatile signed __int32 *)v56[4];
    if ( v57 )
    {
      v58 = v57 + 2;
      if ( *((_QWORD *)v57 + 1) == 0x100000001LL )
      {
        v126 = *(_QWORD *)v57;
        v127 = v56[4];
        *((_QWORD *)v57 + 1) = 0;
        (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v126 + 16))(v127, 1, v58);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 24LL))(v57);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v59 = _InterlockedExchangeAdd(v58, 0xFFFFFFFF);
        }
        else
        {
          v59 = *((_DWORD *)v57 + 2);
          *((_DWORD *)v57 + 2) = v59 - 1;
        }
        if ( v59 == 1 )
          sub_6111C0(v57);
      }
    }
    operator delete();
    operator delete(v56, 0x28u);
    if ( v12[246] )
    {
      v14 = v12[246];
      LODWORD(v13) = v14;
    }
    else
    {
      v60 = operator new(0x70u);
      *(_QWORD *)(v60 + 8) = 0x100000001LL;
      *(_QWORD *)v60 = off_47CFF50;
      memset((void *)(v60 + 16), 0, 0x60u);
      *(_DWORD *)(v60 + 44) = 4;
      *(_QWORD *)(v60 + 32) = v60 + 48;
      *(_QWORD *)(v60 + 80) = v60 + 96;
      *(_QWORD *)(v60 + 104) = 1;
      v14 = operator new(0x28u);
      *(_DWORD *)(v14 + 16) = 0;
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 24) = v60 + 16;
      *(_QWORD *)(v14 + 32) = v60;
      v13 = (_QWORD *)v12[246];
      v12[246] = v14;
      if ( v13 )
      {
        v61 = (volatile signed __int32 *)v13[4];
        if ( v61 )
        {
          v62 = v61 + 2;
          if ( *((_QWORD *)v61 + 1) == 0x100000001LL )
          {
            v128 = *(_QWORD *)v61;
            v145 = v13;
            *((_QWORD *)v61 + 1) = 0;
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v128 + 16))(
              v61,
              40,
              v62);
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 24LL))(v61);
            v13 = v145;
          }
          else
          {
            if ( &_pthread_key_create )
            {
              v63 = _InterlockedExchangeAdd(v62, 0xFFFFFFFF);
            }
            else
            {
              v63 = *((_DWORD *)v61 + 2);
              *((_DWORD *)v61 + 2) = v63 - 1;
            }
            if ( v63 == 1 )
            {
              v147 = v13;
              sub_6111C0(v61);
              v13 = v147;
            }
          }
        }
        v143 = v13;
        operator delete();
        operator delete(v143, 0x28u);
        v14 = v12[246];
        LODWORD(v13) = 0;
      }
    }
  }
  v15 = *(_QWORD *)(v14 + 24);
  v166 = 0;
  v165 = 0;
  v167 = 0;
  v168 = 0;
  v169 = 0;
  v172 = 0;
  v173 = v177;
  v174 = 8;
  v175 = 0;
  v176 = 1;
  v9 = sub_1367940((unsigned int)v157, v12[10], v12[8], (unsigned int)&v165, v15, (_DWORD)v13, 1);
  if ( !v176 )
    free(v173);
  if ( v172 && v171 )
    free(ptr);
  v16 = v160[1];
  v17 = v160[0];
  if ( v160[1] == v160[0] )
    goto LABEL_15;
  do
  {
    v18 = (_QWORD *)v17[3];
    if ( v18 != v17 + 5 )
      operator delete(v18, v17[5] + 1LL);
    v17 += 8;
  }
  while ( v16 != v17 );
LABEL_14:
  v17 = v160[0];
LABEL_15:
  if ( v17 )
    operator delete(v17, v161 - (_QWORD)v17);
  return v9;
}

