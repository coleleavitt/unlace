void __fastcall sub_1A63BF0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v8; // rax
  signed __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  void (*v14)(); // rdx
  void (*v15)(); // rax
  __int64 v16; // r15
  char v17; // al
  __int64 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  __int64 *v31; // rdx
  unsigned __int8 v32; // al
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdi
  __int64 v48; // r12
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  _QWORD *v53; // r15
  __int64 v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // r15
  _QWORD *v64; // rbx
  __int64 v65; // rax
  __int64 *v66; // r15
  _QWORD *v67; // rax
  __int64 v68; // rdx
  bool v69; // cf
  __int64 *v70; // rbx
  unsigned __int64 v71; // r15
  __int64 v72; // rdi
  unsigned int v73; // eax
  __int64 *v74; // r12
  __int64 v75; // rax
  __int64 *v76; // rax
  __int64 v77; // rbp
  __int64 v78; // r12
  __int64 (__fastcall *v79)(); // r13
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r13
  __int64 v84; // rdx
  int v85; // eax
  bool v86; // zf
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  __m128i si128; // xmm0
  __int64 v90; // rax
  unsigned __int64 v91; // rax
  __int64 *v92; // rbx
  __int64 *v93; // rbp
  unsigned int v94; // r12d
  __int64 v95; // r14
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  __int64 v101; // r12
  unsigned __int64 v102; // rax
  __int64 *v103; // r12
  __int64 *v104; // rbx
  unsigned int v105; // r13d
  __int64 v106; // r15
  __int64 v107; // rdx
  __int64 v108; // rsi
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned int v114; // ebx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // r14
  unsigned int v121; // ebx
  unsigned int v122; // r12d
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rax
  __int64 v128; // r8
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rbx
  __int64 *v133; // r12
  __int64 v134; // rdx
  __int64 v135; // r15
  __int64 v136; // rax
  __int64 v137; // rsi
  __int64 v138; // rdx
  unsigned __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rsi
  __int64 *v143; // rax
  __int64 v144; // rbp
  __int64 v145; // rbx
  __int64 (__fastcall *v146)(); // r13
  __int64 v147; // rax
  __int64 v148; // rdx
  unsigned __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rdx
  __int64 v153; // r13
  unsigned int v154; // esi
  __int64 v155; // rdi
  unsigned int v156; // eax
  unsigned __int64 *v157; // rbx
  unsigned __int64 v158; // rcx
  unsigned __int64 v159; // rax
  unsigned __int64 *v160; // rdx
  __int64 *v161; // rax
  __int32 v162; // r10d
  unsigned __int64 *v163; // r11
  int v164; // eax
  int v165; // eax
  unsigned __int64 v166; // rax
  __int64 *v167; // rax
  unsigned __int64 v168; // rax
  __m128i v169; // xmm0
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  unsigned __int64 v174; // rax
  __int64 v175; // rdx
  __int64 v176; // rbp
  unsigned __int64 v177; // rax
  unsigned __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // r15
  __int64 v182; // rax
  unsigned __int64 v183; // rax
  __int32 v184; // r10d
  __int64 *v185; // r11
  int v186; // eax
  __int64 v187; // r12
  __int64 *v188; // rbx
  unsigned int v189; // r13d
  __int64 *v190; // rbp
  __int64 v191; // r15
  __int64 v192; // rdx
  __int64 v193; // rsi
  __int64 v194; // rcx
  unsigned int v195; // ebx
  unsigned int v196; // ebx
  __int64 v197; // rdi
  __int64 v198; // rbp
  const void *v199; // rax
  size_t v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rdx
  unsigned __int64 v205; // rax
  unsigned __int8 v209; // [rsp+28h] [rbp-D0h]
  __m128 v210; // [rsp+30h] [rbp-C8h] BYREF
  __m128 v211; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v212; // [rsp+50h] [rbp-A8h]
  int v213; // [rsp+5Ch] [rbp-9Ch]
  __m128 *v214; // [rsp+60h] [rbp-98h]
  __m128i *v215; // [rsp+68h] [rbp-90h]
  __int64 v216; // [rsp+78h] [rbp-80h] BYREF
  __m128 v217; // [rsp+80h] [rbp-78h] BYREF
  __m128 ptr; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v219[88]; // [rsp+A0h] [rbp-58h] BYREF

  v210.m128_i8[0] = a4;
  v209 = a5;
  if ( !a2 )
    return;
  v213 = a5;
  LODWORD(v212) = a4;
  v8 = sub_B91570(a2, a2, a3, a4, a5, a6);
  v9 = a1 + 24;
  sub_1A3A280(&ptr, a1 + 24, v8);
  if ( !v219[0] )
    return;
  v13 = *(_QWORD *)(a1 + 112);
  v14 = nullsub_1201;
  v15 = *(void (**)())(*(_QWORD *)v13 + 32LL);
  if ( v15 != nullsub_1201 )
  {
    v9 = a2;
    ((void (__fastcall *)(__int64, unsigned __int64))v15)(v13, a2);
  }
  v211.m128_i8[0] = *(_BYTE *)(a2 + 8);
  if ( (v211.m128_i8[0] & 0x7F) != 0 )
  {
    if ( (v211.m128_i8[0] & 0x7Fu) - 59 <= 2 )
    {
      v9 = a2 - 64;
      if ( a2 != 64 )
        sub_1A3DDB0(*(_QWORD *)(a3 + 112), (__m128i *)v9, (__int64)v14, v10, v11, v12, a7, a8);
    }
    v17 = *(_BYTE *)(a1 + 121);
LABEL_7:
    ptr.m128_u64[1] = 0x400000000LL;
    ptr.m128_u64[0] = (unsigned __int64)v219;
    if ( v17
      || (v211.m128_i8[0] = *(_BYTE *)(a2 + 8), (v211.m128_i8[0] & 0x7F) != 0) && (v211.m128_i8[0] & 0x7F) != 0x18 )
    {
      v57 = sub_B91570(a2, v9, (__int64)v219, (__int64)&ptr, v11, v12);
      if ( (*(_BYTE *)(v57 + 9) & 1) != 0 )
      {
        v130 = sub_B8C1B0(a2);
        v131 = sub_B8C330(v130);
        v9 = v57;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v131 + 18360) + 96LL))(*(_QWORD *)(v131 + 18360), v57);
      }
      v60 = sub_B941C0(v57, v9, v55, v56, v58, v59);
      v27 = v60;
      if ( !v60 )
        goto LABEL_72;
      sub_ACC810(v60);
      v28 = sub_ACC810(v27);
      v29 = sub_ACC810(v27);
      if ( *(_DWORD *)v27 >> 1 )
      {
        if ( (*(_BYTE *)v27 & 1) != 0 )
        {
          v9 = v27 + 8;
          v61 = 64;
        }
        else
        {
          v9 = *(_QWORD *)(v27 + 8);
          v61 = 16LL * *(unsigned int *)(v27 + 16);
        }
        v31 = (__int64 *)(v9 + v61);
        goto LABEL_51;
      }
    }
    else
    {
      v18 = (__int64 *)sub_B91570(a2, v9, (__int64)v219, (__int64)&ptr, v11, v12);
      sub_B947A0((__int64)v18, v9, v19, v20, v21, v22);
      v27 = *v18;
      if ( !v27 )
        goto LABEL_72;
      sub_ACC810(v27);
      v28 = sub_ACC810(v27);
      v29 = sub_ACC810(v27);
      if ( *(_DWORD *)v27 >> 1 )
      {
        if ( (*(_BYTE *)v27 & 1) != 0 )
        {
          v9 = v27 + 8;
          v30 = 64;
        }
        else
        {
          v9 = *(_QWORD *)(v27 + 8);
          v30 = 16LL * *(unsigned int *)(v27 + 16);
        }
        v31 = (__int64 *)(v9 + v30);
LABEL_51:
        sub_ACC7B0(&v217, (__int64 *)v9, v31, v27, 0);
        v63 = v217.m128_u64[1];
        v62 = v217.m128_u64[0];
LABEL_52:
        v64 = (_QWORD *)v63;
LABEL_53:
        if ( v62 != v28 )
        {
          do
          {
            v23 = *(_QWORD *)(v62 + 8) & 0xFFFFFFFFFFFFFFFCLL;
            if ( !v23 )
              goto LABEL_61;
            v65 = ptr.m128_u32[2];
            while ( 1 )
            {
              v66 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (v23 & 4) == 0 )
                break;
              if ( !v66 )
              {
                v24 = ptr.m128_u32[3];
                if ( ptr.m128_u32[3] < (unsigned __int64)(v65 + 1) )
                {
                  v9 = (signed __int64)v219;
                  sub_2237220(&ptr, v219, v65 + 1, 8);
                  v23 = ptr.m128_u32[2];
                  *(_QWORD *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]) = 0;
                }
                else
                {
                  v23 = ptr.m128_u64[0];
                  *(_QWORD *)(ptr.m128_u64[0] + 8 * v65) = 0;
                }
                ++ptr.m128_i32[2];
                goto LABEL_61;
              }
              v24 = ptr.m128_u32[3];
              v25 = *v66;
              if ( ptr.m128_u32[3] < (unsigned __int64)(v65 + 1) )
              {
                v9 = (signed __int64)v219;
                v211.m128_u64[0] = *v66;
                sub_2237220(&ptr, v219, v65 + 1, 8);
                v25 = v211.m128_u64[0];
                *(_QWORD *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]) = v211.m128_u64[0];
              }
              else
              {
                *(_QWORD *)(ptr.m128_u64[0] + 8 * v65) = v25;
              }
              v65 = (unsigned int)++ptr.m128_i32[2];
              v23 = v66[1];
              if ( !v23 )
                goto LABEL_61;
            }
            v24 = ptr.m128_u32[3];
            if ( ptr.m128_u32[3] < (unsigned __int64)(v65 + 1) )
            {
              v9 = (signed __int64)v219;
              sub_2237220(&ptr, v219, v65 + 1, 8);
              v23 = ptr.m128_u32[2];
              *(_QWORD *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]) = v66;
            }
            else
            {
              v23 = ptr.m128_u64[0];
              *(_QWORD *)(ptr.m128_u64[0] + 8 * v65) = v66;
            }
            ++ptr.m128_i32[2];
            while ( 1 )
            {
LABEL_61:
              v67 = (_QWORD *)(v62 + 16);
              if ( (_QWORD *)(v62 + 16) == v64 )
                goto LABEL_66;
              v68 = *(_QWORD *)(v62 + 16);
              v69 = v68 == -2;
              v23 = v68 + 2;
              if ( v69 || v23 == 1 )
              {
                while ( 1 )
                {
                  v67 += 2;
                  if ( v67 == v64 )
                    break;
                  if ( *v67 < 0xFFFFFFFFFFFFFFFELL )
                    goto LABEL_162;
                }
LABEL_66:
                v62 = (unsigned __int64)v64;
                goto LABEL_67;
              }
LABEL_162:
              v62 = (unsigned __int64)v67;
LABEL_67:
              if ( v29 == v62 )
                break;
              if ( !(_BYTE)qword_2CCC3F8 )
              {
                if ( __cxa_guard_acquire(&qword_2CCC3F8) )
                {
                  unk_2CCC400 = 2;
                  __cxa_guard_release(&qword_2CCC3F8);
                }
              }
              if ( *(_UNKNOWN **)v62 != &unk_2CCC407 )
                goto LABEL_53;
            }
          }
          while ( v28 != v29 );
        }
