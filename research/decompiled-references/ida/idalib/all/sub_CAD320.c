void __fastcall sub_CAD320(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  _QWORD *v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __m128 **v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdi
  const __m128i *v27; // rbp
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  unsigned int v34; // esi
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int32 v37; // edx
  __int64 *v38; // rax
  __int64 v39; // rdi
  __int64 *v40; // rax
  int v41; // edx
  __int64 v42; // rax
  const __m128i *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rbp
  int v46; // edx
  char v47; // al
  int v48; // ebp
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned int v51; // r12d
  __int64 v52; // rdx
  __int64 *v53; // rbp
  __int64 *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  unsigned int v57; // r9d
  __int64 v58; // rdi
  __int64 v59; // r15
  int v60; // r14d
  __int64 v61; // r15
  unsigned __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // rcx
  _QWORD *v65; // rax
  int v66; // r10d
  int v67; // r10d
  unsigned int v68; // r8d
  int v69; // edi
  __int64 v70; // rcx
  __m128 *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 *v74; // r8
  __int64 v75; // r9
  __int64 v76; // r14
  __int64 v77; // rax
  __int64 v78; // rbp
  unsigned int v79; // eax
  __int64 v80; // rbx
  char ***v81; // rdi
  unsigned __int64 *v82; // rax
  __int64 *v83; // rdx
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rax
  __int64 v86; // r9
  __int64 (__fastcall *v87)(__int64); // rax
  char v88; // bp
  int v89; // eax
  void *v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  void *v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  char v100; // al
  __m128 *v101; // rbp
  void **v102; // rbx
  __int64 *v103; // rdi
  int v104; // ecx
  __int64 v105; // rdx
  void **v106; // r13
  __m128 *v107; // r14
  __int64 *v108; // r15
  __int32 v109; // edx
  __m128 *v110; // r15
  __int64 v111; // rdx
  __int32 v112; // eax
  int v113; // r10d
  int v114; // r10d
  unsigned int v115; // r8d
  __int64 *v116; // r11
  int v117; // r9d
  __int64 v118; // rdi
  unsigned __int64 v119; // rdi
  int v120; // edi
  bool v121; // zf
  __int64 *v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r11
  __int64 *v125; // r11
  __int64 *v126; // r9
  int v127; // r11d
  __m128 *v128; // [rsp+0h] [rbp-1C8h]
  __m128 *v129; // [rsp+8h] [rbp-1C0h]
  __m128 *v130; // [rsp+10h] [rbp-1B8h]
  _QWORD *v131; // [rsp+18h] [rbp-1B0h]
  __int64 **v132; // [rsp+20h] [rbp-1A8h]
  _QWORD *v133; // [rsp+28h] [rbp-1A0h]
  __m128i *v134; // [rsp+30h] [rbp-198h]
  unsigned __int64 v135; // [rsp+38h] [rbp-190h]
  unsigned __int64 v136; // [rsp+40h] [rbp-188h] BYREF
  __int64 *v137; // [rsp+48h] [rbp-180h] BYREF
  __m128i v138; // [rsp+50h] [rbp-178h] BYREF
  __m128 *v139; // [rsp+60h] [rbp-168h] BYREF
  __int64 v140; // [rsp+68h] [rbp-160h]
  unsigned int v141; // [rsp+70h] [rbp-158h]

  v4 = a3;
  v5 = (_QWORD *)a2;
  if ( (unsigned int)sub_B76070(a2, a2, a3, a4) )
  {
    v9 = *(_QWORD *)(a2 + 120);
    sub_B76070(a2, a2, v7, v8);
    if ( !v9 )
      return;
  }
  v11 = &v139;
  v128 = (__m128 *)&v139;
  if ( !(unsigned __int8)sub_B7D390(a2, (__int64)&v139, 0, v8) )
    return;
  if ( (*((_BYTE *)v5 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v14 = *(_QWORD *)(sub_B8C1B0((__int64)(v5 + 9)) + 16);
    v15 = (v14 & 4) != 0 ? *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL) : v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v15 )
    {
      if ( v15 != 64 )
      {
        v16 = *(_QWORD *)(v15 + 64);
        if ( v16 )
        {
          if ( (*(_BYTE *)(v16 + 10) & 0x20) != 0 && (unsigned int)sub_B77890((__int64)v5) == 42 )
          {
            v17 = a1[47];
            v18 = *(_QWORD *)(sub_B8C1B0((__int64)(v5 + 9)) + 16);
            if ( (v18 & 4) != 0 )
              v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v19 )
              v19 -= 64LL;
            v20 = sub_E29BF0(v17, v19);
            v141 = 0;
            v139 = nullptr;
            v21 = v20;
            v140 = 0;
            v23 = *(_QWORD *)(sub_B8C1B0((__int64)(v5 + 9)) + 16);
            if ( (v23 & 4) != 0 )
              v26 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v26 = v23 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v26 )
              v26 -= 64LL;
            sub_BA4FF0(v26, (__int64)v128, &v136, v22, v24, v25);
            v129 = (__m128 *)&v138;
            if ( (_DWORD)v140 )
              sub_C9F990((__m128 *)&v138, v139, (__m128 *)v139[v141].m128_u64, (__int64)v128, 0);
            else
              sub_C9F990(
                (__m128 *)&v138,
                (__m128 *)v139[v141].m128_u64,
                (__m128 *)v139[v141].m128_u64,
                (__int64)v128,
                1);
            v28 = v138.m128i_u64[1];
            v27 = (const __m128i *)v138.m128i_i64[0];
            sub_C9F990(v129, (__m128 *)v139[v141].m128_u64, (__m128 *)v139[v141].m128_u64, (__int64)v128, 1);
            if ( (const __m128i *)v138.m128i_i64[0] != v27 )
            {
              v131 = v5;
              v29 = v138.m128i_i64[0];
              v130 = (__m128 *)(a1 + 4);
              v132 = &v137;
              while ( 1 )
              {
                v138 = _mm_loadu_si128(v27);
                v30 = sub_E31D10(v21, v138.m128i_i64[1]);
                v34 = *((_DWORD *)a1 + 12);
                v35 = *(unsigned int *)(v30 + 8);
                if ( !v34 )
                  break;
                v32 = v138.m128i_i64[0];
                v36 = a1[4];
                v37 = (v34 - 1)
                    & (((unsigned __int32)v138.m128i_i32[0] >> 9)
                     ^ ((unsigned __int32)v138.m128i_i32[0] >> 4));
                v38 = (__int64 *)(v36 + 16LL * v37);
                v39 = *v38;
                if ( v138.m128i_i64[0] == *v38 )
                  goto LABEL_26;
                if ( v39 == -4096 )
                {
LABEL_120:
                  v120 = *((_DWORD *)a1 + 10);
                  v137 = v38;
                  v31 = (unsigned int)(v120 + 1);
                  v33 = (unsigned int)(4 * v31);
                  if ( (unsigned int)v33 < 3 * v34 )
                  {
                    v33 = v34 >> 3;
                    if ( v34 - *((_DWORD *)a1 + 11) - (unsigned int)v31 > (unsigned int)v33 )
                    {
LABEL_122:
                      v121 = *v38 == -4096;
                      *((_DWORD *)a1 + 10) = v31;
                      if ( !v121 )
                        --*((_DWORD *)a1 + 11);
                      *v38 = v32;
                      *((_DWORD *)v38 + 2) = 0;
                      *((_BYTE *)v38 + 12) = 0;
                      goto LABEL_26;
                    }
                    LODWORD(v133) = v35;
LABEL_131:
                    sub_CAC450((__int64)v130, v34, v31, v32, v35, v33);
                    sub_C9F820((__int64 *)v130, (__int64 *)v129, v132);
                    v32 = v138.m128i_i64[0];
                    LODWORD(v35) = (_DWORD)v133;
                    LODWORD(v31) = *((_DWORD *)a1 + 10) + 1;
                    v38 = v137;
                    goto LABEL_122;
                  }
LABEL_130:
                  LODWORD(v133) = v35;
                  v34 *= 2;
                  goto LABEL_131;
                }
                LODWORD(v133) = 1;
                v125 = nullptr;
                LODWORD(v134) = v34;
                while ( 1 )
                {
                  if ( v39 == -8192 && !v125 )
                    v125 = v38;
                  v37 = (v34 - 1) & ((_DWORD)v133 + v37);
                  v38 = (__int64 *)(v36 + 16LL * v37);
                  v39 = *v38;
                  if ( v138.m128i_i64[0] == *v38 )
                    break;
                  if ( v39 == -4096 )
                  {
                    v34 = (unsigned int)v134;
                    if ( v125 )
                      v38 = v125;
                    goto LABEL_120;
                  }
                  LODWORD(v133) = (_DWORD)v133 + 1;
                }
LABEL_26:
                v40 = v38 + 1;
                v41 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v138.m128i_i64[1] + 48)
                                                                             & 0xFFFFFFFFFFFFFFF0LL)
                                                                 + 8LL)
                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                         + 16LL);
                *(_DWORD *)v40 = v35;
                *((_BYTE *)v40 + 4) = (unsigned int)(v41 - 43) <= 1;
                if ( &v27[1] != (const __m128i *)v28 )
                {
                  v42 = v27[1].m128i_i64[0];
                  if ( v42 != -8192 && v42 != -4096 )
                  {
                    ++v27;
                    goto LABEL_33;
                  }
                  v43 = v27 + 2;
                  while ( 1 )
                  {
                    v27 = v43;
                    if ( v43 == (const __m128i *)v28 )
                      break;
                    v44 = v43->m128i_i64[0];
                    ++v43;
                    if ( v44 != -4096 && v44 != -8192 )
                      goto LABEL_33;
                  }
                }
                v27 = (const __m128i *)v28;
LABEL_33:
                if ( (const __m128i *)v29 == v27 )
                {
                  v5 = v131;
                  goto LABEL_35;
                }
              }
              v137 = nullptr;
              goto LABEL_130;
            }
