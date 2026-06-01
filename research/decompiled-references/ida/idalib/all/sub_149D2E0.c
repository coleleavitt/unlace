void __fastcall sub_149D2E0(
        __int64 a1,
        _QWORD *a2,
        __m128i a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r8
  _QWORD *v10; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int16 v27; // ax
  char v28; // al
  bool v29; // dl
  char v30; // r12
  __int16 v31; // ax
  _BYTE *v32; // rax
  __int64 v33; // r13
  char v34; // al
  int v35; // eax
  bool v36; // cl
  int v37; // edx
  int v38; // eax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int16 v41; // ax
  int v42; // eax
  int v43; // edi
  __int64 *v44; // rdi
  unsigned __int64 v45; // rax
  int v46; // edx
  _DWORD *v47; // rax
  _DWORD *v48; // rdx
  char v49; // r13
  unsigned int v50; // edx
  __int64 v51; // rax
  int v52; // eax
  int v53; // ecx
  unsigned int v54; // eax
  __int64 v55; // r8
  __int64 v56; // rcx
  char v57; // al
  bool v58; // zf
  char v59; // al
  int v60; // eax
  int v61; // eax
  int *v62; // r12
  int v63; // eax
  int v64; // eax
  __int64 *v65; // rdi
  unsigned __int64 v66; // rdi
  char v67; // al
  __int64 v68; // rsi
  unsigned __int16 v69; // ax
  __int64 *v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rdi
  int v73; // esi
  unsigned int *v74; // rdi
  unsigned __int64 v75; // rax
  int v76; // eax
  __int64 *v77; // rdi
  char v78; // al
  unsigned int *v79; // rsi
  __int64 v80; // r10
  int v81; // eax
  int v82; // edi
  int v83; // eax
  int v84; // eax
  __int64 *v85; // rdi
  __int64 v86; // rax
  unsigned __int16 v87; // bp
  char v88; // al
  __int16 *v89; // rdi
  __int64 v90; // rdx
  unsigned int v91; // eax
  unsigned __int16 v92; // r12
  char v93; // al
  __int64 v94; // rsi
  unsigned int v95; // eax
  unsigned int v96; // edx
  int v97; // ebp
  unsigned __int16 v98; // r12
  char v99; // al
  __int64 v100; // rax
  __int64 v101; // rdx
  unsigned int v102; // eax
  unsigned int v103; // eax
  unsigned int v104; // edx
  int v105; // eax
  __int64 v106; // rdx
  unsigned int v107; // eax
  unsigned int v108; // eax
  int v109; // eax
  __int64 v110; // rax
  int v111; // edx
  __m128i v112; // xmm2
  __m128i v113; // xmm3
  __int64 v114; // rdi
  __int64 v115; // rax
  _DWORD *v116; // rax
  int v117; // ecx
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  __int16 v120; // ax
  unsigned int v121; // eax
  __int64 v122; // rdi
  unsigned __int64 v123; // rax
  __int64 v124; // rax
  unsigned int v125; // r13d
  __int64 v126; // rdi
  __int64 v127; // rdi
  unsigned __int64 v128; // rax
  __int64 v129; // rax
  __int16 v130; // dx
  int v131; // edx
  __int64 v132; // rdi
  __int64 v133; // rsi
  int v134; // eax
  char **v135; // [rsp+0h] [rbp-118h] BYREF
  __int64 v136; // [rsp+8h] [rbp-110h]
  unsigned __int8 v137; // [rsp+17h] [rbp-101h] BYREF
  __int64 v138; // [rsp+18h] [rbp-100h] BYREF
  __int64 v139; // [rsp+20h] [rbp-F8h] BYREF
  _QWORD *v140; // [rsp+28h] [rbp-F0h]
  __int16 v141; // [rsp+30h] [rbp-E8h]
  char *v142; // [rsp+40h] [rbp-D8h] BYREF
  char v143; // [rsp+48h] [rbp-D0h]
  _BYTE v144[12]; // [rsp+4Ch] [rbp-CCh]
  void *v145; // [rsp+58h] [rbp-C0h]
  __int64 (__fastcall *v146)(__int64); // [rsp+60h] [rbp-B8h]
  __int64 v147; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v148; // [rsp+70h] [rbp-A8h]
  char v149; // [rsp+78h] [rbp-A0h]
  _BYTE v150[24]; // [rsp+80h] [rbp-98h] BYREF
  __m128i v151; // [rsp+98h] [rbp-80h] BYREF
  __int64 v152; // [rsp+A8h] [rbp-70h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-68h]
  int v154; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v155; // [rsp+C8h] [rbp-50h]
  int v156; // [rsp+D0h] [rbp-48h]
  __int16 v157; // [rsp+D4h] [rbp-44h]
  char v158; // [rsp+D6h] [rbp-42h]

  v9 = 0;
  v10 = a2 + 1;
  v12 = *((unsigned int *)a2 + 24);
  v139 = a1;
  v13 = *(_QWORD *)(a1 + 8);
  v140 = a2 + 1;
  v14 = *(_QWORD *)(v13 + 56);
  v141 = 0;
  v15 = *(_BYTE *)(v14 + 1);
  v16 = 1LL << v12;
  if ( (v15 & 8) == 0 )
  {
    v17 = *(unsigned __int16 *)(a1 + 32);
    if ( (_WORD)v17 != 5 )
      goto LABEL_4;
    if ( (v16 & 0x404DF93) != 0 )
    {
      v24 = *(_DWORD *)(a1 + 16);
      v25 = *(_QWORD *)(a1 + 24);
      *((_DWORD *)a2 + 14) = 0;
      a2[8] = v25;
      *((_DWORD *)a2 + 21) = v24;
      *((_DWORD *)a2 + 20) = v24;
      v26 = *(_DWORD *)(a1 + 16);
      if ( !v26 )
      {
LABEL_23:
        *(_DWORD *)(a1 + 40) = v26;
        sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
LABEL_24:
        v17 = *((unsigned int *)a2 + 14);
        goto LABEL_25;
      }
LABEL_22:
      *((_DWORD *)a2 + 23) = v26;
      v26 = *(_DWORD *)(a1 + 16);
      goto LABEL_23;
    }
    goto LABEL_49;
  }
  if ( (v16 & 0x404DF93) == 0 )
  {
    v17 = *(unsigned __int16 *)(a1 + 32);
    if ( (_WORD)v17 != 5 )
    {
LABEL_4:
      v18 = v16 & 0xF91;
      if ( (_WORD)v17 != 22 )
      {
        if ( v18 )
        {
          if ( (_WORD)v17 == 429 )
            BUG();
          if ( (_WORD)v17 == 20 )
          {
            sub_1499640((const __m128i *)a1, (__int64)a2, *(double *)a3.m128i_i64, a4, v17, v12, v9, a8);
            goto LABEL_118;
          }
          if ( (_DWORD)v12 != 7 )
          {
            if ( (_WORD)v17 == 110 )
            {
              sub_1564840(v150, a1, a1 + 16, 1934);
              sub_AEA040((__int64)v150);
              goto LABEL_215;
            }
            v19 = *(_QWORD *)(a1 + 8);
            v20 = *(_QWORD *)(v19 + 56);
            if ( (*(_BYTE *)(v20 + 1) & 8) != 0 )
            {
              if ( (_WORD)v17 != 37 && (_WORD)v17 != 26 )
                goto LABEL_13;
              sub_1564840(v150, a1, a1 + 16, 1710);
              sub_14780E0((unsigned __int8 **)v150, *(_WORD *)(a1 + 32) == 37);
              sub_AEA040((__int64)v150);
LABEL_215:
              v105 = *(_DWORD *)(a1 + 16);
              *((_BYTE *)a2 + 720) |= 1u;
              *((_DWORD *)a2 + 14) = 0;
              *((_DWORD *)a2 + 21) = v105;
              *((_DWORD *)a2 + 20) = v105;
              v27 = *(_WORD *)(a1 + 32);
              a2[8] = 0;
              goto LABEL_67;
            }
LABEL_221:
            v106 = *(unsigned int *)(a1 + 16);
            if ( !*((_DWORD *)a2 + 20) )
            {
              v107 = *((_DWORD *)a2 + 21);
              if ( v107 )
                v106 = v107;
            }
            sub_1564820(v150, a1, v106, 17);
            sub_AE9DF0((unsigned __int8 **)v150, 5, 4u);
            sub_AE9DF0((unsigned __int8 **)v150, 22, 4u);
            sub_AEA040((__int64)v150);
            goto LABEL_215;
          }
          v13 = *(_QWORD *)(a1 + 8);
          goto LABEL_189;
        }
        goto LABEL_64;
      }
      if ( !v18 && sub_147B350((__int64)a2) )
      {
        v110 = *(_QWORD *)(a1 + 80);
        v111 = *(_DWORD *)(a1 + 88);
        *(_QWORD *)v150 = a1;
        a4 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 48));
        v112 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        v152 = v110;
        LODWORD(v110) = *(_DWORD *)(a1 + 32);
        v113 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v114 = *(_QWORD *)(a1 + 8);
        v156 = v111;
        v154 = v110;
        v115 = *(unsigned int *)(a1 + 2712);
        *(__m128 *)&v150[8] = a4;
        v155 = v115;
        LOWORD(v115) = *(_WORD *)(a1 + 92);
        v151 = v112;
        v157 = v115;
        *(__m128i *)ptr = v113;
        sub_1418D30(v114, 0);
        v116 = (_DWORD *)*a2;
        v117 = *((_DWORD *)a2 + 24);
        v158 = 1;
        if ( (unsigned int)sub_1560060(a1, 1, ((1LL << v117) & 0x404DF93) != 0, 1, ((*v116 >> 12) & 0x7F) == 50) == 1 )
        {
          v134 = *(_DWORD *)(a1 + 16);
          *((_DWORD *)a2 + 14) = 0;
          a2[8] = 0;
          *((_DWORD *)a2 + 21) = v134;
          *((_DWORD *)a2 + 20) = v134;
          sub_147B460((__int64)v150);
          v17 = *((unsigned int *)a2 + 14);
          goto LABEL_25;
        }
        sub_147B460((__int64)v150);
      }
      sub_149CF20((const __m128i *)a1, (__int64)a2, a3, a4);
      if ( !a2[2]
        || (a2[90] & 1) != 0
        || ((*(_DWORD *)*a2 >> 12) & 0x7F) == 0x45
        || !(unsigned __int8)sub_169D7E0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v10) )
      {
        goto LABEL_24;
      }
      sub_147B420((__int64)&v139);
      v17 = *((unsigned int *)a2 + 14);