LABEL_72:
        v70 = (__int64 *)ptr.m128_u64[0];
        v71 = ptr.m128_u64[0] + 8LL * ptr.m128_u32[2];
        if ( ptr.m128_u64[0] != v71 )
        {
          v214 = &v217;
          v215 = (__m128i *)&v216;
          while ( 1 )
          {
            v9 = *v70;
            v76 = sub_1A47770(a3, *v70, v23, v24, v25, v26);
            v77 = (__int64)v76;
            if ( v76 )
              break;
LABEL_78:
            if ( (__int64 *)v71 == ++v70 )
              goto LABEL_15;
          }
          v78 = *(_QWORD *)(a1 + 112);
          v79 = *(__int64 (__fastcall **)())(*(_QWORD *)v78 + 24LL);
          v80 = sub_1A3B130((_QWORD *)a1, (__int64)v76);
          if ( v79 == sub_1A65440 )
          {
            if ( !v80 )
              sub_1A63B80(v78, v77, v81, v24, v82, v26);
          }
          else
          {
            ((void (__fastcall *)(__int64, __int64, __int64, unsigned __int64, _QWORD))v79)(v78, v77, v80, a2, v209);
          }
          v83 = *(_QWORD *)(a1 + 8);
          v84 = *(_QWORD *)(v77 + 40);
          v9 = *(unsigned int *)(v83 + 32);
          v25 = v83 + 16;
          v216 = v84;
          if ( !(_DWORD)v9 )
          {
            v217.m128_u64[0] = 0;
            goto LABEL_85;
          }
          v26 = (unsigned int)(v9 - 1);
          v72 = *(_QWORD *)(v83 + 16);
          v73 = v26 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
          v74 = (__int64 *)(v72 + 16LL * v73);
          v24 = *v74;
          if ( v84 != *v74 )
          {
            v184 = 1;
            v185 = nullptr;
            if ( v24 == -1 )
            {
LABEL_201:
              v186 = *(_DWORD *)(v83 + 24);
              v84 = (unsigned int)(3 * v9);
              v217.m128_u64[0] = (unsigned __int64)v74;
              v85 = v186 + 1;
              v24 = (unsigned int)(4 * v85);
              if ( (unsigned int)v24 < (unsigned int)v84 )
              {
                v84 = (unsigned int)(v9 - *(_DWORD *)(v83 + 28) - v85);
                v24 = (unsigned int)v9 >> 3;
                if ( (unsigned int)v84 > (unsigned int)v24 )
                  goto LABEL_87;
                goto LABEL_86;
              }
LABEL_85:
              LODWORD(v9) = 2 * v9;
LABEL_86:
              v211.m128_u64[0] = v83 + 16;
              sub_1A3FE50(v83 + 16, v9, v84, v24, v25, v26);
              v9 = (signed __int64)v215;
              sub_1A3A940((__int64 *)v211.m128_u64[0], v215->m128i_i64, v214);
              v74 = (__int64 *)v217.m128_u64[0];
              v85 = *(_DWORD *)(v83 + 24) + 1;
LABEL_87:
              v86 = *v74 == -1;
              *(_DWORD *)(v83 + 24) = v85;
              if ( !v86 )
                --*(_DWORD *)(v83 + 28);
              v87 = v216;
              v23 = (unsigned __int64)(v74 + 1);
              v74[1] = 0;
              *v74 = v87;
LABEL_90:
              *(_QWORD *)v23 = v77 & 0xFFFFFFFFFFFFFFFBLL;
              goto LABEL_78;
            }
            while ( 1 )
            {
              if ( v24 == -2 && !v185 )
                v185 = v74;
              v73 = v26 & (v184 + v73);
              v211.m128_i32[0] = v184 + 1;
              v74 = (__int64 *)(v72 + 16LL * v73);
              v24 = *v74;
              if ( v84 == *v74 )
                break;
              if ( v24 == -1 )
              {
                if ( v185 )
                  v74 = v185;
                goto LABEL_201;
              }
              v184 = v211.m128_i32[0];
            }
          }
          v75 = v74[1];
          v23 = (unsigned __int64)(v74 + 1);
          if ( (v75 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (v75 & 4) != 0 )
            {
              v9 = v77;
              sub_AEA1A0(v74[1] & 0xFFFFFFFFFFFFFFF8LL, v77);
            }
            else
            {
              v211.m128_u64[0] = v77;
              v211 = _mm_loadh_ps((const double *)v211.m128_u64);
              v88 = operator new(0x30u);
              si128 = _mm_load_si128((const __m128i *)&v211);
              v24 = 0x400000002LL;
              v23 = v88 + 16;
              *(_QWORD *)(v88 + 8) = 0x400000002LL;
              *(_QWORD *)v88 = v88 + 16;
              *(__m128i *)(v88 + 16) = si128;
              v74[1] = v88 | 4;
            }
            goto LABEL_78;
          }
          goto LABEL_90;
        }
