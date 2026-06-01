unsigned __int64 __fastcall sub_F68800(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbp
  unsigned __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned __int8 v30; // r8
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // r14
  unsigned __int32 v37; // eax
  __int64 v38; // r15
  __int64 v39; // rax
  __m128i si128; // xmm0
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbx
  _QWORD *v51; // r14
  _QWORD *v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r14
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbx
  unsigned __int64 v64; // rbx
  unsigned __int8 v65; // al
  __int64 v66; // r8
  char *v67; // r14
  __int64 v68; // r15
  __int64 v69; // rbp
  char *v70; // rax
  __int32 v71; // ecx
  char *v72; // rdx
  __int64 v73; // rdi
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  _QWORD *v99; // r14
  char v100; // r15
  __int64 *v101; // rdx
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  _QWORD *v106; // r15
  char v107; // bl
  unsigned __int32 v108; // eax
  __int64 v109; // r14
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rsi
  __int64 v117; // rax
  __int64 *v118; // rax
  __int64 v119; // rbp
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 *v124; // rdx
  __int64 *v125; // rdi
  _QWORD *v126; // r14
  char v127; // di
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  unsigned __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rax
  unsigned __int64 v140; // rcx
  unsigned __int64 v141; // rax
  __int64 v142; // rax
  _QWORD *v143; // rsi
  __int64 v144; // rdx
  __int64 v145; // [rsp+0h] [rbp-158h]
  __int64 v146; // [rsp+0h] [rbp-158h]
  unsigned __int64 v147; // [rsp+0h] [rbp-158h]
  unsigned __int64 v148; // [rsp+0h] [rbp-158h]
  unsigned __int64 v149; // [rsp+0h] [rbp-158h]
  unsigned __int64 v150; // [rsp+0h] [rbp-158h]
  __int64 v151; // [rsp+0h] [rbp-158h]
  __int64 v152; // [rsp+0h] [rbp-158h]
  __int64 v153; // [rsp+0h] [rbp-158h]
  char v154; // [rsp+0h] [rbp-158h]
  unsigned __int64 v155; // [rsp+0h] [rbp-158h]
  int v156; // [rsp+0h] [rbp-158h]
  __int64 v157; // [rsp+0h] [rbp-158h]
  __int64 v158; // [rsp+0h] [rbp-158h]
  char v159; // [rsp+8h] [rbp-150h]
  __int64 v160; // [rsp+8h] [rbp-150h]
  unsigned __int64 v161; // [rsp+8h] [rbp-150h]
  __int64 v162; // [rsp+8h] [rbp-150h]
  __int64 v163; // [rsp+18h] [rbp-140h]
  __int64 v164; // [rsp+18h] [rbp-140h]
  __int64 v165; // [rsp+20h] [rbp-138h]
  _QWORD *v166; // [rsp+28h] [rbp-130h]
  _QWORD v167[2]; // [rsp+30h] [rbp-128h] BYREF
  __int64 *v168; // [rsp+40h] [rbp-118h] BYREF
  __int64 v169; // [rsp+48h] [rbp-110h]
  _BYTE v170[32]; // [rsp+50h] [rbp-108h] BYREF
  void *v171[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v172; // [rsp+80h] [rbp-D8h] BYREF
  int v173; // [rsp+88h] [rbp-D0h]
  __m128 ptr; // [rsp+A0h] [rbp-B8h] BYREF
  char v175[8]; // [rsp+B0h] [rbp-A8h] BYREF
  int v176; // [rsp+B8h] [rbp-A0h]
  unsigned __int64 v177; // [rsp+C0h] [rbp-98h]
  __int64 v178; // [rsp+C8h] [rbp-90h]

  v5 = a2 & 7;
  v7 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = a2 & 8;
  if ( (_DWORD)v8 )
  {
    v5 |= *(_QWORD *)(v7 + 24);
    v7 = *(_QWORD *)v7;
  }
  switch ( *(_BYTE *)(v7 + 16) )
  {
    case 0:
      v46 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v47 = sub_F68800(a1, *(_QWORD *)(v7 + 40));
      if ( (v47 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      if ( v46 == *(_QWORD *)(v7 + 32) && v47 == *(_QWORD *)(v7 + 40) )
        goto LABEL_5;
      v9 = sub_A75F00(a1->m128i_i64[0], v46, v47);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 1:
      v45 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v45 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v45 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v45 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A75D20(a1->m128i_i64[0], v45);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 2:
      v9 = sub_F6A100(a1, v7);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 3:
      v44 = sub_F6A100(a1, v7);
      v9 = v44 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v44 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v9 = sub_A72990(a1->m128i_i64[0], v44);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 4:
    case 0xD:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1D:
    case 0x20:
    case 0x24:
    case 0x26:
    case 0x2D:
    case 0x2F:
    case 0x30:
    case 0x32:
    case 0x37:
      goto LABEL_5;
    case 5:
      v35 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v35 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v35 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A71E50(a1->m128i_i64[0], v35, (*(_WORD *)(v7 + 18) >> 6) & 7, (*(_BYTE *)(v7 + 18) >> 3) & 7);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 6:
      v34 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v34 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v34 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v34 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A71A40(
             a1->m128i_i64[0],
             v34,
             *(_QWORD *)(v7 + 40),
             (*(_WORD *)(v7 + 18) >> 6) & 7,
             (*(_BYTE *)(v7 + 18) >> 3) & 7);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 7:
      v33 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v33 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v33 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A72BF0(a1->m128i_i64[0], v33);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 8:
      v18 = sub_F68800(a1, *(_QWORD *)(v7 + 40));
      if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v19 = *(_QWORD *)(v7 + 48);
      v20 = sub_F68800(a1, v19);
      if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      if ( v18 == *(_QWORD *)(v7 + 40) && v20 == *(_QWORD *)(v7 + 48) )
      {
        v9 = v7 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v19 = *(_WORD *)(v7 + 18) >> 3;
        v9 = sub_A71850(a1->m128i_i64[0], v19, v18, v20, *(_QWORD *)(v7 + 32));
      }
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v23 = *v10;
      if ( *(_BYTE *)(*v10 + 16) != 8 || *(_WORD *)(v23 + 18) >> 3 != 26 )
        goto LABEL_7;
      v24 = *(_QWORD *)(v23 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v25 = *(_QWORD *)v24;
      v26 = *(_QWORD *)v24;
      if ( *(_BYTE *)(*(_QWORD *)v24 + 16LL) == 34 )
        goto LABEL_32;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
        goto LABEL_220;
      v157 = v9;
      v142 = sub_F62E70(v25);
      v9 = v157;
      v26 = v142;
      if ( v142 )
      {
LABEL_32:
        v145 = v9;
        v27 = sub_A5E7C0(v26, v19, v21, v9, v22);
        v9 = v145;
      }
      else
      {
        v25 = *(_QWORD *)v24;
LABEL_220:
        v158 = v9;
        v27 = v25;
        v26 = 0;
        if ( (unsigned int)*(unsigned __int8 *)(v25 + 16) - 35 <= 1 )
          goto LABEL_34;
        v27 = sub_F635D0(v25);
        v9 = v158;
      }
      if ( !v27 )
        goto LABEL_7;
LABEL_34:
      v28 = *(_QWORD *)(v27 + 24);
      v30 = *(_BYTE *)(v27 + 19) >> 2
         || (v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
             *(_BYTE *)(v29 + 16) != 13)
         || ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) != 489;
      v31 = (*(_WORD *)(v27 + 18) >> 3) & 0x7F;
      v32 = sub_A750A0(
              a1->m128i_i64[0],
              v28,
              (_QWORD *)(v27 + 48),
              v31,
              (_BYTE *)(v27 + 8LL * (unsigned int)v31 + 48),
              (*(_BYTE *)(v27 + 19) >> 2) & 0x3F,
              v30);
      if ( v26 )
        v32 = sub_A74EC0(a1->m128i_i64[0], v32);
      v9 = sub_A71850(a1->m128i_i64[0], *(_WORD *)(v23 + 18) >> 3, *(_QWORD *)(v23 + 40), v32, *(_QWORD *)(v23 + 32));
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 9:
    case 0xA:
    case 0xC:
    case 0x11:
    case 0x1B:
    case 0x1C:
    case 0x27:
    case 0x29:
    case 0x38:
      return 0;
    case 0xB:
      v16 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v16 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v16 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A74B00(a1->m128i_i64[0], v16);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0xE:
      v84 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v84 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v84 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v84 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A74CE0(a1->m128i_i64[0], v84);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0xF:
      if ( (BYTE1(**(_DWORD **)(v7 + 24)) & 0x80u) != 0 )
        goto LABEL_5;
      v81 = sub_F56680(v7);
      v82 = sub_F68800(a1, v81);
      v9 = v82 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v82 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v83 = v7 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (**(_DWORD **)(v7 + 24) & 0x8000) == 0 )
      {
        v149 = v82 & 0xFFFFFFFFFFFFFFF0LL;
        v83 = sub_F56680(v7);
        v9 = v149;
      }
      v10 = (__int64 *)v9;
      v9 = v82;
      if ( v82 == v83 )
        goto LABEL_5;
      goto LABEL_7;
    case 0x10:
      if ( (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v7 + 17) & 4) == 0 )
        goto LABEL_5;
      v80 = sub_F68800(a1, *(_QWORD *)(v7 + 24));
      v9 = v80 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v80 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v80 == *(_QWORD *)(v7 + 24) )
        goto LABEL_5;
      v9 = sub_AB5840(
             a1->m128i_i64[0],
             v80,
             (*(_BYTE *)(v7 + 18) >> 3) & 3,
             (*(_BYTE *)(v7 + 17) & 4) != 0,
             0,
             *(__int64 **)(v7 + 32),
             v7 + 48,
             *(unsigned int *)(v7 + 20));
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x18:
      goto LABEL_14;
    case 0x19:
      v88 = sub_F68800(a1, *(_QWORD *)(v7 + 24));
      v9 = v88 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v88 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v88 == *(_QWORD *)(v7 + 24) )
        goto LABEL_5;
      v89 = a1->m128i_i64[0];
      ptr.m128_i16[0] = *(_WORD *)(v7 + 20) >> 2;
      v9 = sub_A71610(v89, v88, (unsigned __int16 *)&ptr);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x1A:
      v165 = sub_F68800(a1, *(_QWORD *)(v7 + 24));
      v9 = v165 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v165 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v99 = (_QWORD *)(v7 + 48);
      v100 = 0;
      v168 = (__int64 *)v170;
      v169 = 0x400000000LL;
      v151 = v7 + 48 + 8LL * *(unsigned __int16 *)(v7 + 22);
      if ( v7 + 48 == v151 )
        goto LABEL_188;
      do
      {
        v102 = *v99;
        v103 = sub_F68800(a1, *v99);
        v9 = v103 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v103 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
LABEL_185:
          v10 = nullptr;
          goto LABEL_186;
        }
        v104 = (unsigned int)v169;
        if ( v103 != v102 )
          v100 = 1;
        if ( (unsigned __int64)(unsigned int)v169 + 1 <= HIDWORD(v169) )
        {
          v101 = v168;
        }
        else
        {
          v160 = v103;
          sub_2237220(&v168, v170, (unsigned int)v169 + 1LL, 8);
          v104 = (unsigned int)v169;
          v101 = v168;
          v103 = v160;
        }
        v101[v104] = v103;
        ++v99;
        LODWORD(v169) = v169 + 1;
      }
      while ( (_QWORD *)v151 != v99 );