LABEL_25:
      v27 = *(_WORD *)(a1 + 32);
      if ( (_DWORD)v17 )
      {
        v9 = *((unsigned int *)a2 + 34);
        if ( (_DWORD)v9 )
          goto LABEL_76;
LABEL_27:
        if ( (unsigned __int16)(v27 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
        {
          *(_QWORD *)v150 = 0;
          v152 = a1 + 504;
          *(_QWORD *)&v150[8] = &v151;
          *(_QWORD *)&v150[16] = 0x200000000LL;
          ptr[1] = (void *)0x200000000LL;
          ptr[0] = &v154;
          sub_14AB020(a1, v150);
          sub_147F860((__int64)(a2 + 91), (__int64)v150);
          if ( *(_DWORD *)&v150[4] )
            *((_DWORD *)a2 + 23) = *(_DWORD *)&v150[4];
          sub_147A450(v150);
        }
        v27 = *(_WORD *)(a1 + 32);
LABEL_76:
        while ( v27 != 22 )
        {
          if ( v27 == 20 )
          {
            sub_1498E30((const __m128i *)a1, a2, a3, a4, v17, v12, v9, a8);
          }
          else if ( (unsigned __int16)(v27 - 406) <= 8u )
          {
            sub_1564840(v150, a1, a1 + 16, 1716);
            v66 = *(unsigned __int16 *)(a1 + 32);
            LODWORD(v135) = *(unsigned __int16 *)(a1 + 32);
            v67 = sub_141A630(v66);
            if ( (_WORD)v135 == 1 || v67 )
              v68 = 0;
            else
              v68 = *(_QWORD *)(a1 + 24);
            sub_1478560((unsigned __int8 **)v150, v68);
            sub_AEA040((__int64)v150);
            v69 = *(_WORD *)(a1 + 32) - 406;
            if ( v69 <= 6u )
            {
              v77 = *(__int64 **)(a1 + 8);
              *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
              LOBYTE(v135) = byte_26170E4[v69];
              sub_14634E0(v77, (int *)(a1 + 16));
              if ( (_BYTE)v135 )
              {
                *(_QWORD *)&v150[16] = a1;
                *(_QWORD *)v150 = a1 + 1952;
                v78 = *(_BYTE *)(a1 + 1952);
                *(_BYTE *)(a1 + 1952) = 1;
                v150[8] = v78;
                v151.m128i_i32[0] = 1507350;
                v151.m128i_i16[2] = 63;
                v151.m128i_i64[1] = (__int64)sub_146A990;
                v152 = 0;
                ptr[0] = nullptr;
                if ( !(unsigned __int8)sub_1477FA0((__int64)v150) )
                  sub_156E210(v150);
                v17 = v150[8];
                **(_BYTE **)v150 = v150[8];
              }
            }
            else
            {
              v70 = *(__int64 **)(a1 + 8);
              *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
              sub_14634E0(v70, (int *)(a1 + 16));
            }
          }
          else
          {
            if ( v27 != 176 || (a2[90] & 2) == 0 )
              goto LABEL_118;
            sub_1564840(v150, a1, a1 + 16, 1875);
            sub_AEA040((__int64)v150);
            v44 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v44, (int *)(a1 + 16));
            v45 = sub_14C51E0(a1, 1);
            if ( v45 > 1 )
            {
              v73 = *((_DWORD *)a2 + 34);
              if ( v73 )
              {
                v74 = (unsigned int *)a2[16];
                v12 = *v74;
                v17 = 1LL << v12;
                if ( ((1LL << v12) & 0xB7) == 0 )
                {
                  v17 = (1LL << v12) & 0x40;
                  if ( (_DWORD)v17 )
                  {
                    v12 = (unsigned int)(v73 - 1);
                    v17 = a2[16];
                    v79 = &v74[36 * v12];
                    while ( (unsigned int *)v17 != v79 )
                    {
                      v80 = 1LL << *(_DWORD *)(v17 + 144);
                      v12 = v80;
                      if ( (v80 & 0xB7) != 0 )
                        break;
                      v17 += 144;
                      v12 = v80 & 0x40;
                      if ( (v80 & 0x40) == 0 )
                        goto LABEL_155;
                    }
                  }
                  else
                  {
LABEL_155:
                    if ( !a2[103] )
                    {
                      v75 = v45 & 0xFFFFFFFFFFFFFFFELL;
                      a2[103] = v75;
                      v76 = sub_EEC140(v75);
                      if ( v76 )
                        *((_DWORD *)a2 + 23) = v76;
                    }
                  }
                }
              }
            }
          }
LABEL_75:
          v27 = *(_WORD *)(a1 + 32);
        }
        if ( (*(_BYTE *)*a2 & 7) != 1 && ((1LL << *((_DWORD *)a2 + 24)) & 0x781) != 0 )
        {
          v46 = *((_DWORD *)a2 + 34);
          if ( !v46 )
          {
LABEL_84:
            v49 = 1;
            v50 = 776;
            goto LABEL_85;
          }
          v47 = (_DWORD *)a2[16];
          if ( *v47 == 6 )
          {
            v48 = &v47[36 * (v46 - 1)];
            while ( v47 != v48 )
            {
              v47 += 36;
              if ( *v47 != 6 )
                goto LABEL_144;
            }
            goto LABEL_84;
          }
        }
LABEL_144:
        v49 = 0;
        v50 = 264;
LABEL_85:
        sub_146B5E0(&v138, a1, v50, 1, 0);
        v51 = *(_QWORD *)(a1 + 8);
        v137 = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(v51 + 56) + 1LL) & 8) == 0
          || (a2[90] & 2) != 0
          || (v52 = *(_BYTE *)*a2 & 7, v52 == 1)
          || v52 == 2 && *((_DWORD *)a2 + 24)
          || *((_DWORD *)a2 + 14)
          || (v53 = *((_DWORD *)a2 + 24), ((1LL << v53) & 0x200F01) == 0) )
        {
LABEL_97:
          *(_QWORD *)&v144[4] = a1;
          *(_QWORD *)&v150[16] = 0x200000000LL;
          v58 = *(_WORD *)(a1 + 32) == 22;
          ptr[1] = (void *)0x200000000LL;
          v142 = (char *)(a1 + 1952);
          v59 = *(_BYTE *)(a1 + 1952);
          v152 = a1 + 504;
          *(_QWORD *)v150 = 0;
          *(_QWORD *)&v150[8] = &v151;
          ptr[0] = &v154;
          v143 = v59;
          *(_BYTE *)(a1 + 1952) = 1;
          LODWORD(v145) = 1507350;
          WORD2(v145) = 63;
          v146 = sub_146A990;
          v147 = 0;
          v148 = 0;
          if ( v58 )
          {
            if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)
                                                                           + 144LL) )
            {
              v135 = &v142;
              sub_1568800(&v142);
            }
            else
            {
              v135 = &v142;
              LODWORD(v148) = sub_146A990(a1);
            }
          }
          if ( v49 )
          {
            v71 = *(unsigned int *)(a1 + 2548);
            v72 = *(_QWORD *)(a1 + 96);
            v135 = &v142;
            *(double *)a3.m128i_i64 = sub_183FB80(v72, a2, v71);
            sub_149C200((const __m128i *)a1, (__int64)a2, (int *)v150, (__int64)&v142, v137, 0, a3, a4);
            sub_183EEA0(*(_QWORD *)(a1 + 96), a2);
          }
          else
          {
            sub_149C200((const __m128i *)a1, (__int64)a2, (int *)v150, (__int64)&v142, v137, 0, a3, a4);
          }
          if ( v138 )
          {
            sub_1564F70(v138);
            v138 = 0;
          }
          *v142 = v143;
          sub_15DCED0(v152, &v152);
          if ( ptr[0] != &v154 )
            free(ptr[0]);
          if ( *(__m128i **)&v150[8] != &v151 )
            free(*(void **)&v150[8]);
          if ( v138 )
            sub_1564F70(v138);
          goto LABEL_75;
        }
        if ( a2[2] )
        {
          v54 = (unsigned __int8)sub_15F3100(*(_QWORD *)(a1 + 96), a2);
          if ( *((_DWORD *)a2 + 14) )
          {
            v55 = 0;
            goto LABEL_94;
          }
        }
        else
        {
          v54 = v53 == 7;
        }
        v55 = a2[8];
