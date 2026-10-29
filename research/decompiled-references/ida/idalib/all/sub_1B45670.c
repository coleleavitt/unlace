unsigned __int64 __fastcall sub_1B45670(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // r15
  void *v15; // rdx
  __int64 v16; // rdx
  char v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int32 v24; // eax
  _QWORD *v25; // rax
  __m128i v26; // xmm2
  __int64 v27; // rdi
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // edx
  __int64 v32; // r13
  unsigned __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  _DWORD *v38; // r13
  unsigned __int64 v39; // rax
  bool v40; // zf
  __int64 *v41; // r12
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  int v44; // edx
  unsigned __int64 v45; // rdx
  __int64 *v46; // rbx
  __int64 *v47; // rbp
  unsigned __int64 v48; // rbx
  char v50; // al
  bool v51; // al
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned int v61; // r12d
  int v62; // eax
  bool v63; // al
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rsi
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 *v75; // r15
  __int64 v76; // rax
  __int64 *v77; // r13
  char v78; // r12
  unsigned __int64 v79; // rax
  __int64 v80; // r8
  unsigned __int64 v81; // r14
  __int64 v82; // rdi
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rbp
  int v85; // esi
  __int64 v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rbp
  __int64 v89; // rax
  unsigned __int64 v90; // rcx
  __int64 v91; // rsi
  unsigned __int64 v92; // r8
  __int64 v93; // rdi
  unsigned __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 *v97; // rax
  __int64 v98; // r10
  int v99; // esi
  __int64 v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  __int64 v103; // r11
  int v104; // esi
  __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  __int64 v109; // rdi
  unsigned __int64 v110; // rbp
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdi
  int v114; // eax
  __int64 v115; // rdi
  __int64 v116; // rax
  int v117; // eax
  __int64 v118; // rax
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // r10
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rax
  __int64 v125; // rdi
  __int64 v126; // r14
  int v127; // eax
  __int64 v128; // rax
  unsigned __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // r8
  unsigned __int64 v132; // rax
  unsigned int v133; // esi
  __int64 v134; // rdi
  unsigned __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // r8
  unsigned __int64 v138; // rax
  __m128 v139; // xmm1
  __m128 *v140; // rax
  unsigned int v141; // eax
  __int64 v142; // rsi
  unsigned __int64 v143; // rdx
  const __m128i *v144; // rsi
  unsigned int v145; // eax
  __int64 v146; // rbp
  __int64 *v147; // rbx
  unsigned __int64 v148; // rbx
  int v149; // ebp
  unsigned __int64 v150; // rdx
  char *v151; // rax
  __int64 v152; // rcx
  char *v153; // rcx
  __int64 v154; // rcx
  char *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rbp
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rax
  _QWORD *v163; // rax
  __int64 v164; // rdi
  _BYTE **v165; // rsi
  _OWORD *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // [rsp-10h] [rbp-318h]
  __int64 v169; // [rsp-10h] [rbp-318h]
  __int64 v170; // [rsp-8h] [rbp-310h]
  __int64 v171; // [rsp-8h] [rbp-310h]
  _QWORD *v172; // [rsp+8h] [rbp-300h]
  __m128i v173; // [rsp+10h] [rbp-2F8h] BYREF
  __m128 v174; // [rsp+20h] [rbp-2E8h] BYREF
  __int64 v175; // [rsp+30h] [rbp-2D8h]
  signed __int64 v176; // [rsp+38h] [rbp-2D0h]
  __int64 v177; // [rsp+40h] [rbp-2C8h]
  void ***v178; // [rsp+48h] [rbp-2C0h]
  __int64 **v179; // [rsp+50h] [rbp-2B8h]
  __int64 v180; // [rsp+58h] [rbp-2B0h]
  int v181; // [rsp+64h] [rbp-2A4h]
  int v182; // [rsp+68h] [rbp-2A0h]
  unsigned int v183; // [rsp+6Ch] [rbp-29Ch]
  unsigned __int8 **v184; // [rsp+70h] [rbp-298h]
  __int64 v185; // [rsp+78h] [rbp-290h]
  void **v186; // [rsp+88h] [rbp-280h] BYREF
  __int64 v187; // [rsp+90h] [rbp-278h] BYREF
  unsigned __int64 v188; // [rsp+98h] [rbp-270h] BYREF
  __m128i v189; // [rsp+A0h] [rbp-268h] BYREF
  __int64 v190; // [rsp+B0h] [rbp-258h] BYREF
  __int64 v191; // [rsp+C0h] [rbp-248h] BYREF
  unsigned int v192; // [rsp+C8h] [rbp-240h]
  __int64 *v193; // [rsp+D0h] [rbp-238h]
  char v194; // [rsp+138h] [rbp-1D0h]
  unsigned int v195; // [rsp+140h] [rbp-1C8h]
  char v196; // [rsp+144h] [rbp-1C4h]
  void *ptr[2]; // [rsp+150h] [rbp-1B8h] BYREF
  __int128 v198; // [rsp+160h] [rbp-1A8h] BYREF
  __int128 v199; // [rsp+170h] [rbp-198h] BYREF
  void *v200[2]; // [rsp+1A8h] [rbp-160h]
  __int64 v201; // [rsp+1B8h] [rbp-150h]
  _QWORD *v202; // [rsp+1C0h] [rbp-148h]
  __m128i v203; // [rsp+1C8h] [rbp-140h]
  __int64 v204; // [rsp+1D8h] [rbp-130h]
  __int64 v205; // [rsp+1E0h] [rbp-128h]
  __int64 v206; // [rsp+1E8h] [rbp-120h]
  __int64 v207; // [rsp+1F0h] [rbp-118h]
  __int64 *v208; // [rsp+200h] [rbp-108h] BYREF
  __int64 v209; // [rsp+208h] [rbp-100h]
  char v210; // [rsp+210h] [rbp-F8h] BYREF

  v176 = (signed __int64)a2;
  v181 = a3;
  v182 = a4;
  v183 = a5;
  v172 = (_QWORD *)sub_168B6C0((__int64)a1);
  v179 = &v208;
  v208 = (__int64 *)&v210;
  v209 = 0x400000000LL;
  v177 = a9 + (a10 << 6);
  if ( a9 == v177 )
    goto LABEL_71;
  LOBYTE(v175) = 1;
  v14 = a9;
  v178 = &v186;
  v184 = (unsigned __int8 **)&v199;
  do
  {
    while ( 1 )
    {
      v40 = *(_QWORD *)(v14 + 16) == 0;
      v186 = nullptr;
      v187 = 0;
      if ( v40 )
      {
        v16 = *(unsigned int *)(v14 + 8);
        v187 = v172[2340];
      }
      else
      {
        v187 = sub_1E5F010(*(_QWORD *)(v14 + 16), v178);
        v15 = *v186;
        ptr[1] = v186 + 1;
        ptr[0] = v15;
        v16 = (unsigned int)sub_F6CCB0((__int64 *)ptr, a6);
      }
      v17 = 0;
      v173.m128i_i8[0] = 1;
      v18 = *(_QWORD *)(v187 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v18 + 17) & 7) == 0 )
      {
        if ( (v173.m128i_i32[0] = v16,
              v50 = sub_F60F80(v18, (__int64)v172, v16, v11, v12, (__int64)v13),
              LODWORD(v16) = v173.m128i_i32[0],
              !v50)
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v187 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL)
            & 0xF7) != 0x22
          || (v174.m128_i32[0] = v173.m128i_i32[0],
              v17 = 1,
              v51 = sub_F56AE0(v187, v172),
              LODWORD(v16) = v173.m128i_i32[0],
              (v173.m128i_i8[0] = v51) != 0) )
        {
          sub_168B9F0((__int64)ptr, a1, v16, 0x11ADu, 0);
          sub_1605D30((__int64)ptr, &v187);
          sub_15F7200(ptr);
          goto LABEL_29;
        }
      }
      v19 = sub_B731A0(
              (__int64)v172,
              *(_QWORD *)(*a1 + 544),
              v16,
              *(_DWORD *)(v14 + 8),
              *(_QWORD *)v14,
              v187,
              (__int64)v186,
              0);
      *(_BYTE *)(v19 + 29) |= 2u;
      v22 = v19;
      if ( !v176 )
      {
        sub_B94AD0(*(__m128i **)(*a1 + 544), v19, v20, v21, v168, v170);
        goto LABEL_18;
      }
      v23 = *(_QWORD *)(v19 + 40);
      v24 = *(_DWORD *)(v14 + 8);
      v189.m128i_i64[0] = v23;
      v189.m128i_i32[2] = v24;
      sub_B85890(&v190, v23);
      v25 = (_QWORD *)*a1;
      a6 = 0;
      v26 = _mm_load_si128(&v189);
      *(_OWORD *)v200 = 0;
      v202 = v25;
      v203 = v26;
      ptr[1] = (char *)&v198 + 8;
      *(_QWORD *)&v198 = 0x800000000LL;
      v204 = v190;
      ptr[0] = nullptr;
      v201 = 0;
      v205 = 0;
      v206 = 0;
      v207 = 65537;
      sub_1A395A0((__int64)ptr);
      v27 = *a1;
      *(_WORD *)((char *)&v207 + 3) = 0;
      sub_1A49A10(v27, (__int64)ptr, (__int64 *)v176, 0, 0, v28, 0.0, *(double *)a7.m128_u64);
      sub_17A32D0(*a1, (int *)ptr, *(_QWORD *)(*a1 + 544), (__int64 *)v176, 0, 0);
      if ( (_DWORD)v198 )
      {
        v31 = *(_DWORD *)(v14 + 8);
        v32 = *(_QWORD *)ptr[1];
        v174.m128_u64[0] = (unsigned __int64)&v191;
        sub_168B9F0((__int64)&v191, a1, v31, 0x1326u, 0);
        v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v194 )
        {
          sub_AE9DF0((unsigned __int8 **)(v174.m128_u64[0] + 32), *(_QWORD *)(v22 + 40), 9u);
        }
        else if ( v196 )
        {
          v180 = *(_QWORD *)(v22 + 40);
          v64 = sub_168B9E0(v174.m128_u64[0]);
          v67 = v180;
          v68 = v64;
          v69 = (__int64)v193;
          if ( v193 )
          {
            v70 = *v193;
            v185 = v68;
            v69 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v70 + 32))(v193, v70, v68, v180);
            v68 = v185;
            v67 = v180;
          }
          v180 = v67;
          v188 = v69;
          v71 = sub_1587BC0(v68, (__int64 *)&v188, v68, v67, v65, v66);
          sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v195 + 8), v180, 9u);
        }
        sub_15F7200(v174.m128_u64[0]);
        sub_168B9F0(v174.m128_i64[0], a1, *(_DWORD *)(v33 + 24), 0x71u, 0);
        sub_15F7200(v174.m128_u64[0]);
      }
      else
      {
        sub_17B7670(*a1, v22, v176, 1, v29, v30);
      }
      if ( BYTE3(v207) )
      {
        if ( LODWORD(ptr[0]) == 5 )
        {
          if ( !BYTE4(v207) )
            goto LABEL_14;
          goto LABEL_39;
        }
        if ( !v200[1] || (*(_BYTE *)(v202[29] + 46LL) & 0x20) == 0 )
          goto LABEL_14;
        sub_1663B80(v202, (__int64)ptr);
      }
      if ( !BYTE4(v207) || LODWORD(ptr[0]) != 5 )
        goto LABEL_14;