LABEL_188:
      sub_A5E110(&ptr, v7);
      v154 = 0;
      if ( v176 == 2 )
      {
        v126 = (_QWORD *)v177;
        v171[0] = &v172;
        v171[1] = (void *)0x400000000LL;
        v166 = (_QWORD *)(v177 + 8 * v178);
        if ( (_QWORD *)v177 != v166 )
        {
          do
          {
            v162 = *v126;
            v132 = sub_F68800(a1, *v126);
            v9 = v132 & 0xFFFFFFFFFFFFFFF0LL;
            if ( (v132 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            {
              if ( v171[0] != &v172 )
              {
                v155 = v132 & 0xFFFFFFFFFFFFFFF0LL;
                free(v171[0]);
                v9 = v155;
              }
              goto LABEL_185;
            }
            v127 = v154;
            if ( v132 != v162 )
              v127 = 1;
            ++v126;
            v154 = v127;
            sub_A6A4A0((__int64)v171, v132);
          }
          while ( v166 != v126 );
          if ( v127 )
          {
            v143 = (_QWORD *)a1->m128i_i64[0];
            v167[0] = v171[0];
            v167[1] = LODWORD(v171[1]);
            v177 = sub_F60DF0((__int64)v167, v143, v128, v129, v130, v131);
            v178 = v144;
          }
          if ( v171[0] != &v172 )
            free(v171[0]);
        }
      }
      if ( v165 != *(_QWORD *)(v7 + 24) || v154 || v100 )
      {
        v9 = sub_A73610(a1->m128i_i64[0], v165, v168, (unsigned int)v169, (const __m128i *)&ptr, 0);
        v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v9 = v7 & 0xFFFFFFFFFFFFFFF0LL;
        v10 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      }
LABEL_186:
      v125 = v168;
      if ( v168 == (__int64 *)v170 )
        goto LABEL_6;
      goto LABEL_176;
    case 0x1E:
      v62 = sub_F68800(a1, *(_QWORD *)(v7 + 24));
      v9 = v62 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v62 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v10 = (__int64 *)(v62 & 0xFFFFFFFFFFFFFFF0LL);
      v9 = v62;
      if ( v62 == *(_QWORD *)(v7 + 24) )
        goto LABEL_5;
      goto LABEL_7;
    case 0x1F:
      v61 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v61 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v61 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v61 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A76DD0(a1->m128i_i64[0], v61, *(_DWORD *)(v7 + 40), *(_DWORD *)(v7 + 44));
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x21:
      v49 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v50 = v49;
      v9 = v49 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v49 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v49 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v51 = (_QWORD *)a1->m128i_i64[0];
      v52 = sub_F61C10(v7);
      v9 = sub_ABBA20(v51, v50, *(_QWORD *)(v7 + 40), (__int64)v52, v53, v54);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x22:
      v48 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v48 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v48 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v48 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A74EC0(a1->m128i_i64[0], v48);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x23:
      if ( ((*(_QWORD *)(v7 + 16) >> 16) & 0x3F8) == 0 )
        goto LABEL_156;
      v36 = (__int64 *)(v7 + 48);
      ptr.m128_u64[0] = (unsigned __int64)v175;
      ptr.m128_u64[1] = 0x400000000LL;
      v146 = v7 + 48 + (*(_WORD *)(v7 + 18) & 0x3F8);
      if ( v7 + 48 == v146 )
        goto LABEL_156;
      v159 = 0;
      break;
    case 0x25:
      v63 = *(_QWORD *)(v7 + 40);
      if ( a1[1].m128i_i64[0] )
      {
        v64 = *(_QWORD *)(a1->m128i_i64[1] + 8LL * (*(_WORD *)(v63 + 88) & 0x3FFF));
        v65 = *(_BYTE *)(v7 + 32) & 0x3F;
        v9 = v64;
        if ( v65 )
        {
          v66 = 8LL * v65;
          v67 = (char *)(v7 + 48);
          v68 = v7 + v66 + 48;
          ptr.m128_u64[0] = (unsigned __int64)v175;
          ptr.m128_u64[1] = 0x800000000LL;
          v69 = v66 >> 3;
          if ( (unsigned __int64)v66 > 0x40 )
          {
            v156 = 8 * v65;
            sub_2237220(&ptr, v175, (8LL * v65) >> 3, 8);
            v71 = ptr.m128_i32[2];
            LODWORD(v66) = v156;
            v72 = (char *)ptr.m128_u64[0];
            v70 = (char *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]);
          }
          else
          {
            v70 = v175;
            v71 = 0;
            v72 = v175;
          }
          if ( (char *)v68 != v67 )
          {
            *(_QWORD *)v70 = *(_QWORD *)v67;
            *(_QWORD *)&v70[(unsigned int)v66 - 8] = *(_QWORD *)&v67[(unsigned int)v66 - 8];
            qmemcpy(
              (void *)((unsigned __int64)(v70 + 8) & 0xFFFFFFFFFFFFFFF8LL),
              (const void *)(v67 - &v70[-((unsigned __int64)(v70 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
              8LL * (((unsigned int)v66 + (_DWORD)v70 - (((_DWORD)v70 + 8) & 0xFFFFFFF8)) >> 3));
            v72 = (char *)ptr.m128_u64[0];
            v71 = ptr.m128_i32[2];
          }
          v73 = a1->m128i_i64[0];
          ptr.m128_i32[2] = v69 + v71;
          v74 = sub_A787C0(v73, v64, v72, (unsigned int)(v69 + v71), v171, 1);
          v9 = v74;
          if ( (char *)ptr.m128_u64[0] != v175 )
          {
            v148 = v74;
            free((void *)ptr.m128_u64[0]);
            v9 = v148;
          }
        }
      }
      else
      {
        v112 = a1[1].m128i_u32[2];
        v113 = *(_QWORD *)(v63 + 80);
        v114 = (__int64 *)(v113 & 0xFFFFFFFFFFFFFFF8LL);
        v115 = (v113 >> 2) & 1;
        v116 = (1LL << v112) & 0x15;
        if ( ((1LL << v112) & 0x15) != 0 )
        {
          if ( v115 )
            v9 = v114[1];
          else
            v9 = *v114;
        }
        else
        {
          if ( v115 )
            v117 = v114[1];
          else
            v117 = *v114;
          v118 = (__int64 *)(v117 & 0xFFFFFFFFFFFFFFF0LL);
          v119 = *v118;
          if ( *(_BYTE *)(*v118 + 16) != 34 )
            v119 = sub_F62E70(*v118);
          v120 = sub_A5E7C0(v119, v116, v115, v112, a5);
          if ( (unsigned __int8)sub_F66020(v120)
            || (v134 = sub_A5E7C0(v119, v116, v121, v122, v123),
                v137 = *(unsigned __int8 *)(v134 + 19),
                LOBYTE(v137) = (unsigned __int8)v137 >> 2,
                !(_BYTE)v137)
            && (v138 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v134 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL),
                *(_BYTE *)(v138 + 16) == 13)
            && ((*(_WORD *)(v138 + 18) >> 3) & 0x1FFu) - 489 <= 1 )
          {
            v124 = (__int64 *)(*(_QWORD *)(v63 + 80) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v63 + 80) & 4) != 0 )
              v9 = v124[1];
            else
              v9 = *v124;
          }
          else
          {
            v139 = sub_A5E7C0(v119, v116, v137, v135, v136);
            v140 = (*(_WORD *)(v139 + 18) >> 3) & 0x7F;
            v141 = sub_A750A0(
                     a1->m128i_i64[0],
                     *(_QWORD *)(v139 + 24),
                     (_QWORD *)(v139 + 48),
                     v140,
                     (_BYTE *)(v139 + 8 * v140 + 48),
                     *(_BYTE *)(v139 + 19) >> 2,
                     1u);
            v9 = sub_A74EC0(a1->m128i_i64[0], v141);
          }
        }
      }
      goto LABEL_23;
    case 0x28:
      v75 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v75 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v75 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v75 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A760B0(a1->m128i_i64[0], v75);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x2A:
      v105 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v105 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v105 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v105 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A70010(a1->m128i_i64[0], v105);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x2B:
      v98 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v98 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v98 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v98 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A73030(a1->m128i_i64[0], v98, (*(_WORD *)(v7 + 18) & 8) != 0);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x2C:
      v90 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v90 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v90 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v90 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A72DD0(a1->m128i_i64[0], v90);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x2E:
      if ( (*(_BYTE *)(v7 + 18) & 8) != 0 )
        v95 = *(_QWORD *)(v7 + 48);
      else
        v95 = *(_QWORD *)(v7 + 8);
      v96 = sub_F68800(a1, v95);
      v9 = v96 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v96 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( (*(_BYTE *)(v7 + 18) & 8) != 0 )
        v97 = *(_QWORD *)(v7 + 48);
      else
        v97 = *(_QWORD *)(v7 + 8);
      if ( v96 == v97 )
        goto LABEL_5;
      v9 = sub_A77C90(
             a1->m128i_i64[0],
             v96,
             *(_QWORD *)(v7 + 32),
             *(_WORD *)(v7 + 20) & 0x7FFF,
             *(_WORD *)(v7 + 22) & 0x7FFF,
             *(_BYTE *)(v7 + 21) >> 7);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x31:
      if ( (*(_BYTE *)(v7 + 17) & 4) != 0 && !sub_F56690(v7) )
        goto LABEL_5;
      v85 = sub_F56980(v7);
      v86 = sub_F68800(a1, v85);
      v59 = v86;
      v9 = v86 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v86 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v147 = v86 & 0xFFFFFFFFFFFFFFF0LL;
      v60 = sub_F56980(v7);
      goto LABEL_78;
    case 0x33:
      if ( (**(_DWORD **)(v7 + 24) & 0x10000) != 0 )
        goto LABEL_5;
      v76 = sub_F64EA0(v7, v8, a3, a4, a5);
      v77 = sub_F68800(a1, v76);
      v59 = v77;
      v9 = v77 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v77 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v147 = v77 & 0xFFFFFFFFFFFFFFF0LL;
      v60 = sub_F64EA0(v7, v76, v78, v9, v79);
LABEL_78:
      v10 = (__int64 *)v147;
      v9 = v59;
      if ( v60 == v59 )
        goto LABEL_5;
      goto LABEL_7;
    case 0x34:
      v55 = sub_F64D80(v7, v8, a3, a4, a5);
      v56 = sub_F68800(a1, v55);
      v59 = v56;
      v9 = v56 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v56 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v147 = v56 & 0xFFFFFFFFFFFFFFF0LL;
      v60 = sub_F64D80(v7, v55, v57, v9, v58);
      goto LABEL_78;
    case 0x35:
      v91 = sub_F5DAC0(v7);
      v92 = sub_F68800(a1, v91);
      v93 = v92;
      v9 = v92 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v92 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v150 = v92 & 0xFFFFFFFFFFFFFFF0LL;
      v94 = sub_F5DAC0(v7);
      v10 = (__int64 *)v150;
      v9 = v93;
      if ( v94 == v93 )
        goto LABEL_5;
      goto LABEL_7;
    case 0x36:
      if ( (*(_BYTE *)(v7 + 17) & 4) != 0 )
        goto LABEL_5;
LABEL_14:
      v15 = sub_F68800(a1, *(_QWORD *)(v7 + 40));
      v9 = v15 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v10 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
      v9 = v15;
      if ( v15 == *(_QWORD *)(v7 + 40) )
        goto LABEL_5;
      goto LABEL_7;
    case 0x39:
      v87 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v87 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v87 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v87 == *(_QWORD *)(v7 + 32) )
        goto LABEL_5;
      v9 = sub_A70300(a1->m128i_i64[0], v87, *(_DWORD *)(v7 + 20), (*(_BYTE *)(v7 + 18) >> 3) & 0xF);
      v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_6;
    case 0x3A:
      v17 = sub_F68800(a1, *(_QWORD *)(v7 + 32));
      v9 = v17 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      if ( v17 == *(_QWORD *)(v7 + 32) )
      {
LABEL_5:
        v9 = v7 & 0xFFFFFFFFFFFFFFF0LL;
        v10 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v9 = sub_A76A60(a1->m128i_i64[0], v17, *(_DWORD *)(v7 + 20));
LABEL_23:
        v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      }
      goto LABEL_6;
  }
  do
  {
    v38 = *v36;
    v39 = a1[1].m128i_i64[0];
    v173 = 0;
    si128 = _mm_load_si128(a1);
    v172 = v39;
    *(__m128i *)v171 = si128;
    v41 = sub_F68800(v171, v38);
    v9 = v41 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v41 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_174;
    if ( v41 != v38 )
    {
      if ( !a1[1].m128i_i64[0] && a1[1].m128i_i32[2] != 4 )
      {
        v133 = sub_A750A0(
                 a1->m128i_i64[0],
                 *(_QWORD *)(v7 + 24),
                 nullptr,
                 0,
                 (_BYTE *)(v7 + (*(_WORD *)(v7 + 18) & 0x3F8) + 48),
                 *(_BYTE *)(v7 + 19) >> 2,
                 *(_BYTE *)(v7 + 20) & 1);
        goto LABEL_198;
      }
      v159 = 1;
    }
    v42 = ptr.m128_u32[2];
    v43 = ptr.m128_u32[2] + 1LL;
    if ( v43 > ptr.m128_u32[3] )
    {
      v163 = v41;
      sub_2237220(&ptr, v175, v43, 8);
      v42 = ptr.m128_u32[2];
      v41 = v163;
    }
    *(_QWORD *)(ptr.m128_u64[0] + 8 * v42) = v41;
    ++v36;
    v37 = ++ptr.m128_i32[2];
  }
  while ( (__int64 *)v146 != v36 );
  if ( v159 )
  {
    v133 = sub_A750A0(
             a1->m128i_i64[0],
             *(_QWORD *)(v7 + 24),
             ptr.m128_u64[0],
             v37,
             (_BYTE *)(v7 + (*(_WORD *)(v7 + 18) & 0x3F8) + 48),
             (*(_BYTE *)(v7 + 19) >> 2) & 0x3F,
             *(_BYTE *)(v7 + 20) & 1);
    goto LABEL_198;
  }
  if ( (char *)ptr.m128_u64[0] != v175 )
    free((void *)ptr.m128_u64[0]);