LABEL_15:
        ptr.m128_i32[2] = 0;
        if ( (_BYTE)v212 )
        {
          sub_1A3A9F0(a1, (std::__detail::_List_node_base *)a1);
          v174 = sub_B946F0(a2, a1, v170, v171, v172, v173);
          v176 = v175;
          v217.m128_u64[0] = v174;
          if ( v175 != v174 )
          {
            do
            {
              v177 = sub_B8EEF0(&v217);
              v181 = v177;
              if ( (*(_BYTE *)(v177 + 8) & 6) == 0 || sub_1A42350(*(_QWORD *)(a3 + 112), v177, 0, v178, v179, v180) )
              {
                v182 = sub_B99AD0(v181);
                if ( v182 )
                  v182 += 48;
                sub_1A63BF0(a1, v182, a3, 1, v209);
              }
              if ( (v217.m128_i8[0] & 4) != 0 && (v217.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v183 = *(_QWORD *)((v217.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL) + 8);
                v217.m128_u64[0] = v183;
              }
              else
              {
                v217.m128_u64[0] = 0;
                v183 = 0;
              }
            }
            while ( v176 != v183 );
          }
          v9 = *(_QWORD *)(a1 + 8);
          sub_1A3AA40(a1, v9);
        }
        v32 = *(_BYTE *)(a2 + 8) & 0x7F;
        v33 = (unsigned int)v32 - 59;
        if ( (unsigned int)v33 <= 2 )
        {
          if ( a2 == 64 )
          {
            v54 = 16;
            if ( v32 == 20 )
              goto LABEL_105;
            if ( v32 == 19 )
              goto LABEL_95;
            goto LABEL_205;
          }
          v34 = *(_QWORD *)(a2 + 40);
          v35 = (__int64 *)(v34 + 96);
          if ( !*(_QWORD *)(a2 + 64) )
          {
            sub_7052B0(v35, v34, v33, v24, v25, v26);
            if ( !*(_QWORD *)(a2 + 64) )
              goto LABEL_37;
            v34 = *(_QWORD *)(a2 + 40);
            v35 = (__int64 *)(v34 + 96);
          }
          sub_7052B0(v35, v34, v33, v24, v25, v26);
          v40 = *(_QWORD *)(a2 + 64);
          if ( (*(_BYTE *)(v40 + 24) & 1) != 0 )
            v41 = sub_B96980(v40);
          else
            v41 = *(_QWORD *)(v40 + 24);
          sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 40) + 96LL), *(_QWORD *)(a2 + 40), v36, v37, v38, v39);
          v9 = *(_QWORD *)(a2 + 40);
          v42 = v41 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 64) + 16LL);
          sub_7052B0((__int64 *)(v9 + 96), v9, v43, v44, v45, v46);
          v47 = *(_QWORD *)(a2 + 64);
          if ( (*(_BYTE *)(v47 + 24) & 1) != 0 )
            v48 = sub_B96980(v47);
          else
            v48 = *(_QWORD *)(v47 + 24);
          for ( ; v48 != v42; v48 += 24 )
          {
            v49 = sub_1A386B0(*(__int64 **)(v48 + 16), v9, v33, v24, v25) & 0xFFFFFFFFFFFFFFF0LL;
            v50 = *(_QWORD *)v49;
            if ( (*(_BYTE *)(*(_QWORD *)v49 + 17LL) & 4) != 0 )
            {
              if ( *(_BYTE *)(a1 + 120) )
              {
                v51 = sub_F6A860(v50);
                if ( v51 )
                {
                  v9 = 0;
                  v217.m128_u64[0] = *(_QWORD *)(v51 + 32);
                  v52 = sub_F22BD0((__int64 *)&v217, 0);
                  if ( v52 )
                  {
                    v33 = *(_BYTE *)(v52 + 28) & 0x7F;
                    if ( (_BYTE)v33 == 72 )
                    {
                      v53 = *(_QWORD **)(v52 + 48);
LABEL_30:
                      sub_1A3A9F0(a1, (std::__detail::_List_node_base *)a1);
                      if ( v53 )
                        v53 += 8;
                      sub_1A63BF0(a1, v53, a3, v210.m128_u8[0], 1);
                      v9 = *(_QWORD *)(a1 + 8);
                      sub_1A3AA40(a1, v9);
                    }
                  }
                }
              }
            }
            else
            {
              v167 = (__int64 *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*v167 + 16) == 48 )
              {
                v53 = sub_F60F10(*v167, v9, v33, v24, v25, v26);
                goto LABEL_30;
              }
            }
          }
          v32 = *(_BYTE *)(a2 + 8) & 0x7F;
        }
        if ( v32 == 20 )
        {
          v54 = a2 - 48;
          if ( a2 == 48 )
            goto LABEL_37;
LABEL_105:
          v99 = *(_QWORD *)(a2 + 72);
          if ( !v99 )
          {
            v9 = *(_QWORD *)(a2 + 48);
            sub_A794E0((__int64 *)(v9 + 88), v9, 0, v24, v25, v26);
            v99 = *(_QWORD *)(a2 + 72);
          }
          v100 = v99 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v99 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (*(_BYTE *)(v100 + 72) & 1) != 0 )
            {
              sub_BA8900(v54);
              v99 = *(_QWORD *)(a2 + 72);
              v101 = *(_QWORD *)((v99 & 0xFFFFFFFFFFFFFFF8LL) + 56);
              if ( v101 )
                goto LABEL_110;
            }
            else
            {
              v101 = *(_QWORD *)(v100 + 56);
              if ( !v101 )
                goto LABEL_115;
LABEL_110:
              while ( *(char *)(v101 + 28) < 0 || (*(_BYTE *)(v101 + 8) & 6) != 0 )
              {
                v101 = *(_QWORD *)(v101 + 128);
                if ( !v101 )
                  goto LABEL_113;
              }
              v196 = (unsigned __int8)v212;
LABEL_219:
              sub_1A3A9F0(a1, (std::__detail::_List_node_base *)a1);
              sub_1A63BF0(a1, v101 + 48, a3, v196, 0);
              v9 = *(_QWORD *)(a1 + 8);
              sub_1A3AA40(a1, v9);
              while ( 1 )
              {
                v101 = *(_QWORD *)(v101 + 128);
                if ( !v101 )
                  break;
                if ( *(char *)(v101 + 28) >= 0 && (*(_BYTE *)(v101 + 8) & 6) == 0 )
                  goto LABEL_219;
              }
              v99 = *(_QWORD *)(a2 + 72);
            }
          }
