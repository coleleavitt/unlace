__int64 __fastcall sub_22C40E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const void *a5, size_t a6)
{
  size_t v9; // rax
  __int64 v10; // rax
  __m128 *v11; // r13
  __int64 v12; // r15
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 *v19; // rsi
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __m128 *v22; // rsi
  __int64 *v23; // r14
  __int64 v24; // rdx
  unsigned __int64 *v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __m128 *v29; // r14
  __int64 v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  unsigned int v34; // ecx
  unsigned __int64 *v35; // rsi
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  __int64 *v38; // rcx
  bool v39; // zf
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // edi
  __int64 *v43; // r8
  __int64 *v44; // r12
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rbp
  __int64 v48; // rbx
  _QWORD *v49; // rsi
  __int64 v50; // rax
  __m128 *v51; // r12
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned int v56; // edi
  unsigned __int64 v57; // r9
  __int64 v58; // rax
  int v59; // r10d
  unsigned __int64 *v60; // rbp
  int v61; // ecx
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // edx
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  unsigned __int64 *v67; // rax
  __int64 *v68; // rdx
  int v69; // ebp
  __m128 *v70; // r11
  int v71; // edi
  int v72; // edi
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // edx
  unsigned __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // r10d
  int v80; // r10d
  __int64 v81; // rdi
  int v82; // edi
  int v83; // ebp
  int v84; // ebp
  unsigned int v85; // r8d
  int v86; // r10d
  unsigned __int64 *v87; // r9
  int v88; // ebp
  int v89; // ebp
  unsigned int v90; // r8d
  __int64 v91; // rbp
  __int64 *v92; // rax
  _QWORD *v93; // rbp
  _QWORD *v94; // rax
  __int64 *v95; // rdx
  int v96; // eax
  __int64 *v97; // rdi
  int v98; // esi
  int v99; // r9d
  __int64 v100; // r8
  int v101; // edx
  int v102; // edx
  int v103; // edx
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // r10
  __int64 *v107; // rax
  int v108; // esi
  __int64 *v109; // r12
  int v110; // eax
  unsigned __int8 v111; // al
  __int64 *v112; // rax
  unsigned __int8 v113; // al
  unsigned __int64 *v114; // r12
  __int64 v115; // rax
  unsigned __int64 *i; // r14
  int v118; // r9d
  __int64 *v119; // r8
  int v120; // r10d
  __int64 *v121; // rax
  __int64 v122; // rax
  __int64 *v123; // [rsp+0h] [rbp-E8h]
  __int64 *v124; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v125; // [rsp+10h] [rbp-D8h]
  __m128 *v126; // [rsp+18h] [rbp-D0h]
  __int64 v127; // [rsp+20h] [rbp-C8h]
  __int64 *v128; // [rsp+28h] [rbp-C0h]
  __int64 v129; // [rsp+30h] [rbp-B8h]
  __int64 v130; // [rsp+38h] [rbp-B0h]
  __int64 v131; // [rsp+40h] [rbp-A8h]
  __int64 v132; // [rsp+48h] [rbp-A0h]
  __int64 v133; // [rsp+50h] [rbp-98h]
  unsigned __int64 v134; // [rsp+58h] [rbp-90h]
  __m128 *v135; // [rsp+60h] [rbp-88h]
  __int64 v136; // [rsp+68h] [rbp-80h]
  unsigned __int64 *v137; // [rsp+70h] [rbp-78h]
  __int64 v138; // [rsp+78h] [rbp-70h]
  __int64 v139; // [rsp+80h] [rbp-68h] BYREF
  bool v140; // [rsp+88h] [rbp-60h]
  __m128 v141; // [rsp+90h] [rbp-58h] BYREF
  __int64 v142; // [rsp+A0h] [rbp-48h]
  __int64 *v143; // [rsp+A8h] [rbp-40h]

  v132 = a3;
  v9 = j__strlen("llvm.dbg.cu");
  if ( sub_20BE520(a1, (__int64)"llvm.dbg.cu", v9) )
  {
    v10 = *(unsigned int *)(a4 + 32);
    v130 = a2;
    v11 = &v141;
    v126 = (__m128 *)&v139;
    v12 = a4;
    v133 = v10;
    if ( a2 == v132 )
      return 1;
    while ( 1 )
    {
      v13 = v130 - 56;
      if ( !v130 )
        v13 = 0;
      v14 = (_QWORD *)(*(_QWORD *)v12 + 16LL * *(unsigned int *)(v12 + 16));
      sub_22C0C60(v11, v14, v14, v12, 1);
      v15 = *(unsigned int *)(v12 + 16);
      v16 = v141.m128_u64[0];
      v17 = *(_QWORD *)v12;
      if ( (_DWORD)v15 )
      {
        v18 = (v15 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        v19 = (__int64 *)(v17 + 16LL * v18);
        v20 = *v19;
        if ( v13 == *v19 )
          goto LABEL_9;
        v98 = 1;
        if ( v20 != -4096 )
          break;
      }
LABEL_102:
      sub_22C0C60(v11, (_QWORD *)(v17 + 16LL * (unsigned int)v15), (_QWORD *)(v17 + 16LL * (unsigned int)v15), v12, 1);
      v21 = v141.m128_u64[0];
LABEL_10:
      if ( v16 == v21 && !(unsigned __int8)sub_22BF9A0(v13) )
      {
        if ( ++v133 >= (unsigned __int64)qword_2D0CED8 )
          return 1;
        v22 = v11;
        v124 = (__int64 *)sub_20AF7C0(v13);
        v23 = v124;
        v123 = v124;
        v141 = _mm_loadh_ps((const double *)&v124);
        sub_22C3D90(v12, (__int64 *)v11, (const double *)&v11->m128_u64[1]);
        if ( v23 )
        {
          v111 = *((_BYTE *)v123 - 16);
          v112 = (v111 & 2) != 0 ? (__int64 *)*(v123 - 4) : &v123[-((v111 >> 2) & 0xF) - 2];
          v24 = v112[7];
          if ( v24 )
          {
            v113 = *(_BYTE *)(v24 - 16);
            if ( (v113 & 2) != 0 )
            {
              v114 = *(unsigned __int64 **)(v24 - 32);
              v115 = *(unsigned int *)(v24 - 24);
            }
            else
            {
              v114 = (unsigned __int64 *)(v24 - 8LL * ((v113 >> 2) & 0xF) - 16);
              v115 = (*(_WORD *)(v24 - 16) >> 6) & 0xF;
            }
            for ( i = &v114[v115]; i != v114; ++v114 )
            {
              if ( !*v114 )
                BUG();
              if ( *(_BYTE *)*v114 == 26 )
              {
                v22 = v11;
                v141.m128_u64[0] = *v114;
                *(_DWORD *)sub_22C2820(v12 + 120, (__int64 *)v11) = 0;
              }
            }
          }
        }
        v27 = *(_QWORD *)(v13 + 80);
        v28 = v13 + 72;
        v131 = v13 + 72;
        v127 = v27;
        if ( v27 != v13 + 72 )
        {
          if ( !v127 )
LABEL_185:
            BUG();
          v29 = v11;
          v135 = (__m128 *)(v12 + 160);
          while ( 1 )
          {
            v30 = *(_QWORD *)(v127 + 32);
            v125 = v127 + 24;
            if ( v30 != v127 + 24 )
              break;
LABEL_56:
            v127 = *(_QWORD *)(v127 + 8);
            if ( v131 == v127 )
            {
              v11 = v29;
              goto LABEL_4;
            }
            if ( !v127 )
              goto LABEL_185;
          }
          while ( 2 )
          {
            if ( !v30 )
              BUG();
            v44 = (__int64 *)(v30 - 24);
            if ( *(_BYTE *)(v30 - 24) != 84 )
            {
              if ( dword_2D0CC78 > 0 )
              {
                v45 = *(_QWORD *)(v30 + 40);
                if ( v45 )
                {
                  v46 = sub_208B290(v45);
                  v47 = v24;
                  v48 = v46;
                  if ( v46 != v24 )
                  {
                    if ( *(_BYTE *)(v46 + 32) )
                    {
                      while ( 1 )
                      {
                        v48 = *(_QWORD *)(v48 + 8);
                        if ( v24 == v48 )
                          break;
                        if ( !*(_BYTE *)(v48 + 32) )
                          goto LABEL_40;
                      }
                    }
                    else
                    {
LABEL_40:
                      v124 = (__int64 *)(v30 - 24);
                      v128 = (__int64 *)(v12 + 120);
LABEL_41:
                      if ( v123 )
                      {
                        v49 = *(_QWORD **)(v48 + 24);
                        v141.m128_u64[0] = (unsigned __int64)v49;
                        if ( v49 )
                          sub_20B2EE0((__int64)v29, v49, 1);
                        v50 = sub_208B350((__int64 *)v29);
                        v22 = (__m128 *)v141.m128_u64[0];
                        v51 = (__m128 *)v50;
                        if ( v141.m128_u64[0] )
                          sub_20A0850((__int64)v29, v141.m128_u64[0]);
                        if ( !v51 && !sub_208AE90(v48) )
                        {
                          v53 = sub_208ACD0(v48 + 72);
                          v54 = *(unsigned int *)(v12 + 136);
                          v139 = v53;
                          if ( (_DWORD)v54 )
                          {
                            v55 = *(_QWORD *)(v12 + 120);
                            v56 = (v54 - 1) & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
                            v22 = (__m128 *)(v55 + 16LL * v56);
                            v57 = v22->m128_u64[0];
                            if ( v53 == v22->m128_u64[0] )
                            {
LABEL_54:
                              sub_22C0B30(v29, v22, (_QWORD *)(v55 + 16 * v54), (__int64)v128, 1);
                              v58 = *(unsigned int *)(v141.m128_u64[0] + 8);
LABEL_55:
                              ++*(_DWORD *)(*(_QWORD *)(v12 + 144) + 16 * v58 + 8);
                              goto LABEL_49;
                            }
                            v101 = 1;
                            if ( v57 != -4096 )
                            {
                              while ( 1 )
                              {
                                if ( v57 == -8192 && !v51 )
                                  v51 = v22;
                                v56 = (v54 - 1) & (v101 + v56);
                                v22 = (__m128 *)(v55 + 16LL * v56);
                                v57 = v22->m128_u64[0];
                                if ( v53 == v22->m128_u64[0] )
                                  goto LABEL_54;
                                if ( v57 == -4096 )
                                  break;
                                ++v101;
                              }
                              if ( v51 )
                                v22 = v51;
                            }
                            v102 = *(_DWORD *)(v12 + 128);
                            v141.m128_u64[0] = (unsigned __int64)v22;
                            v103 = v102 + 1;
                            if ( 4 * v103 < (unsigned int)(3 * v54) )
                            {
                              if ( (int)v54 - *(_DWORD *)(v12 + 132) - v103 > (unsigned int)v54 >> 3 )
                              {
LABEL_106:
                                v39 = v22->m128_u64[0] == -4096;
                                *(_DWORD *)(v12 + 128) = v103;
                                if ( !v39 )
                                  --*(_DWORD *)(v12 + 132);
                                v22->m128_i32[2] = 0;
                                v104 = *(unsigned int *)(v12 + 136);
                                v22->m128_u64[0] = v53;
                                sub_22C0B30(v29, v22, (_QWORD *)(v55 + 16 * v104), (__int64)v128, 1);
                                v105 = *(unsigned int *)(v12 + 152);
                                v28 = *(unsigned int *)(v12 + 156);
                                v25 = (unsigned __int64 *)(v129 & 0xFFFFFFFF00000000LL);
                                v26 = v141.m128_u64[0];
                                v106 = v139;
                                v129 &= 0xFFFFFFFF00000000LL;
                                if ( v105 + 1 > v28 )
                                {
                                  v22 = v135;
                                  v138 = v139;
                                  v137 = v25;
                                  v136 = v141.m128_u64[0];
                                  sub_2237220(v12 + 144, v135, v105 + 1, 16);
                                  v106 = v138;
                                  v25 = v137;
                                  v105 = *(unsigned int *)(v12 + 152);
                                  v26 = v136;
                                }
                                v107 = (__int64 *)(*(_QWORD *)(v12 + 144) + 16 * v105);
                                *v107 = v106;
                                v107[1] = (__int64)v25;
                                v58 = *(unsigned int *)(v12 + 152);
                                v24 = (unsigned int)(v58 + 1);
                                *(_DWORD *)(v12 + 152) = v24;
                                *(_DWORD *)(v26 + 8) = v58;
                                goto LABEL_55;
                              }
                              v108 = v54;
LABEL_112:
                              v109 = v128;
                              sub_22C26A0((__int64)v128, v108);
                              sub_22C09B0(v109, (__int64 *)v126, v29);
                              v53 = v139;
                              v55 = *(_QWORD *)(v12 + 120);
                              v22 = (__m128 *)v141.m128_u64[0];
                              v103 = *(_DWORD *)(v12 + 128) + 1;
                              goto LABEL_106;
                            }
                          }
                          else
                          {
                            v141.m128_u64[0] = 0;
                          }
                          v108 = 2 * v54;
                          goto LABEL_112;
                        }
                      }
LABEL_49:
                      while ( 1 )
                      {
                        v48 = *(_QWORD *)(v48 + 8);
                        if ( v47 == v48 )
                          break;
                        if ( !*(_BYTE *)(v48 + 32) )
                          goto LABEL_41;
                      }
                      v44 = v124;
                    }
                  }
                }
              }
              v141.m128_u64[0] = (unsigned __int64)v44;
              v141.m128_u64[1] = 4;
              v142 = 0;
              v143 = v44;
              if ( v44 != (__int64 *)-4096LL && v44 != (__int64 *)-8192LL )
                sub_20CC510(&v29->m128_u64[1], (__int64)v22, v24, v28, v25, v26);
              v31 = *(unsigned int *)(v12 + 96);
              if ( !(_DWORD)v31 )
                goto LABEL_82;
              v32 = v141.m128_u64[0];
              v33 = *(_QWORD *)(v12 + 80);
              v34 = (v31 - 1) & (((unsigned __int32)v141.m128_i32[0] >> 9) ^ ((unsigned __int32)v141.m128_i32[0] >> 4));
              v35 = (unsigned __int64 *)(v33 + 16LL * v34);
              v36 = *v35;
              if ( v141.m128_u64[0] == *v35 )
              {
LABEL_24:
                sub_22C2260(v126, v35, (_QWORD *)(16 * v31 + v33), v12 + 80, 1);
                goto LABEL_25;
              }
              v59 = 1;
              v60 = nullptr;
              if ( v36 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v60 && v36 == -8192 )
                    v60 = v35;
                  v34 = (v31 - 1) & (v59 + v34);
                  v35 = (unsigned __int64 *)(v33 + 16LL * v34);
                  v36 = *v35;
                  if ( v141.m128_u64[0] == *v35 )
                    goto LABEL_24;
                  if ( v36 == -4096 )
                    break;
                  ++v59;
                }
                if ( v60 )
                  v35 = v60;
              }
              v61 = *(_DWORD *)(v12 + 88) + 1;
              if ( 4 * v61 < (unsigned int)(3 * v31) )
              {
                if ( (int)v31 - *(_DWORD *)(v12 + 92) - v61 > (unsigned int)v31 >> 3 )
                {
                  v62 = *v35;
                  goto LABEL_63;
                }
                sub_22C3F60(v12 + 80, v31);
                v88 = *(_DWORD *)(v12 + 96);
                if ( !v88 )
                {
LABEL_186:
                  ++*(_DWORD *)(v12 + 88);
                  BUG();
                }
                v32 = v141.m128_u64[0];
                v89 = v88 - 1;
                v33 = *(_QWORD *)(v12 + 80);
                v61 = *(_DWORD *)(v12 + 88) + 1;
                v90 = v89 & (((unsigned __int32)v141.m128_i32[0] >> 9) ^ ((unsigned __int32)v141.m128_i32[0] >> 4));
                v35 = (unsigned __int64 *)(v33 + 16LL * v90);
                v62 = *v35;
                if ( *v35 == v141.m128_u64[0] )
                {
                  v62 = v141.m128_u64[0];
                  goto LABEL_63;
                }
                v120 = 1;
                v87 = nullptr;
                if ( v62 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( v62 == -8192 && !v87 )
                      v87 = v35;
                    v90 = v89 & (v120 + v90);
                    v35 = (unsigned __int64 *)(v33 + 16LL * v90);
                    v62 = *v35;
                    if ( v141.m128_u64[0] == *v35 )
                      goto LABEL_63;
                    if ( v62 == -4096 )
                      goto LABEL_169;
                    ++v120;
                  }
                }
LABEL_85:
                *(_DWORD *)(v12 + 88) = v61;
              }
              else
              {
LABEL_82:
                sub_22C3F60(v12 + 80, 2 * v31);
                v83 = *(_DWORD *)(v12 + 96);
                if ( !v83 )
                  goto LABEL_186;
                v32 = v141.m128_u64[0];
                v84 = v83 - 1;
                v33 = *(_QWORD *)(v12 + 80);
                v61 = *(_DWORD *)(v12 + 88) + 1;
                v85 = v84 & (((unsigned __int32)v141.m128_i32[0] >> 9) ^ ((unsigned __int32)v141.m128_i32[0] >> 4));
                v35 = (unsigned __int64 *)(v33 + 16LL * v85);
                v62 = *v35;
                if ( *v35 != v141.m128_u64[0] )
                {
                  v86 = 1;
                  v87 = nullptr;
                  if ( v62 == -4096 )
                    goto LABEL_85;
                  while ( 1 )
                  {
                    if ( !v87 && v62 == -8192 )
                      v87 = v35;
                    v85 = v84 & (v86 + v85);
                    v35 = (unsigned __int64 *)(v33 + 16LL * v85);
                    v62 = *v35;
                    if ( v141.m128_u64[0] == *v35 )
                      break;
                    if ( v62 == -4096 )
                    {
LABEL_169:
                      if ( !v87 )
                        goto LABEL_85;
                      v62 = *v87;
                      v35 = v87;
                      break;
                    }
                    ++v86;
                  }
                }
LABEL_63:
                *(_DWORD *)(v12 + 88) = v61;
                if ( v62 != -4096 )
                  --*(_DWORD *)(v12 + 92);
              }
              *((_DWORD *)v35 + 2) = 0;
              v63 = *(unsigned int *)(v12 + 96);
              *v35 = v32;
              sub_22C2260(v126, v35, (_QWORD *)(16 * v63 + v33), v12 + 80, 1);
              v64 = *(_DWORD *)(v12 + 112);
              *(_DWORD *)(v139 + 8) = v64;
              v65 = v64;
              if ( *(_DWORD *)(v12 + 116) <= v64 )
              {
                v124 = (__int64 *)(v12 + 104);
                v128 = (__int64 *)(v12 + 120);
                v93 = sub_2237400(v12 + 104, (void *)(v12 + 120), 0, 32, (unsigned __int64 *)v126);
                v94 = &v93[4 * *(unsigned int *)(v12 + 112)];
                *v94 = v141.m128_u64[0];
                v94[1] = 4;
                v94[2] = 0;
                v95 = v143;
                v39 = v143 == nullptr;
                v94[3] = v143;
                if ( v95 + 512 != nullptr && !v39 && v95 != (__int64 *)-8192LL )
                  sub_20CB0E0(v94 + 1, v141.m128_u64[1] & 0xFFFFFFFFFFFFFFF8LL);
                sub_22C0DB0((__int64)v124, v93);
                v96 = v139;
                v97 = *(__int64 **)(v12 + 104);
                if ( v128 != v97 )
                {
                  v124 = (__int64 *)v139;
                  free(v97);
                  v96 = (int)v124;
                }
                *(_QWORD *)(v12 + 104) = v93;
                *(_DWORD *)(v12 + 116) = v96;
                ++*(_DWORD *)(v12 + 112);
              }
              else
              {
                v66 = v141.m128_u64[0];
                v67 = (unsigned __int64 *)(*(_QWORD *)(v12 + 104) + 32 * v65);
                v67[1] = 4;
                *v67 = v66;
                v67[2] = 0;
                v68 = v143;
                v39 = v143 + 512 == nullptr;
                v67[3] = (unsigned __int64)v143;
                if ( v68 != nullptr && !v39 && v68 != (__int64 *)-8192LL )
                  sub_20CB0E0(v67 + 1, v141.m128_u64[1] & 0xFFFFFFFFFFFFFFF8LL);
                ++*(_DWORD *)(v12 + 112);
              }
LABEL_25:
              if ( v143 != nullptr && v143 + 512 != nullptr && v143 != (__int64 *)-8192LL )
                sub_20CB110(&v29->m128_u64[1]);
              v37 = sub_208B330(v30 + 24);
              v139 = (__int64)v44;
              v38 = (__int64 *)(v12 + 40);
              v39 = v37 == 0;
              v40 = *(unsigned int *)(v12 + 56);
              v140 = !v39;
              if ( (_DWORD)v40 )
              {
                v41 = *(_QWORD *)(v12 + 40);
                v42 = (v40 - 1) & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
                v22 = (__m128 *)(v41 + 16LL * v42);
                v43 = (__int64 *)v22->m128_u64[0];
                if ( v44 == (__int64 *)v22->m128_u64[0] )
                {
LABEL_30:
                  sub_22C2260(v29, v22, (_QWORD *)(16 * v40 + v41), (__int64)v38, 1);
                  goto LABEL_31;
                }
                v69 = 1;
                v70 = nullptr;
                if ( v43 != (__int64 *)-4096LL )
                {
                  while ( 1 )
                  {
                    if ( v70 || v43 != (__int64 *)-8192LL )
                      v22 = v70;
                    v42 = (v40 - 1) & (v69 + v42);
                    v43 = *(__int64 **)(v41 + 16LL * v42);
                    if ( v44 == v43 )
                    {
                      v22 = (__m128 *)(v41 + 16LL * v42);
                      goto LABEL_30;
                    }
                    if ( v43 == (__int64 *)-4096LL )
                      break;
                    ++v69;
                    v70 = v22;
                    v22 = (__m128 *)(v41 + 16LL * v42);
                  }
                  if ( !v22 )
                    v22 = (__m128 *)(v41 + 16LL * v42);
                }
                v71 = *(_DWORD *)(v12 + 48);
                v141.m128_u64[0] = (unsigned __int64)v22;
                v72 = v71 + 1;
                if ( 4 * v72 < (unsigned int)(3 * v40) )
                {
                  if ( (int)v40 - *(_DWORD *)(v12 + 52) - v72 <= (unsigned int)v40 >> 3 )
                  {
                    v124 = (__int64 *)(v12 + 40);
                    sub_22C3F60(v12 + 40, v40);
                    sub_22C0BA0(v124, (__int64 *)v126, v29);
                    v41 = *(_QWORD *)(v12 + 40);
                    v22 = (__m128 *)v141.m128_u64[0];
                    v44 = (__int64 *)v139;
                    v72 = *(_DWORD *)(v12 + 48) + 1;
                    v38 = v124;
                    v73 = *(_QWORD *)v141.m128_u64[0];
                  }
                  else
                  {
                    v73 = v22->m128_u64[0];
                  }
                  goto LABEL_74;
                }
              }
              else
              {
                v141.m128_u64[0] = 0;
              }
              v124 = (__int64 *)(v12 + 40);
              sub_22C3F60(v12 + 40, 2 * v40);
              v79 = *(_DWORD *)(v12 + 56);
              v41 = *(_QWORD *)(v12 + 40);
              v38 = v124;
              if ( v79 )
              {
                v44 = (__int64 *)v139;
                v80 = v79 - 1;
                LODWORD(v81) = v80 & (((unsigned int)v139 >> 9) ^ ((unsigned int)v139 >> 4));
                v22 = (__m128 *)(v41 + 16LL * (unsigned int)v81);
                v73 = v22->m128_u64[0];
                if ( v22->m128_u64[0] != v139 )
                {
                  v118 = 1;
                  v119 = nullptr;
                  if ( v73 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v73 == -8192 && !v119 )
                        v119 = (__int64 *)v22;
                      v81 = v80 & (unsigned int)(v81 + v118);
                      v22 = (__m128 *)(v41 + 16 * v81);
                      v73 = v22->m128_u64[0];
                      if ( v139 == v22->m128_u64[0] )
                        break;
                      if ( v73 == -4096 )
                      {
                        if ( v119 )
                        {
                          v73 = *v119;
                          v22 = (__m128 *)v119;
                        }
                        break;
                      }
                      ++v118;
                    }
                  }
                }
                v82 = *(_DWORD *)(v12 + 48);
                v141.m128_u64[0] = (unsigned __int64)v22;
                v72 = v82 + 1;
              }
              else
              {
                v110 = *(_DWORD *)(v12 + 48);
                v44 = (__int64 *)v139;
                v22 = nullptr;
                v141.m128_u64[0] = 0;
                v72 = v110 + 1;
                v73 = 0x10102464C457FLL;
              }
LABEL_74:
              *(_DWORD *)(v12 + 48) = v72;
              if ( v73 != -4096 )
                --*(_DWORD *)(v12 + 52);
              v22->m128_i32[2] = 0;
              v74 = *(unsigned int *)(v12 + 56);
              v22->m128_u64[0] = (unsigned __int64)v44;
              sub_22C2260(v29, v22, (_QWORD *)(16 * v74 + v41), (__int64)v38, 1);
              v75 = *(_DWORD *)(v12 + 72);
              *(_DWORD *)(v141.m128_u64[0] + 8) = v75;
              v76 = *(unsigned int *)(v12 + 76);
              v77 = v75;
              if ( v75 >= v76 )
              {
                v91 = v139;
                LOBYTE(v134) = v140;
                v24 = v75 + 1LL;
                if ( v76 < v77 + 1 )
                {
                  v22 = (__m128 *)(v12 + 80);
                  sub_2237220(v12 + 64, (const void *)(v12 + 80), v24, 16);
                }
                v28 = v134;
                v92 = (__int64 *)(*(_QWORD *)(v12 + 64) + 16LL * *(unsigned int *)(v12 + 72));
                *v92 = v91;
                v92[1] = v28;
                ++*(_DWORD *)(v12 + 72);
              }
              else
              {
                v78 = *(_QWORD *)(v12 + 64) + 16LL * v75;
                v24 = v75 + 1;
                *(_QWORD *)v78 = v139;
                v28 = v140;
                *(_BYTE *)(v78 + 8) = v140;
                *(_DWORD *)(v12 + 72) = v24;
              }
            }
LABEL_31:
            v30 = *(_QWORD *)(v30 + 8);
            if ( v125 == v30 )
              goto LABEL_56;
            continue;
          }
        }
      }
LABEL_4:
      v130 = *(_QWORD *)(v130 + 8);
      if ( v132 == v130 )
        return 1;
    }
    while ( 1 )
    {
      v99 = v98 + 1;
      v18 = (v15 - 1) & (v98 + v18);
      v19 = (__int64 *)(v17 + 16LL * v18);
      v100 = *v19;
      if ( v13 == *v19 )
        break;
      v98 = v99;
      if ( v100 == -4096 )
        goto LABEL_102;
    }
LABEL_9:
    sub_22C0C60(v11, v19, (_QWORD *)(v17 + 16 * v15), v12, 1);
    v21 = v141.m128_u64[0];
    goto LABEL_10;
  }
  v121 = sub_22BF6F0();
  v122 = sub_9954E0((__int64)v121, a5, a6);
  sub_995540(v122, ": Skipping module without debug info\n");
  return 0;
}