LABEL_94:
        v56 = *(unsigned int *)(a1 + 2712);
        if ( v56 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2716) )
        {
          v136 = v55;
          LODWORD(v135) = v54;
          sub_2237220(a1 + 2704, a1 + 2720, v56 + 1, 8);
          v56 = *(unsigned int *)(a1 + 2712);
          v55 = v136;
          v54 = (unsigned int)v135;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 2704) + 8 * v56) = v55;
        ++*(_DWORD *)(a1 + 2712);
        v57 = sub_1560FC0(a1, &v137, v54);
        --*(_DWORD *)(a1 + 2712);
        if ( !v57 )
        {
          if ( v138 )
            sub_1564F70(v138);
          goto LABEL_118;
        }
        goto LABEL_97;
      }
LABEL_67:
      if ( !a2[8] )
      {
        a8 = *((unsigned int *)a2 + 26);
        if ( !(_DWORD)a8 )
          goto LABEL_76;
      }
      v9 = *((unsigned int *)a2 + 34);
      if ( (_DWORD)v9 )
        goto LABEL_76;
      goto LABEL_27;
    }
LABEL_49:
    if ( (a2[90] & 2) == 0 )
    {
      if ( (_DWORD)v12 != 22 )
      {
        if ( (unsigned int)(v12 - 24) <= 1 )
        {
          v39 = *(_QWORD *)(v13 + 2944);
          if ( v39 >= *(unsigned int *)(v13 + 2912) )
            v40 = sub_14180A0(v13, 1u);
          else
            v40 = *(_QWORD *)(v13 + 2904) + 24 * v39;
          v41 = *(_WORD *)(v40 + 16);
          if ( v41 != 66 && v41 != 63 )
            goto LABEL_56;
          goto LABEL_136;
        }
        v17 = (unsigned int)(v12 - 20);
        if ( (unsigned int)v17 > 1 )
        {
          if ( (v16 & 0xF91) != 0 )
          {
            if ( (_DWORD)v12 != 7 )
            {
              v20 = *(_QWORD *)(v13 + 56);
              v19 = v13;
              if ( (*(_BYTE *)(v20 + 1) & 8) != 0 )
              {
LABEL_13:
                v21 = *((_DWORD *)a2 + 3);
                if ( (*(_BYTE *)(a1 + 34) & 1) != 0 && v21 )
                {
                  v22 = (unsigned int)sub_13DC060(v21, 0, *(__int64 **)(v19 + 88), v20, a3, *(double *)a4.m128_u64);
                }
                else
                {
                  v22 = *(unsigned int *)(a1 + 16);
                  if ( !*((_DWORD *)a2 + 20) )
                  {
                    v23 = *((_DWORD *)a2 + 21);
                    if ( v23 )
                      v22 = v23;
                  }
                }
                sub_1564820(v150, a1, v22, 1659);
                sub_AE9DF0(
                  (unsigned __int8 **)v150,
                  (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0,
                  3u);
                sub_AEA040((__int64)v150);
                goto LABEL_215;
              }
              goto LABEL_221;
            }
            LOWORD(v17) = 5;
LABEL_189:
            v86 = *(_QWORD *)(v13 + 56);
            if ( (*(_BYTE *)(v86 + 2) & 4) == 0
              || (*(_BYTE *)(v86 + 1) & 8) == 0
              || sub_10CCDE0(v17)
              || (v87 = *(_WORD *)(a1 + 32), v88 = sub_141A630(v87), v87 == 1)
              || v88
              || (v89 = *(__int16 **)(a1 + 24)) == nullptr
              || !(unsigned __int8)sub_FE8AC0(v89, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
            {
              v101 = *(unsigned int *)(a1 + 16);
              if ( !*((_DWORD *)a2 + 20) )
              {
                v102 = *((_DWORD *)a2 + 21);
                if ( v102 )
                  v101 = v102;
              }
              sub_1564820(v150, a1, v101, 1627);
              v103 = sub_15AC7E0(*a2);
              v104 = 0;
              if ( v103 )
              {
                v103 = *(_DWORD *)(*a2 + 160LL);
                v104 = *(_DWORD *)(*a2 + 164LL);
              }
              v142 = (char *)__PAIR64__(v104, v103);
              v143 = 1;
              sub_AEC610((__int64 *)v150, (__int64 *)&v142);
              sub_AEA040((__int64)v150);
              goto LABEL_215;
            }
            v90 = *(unsigned int *)(a1 + 16);
            if ( !*((_DWORD *)a2 + 20) )
            {
              v91 = *((_DWORD *)a2 + 21);
              if ( v91 )
                v90 = v91;
            }
            sub_1564820(v150, a1, v90, 1628);
            v92 = *(_WORD *)(a1 + 32);
            v93 = sub_141A630(v92);
            if ( v92 == 1 || v93 )
              v94 = 0;
            else
              v94 = *(_QWORD *)(a1 + 24);
            sub_1478560((unsigned __int8 **)v150, v94);
            v95 = sub_15AC7E0(*a2);
            v96 = 0;
            if ( v95 )
            {
              v95 = *(_DWORD *)(*a2 + 160LL);
              v96 = *(_DWORD *)(*a2 + 164LL);
            }
            v142 = (char *)__PAIR64__(v96, v95);
            v143 = 1;
            sub_AEC610((__int64 *)v150, (__int64 *)&v142);
            sub_AEA040((__int64)v150);
            v97 = *(_DWORD *)(a1 + 16);
            v98 = *(_WORD *)(a1 + 32);
            v99 = sub_141A630(v98);
            if ( v98 == 1 || v99 )
              v100 = 0;
            else
              v100 = *(_QWORD *)(a1 + 24);
            a2[8] = v100;
            *((_DWORD *)a2 + 21) = v97;
            *((_DWORD *)a2 + 20) = v97;
            v26 = *(_DWORD *)(a1 + 16);
            *((_DWORD *)a2 + 14) = 0;
            if ( !v26 )
              goto LABEL_23;
            goto LABEL_22;
          }
LABEL_64:
          v42 = *(_DWORD *)(a1 + 16);
          v43 = *((_DWORD *)a2 + 663);
          *((_DWORD *)a2 + 14) = 0;
          a2[8] = 0;
          *((_DWORD *)a2 + 21) = v42;
          *((_DWORD *)a2 + 20) = v42;
          if ( !v43 || (a2[90] & 2) == 0 )
          {
            v27 = *(_WORD *)(a1 + 32);
            goto LABEL_67;
          }
          v121 = sub_13DC060(
                   v43,
                   0,
                   *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                   a3,
                   *(double *)a4.m128_u64);
          sub_1564820(v150, a1, v121, 1936);
          sub_AEA040((__int64)v150);
          v17 = *((unsigned int *)a2 + 14);
          goto LABEL_25;
        }
        v62 = (int *)(a1 + 16);
        if ( (unsigned int)sub_14A7DC0(a1, a1 + 16) )
          goto LABEL_56;
        v127 = *(_QWORD *)(a1 + 8);
        v128 = *(_QWORD *)(v127 + 2944);
        if ( v128 >= *(unsigned int *)(v127 + 2912) )
          v129 = sub_14180A0(v127, 1u);
        else
          v129 = *(_QWORD *)(v127 + 2904) + 24 * v128;
        v130 = *(_WORD *)(v129 + 16);
        LOBYTE(v129) = 0;
        if ( (unsigned __int16)(v130 - 24) <= 0x2Au )
          v129 = (0x58000000001uLL >> ((unsigned __int8)v130 - 24)) & 1;
        if ( v130 != 150 && !(_BYTE)v129 )
          goto LABEL_56;
LABEL_137:
        sub_1564820(v150, a1, *(unsigned int *)(a1 + 16), 1923);
        v63 = *(_DWORD *)(a1 + 16);
        *(_QWORD *)v144 = 0;
        v144[8] = 0;
        v145 = &v147;
        v146 = nullptr;
        LOBYTE(v147) = 0;
        v149 = 0;
        LODWORD(v142) = v63;
        HIDWORD(v142) = v63;
        v143 = 1;
        if ( v63 )
        {
          sub_1480470((__int64 *)v150, (unsigned __int64)&v142);
          if ( v145 != &v147 )
            operator delete(v145);
        }
        sub_AEA040((__int64)v150);
        v64 = *(_DWORD *)(a1 + 16);
        *((_DWORD *)a2 + 14) = 0;
        a2[8] = 0;
        *((_DWORD *)a2 + 21) = v64;
        *((_DWORD *)a2 + 20) = v64;
        v65 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v65, v62);
        v17 = *((unsigned int *)a2 + 14);
        goto LABEL_25;
      }
      v118 = *(_QWORD *)(v13 + 2944);
      if ( v118 >= *(unsigned int *)(v13 + 2912) )
        v119 = sub_14180A0(v13, 1u);
      else
        v119 = *(_QWORD *)(v13 + 2904) + 24 * v118;
      v120 = *(_WORD *)(v119 + 16);
      if ( (unsigned __int16)(v120 - 52) > 1u )
      {
        v62 = (int *)(a1 + 16);
        if ( v120 != 66 )
        {
LABEL_56:
          v12 = *((unsigned int *)a2 + 24);
          v17 = *(unsigned __int16 *)(a1 + 32);
          v16 = 1LL << v12;
          goto LABEL_4;
        }
        goto LABEL_137;
      }
    }
LABEL_136:
    v62 = (int *)(a1 + 16);
    goto LABEL_137;
  }
  if ( *(_WORD *)(a1 + 32) == 20 && (v16 & 0xF91) != 0 && (!*((_DWORD *)a2 + 2) || !*((_DWORD *)a2 + 3)) && !a2[2] )
  {
    sub_149A190((const __m128i *)a1, (__int64)a2);
    goto LABEL_118;
  }
  v28 = 1;
  if ( (_DWORD)v12 != 7 )
  {
    v28 = 0;
    v29 = (v15 & 0x10) != 0;
    if ( (_DWORD)v12 == 9 )
      v28 = v29;
  }
  v30 = *(_BYTE *)(a1 + 2040);
  *(_BYTE *)(a1 + 2040) = v28;
  if ( *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 3) )
  {
LABEL_111:
    if ( !a2[2] )
      goto LABEL_40;
    goto LABEL_38;
  }
  if ( !a2[2] )
  {
    sub_14D0170(a1, (_DWORD)v10, 0, 0, *((_DWORD *)a2 + 24) == 0 || *((_DWORD *)a2 + 24) == 7, 0, 0, 0, 0, 0, 0);
    goto LABEL_111;
  }