LABEL_113:
          if ( !v99 )
          {
            v9 = *(_QWORD *)(a2 + 48);
            sub_A794E0((__int64 *)(v9 + 88), v9, 0, v24, v25, v26);
            v99 = *(_QWORD *)(a2 + 72);
          }
LABEL_115:
          v102 = v99 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v99 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (*(_BYTE *)(v102 + 72) & 1) == 0 )
            {
              v24 = *(unsigned int *)(v102 + 48);
              if ( (_DWORD)v24 )
              {
LABEL_118:
                v9 = *(_QWORD *)(v102 + 40);
                v103 = (__int64 *)(v9 + 8 * v24);
                goto LABEL_119;
              }
LABEL_245:
              if ( (*(_BYTE *)(v102 + 72) & 1) != 0 )
              {
                sub_BA8900(v54);
                v99 = *(_QWORD *)(a2 + 72);
                v102 = v99 & 0xFFFFFFFFFFFFFFF8LL;
              }
              v9 = *(unsigned int *)(v102 + 24);
              v24 = *(_QWORD *)(v102 + 16);
              v103 = (__int64 *)(v24 + 8 * v9);
LABEL_119:
              if ( v99 )
                goto LABEL_120;
              goto LABEL_254;
            }
            sub_BA8900(v54);
            v99 = *(_QWORD *)(a2 + 72);
            v102 = v99 & 0xFFFFFFFFFFFFFFF8LL;
            v24 = *(unsigned int *)((v99 & 0xFFFFFFFFFFFFFFF8LL) + 48);
            if ( (_DWORD)v24 )
              goto LABEL_118;
            if ( v99 )
            {
              if ( v102 )
                goto LABEL_245;
LABEL_128:
              if ( sub_BAB630(v54, v9, v99, v24, v25, v26) )
              {
                sub_1A3A9F0(a1, (std::__detail::_List_node_base *)a1);
                v114 = (unsigned __int8)v212;
                v119 = sub_BAB630(v54, a1, v115, v116, v117, v118);
                if ( v119 )
                  v119 += 48;
                sub_1A63BF0(a1, v119, a3, v114, 1);
                v9 = *(_QWORD *)(a1 + 8);
                sub_1A3AA40(a1, v9);
              }
              if ( !sub_BAC6C0(v54, v9, v110, v111, v112, v113) )
                goto LABEL_37;
              v120 = a1;
              sub_1A3A9F0(a1, (std::__detail::_List_node_base *)a1);
              v121 = (unsigned __int8)v213;
              v122 = (unsigned __int8)v212;
              v127 = sub_BAC6C0(v54, a1, v123, v124, v125, v126);
              v128 = v121;
              v129 = v122;
              if ( v127 )
                v127 += 48;
              goto LABEL_135;
            }
            v9 = *(_QWORD *)(a2 + 48);
            sub_A794E0((__int64 *)(v9 + 88), v9, 0, v24, v25, v26);
            v99 = *(_QWORD *)(a2 + 72);
            v102 = v99 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v99 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              goto LABEL_245;
          }
          if ( !v99 )
          {
            v103 = nullptr;
LABEL_254:
            v9 = *(_QWORD *)(a2 + 48);
            sub_A794E0((__int64 *)(v9 + 88), v9, v99, v24, v25, v26);
            v102 = *(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_120:
            if ( !v102 )
            {
              v104 = nullptr;
LABEL_124:
              v105 = (unsigned __int8)v212;
              while ( v103 != v104 )
              {
                v106 = *v104;
                sub_1A3A9F0(a1, (std::__detail::_List_node_base *)a1);
                if ( v106 )
                {
                  v107 = a3;
                  v108 = v106 + 48;
                  v109 = v105;
                }
                else
                {
                  v109 = v105;
                  v107 = a3;
                  v108 = 0;
                }
                ++v104;
                sub_1A63BF0(a1, v108, v107, v109, 0);
                v9 = *(_QWORD *)(a1 + 8);
                sub_1A3AA40(a1, v9);
              }
              goto LABEL_128;
            }
            if ( (*(_BYTE *)(v102 + 72) & 1) != 0 )
            {
              sub_BA8900(v54);
              v99 = *(_QWORD *)(a2 + 72);
              v102 = v99 & 0xFFFFFFFFFFFFFFF8LL;
              v24 = *(unsigned int *)((v99 & 0xFFFFFFFFFFFFFFF8LL) + 48);
              if ( (_DWORD)v24 )
                goto LABEL_123;
              if ( !v99 )
              {
                v9 = *(_QWORD *)(a2 + 48);
                sub_A794E0((__int64 *)(v9 + 88), v9, 0, v24, v25, v26);
                v102 = *(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL;
              }
              v104 = nullptr;
              if ( !v102 )
                goto LABEL_124;
            }
            else
            {
              v99 = *(unsigned int *)(v102 + 48);
              if ( (_DWORD)v99 )
              {
LABEL_123:
                v104 = *(__int64 **)(v102 + 40);
                goto LABEL_124;
              }
            }
            if ( (*(_BYTE *)(v102 + 72) & 1) != 0 )
            {
              sub_BA8900(v54);
              v102 = *(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL;
            }
            v104 = *(__int64 **)(v102 + 16);
            goto LABEL_124;
          }
          goto LABEL_128;
        }
        if ( v32 == 19 )
        {
          if ( a2 == 48 )
            goto LABEL_37;
LABEL_95:
          v90 = *(_QWORD *)(a2 + 56);
          if ( v90 )
          {
            v91 = v90 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v91 )
              goto LABEL_37;
            goto LABEL_97;
          }
          sub_A79820((__int64 *)(*(_QWORD *)(a2 + 48) + 88LL), *(_QWORD *)(a2 + 48), v33, v24, v25, v26);
          v204 = *(_QWORD *)(a2 + 56);
          v91 = v204 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v204 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
LABEL_97:
            v92 = *(__int64 **)(v91 + 8);
            v93 = &v92[*(unsigned int *)(v91 + 16)];
            goto LABEL_98;
          }
          if ( !v204 )
          {
            sub_A79820((__int64 *)(*(_QWORD *)(a2 + 48) + 88LL), *(_QWORD *)(a2 + 48), 0, v201, v202, v203);
            v205 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v205 )
            {
              v92 = *(__int64 **)(v205 + 8);
              v93 = nullptr;
LABEL_98:
              if ( v93 != v92 )
              {
                v94 = (unsigned __int8)v212;
                do
                {
                  v95 = *v92;
                  sub_1A3A9F0(a1, (std::__detail::_List_node_base *)a1);
                  if ( v95 )
                  {
                    v96 = a3;
                    v97 = v95 + 48;
                    v98 = v94;
                  }
                  else
                  {
                    v98 = v94;
                    v96 = a3;
                    v97 = 0;
                  }
                  ++v92;
                  sub_1A63BF0(a1, v97, v96, v98, 0);
                  sub_1A3AA40(a1, *(_QWORD *)(a1 + 8));
                }
                while ( v93 != v92 );
              }
            }
          }
