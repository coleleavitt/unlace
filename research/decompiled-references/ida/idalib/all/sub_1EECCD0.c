unsigned __int64 __fastcall sub_1EECCD0(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // r13
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  int v10; // r13d
  __int64 v11; // rax
  unsigned __int64 result; // rax
  void *v13; // rdi
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // r12d
  bool v22; // zf
  int v23; // r13d
  int v24; // eax
  _BYTE *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r13d
  int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rcx
  int v42; // r13d
  __int64 v43; // r15
  int v44; // r13d
  int v45; // r13d
  int v46; // r12d
  __int64 v47; // rax
  __int64 v48; // r9
  int v49; // eax
  _BYTE *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // r13d
  int v54; // r15d
  __int64 v55; // rax
  __int64 v56; // r8
  int v57; // r13d
  int v58; // r13d
  int v59; // r12d
  __int64 v60; // rax
  __int64 v61; // r9
  int v62; // r13d
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __m128i si128; // xmm0
  __int64 v67; // rdi
  __int64 v68; // rax
  _BYTE *v69; // rcx
  _BYTE *v70; // rsi
  int v71; // r13d
  int v72; // r15d
  unsigned __int128 i; // kr00_16
  int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // rax
  size_t v79; // r8
  __int64 v80; // rdi
  int v81; // r13d
  unsigned int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rdx
  _BYTE *v85; // r8
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // r15d
  int v89; // ebx
  char v90; // r14
  unsigned int v91; // eax
  __int64 v92; // rcx
  char *v93; // rcx
  __int64 v94; // r9
  __int64 v95; // r13
  int v96; // r13d
  int v97; // r13d
  int v98; // r12d
  __int64 v99; // rax
  __int64 v100; // r9
  int v101; // r13d
  int v102; // r13d
  int v103; // r13d
  int v104; // r12d
  __int64 v105; // rax
  __int64 v106; // r9
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // r9
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // r15
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // r15
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // r15
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // r15
  int v122; // eax
  __int64 v123; // rdi
  int v124; // r13d
  __int64 v125; // rax
  char v126; // r12
  __int64 v127; // rax
  int v128; // r12d
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // r9
  int v132; // eax
  __int64 v133; // r9
  __int64 v134; // rsi
  __int64 v135; // rcx
  int v136; // r12d
  int v137; // eax
  __int64 v138; // r9
  __int64 v139; // rsi
  __int64 v140; // rcx
  int v141; // r12d
  int v142; // r13d
  unsigned __int64 v143; // rax
  unsigned __int64 *v144; // rcx
  __int64 v145; // rdx
  int v146; // r13d
  int v147; // r15d
  __int64 v148; // rax
  _BYTE *v149; // rcx
  __int64 v150; // rax
  __int64 v151; // r9
  __int64 v152; // rax
  unsigned int v153; // [rsp+8h] [rbp-E0h]
  int v154[2]; // [rsp+8h] [rbp-E0h]
  int v155; // [rsp+8h] [rbp-E0h]
  int v156; // [rsp+8h] [rbp-E0h]
  int v157; // [rsp+8h] [rbp-E0h]
  unsigned int v158; // [rsp+8h] [rbp-E0h]
  int v159; // [rsp+8h] [rbp-E0h]
  int v160; // [rsp+8h] [rbp-E0h]
  int v161; // [rsp+8h] [rbp-E0h]
  int v162; // [rsp+8h] [rbp-E0h]
  int v163; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v164; // [rsp+10h] [rbp-D8h]
  unsigned int v165; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v166; // [rsp+20h] [rbp-C8h]
  char v167; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v168; // [rsp+28h] [rbp-C0h]
  _BYTE *v169; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v170; // [rsp+38h] [rbp-B0h]
  _BYTE v171[40]; // [rsp+48h] [rbp-A0h] BYREF
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __int64 v173; // [rsp+78h] [rbp-70h]
  _BYTE v174[104]; // [rsp+80h] [rbp-68h] BYREF

  v1 = a1;
  v2 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v2 + 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
  v4 = sub_1EE7490(a1);
  v6 = sub_1EE7490(a1);
  switch ( (char)v3 )
  {
    case 0:
      v132 = sub_1EE7490(a1);
      v134 = *(unsigned int *)(a1 + 24);
      v135 = 0;
      v136 = v132;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v134) == 0;
      *(_DWORD *)(a1 + 24) = v134 + 1;
      if ( !v22 )
        v135 = sub_1F61940(*(_QWORD *)(a1 + 8));
      return sub_EB30B0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v136, v135, v6, v133);
    case 1:
      v142 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB43E0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v142, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr != v174 )
        goto LABEL_6;
      return result;
    case 2:
      return sub_EB27F0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v6, v5, v7, v8);
    case 3:
      v128 = sub_1EE7490(a1);
      v129 = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v129 + 1;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v129) )
      {
        v130 = sub_1F6A0A0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        return sub_EB2C30(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v128, v130, v6, v131);
      }
      else
      {
        v150 = sub_1EE3540(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (_QWORD *)(a1 + 32), (_DWORD *)(a1 + 24));
        return sub_EB2CD0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v128, v150, v6, v151);
      }
    case 4:
      v122 = sub_1EE7490(a1);
      v123 = *(_QWORD *)(a1 + 8);
      v124 = v122;
      v125 = *(unsigned int *)(v1 + 24);
      *(_DWORD *)(v1 + 24) = v125 + 1;
      v126 = *(_QWORD *)(*(_QWORD *)(v1 + 32) + 8 * v125) != 0;
      v127 = sub_1F61940(v123);
      return sub_EB3320(*(_QWORD **)(*(_QWORD *)(v1 + 8) + 144LL), v4, v124, v126, v127, v6);
    case 5:
    case 6:
    case 7:
      v119 = sub_1EE7490(a1);
      v120 = *(unsigned int *)(a1 + 24);
      v162 = v119;
      *(_DWORD *)(a1 + 24) = v120 + 1;
      v121 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v120);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB47D0(
                 *(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL),
                 v3,
                 v4,
                 v162,
                 (unsigned int)v121,
                 v6,
                 ptr,
                 (unsigned int)v173);
      goto LABEL_5;
    case 8:
    case 9:
    case 10:
      v116 = sub_1EE7490(a1);
      v117 = *(unsigned int *)(a1 + 24);
      v161 = v116;
      *(_DWORD *)(a1 + 24) = v117 + 1;
      v118 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v117);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB46D0(
                 *(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL),
                 v3,
                 v4,
                 v161,
                 (unsigned int)v118,
                 v6,
                 ptr,
                 (unsigned int)v173);
      goto LABEL_5;
    case 11:
    case 12:
    case 13:
      v113 = sub_1EE7490(a1);
      v114 = *(unsigned int *)(a1 + 24);
      v160 = v113;
      *(_DWORD *)(a1 + 24) = v114 + 1;
      v115 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v114);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB48D0(
                 *(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL),
                 v3,
                 v4,
                 v160,
                 (unsigned int)v115,
                 v6,
                 ptr,
                 (unsigned int)v173);
      goto LABEL_5;
    case 14:
    case 15:
    case 16:
      v110 = sub_1EE7490(a1);
      v111 = *(unsigned int *)(a1 + 24);
      v159 = v110;
      *(_DWORD *)(a1 + 24) = v111 + 1;
      v112 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v111);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB49D0(
                 *(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL),
                 v3,
                 v4,
                 v159,
                 (unsigned int)v112,
                 v6,
                 ptr,
                 (unsigned int)v173);
      goto LABEL_5;
    case 17:
      v107 = sub_1EE7490(a1);
      v108 = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v108 + 1;
      return sub_EB2AF0(
               *(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL),
               *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v108),
               v4,
               v107,
               v6,
               v109);
    case 18:
      v104 = sub_1EE7490(a1);
      v105 = sub_1F61940(*(_QWORD *)(a1 + 8));
      return sub_EB3250(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v104, v105, v6, v106);
    case 19:
      v103 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB4020(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v103, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 20:
      v102 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB3F30(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v102, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 21:
      v101 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB3C60(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v101, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 22:
      v98 = sub_1EE7490(a1);
      v99 = sub_1F61940(*(_QWORD *)(a1 + 8));
      return sub_EB3180(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v98, v99, v6, v100);
    case 23:
      v97 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB4200(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v97, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 24:
      v96 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB3E40(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v96, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 25:
    case 26:
      v82 = sub_1EE7490(a1);
      v83 = *(unsigned int *)(a1 + 24);
      v84 = *(_QWORD *)(a1 + 32);
      v85 = v174;
      v158 = v82;
      v173 = 0x300000000LL;
      v86 = (unsigned int)(v83 + 1);
      v87 = *(_QWORD *)(v84 + 8 * v83);
      ptr = v174;
      *(_DWORD *)(a1 + 24) = v86;
      if ( (_DWORD)v87 )
      {
        v165 = v4;
        v88 = 0;
        v89 = v87;
        v90 = v3;
        while ( 1 )
        {
          v95 = 0;
          v22 = *(_QWORD *)(v84 + 8 * v86) == 0;
          *(_DWORD *)(a1 + 24) = v86 + 1;
          if ( !v22 )
            v95 = sub_1EE3540(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (_QWORD *)(a1 + 32), (_DWORD *)(a1 + 24));
          v91 = sub_1EE7490(a1);
          v92 = (unsigned int)v173;
          if ( (unsigned int)v173 >= (unsigned __int64)HIDWORD(v173) )
          {
            v143 = v166 & 0xFFFFFFFF00000000LL | v91;
            v166 = v143;
            if ( HIDWORD(v173) < (unsigned __int64)(unsigned int)v173 + 1 )
            {
              v168 = v143;
              sub_2237220(&ptr, v174, (unsigned int)v173 + 1LL, 16);
              v92 = (unsigned int)v173;
              v143 = v168;
            }
            v144 = (unsigned __int64 *)((char *)ptr + 16 * v92);
            *v144 = v143;
            v144[1] = v95;
            v94 = (unsigned int)(v173 + 1);
            LODWORD(v173) = v173 + 1;
          }
          else
          {
            v93 = (char *)ptr + 16 * (unsigned int)v173;
            *(_DWORD *)v93 = v91;
            *((_QWORD *)v93 + 1) = v95;
            v94 = (unsigned int)(v173 + 1);
            LODWORD(v173) = v173 + 1;
          }
          if ( v89 == ++v88 )
            break;
          v86 = *(unsigned int *)(a1 + 24);
          v84 = *(_QWORD *)(a1 + 32);
        }
        LOBYTE(v3) = v90;
        v4 = v165;
        v1 = a1;
        v85 = ptr;
      }
      else
      {
        v94 = 0;
      }
      result = sub_EB45C0(*(_QWORD **)(*(_QWORD *)(v1 + 8) + 144LL), v3, v4, v158, (__int64)v85, v94, v6);
      goto LABEL_5;
    case 27:
      return sub_EB29F0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v6, v5, v7, v8);
    case 28:
      v81 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB42F0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v81, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 29:
      v63 = sub_1EE7490(a1);
      v64 = *(unsigned int *)(a1 + 24);
      v65 = *(_QWORD *)(a1 + 32);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
      v163 = v63;
      v67 = *(_QWORD *)(v65 + 8 * v64);
      v68 = (unsigned int)(v64 + 1);
      v69 = v171;
      v70 = v174;
      *(_DWORD *)(v1 + 24) = v68;
      v71 = v67;
      v169 = v171;
      v170 = si128;
      ptr = v174;
      v173 = 0x600000000LL;
      if ( (_DWORD)v67 )
      {
        v72 = 0;
        for ( i = __PAIR128__(40, 0); ; i = (unsigned __int128)v170 )
        {
          v74 = v68 + 1;
          v75 = *(_QWORD *)(v65 + 8 * v68);
          *(_DWORD *)(v1 + 24) = v74;
          if ( (unsigned __int64)(i + 1) > *((_QWORD *)&i + 1) )
          {
            v167 = v75;
            sub_2236E10(&v169, v171, i + 1, 1);
            v169[v170.m128i_i64[0]] = v167;
          }
          else
          {
            v169[i] = v75;
          }
          v76 = *(_QWORD *)(v1 + 16);
          v77 = *(_QWORD *)(v1 + 8);
          ++v72;
          ++v170.m128i_i64[0];
          v78 = sub_1F6A0A0(v77, v76);
          sub_14B7B40((__int64)&ptr, v78);
          if ( v71 == v72 )
            break;
          v68 = *(unsigned int *)(v1 + 24);
          v65 = *(_QWORD *)(v1 + 32);
        }
        v69 = v169;
        v79 = v170.m128i_i64[0];
        v70 = ptr;
        v80 = (unsigned int)v173;
      }
      else
      {
        v80 = 0;
        v79 = 0;
      }
      result = sub_EB3870(*(_QWORD **)(*(_QWORD *)(v1 + 8) + 144LL), v4, v163, v69, v79, v6, v70, v80);
      if ( ptr != v174 )
      {
        v164 = result;
        free(ptr);
        result = v164;
      }
      v13 = v169;
      if ( v169 == v171 )
        return result;
      goto LABEL_6;
    case 30:
      v62 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB3B70(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v62, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 31:
      v59 = sub_1EE7490(a1);
      v60 = sub_1F61940(*(_QWORD *)(a1 + 8));
      return sub_EB2B90(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v59, v60, v6, v61);
    case 32:
      return sub_EB2A70(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v6, v5, v7, v8);
    case 33:
      return sub_EB2970(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v6, v5, v7, v8);
    case 34:
      v58 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB3D50(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v58, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 35:
      v57 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB3990(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v57, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 36:
      return sub_EB28F0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v6, v5, v7, v8);
    case 37:
      v49 = sub_1EE7490(a1);
      v50 = v174;
      v157 = v49;
      v51 = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v51 + 1;
      v52 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v51);
      ptr = v174;
      v173 = 0x600000000LL;
      v53 = v52;
      if ( (_DWORD)v52 )
      {
        v54 = 0;
        do
        {
          ++v54;
          v55 = sub_1F61940(*(_QWORD *)(a1 + 8));
          sub_14B7B40((__int64)&ptr, v55);
        }
        while ( v53 != v54 );
        v50 = ptr;
        v56 = (unsigned int)v173;
      }
      else
      {
        v56 = 0;
      }
      result = sub_EB3670(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v157, v50, v56, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 38:
      v46 = sub_1EE7490(a1);
      v47 = sub_1F61940(*(_QWORD *)(a1 + 8));
      return sub_EB2F10(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v46, v47, v6, v48);
    case 39:
      v45 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB3A80(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v45, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 40:
      v44 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB44D0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v44, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 41:
      v40 = sub_1EE7490(a1);
      v41 = *(unsigned int *)(a1 + 24);
      v42 = v40;
      *(_DWORD *)(a1 + 24) = v41 + 1;
      v43 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v41);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB2700(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v42, v43, ptr, (unsigned int)v173, v6);
      goto LABEL_5;
    case 42:
      v32 = sub_1EE7490(a1);
      v34 = *(unsigned int *)(a1 + 24);
      v35 = *(_QWORD *)(a1 + 32);
      v156 = v32;
      v36 = *(_QWORD *)(v35 + 8 * v34);
      v37 = (unsigned int)(v34 + 1);
      *(_DWORD *)(a1 + 24) = v37;
      *(_DWORD *)(a1 + 24) = v34 + 2;
      if ( v36 )
      {
        v38 = 0;
        v39 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v35 + 8 * v37) )
        {
          v152 = sub_1F61940(v39);
          v39 = *(_QWORD *)(v1 + 8);
          v38 = v152;
        }
        return sub_EB3400(*(_QWORD **)(v39 + 144), v4, v156, v38, v6, v33);
      }
      else
      {
        v145 = *(_QWORD *)(v35 + 8 * v37);
        v173 = 0x600000000LL;
        v146 = v145;
        ptr = v174;
        if ( (_DWORD)v145 )
        {
          v147 = 0;
          do
          {
            ++v147;
            v148 = sub_1F61940(*(_QWORD *)(a1 + 8));
            sub_14B7B40((__int64)&ptr, v148);
          }
          while ( v146 != v147 );
          v149 = ptr;
          v36 = (unsigned int)v173;
        }
        else
        {
          v149 = v174;
        }
        result = sub_EB34B0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v156, v149, v36, v6);
        v13 = ptr;
        if ( ptr != v174 )
        {
LABEL_6:
          *(_QWORD *)v154 = result;
          free(v13);
          return *(_QWORD *)v154;
        }
      }
      return result;
    case 43:
      return sub_EB2870(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v6, v5, v7, v8);
    case 44:
      v24 = sub_1EE7490(a1);
      v25 = v174;
      v155 = v24;
      v26 = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v26 + 1;
      v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v26);
      ptr = v174;
      v173 = 0x600000000LL;
      v28 = v27;
      if ( (_DWORD)v27 )
      {
        v29 = 0;
        do
        {
          ++v29;
          v30 = sub_1F61940(*(_QWORD *)(a1 + 8));
          sub_14B7B40((__int64)&ptr, v30);
        }
        while ( v28 != v29 );
        v25 = ptr;
        v31 = (unsigned int)v173;
      }
      else
      {
        v31 = 0;
      }
      result = sub_EB3580(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v155, v25, v31, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 45:
      v23 = sub_1EE7490(a1);
      sub_1EACAA0((__int64 *)&ptr, a1);
      result = sub_EB4110(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v23, ptr, (unsigned int)v173, v6);
      v13 = ptr;
      if ( ptr == v174 )
        return result;
      goto LABEL_6;
    case 46:
      v17 = sub_1EE7490(a1);
      v19 = *(unsigned int *)(a1 + 24);
      v20 = 0;
      v21 = v17;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19) == 0;
      *(_DWORD *)(a1 + 24) = v19 + 1;
      if ( !v22 )
        v20 = sub_1F61940(*(_QWORD *)(a1 + 8));
      return sub_EB2E40(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v21, v20, v6, v18);
    case 47:
      v14 = sub_1EE7490(a1);
      v15 = sub_1F61940(*(_QWORD *)(a1 + 8));
      return sub_EB2FE0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v14, v15, v6, v16);
    case 48:
      v9 = 0;
      v10 = sub_1EE7490(a1);
      v11 = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v11 + 1;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v11) )
        v9 = sub_1F61940(*(_QWORD *)(a1 + 8));
      v153 = sub_1EE7490(a1);
      sub_1EACB60((__int64 *)&ptr, a1);
      result = sub_EB3760(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v10, v9, v153, v6, ptr, (unsigned int)v173);
LABEL_5:
      v13 = ptr;
      if ( ptr != v174 )
        goto LABEL_6;
      return result;
    case 49:
      v137 = sub_1EE7490(a1);
      v139 = *(unsigned int *)(a1 + 24);
      v140 = 0;
      v141 = v137;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v139) == 0;
      *(_DWORD *)(a1 + 24) = v139 + 1;
      if ( !v22 )
        v140 = sub_1F61940(*(_QWORD *)(a1 + 8));
      return sub_EB2D70(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v4, v141, v140, v6, v138);
  }
}
