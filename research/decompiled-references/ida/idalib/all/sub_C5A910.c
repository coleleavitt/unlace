__int64 __fastcall sub_C5A910(__int64 *a1, __int64 a2, __int64 **a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r14
  bool v13; // al
  const __m128i *v14; // rdx
  _DWORD *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 *v18; // r13
  __m128i v19; // xmm0
  __m128i *i; // rsi
  __m128i si128; // xmm1
  bool v22; // al
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  const __m128i *v34; // r12
  __int64 v35; // rdi
  __int8 v36; // al
  __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // r13
  __int64 *v40; // r14
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r12
  __int64 v46; // r12
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r13
  unsigned __int64 v51; // rax
  __m128i *v52; // rax
  bool v53; // zf
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rdi
  __m128i *v58; // rbp
  __m128i v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdi
  unsigned int v62; // r13d
  bool v63; // al
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdi
  __int64 v69; // r13
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // r15
  const __m128i *v81; // rdx
  __int64 v82; // r13
  __int64 v83; // rdi
  __int64 v84; // rax
  unsigned __int64 v85; // r13
  __int64 *v86; // r12
  __int64 v87; // r14
  unsigned __int8 v88; // al
  const __m128i *v89; // r14
  __int64 v90; // rdi
  __int64 v91; // r9
  __int64 v92; // rsi
  __int64 v93; // r15
  __int64 v94; // r14
  __int64 v95; // rdx
  int v96; // esi
  __int64 v97; // rcx
  int v98; // eax
  __int64 *v99; // rdi
  __m128i *v100; // rsi
  __int64 v101; // rax
  __m128i *v102; // r13
  __int64 v103; // rdx
  __int64 v104; // rdx
  __m128i **v105; // rax
  __m128i **v106; // rdx
  __m128i *v107; // rax
  __int32 v108; // edx
  __m128i v109; // xmm5
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  unsigned __int64 v115; // rax
  int v116; // r13d
  int v117; // esi
  __int64 v118; // rdi
  __int64 v120; // [rsp+10h] [rbp-1C8h]
  __int64 v121; // [rsp+18h] [rbp-1C0h]
  const __m128i *v122; // [rsp+18h] [rbp-1C0h]
  __int64 v124; // [rsp+28h] [rbp-1B0h]
  unsigned int v125; // [rsp+30h] [rbp-1A8h]
  unsigned __int8 v126; // [rsp+37h] [rbp-1A1h]
  __int64 v128; // [rsp+48h] [rbp-190h]
  __m128i *v129; // [rsp+50h] [rbp-188h] BYREF
  __m128i *v130; // [rsp+58h] [rbp-180h] BYREF
  __m128i v131; // [rsp+60h] [rbp-178h]
  __m128i v132[3]; // [rsp+70h] [rbp-168h] BYREF
  __int64 v133; // [rsp+A0h] [rbp-138h]
  __m128i v134[2]; // [rsp+A8h] [rbp-130h] BYREF
  char v135; // [rsp+C8h] [rbp-110h]
  __int64 v136; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v137; // [rsp+D8h] [rbp-100h]
  __m128i **v138; // [rsp+E0h] [rbp-F8h]
  __int64 v139; // [rsp+E8h] [rbp-F0h]
  __m128i v140; // [rsp+110h] [rbp-C8h] BYREF
  __m128i v141; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v142; // [rsp+130h] [rbp-A8h]
  __int64 v143; // [rsp+138h] [rbp-A0h]
  void *ptr; // [rsp+140h] [rbp-98h] BYREF
  __int64 v145; // [rsp+148h] [rbp-90h]
  _BYTE v146[64]; // [rsp+150h] [rbp-88h] BYREF
  char v147; // [rsp+190h] [rbp-48h]
  __int8 v148; // [rsp+191h] [rbp-47h]

  v6 = sub_F60F10(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
         a2,
         a3,
         a4,
         a5);
  v126 = 0;
  if ( *(char *)(v6 + 28) < 0 )
    return v126;
  v7 = v6;
  v124 = sub_EDE580(*(_QWORD *)(*a1 + 16), v6);
  if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 59 > 2 )
  {
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v12 = v7;
    sub_7052B0((__int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104), v8, v9, v10, v11);
    v13 = *(_DWORD *)(*(_QWORD *)(v7 + 128) + 16LL) != 0;
  }
  v14 = (const __m128i *)a1[1];
  v15 = (_DWORD *)*a1;
  v16 = v14[3].m128i_i64[0];
  v17 = v14[3].m128i_u32[2];
  v18 = (__int64 *)(*a1 + 824);
  v19 = _mm_loadu_si128(v14);
  v133 = *a1;
  v132[0].m128i_i64[1] = v17;
  i = &v140;
  v132[0].m128i_i64[0] = v16;
  si128 = _mm_load_si128(v132);
  v131 = v19;
  v132[1] = v19;
  v132[2] = si128;
  v134[0] = v19;
  v134[1] = si128;
  v140 = v19;
  v141 = si128;
  LODWORD(v142) = !v13 + 1;
  v22 = sub_C2F580(v18, (unsigned __int64 *)&v140, &v129);
  v26 = 0;
  if ( !v22 )
  {
    v95 = (unsigned int)v15[210];
    v130 = v129;
    v96 = 2 * v95;
    v97 = (unsigned int)(3 * v95);
    v98 = v15[208] + 1;
    v99 = (__int64 *)(unsigned int)(4 * v98);
    if ( (unsigned int)v99 < (unsigned int)v97 )
    {
      v97 = (unsigned int)(v95 - v15[209] - v98);
      v100 = (__m128i *)((unsigned int)v95 >> 3);
      if ( (unsigned int)v97 > (unsigned int)v100 )
      {
LABEL_104:
        v15[208] = v98;
        v101 = sub_A4F710(v99, v100, v95, v97, v24);
        v102 = v130;
        i = (__m128i *)&v136;
        v138 = nullptr;
        v136 = v101;
        v137 = v103;
        v139 = 0;
        if ( sub_A4F650(v130, &v136) )
        {
          v104 = v102[1].m128i_i64[1];
          if ( v104 == v139 )
          {
            v105 = (__m128i **)v102[1].m128i_i64[0];
            v23 = (__int64)&v105[v104];
            if ( v105 == (__m128i **)v23 )
            {
LABEL_111:
              v107 = v130;
              v108 = v142;
              *v130 = _mm_load_si128(&v140);
              v109 = _mm_load_si128(&v141);
              v107[2].m128i_i32[0] = v108;
              v26 = 1;
              v107[1] = v109;
              goto LABEL_5;
            }
            v106 = v138;
            for ( i = *v138; *v105 == *v106; i = *v106 )
            {
              ++v105;
              ++v106;
              if ( (__m128i **)v23 == v105 )
                goto LABEL_111;
            }
          }
        }
        --v15[209];
        goto LABEL_111;
      }
      v96 = v95;
    }
    sub_C2F750((__int64)v18, v96, v95, v97, v24, v25);
    v100 = &v140;
    v99 = v18;
    sub_C2F580(v18, (unsigned __int64 *)&v140, &v130);
    v98 = v15[208] + 1;
    goto LABEL_104;
  }