LABEL_37:
          if ( (_BYTE *)ptr.m128_u64[0] != v219 )
            free((void *)ptr.m128_u64[0]);
          return;
        }
LABEL_205:
        if ( v32 != 23 )
          goto LABEL_37;
        v187 = a2 - 48;
        if ( a2 == 48 )
          goto LABEL_37;
        v188 = *(__int64 **)(a2 + 56);
        v189 = (unsigned __int8)v212;
        v190 = &v188[*(unsigned int *)(a2 + 64)];
        while ( v190 != v188 )
        {
          v191 = *v188;
          sub_1A3A9F0(a1, (std::__detail::_List_node_base *)a1);
          if ( v191 )
          {
            v192 = a3;
            v193 = v191 + 48;
            v194 = v189;
          }
          else
          {
            v194 = v189;
            v192 = a3;
            v193 = 0;
          }
          ++v188;
          sub_1A63BF0(a1, v193, v192, v194, 0);
          sub_1A3AA40(a1, *(_QWORD *)(a1 + 8));
        }
        if ( !sub_BA8FC0(v187) )
          goto LABEL_37;
        v120 = a1;
        sub_1A3A9F0(a1, (std::__detail::_List_node_base *)a1);
        v195 = (unsigned __int8)v212;
        v127 = sub_BA8FC0(v187);
        v128 = 1;
        v129 = v195;
        if ( v127 )
          v127 += 48;
