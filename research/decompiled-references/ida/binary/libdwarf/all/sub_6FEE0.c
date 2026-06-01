__int64 __fastcall sub_6FEE0(
        _BYTE *a1,
        __int64 a2,
        _DWORD *a3,
        size_t a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v13; // rax
  unsigned __int8 *v14; // rbp
  unsigned __int64 v15; // r14
  unsigned __int8 *v16; // r11
  unsigned int v17; // edx
  unsigned __int64 v18; // rdi
  unsigned int v19; // esi
  int v20; // r9d
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // esi
  unsigned __int8 *v25; // rdi
  unsigned int v26; // esi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 *v29; // rdx
  unsigned int v30; // edi
  __int64 *v31; // r8
  __int64 v32; // rdx
  _BYTE *v33; // rdi
  unsigned __int64 v34; // rdx
  unsigned __int16 *v35; // r14
  unsigned __int64 v36; // r9
  int v37; // edx
  char v38; // r15
  int v39; // esi
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int16 *v42; // r14
  int v43; // eax
  __int64 v44; // rcx
  char v45; // r15
  int v46; // esi
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int16 *v49; // r14
  __int64 v50; // rdx
  int v51; // esi
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int16 *v54; // r15
  __int64 v55; // rax
  __int64 v56; // r9
  unsigned __int64 *v57; // r15
  __int64 v58; // r9
  unsigned __int64 v59; // r15
  unsigned __int16 *v60; // rcx
  int v61; // edx
  char v62; // r13
  __int64 v63; // rcx
  unsigned int v64; // esi
  unsigned __int8 *v65; // rdx
  unsigned int v66; // r13d
  unsigned __int16 *v67; // r13
  int v68; // eax
  char v69; // r8
  unsigned int v70; // esi
  _BYTE *v71; // r13
  unsigned int v72; // edi
  unsigned __int64 v74; // rdi
  unsigned __int8 *v75; // r9
  unsigned int v76; // eax
  unsigned __int64 v77; // rdi
  unsigned int v78; // esi
  int v79; // r10d
  unsigned int v80; // edx
  __int64 v81; // rcx
  __int64 v82; // rax
  unsigned int v83; // esi
  unsigned __int8 *v84; // rdi
  unsigned int v85; // esi
  __int64 v86; // rbx
  __int64 v87; // rcx
  __int64 *v88; // rdx
  unsigned int v89; // edi
  __int64 *v90; // r8
  __int64 v91; // rdx
  _BYTE *v92; // rdi
  bool v93; // r11
  unsigned __int64 v94; // rdx
  unsigned __int16 *v95; // r15
  unsigned __int64 v96; // rdx
  int v97; // esi
  char v98; // r14
  int v99; // r10d
  unsigned __int64 v100; // rsi
  __int64 v101; // rax
  unsigned __int16 *v102; // r15
  char v103; // cl
  __int64 v104; // rsi
  int v105; // r14d
  unsigned __int64 v106; // r10
  __int64 v107; // rax
  unsigned __int16 *v108; // r15
  __int64 v109; // r10
  int v110; // ecx
  unsigned __int64 v111; // rax
  __int64 v112; // r14
  unsigned __int16 *v113; // r14
  unsigned __int64 v114; // rdx
  __int64 v115; // rcx
  unsigned __int8 *v116; // r10
  __int64 v117; // r9
  unsigned __int64 v118; // r15
  unsigned __int16 *v119; // rsi
  unsigned __int64 v120; // rax
  int v121; // r11d
  char v122; // r10
  __int64 v123; // rsi
  unsigned int v124; // edx
  unsigned __int8 *v125; // rsi
  unsigned int v126; // r10d
  unsigned __int16 *v127; // r8
  unsigned __int64 v128; // rcx
  int v129; // r11d
  char v130; // r10
  __int64 v131; // r8
  char v132; // r13
  unsigned int v133; // edx
  _BYTE *v134; // r11
  unsigned int v135; // edi
  unsigned __int64 v136; // rdx
  _BYTE *v137; // r10
  unsigned int v138; // edi
  __int64 v139; // rdi
  unsigned int v140; // edi
  __int64 v141; // rdi
  __int64 v142; // rsi
  __int64 v143; // rsi
  bool v144; // [rsp+8h] [rbp-90h]
  unsigned __int64 v145; // [rsp+10h] [rbp-88h]
  _BYTE *v146; // [rsp+18h] [rbp-80h]
  unsigned int v147; // [rsp+28h] [rbp-70h] BYREF
  unsigned int v148; // [rsp+2Ch] [rbp-6Ch] BYREF
  unsigned __int64 v149; // [rsp+30h] [rbp-68h]
  int v150; // [rsp+38h] [rbp-60h]
  unsigned __int64 v151; // [rsp+40h] [rbp-58h]
  unsigned __int8 *v152; // [rsp+48h] [rbp-50h]
  unsigned __int8 *v153; // [rsp+50h] [rbp-48h]
  unsigned __int64 v154; // [rsp+58h] [rbp-40h]

  v7 = -1;
  v154 = __readfsqword(0x28u);
  v148 = 255;
  if ( a7 <= 0x1FF )
    return v7;
  v7 = sub_6F780((void *)a6, &v148, (int *)&v147, a3, a4, 1);
  if ( v7 > 0xFFFFFFFFFFFFFF88LL )
    return v7;
  if ( a5 < v147 || a7 < 4 * ((((1LL << v147) + 2 * (unsigned __int64)(v148 + 1) + 11) >> 2) + (1 << v147) + 2 + 129) )
    return -44;
  v13 = sub_6FC30(
          (int *)(a6 + 512),
          (__int16 *)a6,
          v148,
          v147,
          a6 + 4LL * ((1 << v147) + 1) + 512,
          a7 - (4LL * ((1 << v147) + 1) + 512));
  if ( v13 > 0xFFFFFFFFFFFFFF88LL )
    return v13;
  v14 = (unsigned __int8 *)a3 + v7;
  v15 = a4 - v7;
  v7 = v15;
  v146 = &a1[a2];
  v145 = (unsigned __int64)&a1[a2 - 3];
  if ( *(_WORD *)(a6 + 514) )
  {
    if ( !v15 )
      return -72;
    v75 = v14 + 8;
    v152 = v14;
    v76 = v14[v15 - 1];
    v153 = v14 + 8;
    v136 = *v14;
    v151 = (unsigned __int64)v14;
    v149 = v136;
    switch ( v15 )
    {
      case 1uLL:
        goto LABEL_120;
      case 2uLL:
        goto LABEL_119;
      case 3uLL:
        goto LABEL_118;
      case 4uLL:
        goto LABEL_117;
      case 5uLL:
        goto LABEL_116;
      case 6uLL:
        goto LABEL_115;
      case 7uLL:
        v136 += (unsigned __int64)v14[6] << 48;
LABEL_115:
        v136 += (unsigned __int64)v14[5] << 40;
LABEL_116:
        v136 += (unsigned __int64)v14[4] << 32;
LABEL_117:
        v136 += (unsigned __int64)v14[3] << 24;
LABEL_118:
        v136 += (unsigned __int64)v14[2] << 16;
LABEL_119:
        v149 = ((unsigned __int64)v14[1] << 8) + v136;
LABEL_120:
        if ( !(_BYTE)v76 )
          return -20;
        v77 = v149;
        v78 = __lzcnt(v76) - 8 * v15 + 41;
        goto LABEL_67;
      default:
        v77 = *(_QWORD *)&v14[v15 - 8];
        v151 = (unsigned __int64)&v14[v15 - 8];
        v149 = v77;
        if ( !(_BYTE)v76 )
          return -1;
        v78 = __lzcnt((unsigned __int8)v76) - 23;
        if ( v15 > 0xFFFFFFFFFFFFFF88LL )
          return v7;
LABEL_67:
        v79 = *(unsigned __int16 *)(a6 + 512);
        v80 = v79 + v78;
        v81 = ~(-1LL << v79);
        v82 = v81 & (v77 >> (64 - ((unsigned __int8)v79 + (unsigned __int8)v78)));
        if ( v79 + v78 > 0x40 )
        {
          v86 = a6 + 516;
          v150 = v79 + v80;
          v87 = (v77 >> (64 - ((unsigned __int8)v79 + (unsigned __int8)v80))) & v81;
          v92 = a1;
LABEL_125:
          v90 = &qword_AA538;
LABEL_88:
          v118 = (unsigned __int64)(v146 - 2);
          if ( v92 > v146 - 2 )
            return -70;
          do
          {
            v119 = (unsigned __int16 *)(v86 + 4 * v82);
            v120 = v149 << v150;
            v121 = *((unsigned __int8 *)v119 + 3);
            v122 = *((_BYTE *)v119 + 2);
            v123 = *v119;
            v124 = v121 + v150;
            *v92 = v122;
            v150 = v124;
            v82 = v123 + (v120 >> -(char)v121);
            if ( v124 > 0x40 )
            {
              v137 = v92 + 2;
              v92[1] = *(_BYTE *)(v86 + 4 * v87 + 2);
              return v137 - a1;
            }
            if ( v90 >= (__int64 *)v75 )
            {
              v150 = v124 & 7;
              v125 = (unsigned __int8 *)v90 - (v124 >> 3);
              v149 = *(_QWORD *)v125;
            }
            else
            {
              v125 = v14;
              if ( v90 != (__int64 *)v14 )
              {
                v126 = v124 >> 3;
                v125 = (unsigned __int8 *)v90 - (v124 >> 3);
                if ( v125 < v14 )
                {
                  v126 = (_DWORD)v90 - (_DWORD)v14;
                  v125 = (unsigned __int8 *)v90 - (unsigned int)((_DWORD)v90 - (_DWORD)v14);
                }
                v150 = v124 - 8 * v126;
                v149 = *(_QWORD *)v125;
              }
            }
            if ( v118 < (unsigned __int64)(v92 + 1) )
              break;
            v127 = (unsigned __int16 *)(v86 + 4 * v87);
            v128 = v149 << v150;
            v129 = *((unsigned __int8 *)v127 + 3);
            v130 = *((_BYTE *)v127 + 2);
            v131 = *v127;
            v132 = v129;
            v133 = v129 + v150;
            v134 = v92 + 2;
            v150 = v133;
            v92[1] = v130;
            v87 = v131 + (v128 >> -v132);
            if ( v133 > 0x40 )
            {
              v137 = v92 + 3;
              v92[2] = *(_BYTE *)(v86 + 4 * v82 + 2);
              return v137 - a1;
            }
            if ( v125 >= v75 )
            {
              v150 = v133 & 7;
              v90 = (__int64 *)&v125[-(v133 >> 3)];
              v149 = *v90;
            }
            else
            {
              v90 = (__int64 *)v14;
              if ( v125 != v14 )
              {
                v135 = v133 >> 3;
                v90 = (__int64 *)&v125[-(v133 >> 3)];
                if ( v90 < (__int64 *)v14 )
                {
                  v135 = (_DWORD)v125 - (_DWORD)v14;
                  v90 = (__int64 *)&v125[-((_DWORD)v125 - (_DWORD)v14)];
                }
                v150 = v133 - 8 * v135;
                v149 = *v90;
              }
            }
            v92 = v134;
          }
          while ( (unsigned __int64)v134 <= v118 );
          return -70;
        }
        if ( (unsigned __int64)v75 <= v151 )
        {
          v80 &= 7u;
          v143 = (v79 + v78) >> 3;
          v77 = *(_QWORD *)(v151 - v143);
          v151 -= v143;
          v149 = v77;
        }
        else if ( v14 != (unsigned __int8 *)v151 )
        {
          v83 = v80 >> 3;
          v84 = (unsigned __int8 *)(v151 - (v80 >> 3));
          if ( v14 > v84 )
          {
            v83 = v151 - (_DWORD)v14;
            v84 = (unsigned __int8 *)(v151 - (unsigned int)(v151 - (_DWORD)v14));
          }
          v151 = (unsigned __int64)v84;
          v77 = *(_QWORD *)v84;
          v80 -= 8 * v83;
          v149 = v77;
        }
        v85 = v79 + v80;
        v86 = a6 + 516;
        v150 = v79 + v80;
        v87 = (v77 >> -(char)(v79 + v80)) & v81;
        if ( v79 + v80 > 0x40 )
          goto LABEL_140;
        v88 = (__int64 *)v151;
        if ( (unsigned __int64)v75 <= v151 )
        {
          v140 = v85;
          v85 &= 7u;
          v150 = v85;
          v88 = (__int64 *)(v151 - (v140 >> 3));
          v141 = *v88;
          v151 = (unsigned __int64)v88;
          v149 = v141;
        }
        else if ( v14 != (unsigned __int8 *)v151 )
        {
          v89 = v85 >> 3;
          v90 = (__int64 *)(v151 - (v85 >> 3));
          if ( v14 > (unsigned __int8 *)v90 )
          {
            v89 = v151 - (_DWORD)v14;
            v90 = (__int64 *)(v151 - (unsigned int)(v151 - (_DWORD)v14));
          }
          v91 = *v90;
          v151 = (unsigned __int64)v90;
          v85 -= 8 * v89;
          v150 = v85;
          v149 = v91;
          if ( v85 <= 0x40 )
            goto LABEL_79;
LABEL_140:
          v92 = a1;
          goto LABEL_125;
        }
        v90 = v88;
LABEL_79:
        v92 = a1;
        v93 = 0;
        while ( 1 )
        {
          if ( v90 >= (__int64 *)v75 )
          {
            v150 = v85 & 7;
            v90 = (__int64 *)((char *)v90 - (v85 >> 3));
            v93 = (unsigned __int64)v92 < v145;
            v149 = *v90;
          }
          else
          {
            if ( v14 == (unsigned __int8 *)v90 )
            {
              if ( !v93 )
                v90 = (__int64 *)v151;
              goto LABEL_87;
            }
            v116 = (unsigned __int8 *)v90 - (v85 >> 3);
            if ( v14 > v116 )
            {
              v117 = (unsigned int)((_DWORD)v90 - (_DWORD)v14);
              v90 = (__int64 *)((char *)v90 - v117);
              v150 = v85 - 8 * v117;
              v149 = *v90;
LABEL_87:
              v75 = v153;
              v14 = v152;
              goto LABEL_88;
            }
            v90 = (__int64 *)((char *)v90 - (v85 >> 3));
            v93 = (unsigned __int64)v92 < v145;
            v94 = *(_QWORD *)v116;
            v150 = v85 - 8 * (v85 >> 3);
            v149 = v94;
          }
          if ( !v93 )
            goto LABEL_87;
          v95 = (unsigned __int16 *)(v86 + 4 * v82);
          v96 = v149;
          v92 += 4;
          v97 = *((unsigned __int8 *)v95 + 3);
          v98 = *((_BYTE *)v95 + 2);
          v99 = v97 + v150;
          v100 = v149 << v150 >> -(char)v97;
          v101 = *v95;
          v102 = (unsigned __int16 *)(v86 + 4 * v87);
          *(v92 - 4) = v98;
          v103 = *((_BYTE *)v102 + 2);
          v104 = v101 + v100;
          LODWORD(v101) = *((unsigned __int8 *)v102 + 3);
          v105 = v101 + v99;
          v106 = v96 << v99 >> -(char)v101;
          v107 = *v102;
          v108 = (unsigned __int16 *)(v86 + 4 * v104);
          *(v92 - 3) = v103;
          v109 = v107 + v106;
          LODWORD(v107) = *((unsigned __int8 *)v108 + 3);
          v110 = v107 + v105;
          v111 = v96 << v105 >> -(char)v107;
          v112 = *v108;
          *(v92 - 2) = *((_BYTE *)v108 + 2);
          v82 = v112 + v111;
          v113 = (unsigned __int16 *)(v86 + 4 * v109);
          LODWORD(v108) = *((unsigned __int8 *)v113 + 3);
          LOBYTE(v109) = *((_BYTE *)v113 + 2);
          v85 = (_DWORD)v108 + v110;
          v114 = v96 << v110 >> -(char)v108;
          v115 = *v113;
          v150 = v85;
          *(v92 - 1) = v109;
          v87 = v114 + v115;
          if ( v85 > 0x40 )
          {
            v75 = v153;
            v14 = v152;
            goto LABEL_125;
          }
        }
    }
  }
  if ( !v15 )
    return -72;
  v16 = v14 + 8;
  v152 = v14;
  v17 = v14[v15 - 1];
  v153 = v14 + 8;
  v74 = *v14;
  v151 = (unsigned __int64)v14;
  v149 = v74;
  switch ( v15 )
  {
    case 1uLL:
      goto LABEL_58;
    case 2uLL:
      goto LABEL_57;
    case 3uLL:
      goto LABEL_56;
    case 4uLL:
      goto LABEL_55;
    case 5uLL:
      goto LABEL_54;
    case 6uLL:
      goto LABEL_53;
    case 7uLL:
      v74 += (unsigned __int64)v14[6] << 48;
LABEL_53:
      v74 += (unsigned __int64)v14[5] << 40;
LABEL_54:
      v74 += (unsigned __int64)v14[4] << 32;
LABEL_55:
      v74 += (unsigned __int64)v14[3] << 24;
LABEL_56:
      v74 += (unsigned __int64)v14[2] << 16;
LABEL_57:
      v149 = v74 + ((unsigned __int64)v14[1] << 8);
LABEL_58:
      if ( !(_BYTE)v17 )
        return -20;
      v18 = v149;
      v19 = __lzcnt(v17) - 8 * v15 + 41;
LABEL_11:
      v20 = *(unsigned __int16 *)(a6 + 512);
      v21 = v20 + v19;
      v22 = ~(-1LL << v20);
      v23 = v22 & (v18 >> (64 - ((unsigned __int8)v20 + (unsigned __int8)v19)));
      if ( v20 + v19 > 0x40 )
      {
        v27 = a6 + 516;
        v150 = v20 + v21;
        v28 = (v18 >> (64 - ((unsigned __int8)v20 + (unsigned __int8)v21))) & v22;
        v33 = a1;
        goto LABEL_108;
      }
      if ( (unsigned __int64)v16 <= v151 )
      {
        v21 &= 7u;
        v142 = (v20 + v19) >> 3;
        v18 = *(_QWORD *)(v151 - v142);
        v151 -= v142;
        v149 = v18;
      }
      else if ( v14 != (unsigned __int8 *)v151 )
      {
        v24 = v21 >> 3;
        v25 = (unsigned __int8 *)(v151 - (v21 >> 3));
        if ( v14 > v25 )
        {
          v24 = v151 - (_DWORD)v14;
          v25 = (unsigned __int8 *)(v151 - (unsigned int)(v151 - (_DWORD)v14));
        }
        v151 = (unsigned __int64)v25;
        v18 = *(_QWORD *)v25;
        v21 -= 8 * v24;
        v149 = v18;
      }
      v26 = v20 + v21;
      v27 = a6 + 516;
      v150 = v20 + v21;
      v28 = (v18 >> -(char)(v20 + v21)) & v22;
      if ( v20 + v21 > 0x40 )
        goto LABEL_141;
      v29 = (__int64 *)v151;
      if ( (unsigned __int64)v16 <= v151 )
      {
        v138 = v26;
        v26 &= 7u;
        v150 = v26;
        v29 = (__int64 *)(v151 - (v138 >> 3));
        v139 = *v29;
        v151 = (unsigned __int64)v29;
        v149 = v139;
        goto LABEL_127;
      }
      if ( v14 == (unsigned __int8 *)v151 )
      {
LABEL_127:
        v31 = v29;
        goto LABEL_23;
      }
      v30 = v26 >> 3;
      v31 = (__int64 *)(v151 - (v26 >> 3));
      if ( v14 > (unsigned __int8 *)v31 )
      {
        v30 = v151 - (_DWORD)v14;
        v31 = (__int64 *)(v151 - (unsigned int)(v151 - (_DWORD)v14));
      }
      v32 = *v31;
      v151 = (unsigned __int64)v31;
      v26 -= 8 * v30;
      v150 = v26;
      v149 = v32;
      if ( v26 > 0x40 )
      {
LABEL_141:
        v33 = a1;
        goto LABEL_108;
      }
LABEL_23:
      v33 = a1;
      v144 = 0;
      do
      {
        if ( v31 >= (__int64 *)v16 )
        {
          v150 = v26 & 7;
          v31 = (__int64 *)((char *)v31 - (v26 >> 3));
          v144 = (unsigned __int64)v33 < v145;
          v149 = *v31;
        }
        else
        {
          if ( v14 == (unsigned __int8 *)v31 )
          {
            if ( !v144 )
              v31 = (__int64 *)v151;
            goto LABEL_31;
          }
          v56 = v26 >> 3;
          v57 = (unsigned __int64 *)((char *)v31 - v56);
          if ( v14 > (unsigned __int8 *)v31 - v56 )
          {
            v58 = (unsigned int)((_DWORD)v31 - (_DWORD)v14);
            v31 = (__int64 *)((char *)v31 - v58);
            v150 = v26 - 8 * v58;
            v149 = *v31;
LABEL_31:
            v16 = v153;
            v14 = v152;
            goto LABEL_32;
          }
          v31 = (__int64 *)((char *)v31 - v56);
          v144 = (unsigned __int64)v33 < v145;
          v34 = *v57;
          v150 = v26 - 8 * (v26 >> 3);
          v149 = v34;
        }
        if ( !v144 )
          goto LABEL_31;
        v35 = (unsigned __int16 *)(v27 + 4 * v23);
        v36 = v149;
        v37 = *((unsigned __int8 *)v35 + 3);
        v38 = *((_BYTE *)v35 + 2);
        v33 += 4;
        v39 = v37 + v150;
        v40 = (v149 >> (64 - ((unsigned __int8)v37 + (unsigned __int8)v150))) & ~(-1LL << v37);
        v41 = *v35;
        v42 = (unsigned __int16 *)(v27 + 4 * v28);
        *(v33 - 4) = v38;
        v43 = *((unsigned __int8 *)v42 + 3);
        v44 = v41 + v40;
        v45 = *((_BYTE *)v42 + 2);
        v46 = v43 + v39;
        v47 = (v36 >> (64 - (unsigned __int8)v46)) & ~(-1LL << v43);
        v48 = *v42;
        v49 = (unsigned __int16 *)(v27 + 4 * v44);
        *(v33 - 3) = v45;
        v50 = v48 + v47;
        LODWORD(v48) = *((unsigned __int8 *)v49 + 3);
        v51 = v48 + v46;
        v52 = (v36 >> (64 - (unsigned __int8)v51)) & ~(-1LL << v48);
        v53 = *v49;
        *(v33 - 2) = *((_BYTE *)v49 + 2);
        v54 = (unsigned __int16 *)(v27 + 4 * v50);
        LODWORD(v50) = *((unsigned __int8 *)v54 + 3);
        v23 = v53 + v52;
        LOBYTE(v49) = *((_BYTE *)v54 + 2);
        v26 = v50 + v51;
        v150 = v26;
        v55 = *v54;
        *(v33 - 1) = (_BYTE)v49;
        v28 = ((v36 >> (64 - (unsigned __int8)v26)) & ~(-1LL << v50)) + v55;
      }
      while ( v26 <= 0x40 );
      v16 = v153;
      v14 = v152;
LABEL_108:
      v31 = &qword_AA538;
LABEL_32:
      v59 = (unsigned __int64)(v146 - 2);
      if ( v33 > v146 - 2 )
        return -70;
      while ( 1 )
      {
        v60 = (unsigned __int16 *)(v27 + 4 * v23);
        v61 = *((unsigned __int8 *)v60 + 3);
        v62 = *((_BYTE *)v60 + 2);
        v63 = *v60;
        v64 = v61 + v150;
        *v33 = v62;
        v150 = v64;
        v23 = ((v149 >> (64 - (unsigned __int8)v64)) & ~(-1LL << v61)) + v63;
        if ( v64 > 0x40 )
        {
          v137 = v33 + 2;
          v33[1] = *(_BYTE *)(v27 + 4 * v28 + 2);
          return v137 - a1;
        }
        if ( v31 >= (__int64 *)v16 )
        {
          v150 = v64 & 7;
          v65 = (unsigned __int8 *)v31 - (v64 >> 3);
          v149 = *(_QWORD *)v65;
        }
        else
        {
          v65 = v14;
          if ( v31 != (__int64 *)v14 )
          {
            v66 = v64 >> 3;
            v65 = (unsigned __int8 *)v31 - (v64 >> 3);
            if ( v65 < v14 )
            {
              v66 = (_DWORD)v31 - (_DWORD)v14;
              v65 = (unsigned __int8 *)v31 - (unsigned int)((_DWORD)v31 - (_DWORD)v14);
            }
            v150 = v64 - 8 * v66;
            v149 = *(_QWORD *)v65;
          }
        }
        if ( v59 < (unsigned __int64)(v33 + 1) )
          return -70;
        v67 = (unsigned __int16 *)(v27 + 4 * v28);
        v68 = *((unsigned __int8 *)v67 + 3);
        v69 = *((_BYTE *)v67 + 2);
        v70 = v68 + v150;
        v28 = *v67 + ((v149 >> (64 - ((unsigned __int8)v68 + (unsigned __int8)v150))) & ~(-1LL << v68));
        v71 = v33 + 2;
        v150 = v70;
        v33[1] = v69;
        if ( v70 > 0x40 )
          break;
        if ( v65 >= v16 )
        {
          v150 = v70 & 7;
          v31 = (__int64 *)&v65[-(v70 >> 3)];
          v149 = *v31;
        }
        else
        {
          v31 = (__int64 *)v14;
          if ( v65 != v14 )
          {
            v72 = v70 >> 3;
            v31 = (__int64 *)&v65[-(v70 >> 3)];
            if ( v31 < (__int64 *)v14 )
            {
              v72 = (_DWORD)v65 - (_DWORD)v14;
              v31 = (__int64 *)&v65[-((_DWORD)v65 - (_DWORD)v14)];
            }
            v150 = v70 - 8 * v72;
            v149 = *v31;
          }
        }
        v33 = v71;
        if ( (unsigned __int64)v71 > v59 )
          return -70;
      }
      v137 = v33 + 3;
      v33[2] = *(_BYTE *)(v27 + 4 * v23 + 2);
      return v137 - a1;
    default:
      v18 = *(_QWORD *)&v14[v15 - 8];
      v151 = (unsigned __int64)&v14[v15 - 8];
      v149 = v18;
      if ( !(_BYTE)v17 )
        return -1;
      v19 = __lzcnt((unsigned __int8)v17) - 23;
      if ( v15 <= 0xFFFFFFFFFFFFFF88LL )
        goto LABEL_11;
      return v7;
  }
}