LABEL_39:
      sub_1A445B0((__int64)v202, (__int64)ptr, v34, v35, v36);
LABEL_14:
      if ( v200[0] )
        sub_1A39780((char *)v200[0]);
      if ( ptr[1] != (char *)&v198 + 8 )
        free(ptr[1]);
LABEL_18:
      sub_1AF5AF0((__int64)a1, v22);
      v38 = *(_DWORD **)(v14 + 24);
      if ( !v38 || !v17 )
      {
        v13 = *(_DWORD **)(v14 + 32);
        if ( v13 && v17 )
        {
LABEL_23:
          if ( (*v13 & 0x10000) == 0 )
            v13 = (_DWORD *)(sub_1BFA490(*a1, v13, v187, 3, 0) & 0xFFFFFFFFFFFFFFFELL);
          v39 = *(_QWORD *)(v14 + 40);
          v188 = v39;
        }
        else
        {
          v39 = *(_QWORD *)(v14 + 40);
          v188 = v39;
          if ( v173.m128i_i8[0] )
            goto LABEL_28;
        }
        if ( !v39 )
          goto LABEL_28;
        goto LABEL_27;
      }
      if ( (*v38 & 0x10000) == 0 )
        v38 = (_DWORD *)(sub_1BFA490(*a1, *(_QWORD *)(v14 + 24), v187, 3, 0) & 0xFFFFFFFFFFFFFFFELL);
      v13 = *(_DWORD **)(v14 + 32);
      if ( v13 )
        goto LABEL_23;
      v39 = *(_QWORD *)(v14 + 40);
      v188 = v39;
      if ( !v39 )
        goto LABEL_29;