LABEL_5:
  v27 = *(_BYTE *)(v7 + 73);
  v135 = v26;
  if ( v27 >> 5 != 2 )
  {
    if ( *(_DWORD *)a1[2] <= 1u )
    {
      v110 = sub_B7E900(v7, (__int64)i, v26, v23, v24, v25);
      if ( v110 )
      {
        v112 = 0;
        v111 = *(_QWORD *)(v110 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v111 )
        {
          while ( (*(_BYTE *)(v111 + 28) & 0x7Fu) - 49 <= 2 )
          {
LABEL_123:
            ++v112;
            v111 = *(_QWORD *)(v111 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v111 )
              goto LABEL_118;
          }
          while ( 1 )
          {
            v115 = *(_QWORD *)(v111 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v111 = v115;
            if ( !v115 )
              break;
            if ( (*(_BYTE *)(v115 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_123;
          }
        }
LABEL_118:
        v116 = v112 + 1;
      }
      else
      {
        v116 = 0;
      }
      v117 = 0;
      if ( v12 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v111, v112, v113, v114);
        v117 = *(_DWORD *)(*(_QWORD *)(v12 + 128) + 16LL);
      }
      v140.m128i_i8[4] &= ~1u;
      v140.m128i_i32[0] = 0;
      sub_A4F800((__int64)&v140.m128i_i64[1], v117, v116);
      v118 = a1[2];
      i = &v140;
      v140.m128i_i32[0] = 10;
      sub_A4FD20(v118, (__int64)&v140);
      if ( v140.m128i_i32[0] > 1u )
        sub_A4F8E0(v140.m128i_i32);
    }
    if ( v12
      && (i = *(__m128i **)(v12 + 104),
          sub_7052B0(i[6].m128i_i64, (__int64)i, v26, v23, v24, v25),
          *(_DWORD *)(*(_QWORD *)(v12 + 128) + 16LL)) )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v26, v23, v24, v25);
      v68 = *(_QWORD *)(v12 + 128);
      if ( (*(_BYTE *)(v68 + 24) & 1) != 0 )
        v69 = sub_B96980(v68);
      else
        v69 = *(_QWORD *)(v68 + 24);
      sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v64, v65, v66, v67);
      v120 = v69 + 24LL * *(unsigned int *)(*(_QWORD *)(v12 + 128) + 16LL);
      sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v70, v71, v72, v73);
      v78 = *(_QWORD *)(v12 + 128);
      if ( (*(_BYTE *)(v78 + 24) & 1) != 0 )
        v79 = sub_B96980(v78);
      else
        v79 = *(_QWORD *)(v78 + 24);
      if ( v79 != v120 )
      {
        v126 = 1;
        v80 = v79;
        v125 = 0;
        while ( 1 )
        {
          v81 = (const __m128i *)a1[1];
          v82 = (__int64)a3[v125];
          v140 = _mm_loadu_si128(v81);
          v141.m128i_i64[0] = v81[1].m128i_i64[0];
          v141.m128i_i8[8] = v81[1].m128i_i8[8] & 1 | v141.m128i_i8[8] & 0xFE;
          v141.m128i_i8[8] = v81[1].m128i_i8[8] & 2 | v141.m128i_i8[8] & 0xFD;
          v141.m128i_i8[8] = v81[1].m128i_i8[8] & 4 | v141.m128i_i8[8] & 0xFB;
          v141.m128i_i8[8] = v81[1].m128i_i8[8] & 8 | v141.m128i_i8[8] & 0xF7;
          v141.m128i_i32[2] = v81[1].m128i_i32[2] & 0xFFFFFFF0 | v141.m128i_i8[8] & 0xF;
          v142 = v81[2].m128i_i64[0];
          v143 = v81[2].m128i_i64[1];
          ptr = v146;
          v145 = 0x800000000LL;
          if ( v81[3].m128i_i32[2] )
          {
            v122 = v81;
            sub_C25E10((__int64 *)&ptr, v81[3].m128i_i64);
            v81 = v122;
          }
          v83 = *a1;
          v147 = v81[8].m128i_i8[0] & 1 | v147 & 0xFE;
          v147 = v81[8].m128i_i8[0] & 2 | v147 & 0xFD;
          v148 = v81[8].m128i_i8[1];
          if ( !(unsigned __int8)sub_C2DF00(v83, v82, (__int64)&v140, v12, v80) )
            goto LABEL_45;
          if ( !(unsigned __int8)sub_C4F9A0(*(_QWORD *)(a1[2] + 8) + 56LL * v125, *a1, &v140, v82) )
          {
            if ( !(unsigned __int8)sub_C11850(*a1) )
              goto LABEL_45;
            v126 = 0;
          }
          ++v125;
          if ( ptr == v146 )
          {
            v80 += 24;
            if ( v120 == v80 )
              goto LABEL_74;
          }
          else
          {
            free(ptr);
            v80 += 24;
            if ( v120 == v80 )
              goto LABEL_74;
          }
        }
      }
      v126 = 1;
      v125 = 0;
LABEL_74:
      i = v134;
      sub_C2FF90(v133 + 824, v134, v74, v75, v76, v77)->m128i_i32[0] = 2;
    }
    else
    {
      v126 = 1;
      v125 = 0;
    }
    v28 = sub_B7E900(v7, (__int64)i, v26, v23, v24, v25);
    if ( !v28 )
      goto LABEL_36;
    v33 = v28;