LABEL_135:
        sub_1A63BF0(v120, v127, a3, v129, v128);
        sub_1A3AA40(v120, *(_QWORD *)(v120 + 8));
        goto LABEL_37;
      }
    }
    v62 = sub_ACC810(v27);
    v63 = v23;
    goto LABEL_52;
  }
  v16 = *(_QWORD *)(a3 + 112);
  v17 = *(_BYTE *)(a1 + 121);
  if ( (*(_BYTE *)(*(_QWORD *)(v16 + 232) + 1LL) & 8) != 0 )
    goto LABEL_7;
  v132 = *(_QWORD *)(*(_QWORD *)(v16 + 248) + 17504LL);
  if ( v17 )
  {
    v197 = *(_QWORD *)(v132 + 120);
    if ( v197 )
    {
      v198 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v197 + 24LL))(v197);
      while ( 1 )
      {
        v199 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v198 + 16LL))(v198);
        if ( !v200 )
          break;
        sub_6F3470(v132, v199, v200);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v198 + 8LL))(v198);
    }
  }
  sub_FBDEE0((__int64 **)&ptr, *(__int64 **)v132, *(_DWORD *)(v132 + 8) == 0);
  v133 = (__int64 *)ptr.m128_u64[0];
  sub_FBDEE0((__int64 **)&ptr, (__int64 *)(*(_QWORD *)v132 + 8LL * *(unsigned int *)(v132 + 8)), 1);
  v212 = ptr.m128_u64[0];
  if ( v133 != (__int64 *)ptr.m128_u64[0] )
  {
    v134 = *v133;
    v135 = v16 + 2608;
    v211.m128_u64[0] = (unsigned __int64)&v217;
    while ( 1 )
    {
      v136 = sub_15C1650(v135, *(_QWORD *)(v134 + 8));
      v216 = v136;
      if ( v136 )
        break;
LABEL_155:
      v134 = v133[1];
      if ( v134 != -8 && v134 )
      {
        ++v133;
      }
      else
      {
        v161 = v133 + 2;
        do
        {
          do
          {
            v134 = *v161;
            v133 = v161++;
          }
          while ( !v134 );
        }
        while ( v134 == -8 );
      }
      if ( (__int64 *)v212 == v133 )
        return;
    }
    while ( 1 )
    {
      v137 = v136;
      if ( (v136 & 1) != 0 )
        v137 = *(_QWORD *)(v136 & 0xFFFFFFFFFFFFFFFELL);
      if ( !sub_15C11F0(v135, v137, a2, nullptr, 0) )
        goto LABEL_154;
      v142 = v216;
      if ( (v216 & 1) != 0 )
        v142 = *(_QWORD *)(v216 & 0xFFFFFFFFFFFFFFFELL);
      v143 = sub_1A47770(a3, v142, v138, v139, v140, v141);
      v144 = (__int64)v143;
      if ( !v143 )
        goto LABEL_154;
      v145 = *(_QWORD *)(a1 + 112);
      v146 = *(__int64 (__fastcall **)())(*(_QWORD *)v145 + 24LL);
      v147 = sub_1A3B130((_QWORD *)a1, (__int64)v143);
      if ( v146 == sub_1A65440 )
      {
        if ( !v147 )
          sub_1A63B80(v145, v144, v148, v149, v150, v151);
      }
      else
      {
        ((void (__fastcall *)(__int64, __int64, __int64, unsigned __int64, _QWORD))v146)(v145, v144, v147, a2, v209);
      }
      v152 = *(_QWORD *)(v144 + 40);
      v153 = *(_QWORD *)(a1 + 8);
      v217.m128_u64[0] = v152;
      v154 = *(_DWORD *)(v153 + 32);
      if ( !v154 )
        break;
      v151 = v154 - 1;
      v155 = *(_QWORD *)(v153 + 16);
      v156 = v151 & (((unsigned int)v152 >> 9) ^ ((unsigned int)v152 >> 4));
      v157 = (unsigned __int64 *)(v155 + 16LL * v156);
      v158 = *v157;
      if ( v152 != *v157 )
      {
        v162 = 1;
        v163 = nullptr;
        if ( v158 == -1 )
        {
LABEL_175:
          v164 = *(_DWORD *)(v153 + 24);
          v152 = 3 * v154;
          ptr.m128_u64[0] = (unsigned __int64)v157;
          v165 = v164 + 1;
          v149 = (unsigned int)(4 * v165);
          if ( (unsigned int)v149 < (unsigned int)v152 )
          {
            v152 = v154 - *(_DWORD *)(v153 + 28) - v165;
            v149 = v154 >> 3;
            if ( (unsigned int)v152 > (unsigned int)v149 )
            {
LABEL_177:
              v86 = *v157 == -1;
              *(_DWORD *)(v153 + 24) = v165;
              if ( !v86 )
                --*(_DWORD *)(v153 + 28);
              v166 = v217.m128_u64[0];
              v157[1] = 0;
              v160 = v157 + 1;
              *v157 = v166;
              goto LABEL_180;
            }
LABEL_217:
            v210.m128_u64[0] = v153 + 16;
            sub_1A3FE50(v153 + 16, v154, v152, v149, v153 + 16, v151);
            sub_1A3A940((__int64 *)v210.m128_u64[0], (__int64 *)v211.m128_u64[0], &ptr);
            v157 = (unsigned __int64 *)ptr.m128_u64[0];
            v165 = *(_DWORD *)(v153 + 24) + 1;
            goto LABEL_177;
          }
LABEL_216:
          v154 *= 2;
          goto LABEL_217;
        }
        while ( 1 )
        {
          if ( v158 == -2 && !v163 )
            v163 = v157;
          v156 = v151 & (v162 + v156);
          v210.m128_i32[0] = v162 + 1;
          v157 = (unsigned __int64 *)(v155 + 16LL * v156);
          v158 = *v157;
          if ( v152 == *v157 )
            break;
          if ( v158 == -1 )
          {
            if ( v163 )
              v157 = v163;
            goto LABEL_175;
          }
          v162 = v210.m128_i32[0];
        }
      }
      v159 = v157[1];
      v160 = v157 + 1;
      if ( (v159 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( (v159 & 4) != 0 )
        {
          sub_AEA1A0(v157[1] & 0xFFFFFFFFFFFFFFF8LL, v144);
        }
        else
        {
          v210.m128_u64[0] = v144;
          v210 = _mm_loadh_ps((const double *)v210.m128_u64);
          v168 = operator new(0x30u);
          v169 = _mm_load_si128((const __m128i *)&v210);
          *(_QWORD *)(v168 + 8) = 0x400000002LL;
          *(_QWORD *)v168 = v168 + 16;
          *(__m128i *)(v168 + 16) = v169;
          v157[1] = v168 | 4;
        }
        goto LABEL_154;
      }
LABEL_180:
      *v160 = v144 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_154:
      if ( (v216 & 1) != 0 )
      {
        sub_15C20B0(&v216);
        v136 = v216;
        if ( v216 )
          continue;
      }
      goto LABEL_155;
    }
    ptr.m128_u64[0] = 0;
    goto LABEL_216;
  }
}