LABEL_27:
      if ( (*(_DWORD *)v39 & 0x10000) == 0 )
      {
        v52 = *(_QWORD *)(v39 + 8);
        v173.m128i_i64[0] = (__int64)v13;
        if ( !sub_F60F80(*(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v172, v37, v11, v12, (__int64)v13) )
        {
          v141 = sub_C00A40(v188, (__int64)v172, v53, v54, v55);
          v142 = (__int64)a1;
          sub_168B9F0((__int64)ptr, a1, v141, 0x11AFu, 0);
          if ( v203.m128i_i8[0] )
          {
            v142 = v188;
            sub_AE9DF0(v184, v188, 0xFu);
            v174.m128_u64[0] = (unsigned __int64)&v191;
          }
          else
          {
            v174.m128_u64[0] = (unsigned __int64)&v191;
            if ( v203.m128i_i8[12] )
            {
              v159 = sub_168B9E0(ptr);
              v162 = v198;
              if ( (_QWORD)v198 )
                v162 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v198 + 32LL))(v198);
              v191 = v162;
              v174.m128_u64[0] = (unsigned __int64)&v191;
              v163 = sub_1587BC0(v159, &v191, v157, v158, v160, v161);
              v142 = v188;
              sub_AE9DF0((unsigned __int8 **)(*v163 + 32LL * v203.m128i_u32[2] + 8), v188, 0xFu);
            }
          }
          v191 = sub_EEC8C0(v188, v142, *(double *)a6.m128_u64);
          sub_1587DB0((__int64)ptr, (__int64 *)v174.m128_u64[0]);
          sub_15F7200(ptr);
          goto LABEL_29;
        }
        v56 = v188;
        v174.m128_u64[0] = (unsigned __int64)&v191;
        sub_C3EB00((__int64)&v191, v188, (__int64)v172, nullptr, v55, v173.m128i_i64[0]);
        v60 = v173.m128i_i64[0];
        if ( (_BYTE)v193 )
        {
          v61 = v192;
          if ( v192 <= 0x40 )
          {
            v63 = v191 == 0;
          }
          else
          {
            v62 = sub_2206780(v174.m128_u64[0]);
            v60 = v173.m128i_i64[0];
            v63 = v62 == v61;
          }
          if ( v63 )
          {
            v145 = sub_C00A40(v188, v56, v57, v58, v59);
            sub_168B9F0((__int64)ptr, a1, v145, 0x11AEu, 0);
            v146 = sub_1B1C750((__int64)ptr, (__int64 *)&v188);
            v189.m128i_i64[0] = sub_EEC8C0(v188, (__int64)&v188, *(double *)a6.m128_u64);
            sub_1587DB0(v146, v189.m128i_i64);
            sub_15F7200(ptr);
            sub_98E4B0(v174.m128_i64[0]);
            goto LABEL_29;
          }
        }
        v173.m128i_i64[0] = v60;
        sub_98E4B0(v174.m128_i64[0]);
        v13 = (_DWORD *)v173.m128i_i64[0];
      }