LABEL_38:
  if ( (unsigned __int8)sub_169D7E0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v10) )
  {
    sub_147B420((__int64)&v139);
  }
  else if ( sub_18957D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL)) )
  {
    v83 = *(_DWORD *)(a1 + 16);
    a2[8] = 0;
    *((_BYTE *)a2 + 720) |= 1u;
    *((_DWORD *)a2 + 21) = v83;
    *((_DWORD *)a2 + 20) = v83;
    v84 = *(_DWORD *)(a1 + 16);
    *((_DWORD *)a2 + 14) = 0;
    v85 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = v84;
    sub_14634E0(v85, (int *)(a1 + 16));
    goto LABEL_135;
  }
LABEL_40:
  v31 = *(_WORD *)(a1 + 32);
  if ( v31 != 27 )
  {
LABEL_41:
    if ( v31 == 418 || v31 == 5 || v31 == 140 || v31 == 40 )
    {
      v32 = (_BYTE *)*a2;
      v33 = a2[2];
      if ( (*(_DWORD *)*a2 & 0x7F000) != 0 || *v32 >> 6 || (v34 = v32[1], (v34 & 3) != 0) || (v34 & 0xC) != 0 )
      {
        v38 = 0;
        v37 = 0;
      }
      else
      {
        v35 = *((_DWORD *)a2 + 24);
        v36 = v35 == 7;
        v37 = 0;
        v38 = v35 == 7 || v35 == 0;
        if ( !v33 )
        {
          v37 = v38;
          v38 = v36;
        }
      }
      *(_DWORD *)v150 = 0;
      if ( !(unsigned __int8)sub_14D1670(a1, (_DWORD)v10, 0, 0, 1, 1, v38, v37, (__int64)v150, (__int64)(a2 + 7)) )
      {
        if ( !*((_DWORD *)a2 + 2) || !*((_DWORD *)a2 + 3) )
        {
          if ( !v33 && a2[2] )
          {
LABEL_128:
            if ( (unsigned __int8)sub_169D7E0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v10) )
              sub_147B420((__int64)&v139);
          }
LABEL_130:
          if ( !*((_DWORD *)a2 + 22) )
          {
            v60 = *((_DWORD *)a2 + 20);
            if ( v60 )
              *((_DWORD *)a2 + 22) = v60;
          }
          v61 = *((_DWORD *)a2 + 21);
          if ( v61 )
            *((_DWORD *)a2 + 23) = v61;
          goto LABEL_135;
        }
        if ( a2[2] )
        {
          if ( !v33 )
            goto LABEL_128;
          goto LABEL_130;
        }
      }
      v81 = *(_DWORD *)(a1 + 16);
      *((_DWORD *)a2 + 14) = 0;
      a2[8] = 0;
      *((_DWORD *)a2 + 21) = v81;
      *((_DWORD *)a2 + 20) = v81;
      *((_BYTE *)a2 + 720) |= 1u;
LABEL_135:
      *(_BYTE *)(a1 + 2040) = v30;
      v17 = *((unsigned int *)a2 + 14);
      goto LABEL_25;
    }
    if ( !*((_DWORD *)a2 + 2) )
    {
LABEL_184:
      if ( !a2[2] )
      {
        *(_BYTE *)(a1 + 2040) = v30;
        v12 = *((unsigned int *)a2 + 24);
        v17 = *(unsigned __int16 *)(a1 + 32);
        v16 = 1LL << v12;
        goto LABEL_4;
      }
      goto LABEL_226;
    }