LABEL_12:
    if ( (*(_BYTE *)(v33 + 68) & 1) != 0 && !*(_QWORD *)(v33 + 40) )
      goto LABEL_35;
    v34 = (const __m128i *)a1[1];
    v140 = _mm_loadu_si128(v34);
    v141.m128i_i64[0] = v34[1].m128i_i64[0];
    v141.m128i_i8[8] = v34[1].m128i_i8[8] & 1 | v141.m128i_i8[8] & 0xFE;
    v141.m128i_i8[8] = v34[1].m128i_i8[8] & 2 | v141.m128i_i8[8] & 0xFD;
    v141.m128i_i8[8] = v34[1].m128i_i8[8] & 4 | v141.m128i_i8[8] & 0xFB;
    v141.m128i_i8[8] = v34[1].m128i_i8[8] & 8 | v141.m128i_i8[8] & 0xF7;
    v141.m128i_i32[2] = v34[1].m128i_i32[2] & 0xFFFFFFF0 | v141.m128i_i8[8] & 0xF;
    v142 = v34[2].m128i_i64[0];
    v143 = v34[2].m128i_i64[1];
    ptr = v146;
    v145 = 0x800000000LL;
    if ( v34[3].m128i_i32[2] )
      sub_C25E10((__int64 *)&ptr, v34[3].m128i_i64);
    v35 = *a1;
    v147 = v34[8].m128i_i8[0] & 1 | v147 & 0xFE;
    v147 = v34[8].m128i_i8[0] & 2 | v147 & 0xFD;
    v36 = v34[8].m128i_i8[1];
    v37 = v125;
    v148 = v36;
    if ( v125 >= a4 )
    {
      v38 = a2;
      if ( (unsigned __int8)sub_C14E10(v35, a2, (__int64)&v140, v33, v124, v32) )
      {
        v39 = *(_QWORD *)(v33 + 48);
        goto LABEL_19;
      }
    }
    else
    {
      v38 = (__int64)a3[v125];
      if ( (unsigned __int8)sub_C14E10(v35, v38, (__int64)&v140, v33, v124, v32) )
      {
        v39 = *(_QWORD *)(*(_QWORD *)(*a1 + 16) + 18720LL);
LABEL_19:
        LOWORD(v136) = v136 & 0xFE00 | 0x36;
        if ( unk_2CD7484 )
          sub_EE9B50(54);
        v40 = &v136;
        v137 = v39;
        *(_WORD *)((char *)&v136 + 1) &= 0xF801u;
        v41 = sub_B63130((__int64)&v136);
        v44 = (unsigned int)(v41 << 6);
        BYTE1(v136) = ((_BYTE)v41 << 6) | BYTE1(v136) & 0x3F;
        BYTE2(v136) = BYTE2(v136) & 0xF8 | ((unsigned __int8)v41 >> 2) & 7;
        if ( v125 < a4 )
        {
          ++v125;
          v40 = a3[v37];
        }
        v45 = *a1;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 5 )
        {
          v38 = v40[1];
          v60 = sub_A72040(*(_QWORD **)(v45 + 16), v38);
          v45 = *a1;
          if ( v60 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(v60 + 16) - 2 <= 1 )
            {
              v61 = *(_QWORD *)(v60 + 40);
              if ( (*(_BYTE *)(v60 + 19) & 2) != 0 )
              {
                v62 = *(_DWORD *)(v61 + 8);
                v63 = v62 <= 0x40 ? *(_QWORD *)v61 == 0 : v62 == (unsigned int)sub_2206780(v61);
              }
              else
              {
                v63 = v61 == 0;
              }
              if ( !v63 )
              {
                sub_E33C10(v45, v40, 2496, 0);
                goto LABEL_45;
              }
            }
          }
        }
        v46 = *(_QWORD *)(v45 + 32);
        v121 = *(_QWORD *)(v46 + 32);
        if ( (*(_WORD *)v40 & 0x1FF) == 0x6F )
          *(_QWORD *)(v46 + 32) = a1[1];
        v47 = a1[2];
        v48 = v33;
        if ( *(char *)(v33 + 29) < 0 )
          v48 = sub_B72720(v33);
        v49 = *(unsigned int *)(v48 + 68);
        if ( (v49 & 0xFFFFFFF0) == 0 )
        {
          v128 = v48;
          sub_B7EAB0(v48, v38, v49, v44, v42, v43);
          LODWORD(v49) = *(_DWORD *)(v128 + 68);
        }
        v50 = *(_QWORD *)(v47 + 8) + 56LL * (((unsigned int)v49 >> 4) + *(_DWORD *)(v47 + 16) - 1);
        if ( !(unsigned __int8)sub_C4F9A0(v50, *a1, &v140, (__int64)v40)
          || (*(_BYTE *)(v33 + 68) & 1) != 0 && !(unsigned __int8)sub_C12D50(*a1, (__int64)v40, v50, v33) )
        {
          v55 = *a1;
          v29 = *(unsigned int *)(*a1 + 48);
          if ( !(_DWORD)v29 )
          {
LABEL_44:
            *(_QWORD *)(v46 + 32) = v121;
            goto LABEL_45;
          }
          v126 = *(_BYTE *)(v55 + 914);
          if ( v126 )
          {
            v126 = 0;
            **(_BYTE **)(v55 + 24) = 1;
          }
          else
          {
            if ( !*(_BYTE *)(v55 + 915) )
              goto LABEL_44;
            **(_BYTE **)(v55 + 24) = 1;
          }
        }
        *(_QWORD *)(v46 + 32) = v121;
        if ( ptr != v146 )
          free(ptr);
