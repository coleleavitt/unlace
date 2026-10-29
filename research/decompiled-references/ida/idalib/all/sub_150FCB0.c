__int64 __fastcall sub_150FCB0(const __m128i *a1, __int64 a2, __int64 a3, unsigned int a4, __m128i a5)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  __m128i v9; // xmm2
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  char v14; // al
  __int64 v15; // r12
  unsigned int v16; // r14d
  void *v17; // r15
  char v18; // al
  __int8 v19; // r13
  __int16 v20; // ax
  __int32 v21; // r15d
  __int64 *v22; // rdi
  __int16 v23; // ax
  unsigned int *v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rbp
  int v27; // edx
  char *v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  bool v34; // zf
  __int32 v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rax
  int v38; // edx
  __int64 *v39; // rdi
  __int32 v40; // edx
  __int64 v41; // rax
  int v42; // edx
  __int8 v43; // al
  __int64 *v44; // rdi
  __int32 v45; // eax
  __int64 v46; // rbp
  __int64 *v47; // rdi
  __int64 v48; // rbx
  void *v49; // rbp
  __int64 v51; // rax
  int v52; // edx
  __int8 v53; // al
  __int64 v54; // r14
  __int64 v55; // rax
  int v56; // ecx
  unsigned __int64 v57; // rbp
  __int64 *v58; // rdx
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  int v63; // edx
  __int8 v64; // al
  unsigned int v65; // r14d
  __int64 v66; // rax
  unsigned __int64 v67; // rbp
  unsigned int *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  int v72; // ebp
  __int64 v73; // rax
  __int64 v74; // r14
  int v75; // edi
  unsigned __int64 v76; // rbp
  __int64 *v77; // rdx
  __m128i v78; // xmm0
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdi
  unsigned __int64 v83; // r8
  __int64 v84; // rax
  unsigned __int64 v85; // rdx
  __int64 v86; // r14
  __int64 v87; // rax
  __m128i *v88; // r13
  __m128i *v89; // r9
  const __m128i *v90; // rcx
  unsigned __int64 v91; // r15
  __int64 v92; // rsi
  unsigned int v93; // eax
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 *v96; // rdi
  __int64 v97; // rdx
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // r13
  __int64 v101; // r14
  __int64 v102; // r13
  void *v103; // rdi
  __int64 v104; // rax
  const __m128i *v105; // r13
  unsigned int v106; // r13d
  __int64 v107; // rsi
  _BYTE *v108; // rax
  signed __int64 v109; // rdx
  __int64 v110; // rsi
  __int8 *v111; // r13
  __int64 v112; // rsi
  __int8 *v113; // r13
  __int64 v114; // rax
  int *m128i_i32; // [rsp+8h] [rbp-370h]
  int v116; // [rsp+10h] [rbp-368h]
  const __m128i *v117; // [rsp+10h] [rbp-368h]
  unsigned __int64 v119; // [rsp+40h] [rbp-338h]
  __m128i v120; // [rsp+60h] [rbp-318h] BYREF
  int *v121; // [rsp+70h] [rbp-308h]
  __int32 v122; // [rsp+78h] [rbp-300h]
  unsigned int v123; // [rsp+7Ch] [rbp-2FCh]
  int v124; // [rsp+88h] [rbp-2F0h] BYREF
  __int64 v125; // [rsp+8Ch] [rbp-2ECh]
  int v126; // [rsp+94h] [rbp-2E4h]
  __int64 v127; // [rsp+98h] [rbp-2E0h]
  int v128; // [rsp+A0h] [rbp-2D8h]
  unsigned __int64 v129; // [rsp+A4h] [rbp-2D4h]
  int v130; // [rsp+ACh] [rbp-2CCh]
  void *v131; // [rsp+B0h] [rbp-2C8h] BYREF
  __int64 v132; // [rsp+B8h] [rbp-2C0h]
  _BYTE v133[16]; // [rsp+C0h] [rbp-2B8h] BYREF
  const __m128i *v134; // [rsp+D0h] [rbp-2A8h]
  void *v135; // [rsp+D8h] [rbp-2A0h]
  const __m128i *v136; // [rsp+E0h] [rbp-298h] BYREF
  int v137; // [rsp+E8h] [rbp-290h]
  char v138; // [rsp+F0h] [rbp-288h]
  void *v139; // [rsp+100h] [rbp-278h] BYREF
  __int64 v140; // [rsp+108h] [rbp-270h]
  _BYTE v141[32]; // [rsp+110h] [rbp-268h] BYREF
  void *v142; // [rsp+130h] [rbp-248h] BYREF
  __int64 v143; // [rsp+138h] [rbp-240h]
  _BYTE v144[32]; // [rsp+140h] [rbp-238h] BYREF
  void *v145; // [rsp+160h] [rbp-218h] BYREF
  __int64 v146; // [rsp+168h] [rbp-210h]
  _BYTE v147[32]; // [rsp+170h] [rbp-208h] BYREF
  void *v148; // [rsp+190h] [rbp-1E8h] BYREF
  __int64 v149; // [rsp+198h] [rbp-1E0h]
  _BYTE v150[32]; // [rsp+1A0h] [rbp-1D8h] BYREF
  void *v151; // [rsp+1C0h] [rbp-1B8h] BYREF
  __int64 v152; // [rsp+1C8h] [rbp-1B0h]
  _BYTE v153[32]; // [rsp+1D0h] [rbp-1A8h] BYREF
  _OWORD v154[2]; // [rsp+1F0h] [rbp-188h] BYREF
  void *v155[2]; // [rsp+210h] [rbp-168h]
  __int64 v156; // [rsp+220h] [rbp-158h]
  __int64 v157; // [rsp+228h] [rbp-150h]
  __int64 v158; // [rsp+230h] [rbp-148h]
  __int64 v159; // [rsp+238h] [rbp-140h]
  int v160; // [rsp+240h] [rbp-138h]
  __int64 v161; // [rsp+248h] [rbp-130h]
  __int64 v162; // [rsp+250h] [rbp-128h]
  void *v163; // [rsp+258h] [rbp-120h]
  __int64 v164; // [rsp+260h] [rbp-118h]
  _BYTE v165[32]; // [rsp+268h] [rbp-110h] BYREF
  void *v166; // [rsp+288h] [rbp-F0h]
  __int64 v167; // [rsp+290h] [rbp-E8h]
  _BYTE v168[32]; // [rsp+298h] [rbp-E0h] BYREF
  void *v169; // [rsp+2B8h] [rbp-C0h]
  __int64 v170; // [rsp+2C0h] [rbp-B8h]
  __int64 v171; // [rsp+2C8h] [rbp-B0h] BYREF
  void *v172; // [rsp+2D0h] [rbp-A8h]
  __int64 v173; // [rsp+2D8h] [rbp-A0h]
  _BYTE v174[12]; // [rsp+2E0h] [rbp-98h] BYREF
  __int128 v175; // [rsp+2ECh] [rbp-8Ch]
  void *v176; // [rsp+300h] [rbp-78h]
  __int64 v177; // [rsp+308h] [rbp-70h]
  __int64 v178; // [rsp+310h] [rbp-68h] BYREF
  void *ptr; // [rsp+318h] [rbp-60h]
  __int64 v180; // [rsp+320h] [rbp-58h]
  _QWORD v181[10]; // [rsp+328h] [rbp-50h] BYREF

  v7 = a1->m128i_i64[1];
  v123 = a4;
  m128i_i32 = a1[1].m128i_i32;
  if ( *(_DWORD *)(v7 + 1012) )
  {
    v8 = operator new[](0x18u);
    v9 = _mm_loadu_si128(a1 + 1);
    *(_DWORD *)(v8 + 16) = a1[2].m128i_i32[0];
    *(__m128i *)v8 = v9;
    sub_14368B0(v7, (char *)v8, 1, 1u, 1u, 1u);
  }
  else
  {
    sub_1417F90((_QWORD *)v7);
    v81 = *(unsigned int *)(v7 + 2912);
    v82 = v7 + 2904;
    v83 = *(_QWORD *)(v7 + 2904);
    v84 = 3 * v81;
    v85 = v81 + 1;
    v86 = 24LL * *(_QWORD *)(v7 + 2944);
    v87 = 8 * v84;
    v88 = (__m128i *)(v83 + v86);
    v89 = (__m128i *)(v83 + v87);
    if ( v83 + v86 == v83 + v87 )
    {
      v105 = a1 + 1;
      if ( v85 > *(unsigned int *)(v7 + 2916) )
      {
        v112 = v7 + 2920;
        if ( v83 > (unsigned __int64)v105 || (v105 = a1 + 1, v89 <= &a1[1]) )
        {
          sub_2237220(v82, v112, v85, 24);
          v89 = (__m128i *)(*(_QWORD *)(v7 + 2904) + 24LL * *(unsigned int *)(v7 + 2912));
        }
        else
        {
          v113 = &a1[1].m128i_i8[-v83];
          sub_2237220(v82, v112, v85, 24);
          v114 = *(_QWORD *)(v7 + 2904);
          v105 = (const __m128i *)&v113[v114];
          v89 = (__m128i *)(v114 + 24LL * *(unsigned int *)(v7 + 2912));
        }
      }
      *v89 = _mm_loadu_si128(v105);
      v89[1].m128i_i64[0] = v105[1].m128i_i64[0];
      ++*(_DWORD *)(v7 + 2912);
    }
    else
    {
      v90 = a1 + 1;
      v91 = (unsigned __int64)&a1[1];
      if ( v85 > *(unsigned int *)(v7 + 2916) )
      {
        v110 = v7 + 2920;
        if ( v83 > (unsigned __int64)v90 || v89 <= v90 )
        {
          sub_2237220(v82, v110, v85, 24);
          v83 = *(_QWORD *)(v7 + 2904);
          v90 = a1 + 1;
          v88 = (__m128i *)(v83 + v86);
          v87 = 24LL * *(unsigned int *)(v7 + 2912);
          v89 = (__m128i *)(v83 + v87);
        }
        else
        {
          v111 = &v90->m128i_i8[-v83];
          sub_2237220(v82, v110, v85, 24);
          v83 = *(_QWORD *)(v7 + 2904);
          v90 = (const __m128i *)&v111[v83];
          v87 = 24LL * *(unsigned int *)(v7 + 2912);
          v88 = (__m128i *)(v83 + v86);
          v91 = (unsigned __int64)v90;
          v89 = (__m128i *)(v83 + v87);
        }
      }
      *v89 = _mm_loadu_si128((const __m128i *)(v83 + v87 - 24));
      v89[1].m128i_i64[0] = *(_QWORD *)(v83 + v87 - 8);
      v92 = *(_QWORD *)(v7 + 2904);
      v93 = *(_DWORD *)(v7 + 2912);
      v94 = 24LL * v93;
      if ( (__m128i *)(v92 + v94 - 24) != v88 )
      {
        v117 = v90;
        memmove(&v88[1].m128i_u64[1], v88, v92 + v94 - 24 - (_QWORD)v88);
        v93 = *(_DWORD *)(v7 + 2912);
        v90 = v117;
        v92 = *(_QWORD *)(v7 + 2904);
      }
      v95 = v93 + 1;
      *(_DWORD *)(v7 + 2912) = v95;
      if ( (unsigned __int64)v88 <= v91 && v92 + 24 * v95 > v91 )
        v90 = (const __m128i *)((char *)v90 + 24);
      *v88 = _mm_loadu_si128(v90);
      v88[1].m128i_i32[0] = v90[1].m128i_i32[0];
    }
  }
  sub_14368B0(a1->m128i_i64[1], *(char **)a3, *(unsigned int *)(a3 + 8), 1u, 0, 1u);
  sub_149F520((__int64)a1, 1);
  sub_149F520((__int64)a1, 1);
  v134 = a1;
  v136 = a1;
  v10 = a2;
  v138 = 0;
  v137 = 0;
  *(_QWORD *)&v154[0] = a2;
  if ( (a2 & 1) != 0 )
  {
    v10 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else if ( !a2 )
  {
    BUG();
  }
  v11 = 0;
  v12 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 18 <= 0x3F )
    v11 = v10;
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v12 & 4) != 0 )
    v13 = *(_QWORD *)v13;
  if ( v13 )
  {
    v14 = *(_BYTE *)(v13 + 8);
    v13 -= 64LL;
    if ( (v14 & 0x7Fu) - 58 >= 4 )
      v13 = 0;
  }
  v15 = a1[6].m128i_i64[0];
  v16 = 0;
  if ( v11 )
    v16 = (unsigned __int8)sub_B72F20(v11);
  v17 = (void *)operator new(0x18u);
  sub_19A2CD0(v17, v15, v13, 0, v16);
  v135 = v17;
  sub_154D3C0(a1, &v136, v10);
  v18 = *(_BYTE *)(v10 + 28) & 0x7F;
  if ( ((v18 + 94) & 0x7Fu) <= 5 || v18 == 71 )
  {
    v138 = 1;
    sub_1564E40(v136, 4194313);
    v36 = *(_QWORD *)(v15 + 608);
    ++v137;
    sub_17A2FE0(v15, v36, v10);
  }
  v119 = 0;
  v19 = 0;
  v142 = v144;
  v139 = v141;
  v145 = v147;
  v140 = 0x400000000LL;
  v143 = 0x400000000LL;
  v146 = 0x400000000LL;
  v148 = v150;
  v149 = 0x400000000LL;
  v132 = 0x400000000LL;
  v152 = 0x400000000LL;
  v20 = a1[2].m128i_i16[0];
  v131 = v133;
  v151 = v153;
  v116 = 0;
  if ( v20 == 449 )
    goto LABEL_59;
  if ( v20 != 5 )
    goto LABEL_95;
  v21 = 0;
  v122 = 0;
  v121 = &v124;
  while ( 1 )
  {
    v24 = *(unsigned int **)(a1[1].m128i_i64[1] + 16);
    v25 = *v24;
    v26 = (__int64)(v24 + 4);
    v120.m128i_i64[1] = (__int64)v24;
    v120.m128i_i8[0] = sub_B156C0((__int64)(v24 + 4), v25, v121);
    if ( v120.m128i_i8[0] )
    {
      v27 = v124;
      if ( v116 )
      {
        if ( v124 == v116 )
        {
          v27 = v116;
        }
        else
        {
          sub_1564840(v154, a1, m128i_i32, 1779);
          sub_AEC220((unsigned __int8 **)v154, (_BYTE *)v26, v25);
          v28 = sub_B15730(v116);
          sub_1503D30((unsigned __int8 **)v154, (__int64)v28);
          v29 = *(_QWORD *)&v154[0];
          if ( *(_QWORD *)&v154[0] )
          {
            v30 = *(unsigned int *)(*(_QWORD *)&v154[0] + 424LL);
            v31 = *(unsigned int *)(*(_QWORD *)&v154[0] + 428LL);
            v32 = v30 + 1;
          }
          else
          {
            v97 = *((_QWORD *)&v154[0] + 1);
            v98 = *(_DWORD *)(*((_QWORD *)&v154[0] + 1) + 14976LL);
            if ( v98 )
            {
              v99 = (unsigned int)(v98 - 1);
              *(_DWORD *)(*((_QWORD *)&v154[0] + 1) + 14976LL) = v99;
              v29 = *(_QWORD *)(v97 + 8 * v99 + 14848);
              v100 = *(unsigned int *)(v29 + 536);
              *(_BYTE *)v29 = 0;
              v101 = *(_QWORD *)(v29 + 528);
              *(_DWORD *)(v29 + 424) = 0;
              v102 = v101 + (v100 << 6);
              if ( v101 == v102 )
              {
                v32 = 1;
                v30 = 0;
              }
              else
              {
                do
                {
                  while ( 1 )
                  {
                    v102 -= 64;
                    v103 = *(void **)(v102 + 24);
                    if ( v103 == (void *)(v102 + 40) )
                      break;
                    operator delete(v103);
                    if ( v101 == v102 )
                      goto LABEL_140;
                  }
                }
                while ( v101 != v102 );
LABEL_140:
                v30 = *(unsigned int *)(v29 + 424);
                v32 = v30 + 1;
              }
              *(_DWORD *)(v29 + 536) = 0;
              v31 = *(unsigned int *)(v29 + 428);
            }
            else
            {
              v104 = operator new(0x3A0u);
              v31 = 8;
              v32 = 1;
              v29 = v104;
              *(_BYTE *)v104 = 0;
              *(_QWORD *)(v104 + 96) = v104 + 112;
              *(_QWORD *)(v104 + 128) = v104 + 144;
              *(_QWORD *)(v104 + 160) = v104 + 176;
              *(_QWORD *)(v104 + 192) = v104 + 208;
              *(_QWORD *)(v104 + 224) = v104 + 240;
              *(_QWORD *)(v104 + 256) = v104 + 272;
              *(_QWORD *)(v104 + 288) = v104 + 304;
              *(_QWORD *)(v104 + 320) = v104 + 336;
              *(_QWORD *)(v104 + 352) = v104 + 368;
              *(_QWORD *)(v104 + 384) = v104 + 400;
              *(_QWORD *)(v104 + 416) = v104 + 432;
              *(_QWORD *)(v104 + 104) = 0;
              *(_BYTE *)(v104 + 112) = 0;
              *(_QWORD *)(v104 + 136) = 0;
              *(_BYTE *)(v104 + 144) = 0;
              *(_QWORD *)(v104 + 168) = 0;
              *(_BYTE *)(v104 + 176) = 0;
              *(_QWORD *)(v104 + 200) = 0;
              *(_BYTE *)(v104 + 208) = 0;
              *(_QWORD *)(v104 + 232) = 0;
              *(_BYTE *)(v104 + 240) = 0;
              *(_QWORD *)(v104 + 264) = 0;
              *(_BYTE *)(v104 + 272) = 0;
              *(_QWORD *)(v104 + 296) = 0;
              *(_BYTE *)(v104 + 304) = 0;
              *(_QWORD *)(v104 + 328) = 0;
              *(_BYTE *)(v104 + 336) = 0;
              *(_QWORD *)(v104 + 360) = 0;
              *(_BYTE *)(v104 + 368) = 0;
              *(_QWORD *)(v104 + 392) = 0;
              *(_BYTE *)(v104 + 400) = 0;
              *(_QWORD *)(v104 + 424) = 0x800000000LL;
              *(_QWORD *)(v104 + 528) = v104 + 544;
              *(_QWORD *)(v104 + 536) = 0x600000000LL;
              v30 = 0;
            }
            *(_QWORD *)&v154[0] = v29;
          }
          LOBYTE(v130) = 1;
          v129 = __PAIR64__(v21, v122);
          if ( v32 > v31 )
          {
            sub_2237220(v29 + 416, v29 + 432, v32, 12);
            v30 = *(unsigned int *)(v29 + 424);
          }
          v33 = *(_QWORD *)(v29 + 416) + 12 * v30;
          *(_QWORD *)v33 = v129;
          *(_DWORD *)(v33 + 8) = v130;
          ++*(_DWORD *)(v29 + 424);
          sub_AEA040((__int64)v154);
          v27 = v124;
          v19 = v120.m128i_i8[0];
        }
      }
      v116 = v27;
      v34 = !sub_10CCDE0(a1[2].m128i_i16[0]);
      v35 = a1[1].m128i_i32[0];
      v122 = v35;
      if ( v34 )
      {
        v21 = v35 + a1[1].m128i_i32[1];
      }
      else
      {
        v21 = a1[1].m128i_i32[1];
        if ( !v21 )
          v21 = v35;
      }
      v22 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = v35;
      sub_14634E0(v22, m128i_i32);
LABEL_22:
      v23 = a1[2].m128i_i16[0];
      if ( v23 != 66 )
        goto LABEL_23;
      goto LABEL_58;
    }
    if ( v25 == 7
      && *(_DWORD *)(v120.m128i_i64[1] + 16) == 1684892019
      && *(_WORD *)(v26 + 4) == 25964
      && *(_BYTE *)(v26 + 6) == 110 )
    {
      if ( v119 > 1 )
      {
        v106 = *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 232) + 64LL);
        sub_1564840(v154, a1, m128i_i32, 45);
        v107 = v106;
        v19 = 1;
        v108 = (_BYTE *)sub_20EAB70(14, v107);
        sub_AEC220((unsigned __int8 **)v154, v108, v109);
        sub_AEC220((unsigned __int8 **)v154, (_BYTE *)v26, 7);
        sub_15038B0((unsigned __int8 **)v154);
        sub_AEA040((__int64)v154);
      }
      v96 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v96, m128i_i32);
      LODWORD(v154[0]) = 0;
      v119 = sub_1509090(a1, v26, a5, 7, v154, 0);
      if ( v119 == 1 )
        v19 = 1;
      goto LABEL_22;
    }
    v37 = sub_20EF010(v26, v25);
    v126 = v38;
    v125 = v37;
    if ( (_DWORD)v37 != 6 && (_DWORD)v37 != 105 && (_DWORD)v37 != 53 )
      break;
    a5 = 0;
    v156 = 0;
    memset(v154, 0, sizeof(v154));
    v39 = (__int64 *)a1->m128i_i64[1];
    *(_OWORD *)v155 = 0;
    v157 = 0;
    v158 = 0;
    v159 = 0;
    v160 = 0;
    v161 = 0;
    v166 = v168;
    v169 = &v171;
    v162 = 0xFFFFFFFFLL;
    v172 = v174;
    v164 = 0x700000000LL;
    v167 = 0x700000000LL;
    v176 = &v178;
    ptr = v181;
    v40 = a1[1].m128i_i32[0];
    v163 = v165;
    v170 = 0x200000000LL;
    v173 = 0x200000000LL;
    v174[8] = 0;
    v175 = 0;
    v177 = 0x200000000LL;
    v180 = 0x200000000LL;
    v181[1] = 0;
    if ( (_DWORD)v37 != 6 )
    {
      if ( (_DWORD)v37 != 53 )
      {
        a1[2].m128i_i32[2] = v40;
        sub_14634E0(v39, m128i_i32);
        v41 = sub_20EF010(v26, v25);
        v128 = v42;
        v127 = v41;
        v43 = sub_150CE00(a1, 0xEu, v41, (__int64)&v139, (__int64)v154, (__m128i)0LL, (__m128)0LL);
        if ( v43 )
          v19 = v43;
        goto LABEL_44;
      }
      a1[2].m128i_i32[2] = v40;
      LODWORD(v162) = 0;
      sub_14634E0(v39, m128i_i32);
      v62 = sub_20EF010(v26, v25);
      v128 = v63;
      v127 = v62;
      v64 = sub_150CE00(a1, 0xEu, v62, (__int64)&v148, (__int64)v154, (__m128i)0LL, (__m128)0LL);
      if ( v64 )
        v19 = v64;
      if ( (unsigned __int8)sub_1B2A750(*(_QWORD *)(a1[6].m128i_i64[0] + 760), (unsigned int)v162, (unsigned int)v175) )
      {
        LODWORD(v162) = 0;
        v65 = 0;
      }
      else
      {
        v65 = v162;
      }
      v66 = (unsigned int)v132;
      v67 = (unsigned int)v149 - (unsigned __int64)(unsigned int)v132;
      if ( (unsigned int)v149 > (unsigned __int64)HIDWORD(v132) )
      {
        sub_2237220(&v131, v133, (unsigned int)v149, 4);
        v66 = (unsigned int)v132;
      }
      v68 = (unsigned int *)((char *)v131 + 4 * v66);
      if ( v67 )
      {
        if ( v67 - 1 <= 2 )
        {
          v71 = v67;
LABEL_107:
          *v68 = v65;
          if ( v71 != 1 )
          {
            v68[1] = v65;
            if ( v71 != 2 )
              v68[2] = v65;
          }
        }
        else
        {
          v120.m128i_i32[0] = v65;
          v69 = 0;
          a5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v65), 0);
          do
          {
            v70 = v69++;
            *(__m128i *)&v68[4 * v70] = a5;
          }
          while ( v69 != v67 >> 2 );
          v71 = v67 - (v67 & 0xFFFFFFFFFFFFFFFCLL);
          v68 += v67 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v67 != (v67 & 0xFFFFFFFFFFFFFFFCLL) )
            goto LABEL_107;
        }
        LODWORD(v66) = v132;
      }
      v72 = v66 + v67;
      v73 = (unsigned int)v152;
      LODWORD(v132) = v72;
      v74 = *(_QWORD *)&v154[0];
      v75 = v149;
      v76 = (unsigned int)v149 - (unsigned __int64)(unsigned int)v152;
      if ( (unsigned int)v149 > (unsigned __int64)HIDWORD(v152) )
      {
        sub_2237220(&v151, v153, (unsigned int)v149, 8);
        v73 = (unsigned int)v152;
        v75 = v76 + v152;
      }
      v77 = (__int64 *)((char *)v151 + 8 * v73);
      if ( v76 )
      {
        if ( v76 == 1 )
          goto LABEL_118;
        v120.m128i_i64[0] = v74;
        v78 = _mm_loadl_epi64(&v120);
        v79 = 0;
        a5 = _mm_unpacklo_epi64(v78, v78);
        do
        {
          v80 = v79++;
          *(__m128i *)&v77[2 * v80] = a5;
        }
        while ( v79 != v76 >> 1 );
        v77 += v76 & 0xFFFFFFFFFFFFFFFELL;
        if ( v76 != (v76 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_118:
          *v77 = v74;
      }
      LODWORD(v152) = v75;
      goto LABEL_44;
    }
    a1[2].m128i_i32[2] = v40;
    sub_14634E0(v39, m128i_i32);
    v51 = sub_20EF010(v26, v25);
    v128 = v52;
    v127 = v51;
    v53 = sub_150CE00(a1, 0xEu, v51, (__int64)&v142, (__int64)v154, (__m128i)0LL, (__m128)0LL);
    v54 = *(_QWORD *)&v154[0];
    if ( v53 )
      v19 = v53;
    v55 = (unsigned int)v146;
    v56 = v143;
    v57 = (unsigned int)v143 - (unsigned __int64)(unsigned int)v146;
    if ( (unsigned int)v143 > (unsigned __int64)HIDWORD(v146) )
    {
      sub_2237220(&v145, v147, (unsigned int)v143, 8);
      v55 = (unsigned int)v146;
      v56 = v57 + v146;
    }
    v58 = (__int64 *)((char *)v145 + 8 * v55);
    if ( v57 )
    {
      if ( v57 == 1 )
        goto LABEL_92;
      v120.m128i_i64[0] = v54;
      v59 = _mm_loadl_epi64(&v120);
      v60 = 0;
      a5 = _mm_unpacklo_epi64(v59, v59);
      do
      {
        v61 = v60++;
        *(__m128i *)&v58[2 * v61] = a5;
      }
      while ( v60 != v57 >> 1 );
      v58 += v57 & 0xFFFFFFFFFFFFFFFELL;
      if ( v57 != (v57 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_92:
        *v58 = v54;
    }
    LODWORD(v146) = v56;
LABEL_44:
    if ( ptr != v181 )
      free(ptr);
    if ( v176 != &v178 )
      free(v176);
    if ( v172 != v174 )
      free(v172);
    if ( v169 != &v171 )
      free(v169);
    if ( v166 != v168 )
      free(v166);
    if ( v163 != v165 )
      free(v163);
    if ( !HIDWORD(v156) )
      goto LABEL_22;
    free(v155[1]);
    v23 = a1[2].m128i_i16[0];
    if ( v23 != 66 )
    {
LABEL_23:
      if ( v23 == 449 )
        goto LABEL_59;
      goto LABEL_24;
    }
LABEL_58:
    v44 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v44, m128i_i32);
    v23 = a1[2].m128i_i16[0];
    if ( v23 == 449 )
      goto LABEL_59;
LABEL_24:
    if ( v23 != 5 )
      goto LABEL_95;
  }
  if ( a1[2].m128i_i16[0] != 449 )
LABEL_95:
    sub_1504CE0((__int64)a1, 0xEu);
LABEL_59:
  v45 = a1[1].m128i_i32[1];
  v46 = a1[1].m128i_u32[0];
  v47 = (__int64 *)a1->m128i_i64[1];
  if ( !v45 )
    v45 = a1[1].m128i_i32[0];
  a1[2].m128i_i32[2] = v45;
  sub_14634E0(v47, m128i_i32);
  if ( v19 )
    v48 = a2;
  else
    v48 = sub_1B41EB0(
            *(_QWORD *)(a1[6].m128i_i64[0] + 760),
            a2,
            v116,
            (unsigned int)v119 & 0xFFFFFFFE,
            (_DWORD)v139,
            v140,
            (__int64)v142,
            (unsigned int)v143,
            (__int64)v145,
            (unsigned int)v146,
            (__int64)v148,
            (unsigned int)v149,
            (__int64)v131,
            (unsigned int)v132,
            (__int64)v151,
            (unsigned int)v152,
            (v46 << 32) | v123);
  if ( v151 != v153 )
    free(v151);
  if ( v131 != v133 )
    free(v131);
  if ( v148 != v150 )
    free(v148);
  if ( v145 != v147 )
    free(v145);
  if ( v142 != v144 )
    free(v142);
  if ( v139 != v141 )
    free(v139);
  if ( v138 )
    sub_17A3230(v134[6].m128i_i64[0]);
  v49 = v135;
  if ( v135 )
  {
    sub_19A2DA0(v135);
    operator delete(v49, 0x18u);
  }
  for ( ; v137; --v137 )
    sub_1564F70(v136);
  return v48;
}