LABEL_183:
    v82 = *((_DWORD *)a2 + 3);
    if ( v82 )
    {
LABEL_227:
      v108 = sub_13DC060(
               v82,
               0,
               *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
               a3,
               *(double *)a4.m128_u64);
      sub_1564820(v150, a1, v108, 1659);
      sub_14780E0((unsigned __int8 **)v150, 1);
      sub_AEA040((__int64)v150);
      v109 = *(_DWORD *)(a1 + 16);
      *((_DWORD *)a2 + 14) = 0;
      a2[8] = 0;
      *((_DWORD *)a2 + 21) = v109;
      *((_DWORD *)a2 + 20) = v109;
      goto LABEL_135;
    }
    goto LABEL_184;
  }
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( *((_DWORD *)a2 + 3) || a2[2] )
      goto LABEL_183;
  }
  else if ( a2[2] )
  {
LABEL_226:
    v82 = *((_DWORD *)a2 + 3);
    goto LABEL_227;
  }
  v122 = *(_QWORD *)(a1 + 8);
  if ( (a2[12] & 0xFFFFFFFD) == 0x10 || *((_DWORD *)a2 + 24) == 1 )
  {
    v123 = *(_QWORD *)(v122 + 2944);
    if ( *(unsigned int *)(v122 + 2912) <= v123 )
      v124 = sub_14180A0(v122, 1u);
    else
      v124 = *(_QWORD *)(v122 + 2904) + 24 * v123;
    if ( *(_WORD *)(v124 + 16) == 23
      && (a2[90] & 2) == 0
      && !(unsigned __int8)sub_1E4CD30(*(_QWORD *)(a1 + 96), a2)
      && ((*(_DWORD *)*a2 >> 12) & 0x7F) != 0x32 )
    {
      v31 = *(_WORD *)(a1 + 32);
      goto LABEL_41;
    }
    v122 = *(_QWORD *)(a1 + 8);
  }
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0((__int64 *)v122, (int *)(a1 + 16));
  v31 = *(_WORD *)(a1 + 32);
  v125 = *(_DWORD *)(a1 + 40);
  if ( v31 != 31 && v31 != 56 )
  {
    v126 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
    if ( v31 != 353 )
    {
      if ( (*(_BYTE *)(v126 + 1) & 8) != 0 )
      {
        if ( v31 == 28 )
          goto LABEL_266;
        if ( v31 == 29 )
        {
          if ( (*(_BYTE *)(v126 + 1) & 0x10) != 0 )
            goto LABEL_266;
          v131 = *((_DWORD *)a2 + 24);
          if ( v131 != 19 && v131 != 13 )
            goto LABEL_266;
        }
      }
LABEL_252:
      *((_DWORD *)a2 + 663) = v125;
      goto LABEL_41;
    }
    if ( (*(_BYTE *)(v126 + 47) & 0x20) == 0 )
      goto LABEL_252;
    if ( (unsigned int)sub_FEAA90(v126) <= 0xC7 )
    {
      v31 = *(_WORD *)(a1 + 32);
      goto LABEL_252;
    }
  }
LABEL_266:
  v135 = (char **)a2;
  v132 = *(_QWORD *)(a1 + 96);
  v133 = *((unsigned int *)a2 + 22);
  v135 = (char **)a1;
  *(__m128 *)v150 = _mm_loadh_ps((const double *)&v135);
  sub_15F0FC0(v132, v133, sub_1498E10, v150);
  if ( v125 )
    sub_1550E90(a1, v125, a2);
  *(_BYTE *)(a1 + 2040) = v30;
LABEL_118:
  if ( (_BYTE)v141 )
    sub_169D850(*(_QWORD *)(v139 + 96), *(_QWORD *)(*(_QWORD *)(v139 + 96) + 608LL), v140);
  if ( HIBYTE(v141) )
    sub_1564F70(v139);
}