LABEL_35:
        while ( 1 )
        {
          v51 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v33 = v51;
          if ( !v51 )
            break;
          if ( (*(_BYTE *)(v51 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_12;
        }
LABEL_36:
        v52 = sub_C2FF90(v133 + 824, v134, v29, v30, v31, v32);
        v53 = v135 == 0;
        v52->m128i_i32[0] = 3;
        if ( v53 )
          return v126;
        goto LABEL_49;
      }
    }
LABEL_45:
    if ( ptr != v146 )
      free(ptr);
    v126 = 0;
    goto LABEL_48;
  }
  if ( (*(_WORD *)a2 & 0x1FF) == 0x35 )
  {
    v84 = *(_QWORD *)(a2 + 56);
    v85 = 0;
    if ( v84 )
      goto LABEL_82;
  }
  else
  {
    v84 = *(_QWORD *)(a2 + 40);
    v85 = 0;
    if ( v84 )
    {
LABEL_82:
      if ( (v84 & 2) != 0 )
        v85 = v84 & 0xFFFFFFFFFFFFFFFCLL;
    }
  }
  v86 = &v136;
  BYTE4(v136) &= ~1u;
  v140.m128i_i8[4] &= ~1u;
  LODWORD(v136) = 0;
  v140.m128i_i32[0] = 0;
  sub_A4F870(&v140.m128i_i64[1]);
  v140.m128i_i32[0] = 11;
  sub_A54D90((__int64)&v140, v85, (int *)&v136);
  sub_A4FD20(a1[2], (__int64)&v140);
  if ( v140.m128i_i32[0] > 1u )
    sub_A4F8E0(v140.m128i_i32);
  if ( (unsigned int)v136 > 1 )
    sub_A4F8E0((int *)&v136);
  v126 = 1;
  if ( v85 )
  {
    v87 = *(_QWORD *)(v85 + 48);
    LOWORD(v136) = v136 & 0xFE00 | 0x36;
    if ( unk_2CD7484 )
      sub_EE9B50(54);
    v137 = v87;
    *(_WORD *)((char *)&v136 + 1) &= 0xF801u;
    v88 = sub_B63130((__int64)&v136);
    BYTE1(v136) = (v88 << 6) | BYTE1(v136) & 0x3F;
    BYTE2(v136) = BYTE2(v136) & 0xF8 | (v88 >> 2) & 7;
    if ( a4 )
      v86 = *a3;
    v89 = (const __m128i *)a1[1];
    v140 = _mm_loadu_si128(v89);
    v141.m128i_i64[0] = v89[1].m128i_i64[0];
    sub_C133F0((__int64)&v141.m128i_i64[1], (__int64)&v89[1].m128i_i64[1]);
    v90 = *a1;
    v147 = v89[8].m128i_i8[0] & 1 | v147 & 0xFE;
    v147 = v89[8].m128i_i8[0] & 2 | v147 & 0xFD;
    v148 = v89[8].m128i_i8[1];
    v126 = sub_C14E10(v90, (__int64)v86, (__int64)&v140, v85, v124, v91);
    if ( v126 )
    {
      v92 = *a1;
      v93 = *(_QWORD *)(*a1 + 32);
      v94 = *(_QWORD *)(v93 + 32);
      if ( (*(_WORD *)v86 & 0x1FF) == 0x6F )
      {
        *(_QWORD *)(v93 + 32) = a1[1];
        v92 = *a1;
      }
      v126 = sub_C4F9A0(*(_QWORD *)(a1[2] + 16), v92, &v140, (__int64)v86);
      if ( v126 && (*(_BYTE *)(v85 + 68) & 1) != 0 )
        v126 = sub_C12D50(*a1, (__int64)v86, *(_QWORD *)(a1[2] + 16), v85);
      *(_QWORD *)(v93 + 32) = v94;
    }
    if ( ptr != v146 )
      free(ptr);
  }
LABEL_48:
  if ( !v135 )
    return v126;
LABEL_49:
  v56 = v133;
  v57 = v133 + 824;
  v58 = (__m128i *)sub_C2F440((__int64 *)(v133 + 824), (unsigned __int64 *)v134);
  if ( v58 )
  {
    v59.m128i_i64[0] = sub_A4F720(v57, v134);
    v141 = 0u;
    v140 = v59;
    *v58 = v59;
    v58[1] = _mm_load_si128(&v141);
    --*(_DWORD *)(v56 + 832);
    ++*(_DWORD *)(v56 + 836);
  }
  return v126;
}