LABEL_35:
            if ( v136 )
            {
              v45 = *(_QWORD *)(*(_QWORD *)sub_E31D10(v21, v136) + 48LL);
              v46 = *(_DWORD *)(sub_E31D10(v21, v136) + 8);
              v47 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
              *((_DWORD *)a1 + 14) = v46;
              *((_BYTE *)a1 + 60) = (unsigned __int8)(v47 - 42) <= 2u;
            }
            v11 = (__m128 **)(16LL * v141);
            operator delete(v139, v11, 8);
          }
        }
      }
    }
  }
  v48 = (*(_BYTE *)(v4 + 504) & 8) != 0;
  if ( (*(_BYTE *)(v4 + 504) & 4) != 0 )
  {
    v118 = *(_QWORD *)(v4 + 16);
    if ( (v118 & 4) != 0 || (v119 = v118 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (*(_BYTE *)(v119 + 28) & 0x7Fu) - 35 > 3 )
      ++v48;
    else
      v48 += (unsigned __int8)sub_B981D0((_QWORD *)v119, (__int64)v11) ^ 1;
  }
  v49 = *(_QWORD *)(v4 + 456);
  v50 = (__int64)(a1 + 1);
  v51 = 0;
  v52 = *(unsigned int *)(v4 + 464);
  v129 = (__m128 *)(a1 + 1);
  v53 = (__int64 *)(v49 + 4LL * v48);
  v54 = (__int64 *)(v49 + 4 * v52);
  v130 = (__m128 *)v54;
  if ( v54 != v53 )
  {
    v131 = (_QWORD *)v4;
    while ( 1 )
    {
      v59 = v5[15];
      v60 = *(_DWORD *)v53;
      sub_B76070((__int64)v5, v50, v52, (__int64)v54);
      v61 = *(_QWORD *)(v59 + 8LL * v51);
      v62 = sub_CE6180(a1[46], *(_QWORD *)(v61 + 48));
      v64 = *((unsigned int *)a1 + 6);
      v65 = (_QWORD *)HIDWORD(v62);
      if ( !(_DWORD)v64 )
        break;
      v55 = a1[1];
      v56 = ((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4);
      v57 = (v64 - 1) & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
      v50 = v55 + 16LL * v57;
      v58 = *(_QWORD *)v50;
      if ( v61 == *(_QWORD *)v50 )
      {
LABEL_42:
        ++v51;
        v53 = (__int64 *)((char *)v53 + 4);
        sub_CAC3E0(v128, (_QWORD *)v50, (_QWORD *)(16 * v64 + v55), (__int64)v129, 1);
        if ( v130 == (__m128 *)v53 )
          goto LABEL_49;
      }
      else
      {
        if ( v58 != -4096 )
        {
          LODWORD(v132) = 1;
          v124 = 0;
          v133 = v65;
          while ( 1 )
          {
            if ( v58 == -8192 && !v124 )
              v124 = v50;
            v57 = (v64 - 1) & ((_DWORD)v132 + v57);
            v50 = v55 + 16LL * v57;
            v58 = *(_QWORD *)v50;
            if ( v61 == *(_QWORD *)v50 )
              goto LABEL_42;
            if ( v58 == -4096 )
              break;
            LODWORD(v132) = (_DWORD)v132 + 1;
          }
          v65 = v133;
          if ( v124 )
            v50 = v124;
        }
        v63 = (unsigned int)(3 * v64);
        v69 = *((_DWORD *)a1 + 4) + 1;
        if ( 4 * v69 >= (unsigned int)v63 )
          break;
        v86 = (unsigned int)(v64 - *((_DWORD *)a1 + 5) - v69);
        if ( (unsigned int)v86 > (unsigned int)v64 >> 3 )
          goto LABEL_71;
        v133 = v65;
        LODWORD(v132) = ((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4);
        sub_CAD110((__int64)v129, v64, v55, v64, v56, v86);
        v113 = *((_DWORD *)a1 + 6);
        if ( !v113 )
        {
LABEL_178:
          ++*((_DWORD *)a1 + 4);
          BUG();
        }
        v114 = v113 - 1;
        v55 = a1[1];
        v115 = v114 & (unsigned int)v132;
        v69 = *((_DWORD *)a1 + 4) + 1;
        LOBYTE(v65) = (_BYTE)v133;
        v50 = v55 + 16LL * (v114 & (unsigned int)v132);
        v70 = *(_QWORD *)v50;
        if ( v61 == *(_QWORD *)v50 )
          goto LABEL_46;
        if ( v70 != -4096 )
        {
          v116 = (__int64 *)(v55 + 16LL * (v114 & (unsigned int)v132));
          v117 = 1;
          v50 = 0;
          while ( 1 )
          {
            if ( v70 == -8192 && !v50 )
              v50 = (__int64)v116;
            v115 = v114 & (v117 + v115);
            LODWORD(v132) = v117 + 1;
            v116 = (__int64 *)(v55 + 16LL * v115);
            v70 = *v116;
            if ( v61 == *v116 )
            {
              v50 = v55 + 16LL * v115;
              goto LABEL_46;
            }
            if ( v70 == -4096 )
              break;
            v117 = (int)v132;
          }
          if ( v50 )
          {
LABEL_71:
            v70 = *(_QWORD *)v50;
LABEL_46:
            *((_DWORD *)a1 + 4) = v69;
            if ( v70 != -4096 )
              --*((_DWORD *)a1 + 5);
            goto LABEL_48;
          }
          v50 = v55 + 16LL * v115;
        }
LABEL_140:
        *((_DWORD *)a1 + 4) = v69;
LABEL_48:
        *(_DWORD *)(v50 + 8) = v60;
        v71 = v128;
        ++v51;
        v53 = (__int64 *)((char *)v53 + 4);
        *(_BYTE *)(v50 + 12) = (_BYTE)v65;
        v72 = *((unsigned int *)a1 + 6);
        *(_QWORD *)v50 = v61;
        sub_CAC3E0(v71, (_QWORD *)v50, (_QWORD *)(16 * v72 + v55), (__int64)v129, 1);
        if ( v130 == (__m128 *)v53 )
        {
LABEL_49:
          v4 = (__int64)v131;
          goto LABEL_50;
        }
      }
    }
    v132 = (__int64 **)v65;
    sub_CAD110((__int64)v129, 2 * v64, v55, v64, v56, v63);
    v66 = *((_DWORD *)a1 + 6);
    if ( !v66 )
      goto LABEL_178;
    v67 = v66 - 1;
    v55 = a1[1];
    v68 = v67 & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
    v69 = *((_DWORD *)a1 + 4) + 1;
    LOBYTE(v65) = (_BYTE)v132;
    v50 = v55 + 16LL * v68;
    v70 = *(_QWORD *)v50;
    if ( v61 == *(_QWORD *)v50 )
      goto LABEL_46;
    if ( v70 != -4096 )
    {
      v126 = (__int64 *)(v55 + 16LL * (v67 & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4))));
      v127 = 1;
      v50 = 0;
      while ( 1 )
      {
        if ( !v50 && v70 == -8192 )
          v50 = (__int64)v126;
        v68 = v67 & (v127 + v68);
        LODWORD(v132) = v127 + 1;
        v126 = (__int64 *)(v55 + 16LL * v68);
        v70 = *v126;
        if ( v61 == *v126 )
        {
          v50 = v55 + 16LL * v68;
          goto LABEL_46;
        }
        if ( v70 == -4096 )
          break;
        v127 = (int)v132;
      }
      if ( v50 )
        goto LABEL_71;
      v50 = v55 + 16LL * v68;
    }
    goto LABEL_140;
  }
LABEL_50:
  *(_BYTE *)(v4 + 504) |= 0x20u;
  if ( *(_DWORD *)(v4 + 8) != 3 && (*((_BYTE *)v5 + 84) & 3) == 0 )
  {
    if ( (*((_BYTE *)v5 + 29) & 1) == 0 )
      goto LABEL_66;
    v82 = sub_B8C3D0((__int64)v5, v50, v52, (__int64)v54, v12, v13);
    v83 = (__int64 *)*v82;
    v84 = *v82 + 8LL * *((unsigned int *)v82 + 2);
    if ( *v82 >= v84 )
    {
      if ( v83 == (__int64 *)v84 )
        goto LABEL_66;
      if ( *(_WORD *)(*(_QWORD *)v84 + 36LL) != 247 )
      {
        v122 = (__int64 *)(v84 + 8);
        while ( v83 != v122 )
        {
          v123 = *v122++;
          if ( *(_WORD *)(v123 + 36) == 247 )
            goto LABEL_52;
        }
        goto LABEL_66;
      }
    }
    else
    {
      v85 = *v82;
      while ( *(_WORD *)(*(_QWORD *)v85 + 36LL) != 247 )
      {
        v85 += 8LL;
        if ( v84 == v85 )
          goto LABEL_66;
      }
      if ( v84 == v85 )
        goto LABEL_66;
    }
  }
LABEL_52:
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 16LL))(a1, v5) )
  {
LABEL_66:
    *(_BYTE *)(v4 + 504) |= 2u;
    return;
  }
  v76 = a1[8];
  v140 = 0x200000000LL;
  v77 = *((unsigned int *)a1 + 18);
  v139 = v128 + 1;
  v78 = v76 + 144 * v77;
  if ( v76 != v78 )
  {
    v131 = a1;
    v73 = 2;
    v79 = 0;
    v134 = &v138;
    v80 = v76;
    v129 = v128 + 1;
    v132 = (__int64 **)v5;
    v133 = (_QWORD *)v4;
    while ( 1 )
    {
      if ( (unsigned int)v73 <= v79 )
      {
        v130 = (__m128 *)sub_2237400(v128, v129, 0, 144, v134);
        v103 = (__int64 *)&v130[9 * (unsigned int)v140];
        v103[1] = 0x800000000LL;
        v104 = *(_DWORD *)(v80 + 8);
        *v103 = (__int64)(v103 + 2);
        if ( v104 )
          sub_C9F300((char ***)v103, (char ***)v80);
        v74 = (unsigned __int64 *)v139;
        v105 = 9LL * (unsigned int)v140;
        v106 = (void **)&v139[v105];
        if ( v139 != &v139[v105] )
        {
          v107 = v139;
          v108 = (__int64 *)v130;
          do
          {
            *((_DWORD *)v108 + 2) = 0;
            *((_DWORD *)v108 + 3) = 8;
            v109 = v107->m128_i32[2];
            *v108 = (__int64)(v108 + 2);
            if ( v109 )
              sub_C9F300((char ***)v108, (char ***)v107);
            v107 += 9;
            v108 += 18;
          }
          while ( v106 != (void **)v107 );
          v110 = v139;
          v111 = 9LL * (unsigned int)v140;
          v106 = (void **)&v139[v111];
          if ( v139 != &v139[v111] )
          {
            do
            {
              while ( 1 )
              {
                v106 -= 18;
                if ( *v106 == v106 + 2 )
                  break;
                free(*v106);
                if ( v106 == (void **)v110 )
                  goto LABEL_97;
              }
            }
            while ( v106 != (void **)v110 );
LABEL_97:
            v106 = (void **)v139;
          }
        }
        v112 = v138.m128i_i32[0];
        if ( v106 != (void **)v129 )
        {
          v135 = v138.m128i_i64[0];
          free(v106);
          v112 = v135;
        }
        HIDWORD(v140) = v112;
        v73 = (__int64)v130;
        v79 = v140 + 1;
        v139 = v130;
        LODWORD(v140) = v140 + 1;
      }
      else
      {
        v81 = (char ***)&v139[9 * v79];
        v81[1] = (char **)0x800000000LL;
        *v81 = (char **)(v81 + 2);
        if ( *(_DWORD *)(v80 + 8) )
          sub_C9F300(v81, (char ***)v80);
        v79 = v140 + 1;
        LODWORD(v140) = v140 + 1;
      }
      v80 += 144;
      if ( v80 == v78 )
        break;
      v73 = HIDWORD(v140);
    }
    a1 = v131;
    v5 = v132;
    v4 = (__int64)v133;
  }
  v87 = *(__int64 (__fastcall **)(__int64))(*v5 + 72LL);
  if ( v87 == sub_9A8F10 )
    v88 = sub_B7F5F0(v5, &v138, (__int64)sub_9A8F10, v73, (__int64)v74, v75);
  else
    v88 = v87((__int64)v5);
  v89 = *((_DWORD *)a1 + 97);
  *(_QWORD *)(v4 + 48) = 0;
  v90 = *(void **)(v4 + 32);
  *(_OWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 24) = v89;
  *(_QWORD *)(v4 + 32) = a1[55];
  v91 = a1[56];
  a1[55] = 0;
  v92 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 40) = v91;
  v93 = a1[57];
  a1[56] = v92;
  v94 = *(_QWORD *)(v4 + 48);
  *(_QWORD *)(v4 + 48) = v93;
  a1[57] = v94;
  if ( v90 )
    operator delete(v90);
  *(_QWORD *)(v4 + 72) = 0;
  v95 = *(void **)(v4 + 56);
  *(_OWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 56) = a1[58];
  v96 = a1[59];
  a1[58] = 0;
  v97 = *(_QWORD *)(v4 + 64);
  *(_QWORD *)(v4 + 64) = v96;
  v98 = a1[60];
  a1[59] = v97;
  v99 = *(_QWORD *)(v4 + 72);
  *(_QWORD *)(v4 + 72) = v98;
  a1[60] = v99;
  if ( v95 )
    operator delete(v95);
  sub_C9F420(v4 + 80, (__int64)v128);
  v100 = v88;
  v101 = v139;
  *(_BYTE *)(v4 + 504) = (16 * (v100 & 1)) | *(_BYTE *)(v4 + 504) & 0xEC | 3;
  v102 = (void **)&v101[9 * (unsigned int)v140];
  if ( v101 != (__m128 *)v102 )
  {
    do
    {
      while ( 1 )
      {
        v102 -= 18;
        if ( *v102 == v102 + 2 )
          break;
        free(*v102);
        if ( v101 == (__m128 *)v102 )
          goto LABEL_82;
      }
    }
    while ( v101 != (__m128 *)v102 );
LABEL_82:
    v102 = (void **)v139;
  }
  if ( v102 != (void **)&v128[1] )
    free(v102);
}