LABEL_156:
  v161 = sub_F68800(a1, *(_QWORD *)(v7 + 24));
  v9 = v161 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v161 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return v9;
  v106 = (_QWORD *)(v7 + 48);
  ptr.m128_u64[0] = (unsigned __int64)v175;
  ptr.m128_u64[1] = 0x400000000LL;
  v152 = v7 + 48 + (*(_WORD *)(v7 + 18) & 0x3F8);
  if ( v7 + 48 == v152 )
  {
    v108 = 0;
    v107 = 0;
LABEL_195:
    if ( v161 == *(_QWORD *)(v7 + 24) && !v107 )
    {
      v9 = v7 & 0xFFFFFFFFFFFFFFF0LL;
      v10 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_175;
    }
    v133 = sub_A750A0(
             a1->m128i_i64[0],
             v161,
             ptr.m128_u64[0],
             v108,
             (_BYTE *)(v7 + (*(_WORD *)(v7 + 18) & 0x3F8) + 48),
             (*(_BYTE *)(v7 + 19) >> 2) & 0x3F,
             *(_BYTE *)(v7 + 20) & 1);
LABEL_198:
    v9 = v133;
    v10 = (__int64 *)(v133 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_175;
  }
  v107 = 0;
  while ( 1 )
  {
    v109 = *v106;
    v110 = sub_F68800(a1, *v106);
    v9 = v110 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v110 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      break;
    v111 = ptr.m128_u32[2];
    if ( v110 != v109 )
      v107 = 1;
    if ( (unsigned __int64)ptr.m128_u32[2] + 1 > ptr.m128_u32[3] )
    {
      v164 = v110;
      sub_2237220(&ptr, v175, ptr.m128_u32[2] + 1LL, 8);
      v111 = ptr.m128_u32[2];
      v110 = v164;
    }
    *(_QWORD *)(ptr.m128_u64[0] + 8 * v111) = v110;
    ++v106;
    v108 = ++ptr.m128_i32[2];
    if ( (_QWORD *)v152 == v106 )
      goto LABEL_195;
  }
LABEL_174:
  v10 = nullptr;
LABEL_175:
  v125 = (__int64 *)ptr.m128_u64[0];
  if ( (char *)ptr.m128_u64[0] != v175 )
  {
LABEL_176:
    v153 = v9;
    free(v125);
    v9 = v153;
  }
LABEL_6:
  if ( !v10 )
    return v9;
LABEL_7:
  v11 = v9 & 7;
  if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return (unsigned int)v11 | (unsigned int)v5 | v9 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = v5 | v11;
  v13 = (__int64)v10;
  if ( (v9 & 8) != 0 )
  {
    v13 = *v10;
    v12 |= v10[3];
  }
  return sub_A70C40(a1->m128i_i64[0], v13, v12);
}