LABEL_28:
      LOBYTE(v175) = (v13 != nullptr && v38 != nullptr) & v175;
      if ( (_BYTE)v175 )
        break;
LABEL_29:
      LOBYTE(v175) = 0;
      v14 += 64;
      if ( v177 == v14 )
        goto LABEL_44;
    }
    v41 = v208;
    a6 = 0;
    v11 = HIDWORD(v209);
    v42 = (unsigned __int64)&v208[6 * (unsigned int)v209];
    if ( (unsigned int)v209 >= (unsigned __int64)HIDWORD(v209) )
    {
      v143 = (unsigned int)v209 + 1LL;
      *(_OWORD *)ptr = 0;
      v144 = (const __m128i *)ptr;
      v198 = 0;
      v199 = 0;
      if ( HIDWORD(v209) < v143 )
      {
        v173.m128i_i64[0] = (__int64)v13;
        v165 = (_BYTE **)(v179 + 2);
        if ( v208 > (__int64 *)ptr || v42 <= (unsigned __int64)ptr )
        {
          sub_2237220(v179, v165, v143, 48);
          v144 = (const __m128i *)ptr;
          v13 = (_DWORD *)v173.m128i_i64[0];
          v42 = (unsigned __int64)&v208[6 * (unsigned int)v209];
        }
        else
        {
          sub_2237220(v179, v165, v143, 48);
          v13 = (_DWORD *)v173.m128i_i64[0];
          v144 = (const __m128i *)((char *)v208 + (char *)ptr - (char *)v41);
          v42 = (unsigned __int64)&v208[6 * (unsigned int)v209];
        }
      }
      *(__m128i *)v42 = _mm_loadu_si128(v144);
      *(__m128i *)(v42 + 16) = _mm_loadu_si128(v144 + 1);
      *(__m128i *)(v42 + 32) = _mm_loadu_si128(v144 + 2);
    }
    else
    {
      *(_OWORD *)(v42 + 32) = 0;
      *(_QWORD *)(v42 + 24) = 0;
      *(_DWORD *)(v42 + 40) = 0;
      *(_OWORD *)v42 = 0;
      a6 = 0;
      *(_OWORD *)(v42 + 8) = 0;
    }
    v14 += 64;
    LODWORD(v209) = v209 + 1;
    v43 = (__int64)&v208[6 * (unsigned int)v209 - 6];
    v44 = *(_DWORD *)(v14 - 16);
    *(_QWORD *)(v43 + 8) = v38;
    *(_DWORD *)(v43 + 32) = v44;
    *(_QWORD *)(v43 + 16) = v13;
    v45 = v188;
    *(_QWORD *)v43 = v22;
    *(_QWORD *)(v43 + 24) = v45;
    *(_DWORD *)(v43 + 36) = *(_DWORD *)(v14 - 12);
    *(_DWORD *)(v43 + 40) = *(_DWORD *)(v14 - 8);
  }
  while ( v177 != v14 );
