__int64 __fastcall sub_70C60(
        _BYTE *a1,
        __int64 a2,
        _DWORD *a3,
        size_t a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  _BYTE *v11; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int8 *v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // r8
  int v18; // eax
  int v19; // r10d
  unsigned int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned int v23; // r8d
  unsigned __int8 *v24; // r9
  unsigned int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 *v28; // rcx
  unsigned int v29; // r8d
  __int64 *v30; // r10
  __int64 v31; // rcx
  _BYTE *v32; // r8
  unsigned __int16 *v33; // r11
  unsigned __int64 v34; // r13
  int v35; // r14d
  unsigned __int16 *v36; // rsi
  int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // r11
  __int64 v43; // rcx
  unsigned __int16 *v44; // rsi
  int v45; // eax
  unsigned __int16 *v46; // r11
  __int64 v47; // rdi
  __int64 v48; // rcx
  int v49; // r15d
  __int64 v50; // rsi
  __int64 v51; // r11
  unsigned __int64 *v52; // rbx
  unsigned int v53; // edx
  unsigned __int64 v54; // r11
  unsigned __int16 *v55; // r13
  int v56; // r15d
  char v57; // r14
  unsigned int v58; // eax
  char v59; // cl
  __int64 v60; // rdi
  __int64 v61; // rcx
  unsigned __int8 *v62; // r13
  unsigned int v63; // ecx
  unsigned __int16 *v64; // r10
  int v65; // r15d
  char v66; // r14
  unsigned int v67; // eax
  char v68; // cl
  _BYTE *v69; // rcx
  unsigned int v70; // r8d
  unsigned __int64 v72; // rdi
  unsigned __int8 *v73; // r12
  unsigned int v74; // eax
  unsigned __int64 v75; // r10
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  int v78; // r11d
  unsigned int v79; // edi
  __int64 v80; // rsi
  __int64 v81; // r8
  unsigned int v82; // ecx
  unsigned __int8 *v83; // r9
  unsigned int v84; // r11d
  __int64 v85; // r9
  __int64 v86; // rsi
  __int64 *v87; // rax
  unsigned int v88; // ecx
  __int64 *v89; // r10
  __int64 v90; // rax
  _BYTE *v91; // rdi
  bool v92; // r13
  unsigned __int64 v93; // rax
  unsigned __int16 *v94; // r15
  unsigned __int64 v95; // rbp
  int v96; // eax
  unsigned __int64 v97; // rbx
  int v98; // r14d
  unsigned __int64 v99; // r8
  char v100; // cl
  __int64 v101; // rax
  __int64 v102; // r8
  unsigned __int16 *v103; // rax
  int v104; // esi
  unsigned __int16 *v105; // r8
  __int64 v106; // rax
  int v107; // r11d
  char v108; // cl
  int v109; // esi
  __int64 v110; // r8
  __int64 v111; // rax
  int v112; // r14d
  char v113; // cl
  unsigned __int16 *v114; // rsi
  __int64 v115; // rsi
  __int64 v116; // rcx
  unsigned __int64 *v117; // rbx
  __int64 v118; // rdx
  unsigned __int64 v119; // r11
  unsigned __int16 *v120; // r8
  int v121; // r13d
  int v122; // r14d
  char v123; // bp
  __int64 v124; // r8
  unsigned __int64 v125; // rax
  unsigned int v126; // ecx
  unsigned __int8 *v127; // rbp
  int v128; // eax
  unsigned __int16 *v129; // rax
  int v130; // r14d
  char v131; // r10
  unsigned int v132; // ecx
  _BYTE *v133; // rax
  unsigned int v134; // edi
  unsigned __int64 v135; // rcx
  _BYTE *v136; // r13
  unsigned int v137; // r8d
  __int64 v138; // r8
  unsigned int v139; // ecx
  __int64 v140; // rcx
  unsigned int v141; // r8d
  unsigned __int64 *v142; // rcx
  __int64 v143; // rcx
  int v144; // r11d
  unsigned __int8 *v146; // [rsp+8h] [rbp-A0h]
  _BYTE *v147; // [rsp+8h] [rbp-A0h]
  bool v148; // [rsp+10h] [rbp-98h]
  unsigned __int64 v149; // [rsp+18h] [rbp-90h]
  _BYTE *v150; // [rsp+20h] [rbp-88h]
  _BYTE *v151; // [rsp+28h] [rbp-80h]
  unsigned int v152; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v153; // [rsp+3Ch] [rbp-6Ch] BYREF
  unsigned __int64 v154; // [rsp+40h] [rbp-68h]
  int v155; // [rsp+48h] [rbp-60h]
  unsigned __int64 v156; // [rsp+50h] [rbp-58h]
  unsigned __int8 *v157; // [rsp+58h] [rbp-50h]
  unsigned __int8 *v158; // [rsp+60h] [rbp-48h]
  unsigned __int64 v159; // [rsp+68h] [rbp-40h]

  v11 = a1;
  v159 = __readfsqword(0x28u);
  if ( a8 )
    return sub_6FEE0(a1, a2, a3, a4, a5, a6, a7);
  v12 = -1;
  v153 = 255;
  if ( a7 > 0x1FF )
  {
    v12 = sub_6F780((void *)a6, &v153, (int *)&v152, a3, a4, 0);
    if ( v12 <= 0xFFFFFFFFFFFFFF88LL )
    {
      if ( a5 < v152
        || a7 < 4 * ((((1LL << v152) + 2 * (unsigned __int64)(v153 + 1) + 11) >> 2) + (1 << v152) + 2 + 129) )
      {
        return -44;
      }
      v13 = sub_6FC30(
              (int *)(a6 + 512),
              (__int16 *)a6,
              v153,
              v152,
              a6 + 4LL * ((1 << v152) + 1) + 512,
              a7 - (4LL * ((1 << v152) + 1) + 512));
      if ( v13 > 0xFFFFFFFFFFFFFF88LL )
        return v13;
      v14 = a4 - v12;
      v15 = (unsigned __int8 *)a3 + v12;
      v150 = &a1[a2];
      v12 = v14;
      v149 = (unsigned __int64)&a1[a2 - 3];
      if ( *(_WORD *)(a6 + 514) )
      {
        if ( v14 )
        {
          v73 = v15 + 8;
          v157 = v15;
          v74 = v15[v14 - 1];
          v158 = v15 + 8;
          v135 = *v15;
          v156 = (unsigned __int64)v15;
          v154 = v135;
          switch ( v14 )
          {
            case 1uLL:
              goto LABEL_122;
            case 2uLL:
              goto LABEL_121;
            case 3uLL:
              goto LABEL_120;
            case 4uLL:
              goto LABEL_119;
            case 5uLL:
              goto LABEL_118;
            case 6uLL:
              goto LABEL_117;
            case 7uLL:
              v135 += (unsigned __int64)v15[6] << 48;
LABEL_117:
              v135 += (unsigned __int64)v15[5] << 40;
LABEL_118:
              v135 += (unsigned __int64)v15[4] << 32;
LABEL_119:
              v135 += (unsigned __int64)v15[3] << 24;
LABEL_120:
              v135 += (unsigned __int64)v15[2] << 16;
LABEL_121:
              v154 = ((unsigned __int64)v15[1] << 8) + v135;
LABEL_122:
              if ( !(_BYTE)v74 )
                return -20;
              _BitScanReverse(&v74, v74);
              v75 = v154;
              v77 = (v74 ^ 0x1F) - 8 * v14 + 41;
              goto LABEL_69;
            default:
              v75 = *(_QWORD *)&v15[v14 - 8];
              v156 = (unsigned __int64)&v15[v14 - 8];
              v154 = v75;
              if ( !(_BYTE)v74 )
                return -1;
              _BitScanReverse(&v76, v74);
              v77 = (v76 ^ 0x1F) - 23;
              if ( v14 > 0xFFFFFFFFFFFFFF88LL )
                return v12;
LABEL_69:
              v78 = *(unsigned __int16 *)(a6 + 512);
              v79 = v78 + v77;
              v80 = ~(-1LL << *(_WORD *)(a6 + 512));
              v81 = v80 & (v75 >> (64 - ((unsigned __int8)v78 + (unsigned __int8)v77)));
              if ( v78 + v77 > 0x40 )
              {
                v144 = v79 + v78;
                v85 = a6 + 516;
                v91 = v11;
                v155 = v144;
                v86 = (v75 >> (64 - (unsigned __int8)v144)) & v80;
                goto LABEL_127;
              }
              if ( (unsigned __int64)v73 <= v156 )
              {
                v79 &= 7u;
                v143 = (v78 + v77) >> 3;
                v75 = *(_QWORD *)(v156 - v143);
                v156 -= v143;
                v154 = v75;
              }
              else if ( v15 != (unsigned __int8 *)v156 )
              {
                v82 = v79 >> 3;
                v83 = (unsigned __int8 *)(v156 - (v79 >> 3));
                if ( v15 > v83 )
                {
                  v82 = v156 - (_DWORD)v15;
                  v83 = (unsigned __int8 *)(v156 - (unsigned int)(v156 - (_DWORD)v15));
                }
                v75 = *(_QWORD *)v83;
                v156 = (unsigned __int64)v83;
                v79 -= 8 * v82;
                v154 = v75;
              }
              v84 = v79 + v78;
              v85 = a6 + 516;
              v155 = v84;
              v86 = (v75 >> -(char)v84) & v80;
              if ( v84 > 0x40 )
                goto LABEL_142;
              v87 = (__int64 *)v156;
              if ( (unsigned __int64)v73 <= v156 )
              {
                v139 = v84;
                v84 &= 7u;
                v155 = v84;
                v87 = (__int64 *)(v156 - (v139 >> 3));
                v140 = *v87;
                v156 = (unsigned __int64)v87;
                v154 = v140;
              }
              else if ( v15 != (unsigned __int8 *)v156 )
              {
                v88 = v84 >> 3;
                v89 = (__int64 *)(v156 - (v84 >> 3));
                if ( v15 > (unsigned __int8 *)v89 )
                {
                  v88 = v156 - (_DWORD)v15;
                  v89 = (__int64 *)(v156 - (unsigned int)(v156 - (_DWORD)v15));
                }
                v90 = *v89;
                v156 = (unsigned __int64)v89;
                v84 -= 8 * v88;
                v155 = v84;
                v154 = v90;
                if ( v84 > 0x40 )
                {
LABEL_142:
                  v91 = v11;
                  goto LABEL_127;
                }
LABEL_81:
                v91 = v11;
                v92 = 0;
                v147 = v11;
                do
                {
                  if ( v89 >= (__int64 *)v73 )
                  {
                    v155 = v84 & 7;
                    v89 = (__int64 *)((char *)v89 - (v84 >> 3));
                    v92 = (unsigned __int64)v91 < v149;
                    v154 = *v89;
                  }
                  else
                  {
                    if ( v15 == (unsigned __int8 *)v89 )
                    {
                      v11 = v147;
                      if ( !v92 )
                        v89 = (__int64 *)v156;
                      goto LABEL_89;
                    }
                    v116 = v84 >> 3;
                    v117 = (unsigned __int64 *)((char *)v89 - v116);
                    if ( v15 > (unsigned __int8 *)v89 - v116 )
                    {
                      v11 = v147;
                      v118 = (unsigned int)((_DWORD)v89 - (_DWORD)v15);
                      v89 = (__int64 *)((char *)v89 - v118);
                      v155 = v84 - 8 * v118;
                      v154 = *v89;
LABEL_89:
                      v73 = v158;
                      v15 = v157;
                      goto LABEL_90;
                    }
                    v89 = (__int64 *)((char *)v89 - v116);
                    v92 = (unsigned __int64)v91 < v149;
                    v93 = *v117;
                    v155 = v84 - 8 * (v84 >> 3);
                    v154 = v93;
                  }
                  if ( !v92 )
                  {
                    v11 = v147;
                    goto LABEL_89;
                  }
                  v94 = (unsigned __int16 *)(v85 + 4 * v81);
                  v95 = v154;
                  v91 += 4;
                  v96 = *((unsigned __int8 *)v94 + 3);
                  v97 = v154;
                  v98 = v96 + v155;
                  v99 = v154 << v155;
                  v100 = -(char)v96;
                  v101 = *v94;
                  *(v91 - 4) = *((_BYTE *)v94 + 2);
                  v102 = v101 + (v99 >> v100);
                  v103 = (unsigned __int16 *)(v85 + 4 * v86);
                  v104 = *((unsigned __int8 *)v103 + 3);
                  LOBYTE(v94) = *((_BYTE *)v103 + 2);
                  v105 = (unsigned __int16 *)(v85 + 4 * v102);
                  v106 = *v103;
                  v107 = v98 + v104;
                  *(v91 - 3) = (_BYTE)v94;
                  v108 = -(char)v104;
                  v109 = *((unsigned __int8 *)v105 + 3);
                  LOBYTE(v94) = *((_BYTE *)v105 + 2);
                  v110 = *v105;
                  v111 = (v97 << v98 >> v108) + v106;
                  v112 = v107 + v109;
                  v113 = -(char)v109;
                  v114 = (unsigned __int16 *)(v85 + 4 * v111);
                  *(v91 - 2) = (_BYTE)v94;
                  LODWORD(v111) = *((unsigned __int8 *)v114 + 3);
                  LOBYTE(v94) = *((_BYTE *)v114 + 2);
                  v81 = (v95 << v107 >> v113) + v110;
                  v115 = *v114;
                  v84 = v112 + v111;
                  *(v91 - 1) = (_BYTE)v94;
                  v155 = v112 + v111;
                  v86 = (v95 << v112 >> -(char)v111) + v115;
                }
                while ( (unsigned int)(v112 + v111) <= 0x40 );
                v11 = v147;
                v73 = v158;
                v15 = v157;
LABEL_127:
                v89 = &qword_AA538;
LABEL_90:
                v119 = (unsigned __int64)(v150 - 2);
                if ( v91 > v150 - 2 )
                  return -70;
                while ( 1 )
                {
                  v120 = (unsigned __int16 *)(v85 + 4 * v81);
                  v121 = v155;
                  v122 = *((unsigned __int8 *)v120 + 3);
                  v123 = *((_BYTE *)v120 + 2);
                  v124 = *v120;
                  v125 = v154 << v155;
                  *v91 = v123;
                  v126 = v122 + v121;
                  v155 = v122 + v121;
                  v81 = (v125 >> -(char)v122) + v124;
                  if ( (unsigned int)(v122 + v121) > 0x40 )
                  {
                    v136 = v91 + 2;
                    v91[1] = *(_BYTE *)(v85 + 4 * v86 + 2);
                    return v136 - v11;
                  }
                  if ( v89 >= (__int64 *)v73 )
                  {
                    v155 = v126 & 7;
                    v127 = (unsigned __int8 *)v89 - (v126 >> 3);
                    v154 = *(_QWORD *)v127;
                  }
                  else
                  {
                    v127 = v15;
                    if ( v89 != (__int64 *)v15 )
                    {
                      v128 = v126 >> 3;
                      v127 = (unsigned __int8 *)v89 - (v126 >> 3);
                      if ( v127 < v15 )
                      {
                        v128 = (_DWORD)v89 - (_DWORD)v15;
                        v127 = (unsigned __int8 *)v89 - (unsigned int)((_DWORD)v89 - (_DWORD)v15);
                      }
                      v155 = v126 - 8 * v128;
                      v154 = *(_QWORD *)v127;
                    }
                  }
                  if ( v119 < (unsigned __int64)(v91 + 1) )
                    return -70;
                  v129 = (unsigned __int16 *)(v85 + 4 * v86);
                  v130 = *((unsigned __int8 *)v129 + 3);
                  v131 = *((_BYTE *)v129 + 2);
                  v86 = *v129 + (v154 << v155 >> -(char)v130);
                  v133 = v91 + 2;
                  v155 += v130;
                  v132 = v155;
                  v91[1] = v131;
                  if ( v132 > 0x40 )
                    break;
                  if ( v127 >= v73 )
                  {
                    v155 = v132 & 7;
                    v89 = (__int64 *)&v127[-(v132 >> 3)];
                    v154 = *v89;
                  }
                  else
                  {
                    v89 = (__int64 *)v15;
                    if ( v127 != v15 )
                    {
                      v134 = v132 >> 3;
                      v89 = (__int64 *)&v127[-(v132 >> 3)];
                      if ( v89 < (__int64 *)v15 )
                      {
                        v134 = (_DWORD)v127 - (_DWORD)v15;
                        v89 = (__int64 *)&v127[-((_DWORD)v127 - (_DWORD)v15)];
                      }
                      v155 = v132 - 8 * v134;
                      v154 = *v89;
                    }
                  }
                  v91 = v133;
                  if ( (unsigned __int64)v133 > v119 )
                    return -70;
                }
                v136 = v91 + 3;
                v91[2] = *(_BYTE *)(v85 + 4 * v81 + 2);
                return v136 - v11;
              }
              v89 = v87;
              goto LABEL_81;
          }
        }
      }
      else if ( v14 )
      {
        v157 = v15;
        v146 = v15 + 8;
        v158 = v15 + 8;
        v16 = v15[v14 - 1];
        v72 = *v15;
        v156 = (unsigned __int64)v15;
        v154 = v72;
        switch ( v14 )
        {
          case 1uLL:
            goto LABEL_59;
          case 2uLL:
            goto LABEL_58;
          case 3uLL:
            goto LABEL_57;
          case 4uLL:
            goto LABEL_56;
          case 5uLL:
            goto LABEL_55;
          case 6uLL:
            goto LABEL_54;
          case 7uLL:
            v72 += (unsigned __int64)v15[6] << 48;
LABEL_54:
            v72 += (unsigned __int64)v15[5] << 40;
LABEL_55:
            v72 += (unsigned __int64)v15[4] << 32;
LABEL_56:
            v72 += (unsigned __int64)v15[3] << 24;
LABEL_57:
            v72 += (unsigned __int64)v15[2] << 16;
LABEL_58:
            v154 = v72 + ((unsigned __int64)v15[1] << 8);
LABEL_59:
            if ( !(_BYTE)v16 )
              return -20;
            _BitScanReverse(&v16, v16);
            v17 = v154;
            v18 = (v16 ^ 0x1F) - 8 * v14 + 41;
LABEL_12:
            v19 = *(unsigned __int16 *)(a6 + 512);
            v20 = v19 + v18;
            v21 = ~(-1LL << *(_WORD *)(a6 + 512));
            v22 = v21 & (v17 >> (64 - (unsigned __int8)v20));
            if ( v20 > 0x40 )
            {
              v26 = a6 + 516;
              v155 = v19 + v20;
              v27 = (v17 >> (64 - ((unsigned __int8)v19 + (unsigned __int8)v20))) & v21;
              v32 = v11;
              goto LABEL_110;
            }
            if ( (unsigned __int64)v146 <= v156 )
            {
              v141 = v20;
              v20 &= 7u;
              v142 = (unsigned __int64 *)(v156 - (v141 >> 3));
              v17 = *v142;
              v156 = (unsigned __int64)v142;
              v154 = v17;
            }
            else if ( v15 != (unsigned __int8 *)v156 )
            {
              v23 = v20 >> 3;
              v24 = (unsigned __int8 *)(v156 - (v20 >> 3));
              if ( v15 > v24 )
              {
                v23 = v156 - (_DWORD)v15;
                v24 = (unsigned __int8 *)(v156 - (unsigned int)(v156 - (_DWORD)v15));
              }
              v156 = (unsigned __int64)v24;
              v20 -= 8 * v23;
              v17 = *(_QWORD *)v24;
              v154 = *(_QWORD *)v24;
            }
            v25 = v19 + v20;
            v26 = a6 + 516;
            v155 = v25;
            v27 = (v17 >> -(char)v25) & v21;
            if ( v25 > 0x40 )
              goto LABEL_145;
            v28 = (__int64 *)v156;
            if ( (unsigned __int64)v146 <= v156 )
            {
              v137 = v25;
              v25 &= 7u;
              v155 = v25;
              v28 = (__int64 *)(v156 - (v137 >> 3));
              v138 = *v28;
              v156 = (unsigned __int64)v28;
              v154 = v138;
            }
            else if ( v15 != (unsigned __int8 *)v156 )
            {
              v29 = v25 >> 3;
              v30 = (__int64 *)(v156 - (v25 >> 3));
              if ( v15 > (unsigned __int8 *)v30 )
              {
                v29 = v156 - (_DWORD)v15;
                v30 = (__int64 *)(v156 - (unsigned int)(v156 - (_DWORD)v15));
              }
              v31 = *v30;
              v156 = (unsigned __int64)v30;
              v25 -= 8 * v29;
              v155 = v25;
              v154 = v31;
              if ( v25 > 0x40 )
              {
LABEL_145:
                v32 = v11;
                goto LABEL_110;
              }
LABEL_24:
              v32 = v11;
              v148 = 0;
              v151 = v11;
              do
              {
                if ( v30 >= (__int64 *)v146 )
                {
                  v155 = v25 & 7;
                  v30 = (__int64 *)((char *)v30 - (v25 >> 3));
                  v148 = (unsigned __int64)v32 < v149;
                  v154 = *v30;
                }
                else
                {
                  if ( v15 == (unsigned __int8 *)v30 )
                  {
                    v11 = v151;
                    if ( !v148 )
                      v30 = (__int64 *)v156;
                    goto LABEL_32;
                  }
                  v51 = v25 >> 3;
                  v52 = (unsigned __int64 *)((char *)v30 - v51);
                  if ( v15 > (unsigned __int8 *)v30 - v51 )
                  {
                    v11 = v151;
                    v53 = (_DWORD)v30 - (_DWORD)v15;
                    v30 = (__int64 *)((char *)v30 - v53);
                    v155 = v25 - 8 * v53;
                    v154 = *v30;
LABEL_32:
                    v15 = v157;
                    v146 = v158;
                    goto LABEL_33;
                  }
                  v30 = (__int64 *)((char *)v30 - v51);
                  v148 = (unsigned __int64)v32 < v149;
                  v155 = v25 - 8 * (v25 >> 3);
                  v154 = *v52;
                }
                if ( !v148 )
                {
                  v11 = v151;
                  goto LABEL_32;
                }
                v33 = (unsigned __int16 *)(v26 + 4 * v22);
                v34 = v154;
                v35 = *((unsigned __int8 *)v33 + 3);
                v36 = (unsigned __int16 *)(v26 + 4 * v27);
                v32 += 4;
                v37 = v35 + v155;
                v38 = ~(-1LL << *((_BYTE *)v33 + 3)) & (v154 >> (64 - ((unsigned __int8)v35 + (unsigned __int8)v155)));
                v39 = *v33;
                *(v32 - 4) = *((_BYTE *)v33 + 2);
                LOBYTE(v35) = *((_BYTE *)v36 + 2);
                v40 = v39 + v38;
                v41 = *((unsigned __int8 *)v36 + 3) + v37;
                v42 = ~(-1LL << *((_BYTE *)v36 + 3)) & (v34 >> (64 - (unsigned __int8)v41));
                v43 = *v36;
                v44 = (unsigned __int16 *)(v26 + 4 * v40);
                *(v32 - 3) = v35;
                v45 = *((unsigned __int8 *)v44 + 3) + v41;
                v46 = (unsigned __int16 *)(v26 + 4 * (v43 + v42));
                v47 = ~(-1LL << *((_BYTE *)v44 + 3)) & (v34 >> (64 - (unsigned __int8)v45));
                v48 = *v44;
                *(v32 - 2) = *((_BYTE *)v44 + 2);
                v49 = *((unsigned __int8 *)v46 + 3);
                LOBYTE(v35) = *((_BYTE *)v46 + 2);
                v22 = v48 + v47;
                v25 = v49 + v45;
                v155 = v25;
                v50 = *v46;
                *(v32 - 1) = v35;
                v27 = (~(-1LL << v49) & (v34 >> (64 - (unsigned __int8)v25))) + v50;
              }
              while ( v25 <= 0x40 );
              v11 = v151;
              v15 = v157;
              v146 = v158;
LABEL_110:
              v30 = &qword_AA538;
LABEL_33:
              v54 = (unsigned __int64)(v150 - 2);
              if ( v32 <= v150 - 2 )
              {
                while ( 1 )
                {
                  v55 = (unsigned __int16 *)(v26 + 4 * v22);
                  v56 = *((unsigned __int8 *)v55 + 3);
                  v57 = *((_BYTE *)v55 + 2);
                  v59 = 64 - (v56 + v155);
                  v155 += v56;
                  v58 = v155;
                  v60 = ~(-1LL << v56) & (v154 >> v59);
                  v61 = *v55;
                  *v32 = v57;
                  v22 = v61 + v60;
                  if ( v58 > 0x40 )
                  {
                    v136 = v32 + 2;
                    v32[1] = *(_BYTE *)(v26 + 4 * v27 + 2);
                    return v136 - v11;
                  }
                  if ( v30 >= (__int64 *)v146 )
                  {
                    v155 = v58 & 7;
                    v62 = (unsigned __int8 *)v30 - (v58 >> 3);
                    v154 = *(_QWORD *)v62;
                  }
                  else
                  {
                    v62 = v15;
                    if ( v30 != (__int64 *)v15 )
                    {
                      v63 = v58 >> 3;
                      v62 = (unsigned __int8 *)v30 - (v58 >> 3);
                      if ( v62 < v15 )
                      {
                        v63 = (_DWORD)v30 - (_DWORD)v15;
                        v62 = (unsigned __int8 *)v30 - (unsigned int)((_DWORD)v30 - (_DWORD)v15);
                      }
                      v155 = v58 - 8 * v63;
                      v154 = *(_QWORD *)v62;
                    }
                  }
                  if ( v54 < (unsigned __int64)(v32 + 1) )
                    return -70;
                  v64 = (unsigned __int16 *)(v26 + 4 * v27);
                  v65 = *((unsigned __int8 *)v64 + 3);
                  v66 = *((_BYTE *)v64 + 2);
                  v68 = 64 - (v65 + v155);
                  v155 += v65;
                  v67 = v155;
                  v27 = *v64 + (~(-1LL << v65) & (v154 >> v68));
                  v69 = v32 + 2;
                  v32[1] = v66;
                  if ( v67 > 0x40 )
                    break;
                  if ( v62 >= v146 )
                  {
                    v155 = v67 & 7;
                    v30 = (__int64 *)&v62[-(v67 >> 3)];
                    v154 = *v30;
                  }
                  else
                  {
                    v30 = (__int64 *)v15;
                    if ( v62 != v15 )
                    {
                      v70 = v67 >> 3;
                      v30 = (__int64 *)&v62[-(v67 >> 3)];
                      if ( v30 < (__int64 *)v15 )
                      {
                        v70 = (_DWORD)v62 - (_DWORD)v15;
                        v30 = (__int64 *)&v62[-((_DWORD)v62 - (_DWORD)v15)];
                      }
                      v155 = v67 - 8 * v70;
                      v154 = *v30;
                    }
                  }
                  v32 = v69;
                  if ( (unsigned __int64)v69 > v54 )
                    return -70;
                }
                v136 = v32 + 3;
                v32[2] = *(_BYTE *)(v26 + 4 * v22 + 2);
                return v136 - v11;
              }
              return -70;
            }
            v30 = v28;
            goto LABEL_24;
          default:
            v17 = *(_QWORD *)&v15[v14 - 8];
            v156 = (unsigned __int64)&v15[v14 - 8];
            v154 = v17;
            if ( !(_BYTE)v16 )
              return -1;
            _BitScanReverse(&v16, v16);
            v18 = (v16 ^ 0x1F) - 23;
            if ( v14 <= 0xFFFFFFFFFFFFFF88LL )
              goto LABEL_12;
            return v12;
        }
      }
      return -72;
    }
  }
  return v12;
}