LABEL_44:
  if ( !(_BYTE)v175 )
  {
    v46 = v208;
    v47 = &v208[6 * (unsigned int)v209];
    if ( v208 != v47 )
    {
      do
      {
        if ( *v46 )
          sub_B88650(*v46, 1);
        v46 += 6;
      }
      while ( v47 != v46 );
      v47 = v208;
    }
    v48 = 1;
    goto LABEL_51;
  }
LABEL_71:
  v175 = (__int64)ptr;
  ptr[1] = (void *)0x400000000LL;
  v72 = *a1;
  ptr[0] = &v198;
  if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(v72 + 544)) )
  {
    v148 = (unsigned int)v209;
    v149 = v209;
    if ( HIDWORD(ptr[1]) < (unsigned int)v209 )
    {
      LODWORD(ptr[1]) = 0;
      sub_2237220(v175, &v198, (unsigned int)v209, 32);
      v166 = ptr[0];
      v167 = 0;
      do
      {
        ++v167;
        *v166 = 0;
        v166 += 2;
        *(v166 - 1) = 0;
      }
      while ( v148 != v167 );
      LODWORD(ptr[1]) = v149;
      v74 = (unsigned int)v209;
      v151 = (char *)ptr[0];
    }
    else
    {
      v150 = LODWORD(ptr[1]);
      v151 = (char *)ptr[0];
      v152 = LODWORD(ptr[1]);
      if ( (unsigned int)v209 <= (unsigned __int64)LODWORD(ptr[1]) )
        v152 = (unsigned int)v209;
      if ( v152 )
      {
        v153 = (char *)ptr[0] + 32 * v152;
        do
        {
          *(_OWORD *)v151 = 0;
          v151 += 32;
          *((_OWORD *)v151 - 1) = 0;
        }
        while ( v153 != v151 );
        v151 = (char *)ptr[0];
      }
      if ( v148 > v150 )
      {
        v154 = v148 - v150;
        if ( v148 != v150 )
        {
          v155 = &v151[32 * v150];
          v156 = 0;
          do
          {
            ++v156;
            *(_OWORD *)v155 = 0;
            v155 += 32;
            *((_OWORD *)v155 - 1) = 0;
          }
          while ( v154 != v156 );
          v151 = (char *)ptr[0];
        }
      }
      LODWORD(ptr[1]) = v149;
      v74 = v148;
    }
    v75 = v208;
    goto LABEL_129;
  }
  v74 = (unsigned int)v209;
  v75 = v208;
  v76 = 6LL * (unsigned int)v209;
  v77 = &v208[v76];
  if ( v208 == &v208[v76] )
  {
LABEL_133:
    v148 = LODWORD(ptr[1]);
    v151 = (char *)ptr[0];
LABEL_129:
    v48 = sub_C0B630(v172, v172[2440], v181, v182, v183, v73, v75, v74, (__int64)v151, v148);
    goto LABEL_111;
  }
  v78 = 1;
  while ( 2 )
  {
    v79 = sub_1928110(*a1, *((unsigned int *)v75 + 8), 6u, v75[2], v75[1], 0, a6, a7);
    if ( v79 <= 1 )
      goto LABEL_74;
    v81 = v75[3];
    v82 = *a1;
    v83 = v79 & 0xFFFFFFFFFFFFFFFELL;
    if ( v81 )
    {
      v81 &= ~1uLL;
      v84 = sub_1928110(v82, *((unsigned int *)v75 + 8), 5u, v83, v81, 0, a6, a7);
      if ( v84 > 1 )
      {
        v85 = *((_DWORD *)v75 + 8);
        v173.m128i_i64[0] = *a1;
        v86 = sub_18C1B30(v173.m128i_i64[0], v85, 1);
        v87 = sub_1928110(
                v173.m128i_i64[0],
                *((unsigned int *)v75 + 8),
                6u,
                v84 & 0xFFFFFFFFFFFFFFFELL,
                v86 & 0xFFFFFFFFFFFFFFFELL,
                0,
                a6,
                a7);
        if ( v87 > 1 )
        {
          v88 = sub_1928110(*a1, *((unsigned int *)v75 + 8), 3u, v87 & 0xFFFFFFFFFFFFFFFELL, v81, 0, a6, a7);
          if ( v88 > 1 )
          {
            v89 = sub_19249E0(*a1, *((_DWORD *)v75 + 8), 7u, v75[3], 0, v73, a6, a7);
            v90 = v75[1];
            v91 = *((unsigned int *)v75 + 8);
            v92 = v75[2];
            v93 = *a1;
            v173.m128i_i64[0] = v89;
            v94 = sub_1928110(v93, v91, 6u, v90, v92, 0, a6, a7);
            if ( v94 > 1 )
            {
              v95 = *((unsigned int *)v75 + 8);
              v96 = *a1;
              v173.m128i_i64[0] &= ~1uLL;
              v97 = (__int64 *)sub_1928110(v96, v95, 5u, v94 & 0xFFFFFFFFFFFFFFFELL, v173.m128i_u64[0], 0, a6, a7);
              if ( (unsigned __int64)v97 > 1 )
              {
                v98 = *a1;
                v99 = *((_DWORD *)v75 + 8);
                v176 = (signed __int64)v97;
                v174.m128_u64[0] = v98;
                v100 = sub_18C1B30(v98, v99, 1);
                v101 = sub_1928110(
                         v174.m128_i64[0],
                         *((unsigned int *)v75 + 8),
                         6u,
                         v176 & 0xFFFFFFFFFFFFFFFELL,
                         v100 & 0xFFFFFFFFFFFFFFFELL,
                         0,
                         a6,
                         a7);
                if ( v101 > 1 )
                {
                  v102 = sub_1928110(
                           *a1,
                           *((unsigned int *)v75 + 8),
                           3u,
                           v101 & 0xFFFFFFFFFFFFFFFELL,
                           v173.m128i_u64[0],
                           0,
                           a6,
                           a7);
                  if ( v102 > 1 )
                  {
                    v103 = *a1;
                    v104 = *((_DWORD *)v75 + 8);
                    v174.m128_u64[0] = v102;
                    v173.m128i_i64[0] = v103;
                    v105 = sub_18C1B30(v103, v104, 0);
                    v106 = sub_1928110(
                             v173.m128i_i64[0],
                             *((unsigned int *)v75 + 8),
                             0xBu,
                             v75[3],
                             v105 & 0xFFFFFFFFFFFFFFFELL,
                             0,
                             a6,
                             a7);
                    if ( v106 > 1 )
                    {
                      v107 = sub_1923BC0(
                               *a1,
                               *((_DWORD *)v75 + 8),
                               *((unsigned int *)v75 + 8),
                               v106 & 0xFFFFFFFFFFFFFFFELL,
                               v88 & 0xFFFFFFFFFFFFFFFELL,
                               v174.m128_u64[0] & 0xFFFFFFFFFFFFFFFELL,
                               a6,
                               a7);
                      if ( v107 > 1 )
                      {
                        v82 = *a1;
                        v83 = v107 & 0xFFFFFFFFFFFFFFFELL;
                        goto LABEL_88;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_74:
      v78 = 0;
    }
    else
    {
LABEL_88:
      v108 = sub_1AF29F0(v82, v83, 0, v83, v80, a6, a7);
      if ( v108 <= 1 )
        goto LABEL_74;
      v109 = *v75;
      v110 = v108 & 0xFFFFFFFFFFFFFFFELL;
      v111 = *(_QWORD *)*v75;
      v174.m128_u64[0] = *(_QWORD *)(v110 + 8);
      v112 = (*(__int64 (__fastcall **)(__int64))(v111 + 16))(v109);
      v113 = *v75;
      v173.m128i_i64[0] = v112;
      v114 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 16LL))(v113);
      v173.m128i_i64[0] = sub_B731A0(
                            (__int64)v172,
                            *(_QWORD *)(*a1 + 544),
                            v114,
                            v173.m128i_i32[0],
                            0,
                            v174.m128_i64[0],
                            0,
                            0);
      *(_BYTE *)(v173.m128i_i64[0] + 29) |= 2u;
      v115 = *v75;
      v116 = *(_QWORD *)*v75;
      v174.m128_u64[0] = *a1;
      *(double *)a6.m128_u64 = (*(double (__fastcall **)(__int64))(v116 + 16))(v115);
      v118 = sub_190BDA0(
               v174.m128_i64[0],
               v173.m128i_i64[0],
               *(_QWORD *)(v173.m128i_i64[0] + 48),
               1,
               v117,
               0,
               *(double *)a6.m128_u64,
               a7);
      if ( v75[3] )
      {
        v121 = *a1;
        v176 = v118 & 0xFFFFFFFFFFFFFFFELL;
        v174.m128_u64[0] = v121;
        v122 = sub_19146F0(v121, (_QWORD *)(v118 & 0xFFFFFFFFFFFFFFFELL), v169, v171, v119, v120, a6, a7);
        v123 = sub_1928110(
                 v174.m128_i64[0],
                 *((unsigned int *)v75 + 8),
                 2u,
                 v122 & 0xFFFFFFFFFFFFFFFELL,
                 v81,
                 0,
                 a6,
                 a7);
      }
      else
      {
        v164 = *a1;
        v176 = v118 & 0xFFFFFFFFFFFFFFFELL;
        v123 = sub_19146F0(v164, (_QWORD *)(v118 & 0xFFFFFFFFFFFFFFFELL), v169, v171, v119, v120, a6, a7);
      }
      if ( v123 <= 1 )
        goto LABEL_74;
      v124 = sub_1928110(*a1, *((unsigned int *)v75 + 8), 5u, v75[1], v123 & 0xFFFFFFFFFFFFFFFELL, 0, a6, a7);
      if ( v124 <= 1 )
        goto LABEL_74;
      v125 = *v75;
      v126 = *a1;
      v174.m128_u64[0] = v124;
      *(double *)a6.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v125 + 16LL))(v125);
      v128 = sub_190BDA0(v126, *v75, *(_QWORD *)(*v75 + 48), 1, v127, 0, *(double *)a6.m128_u64, a7);
      v129 = sub_1928110(
               *a1,
               *((unsigned int *)v75 + 8),
               0x15u,
               v128 & 0xFFFFFFFFFFFFFFFELL,
               v174.m128_u64[0] & 0xFFFFFFFFFFFFFFFELL,
               0,
               a6,
               a7);
      if ( v129 <= 1 )
        goto LABEL_74;
      v132 = sub_1AF29F0(*a1, v129 & 0xFFFFFFFFFFFFFFFELL, 1u, v130, v131, a6, a7);
      if ( v132 <= 1 )
        goto LABEL_74;
      v133 = *((_DWORD *)v75 + 8);
      v134 = *a1;
      v174.m128_u64[0] = v132;
      v135 = sub_19249E0(v134, v133, 2u, v176, 0, v73, a6, a7);
      if ( v135 <= 1 )
        goto LABEL_74;
      v138 = sub_1AF29F0(*a1, v135 & 0xFFFFFFFFFFFFFFFELL, 1u, v136, v137, a6, a7);
      if ( v138 <= 1 )
        goto LABEL_74;
      v174.m128_u64[0] = v138;
      v173.m128i_i64[0] = v110;
      v139 = _mm_loadh_ps((const double *)v173.m128i_i64);
      v174 = _mm_loadh_ps((const double *)v174.m128_u64);
      v173 = (__m128i)v139;
      v140 = (__m128 *)sub_1AF6B30(v175);
      a7 = (__m128)_mm_load_si128(&v173);
      a6 = (__m128)_mm_and_si128(_mm_load_si128((const __m128i *)&v174), (__m128i)xmmword_23AA750);
      *v140 = a7;
      v140[1] = a6;
    }
    v75 += 6;
    if ( v77 != v75 )
      continue;
    break;
  }
  v75 = v208;
  v74 = (unsigned int)v209;
  if ( v78 )
    goto LABEL_133;
  v147 = &v208[6 * (unsigned int)v209];
  if ( v147 != v208 )
  {
    do
    {
      if ( *v75 )
        sub_B88650(*v75, 1);
      v75 += 6;
    }
    while ( v147 != v75 );
  }
  v48 = 1;
LABEL_111:
  if ( ptr[0] != (void *)(v175 + 16) )
    free(ptr[0]);
  v47 = v208;
LABEL_51:
  if ( v47 != (__int64 *)(v179 + 2) )
    free(v47);
  return v48;
}
