void __fastcall sub_17E1070(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, _QWORD, _BYTE *),
        __int64 a4,
        __m128i a5,
        double a6)
{
  _BYTE *v7; // r15
  __int64 v8; // r13
  __int64 *v9; // rbx
  bool v10; // r14
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  int v20; // edx
  unsigned int v21; // r13d
  _BYTE *v22; // r14
  __int64 v23; // rbp
  _BYTE *v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbp
  __int64 *v28; // r15
  void *v29; // rax
  _BYTE *v30; // rsi
  __int64 *v31; // r8
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 v37; // al
  unsigned __int64 v38; // rdi
  unsigned __int8 v39; // cl
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  unsigned __int8 v68; // al
  int v69; // eax
  __int64 v70; // rsi
  _QWORD *v71; // rdx
  _QWORD *v72; // rdi
  __int64 v73; // r8
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 *v77; // r14
  __int64 *v78; // r13
  __int64 v79; // rdi
  unsigned int v80; // eax
  __int64 *v81; // rsi
  __int64 v82; // r8
  __int64 v83; // rdx
  int v84; // esi
  int v85; // eax
  bool v86; // zf
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rdx
  unsigned __int64 v90; // rax
  int v91; // edx
  __int64 v92; // rdi
  __int64 *v93; // rcx
  unsigned int v94; // edx
  _QWORD *v95; // rsi
  _BYTE *v96; // r10
  __int64 v97; // rax
  __int64 *v98; // r12
  __int64 v99; // r13
  int v100; // rax^4
  unsigned int v101; // r12d
  __int64 *v102; // rax
  __int64 v103; // rdx
  unsigned __int64 v104; // rcx
  __int64 *v105; // rax
  __int64 *v106; // rax
  __int64 v107; // rdx
  unsigned __int64 v108; // rcx
  __int64 *v109; // rax
  unsigned __int64 *v110; // rax
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rax
  __int64 *i; // rax
  __int64 v115; // rcx
  unsigned __int64 v116; // rdx
  int v117; // eax
  int v118; // r12d
  _QWORD *v119; // rbx
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rbx
  _BYTE *v124; // r15
  __int64 v125; // rbp
  _BYTE *v126; // rdi
  int v127; // eax
  int v128; // r11d
  __int64 *v129; // r10
  int v130; // eax
  __int64 v131; // rax
  __int64 v132; // rbp
  _BYTE *v133; // r15
  _BYTE *v134; // rbp
  _BYTE *v135; // rdi
  __int64 v136; // rbp
  _BYTE *v137; // rdi
  int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rdx
  __int64 *v144; // [rsp+0h] [rbp-118h]
  void (__fastcall *v145)(__int64, _QWORD, _BYTE *); // [rsp+8h] [rbp-110h]
  __int64 v146; // [rsp+10h] [rbp-108h]
  _BYTE *v147; // [rsp+18h] [rbp-100h]
  _BYTE *v148; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v149; // [rsp+28h] [rbp-F0h]
  __m128i v150; // [rsp+40h] [rbp-D8h] BYREF
  int v151; // [rsp+50h] [rbp-C8h]
  _BYTE *v152; // [rsp+60h] [rbp-B8h] BYREF
  char v153; // [rsp+68h] [rbp-B0h]
  __int64 v154; // [rsp+6Ch] [rbp-ACh]
  char v155; // [rsp+74h] [rbp-A4h]
  void *v156; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v157; // [rsp+80h] [rbp-98h]
  _BYTE v158[16]; // [rsp+88h] [rbp-90h] BYREF
  char v159; // [rsp+98h] [rbp-80h]
  _BYTE v160[20]; // [rsp+A0h] [rbp-78h] BYREF
  char v161; // [rsp+B4h] [rbp-64h]
  void *v162[2]; // [rsp+B8h] [rbp-60h] BYREF
  _BYTE v163[16]; // [rsp+C8h] [rbp-50h] BYREF
  char v164; // [rsp+D8h] [rbp-40h]

  v145 = a3;
  v146 = a4;
  if ( *(char *)(a2 + 28) < 0 )
    return;
  v7 = (_BYTE *)a2;
  v8 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2E )
  {
    if ( *(_QWORD *)(a2 + 40) && !sub_B8C090((_BYTE *)a2) && !sub_B8C400(a2, 1) )
      goto LABEL_48;
    return;
  }
  v9 = (__int64 *)(a2 + 104);
  v144 = (__int64 *)(a2 + 104 + 8LL * *(unsigned int *)(a2 + 100));
  if ( (__int64 *)(a2 + 104) == v144 )
    return;
  v10 = 1;
  do
  {
    v11 = *v9;
    if ( sub_B8C090((_BYTE *)*v9) )
      return;
    if ( !v10 )
      goto LABEL_5;
    v10 = sub_B72A20(v11, v8);
    if ( !v10 )
    {
      if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
        goto LABEL_5;
      v16 = sub_B8C3D0(v11, v8, v12, v13, v14, v15);
      v17 = *v16;
      v18 = *v16 + 8LL * *((unsigned int *)v16 + 2);
      if ( *v16 >= v18 )
      {
        if ( v17 == v18 )
          goto LABEL_5;
        if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 389 )
        {
          v87 = v18 + 8;
          while ( 1 )
          {
            v18 = v87;
            if ( v17 == v87 )
              break;
            v87 += 8LL;
            if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) == 389 )
              goto LABEL_15;
          }
LABEL_5:
          v10 = 0;
          goto LABEL_6;
        }
      }
      else
      {
        v19 = *v16;
        while ( 1 )
        {
          v17 = v19;
          if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 389 )
            break;
          v19 += 8LL;
          if ( v18 == v19 )
            goto LABEL_5;
        }
      }
LABEL_15:
      v10 = v17 != v18;
    }
LABEL_6:
    ++v9;
  }
  while ( v144 != v9 );
  if ( v10 )
    return;
LABEL_48:
  if ( sub_B72A20(a2, v8) )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
LABEL_50:
    v37 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v37 == 78 )
    {
      v153 = 0;
      v155 = 0;
      v152 = nullptr;
      v154 = 0;
      v156 = v158;
      v157 = 0;
      v158[0] = 0;
      v159 = 0;
    }
    else
    {
      v38 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v38 = *(_QWORD *)v38;
      v39 = *(_BYTE *)(v38 + 8) & 0x7F;
      if ( v39 <= 0x12u )
      {
        if ( ((1LL << v39) & 0x40182) == 0 )
          return;
        goto LABEL_55;
      }
      if ( v39 <= 0x21u )
        return;
      if ( v39 > 0x27u )
      {
        if ( (unsigned int)v39 - 59 <= 2 )
        {
          v88 = v38 - 64;
          if ( v38 != 64 )
          {
            while ( 1 )
            {
              v89 = *(_QWORD *)(v88 + 16);
              v90 = v89 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v89 & 4) != 0 )
                v90 = *(_QWORD *)v90;
              v91 = *(_BYTE *)(v90 + 8) & 0x7F;
              if ( (unsigned int)(v91 - 59) > 2 )
                break;
              v88 = v90 - 64;
              if ( !v88 )
                return;
            }
            if ( (unsigned int)(v91 - 34) <= 5 && v90 != 72 && !(unsigned __int8)sub_B8E180(v38) )
            {
              v37 = *(_BYTE *)(a2 + 28) & 0x7F;
              goto LABEL_55;
            }
          }
        }
        return;
      }
LABEL_55:
      v40 = v37;
      if ( (unsigned int)v37 - 64 <= 2 )
        goto LABEL_87;
      if ( ((v37 + 85) & 0x7D) == 0 || (unsigned int)v37 - 40 > 6 )
        return;
      v41 = sub_B73640(a2);
      v42 = v41;
      if ( v41 )
      {
        if ( (*(_WORD *)v41 & 0x1FF) == 0x3C )
        {
          v42 = *(_QWORD *)(v41 + 16);
          v43 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v44 = sub_F6AC00(v43);
          if ( !v44 )
            goto LABEL_62;
          v49 = *(_QWORD *)(v44 + 32);
          if ( (*(_BYTE *)(v49 + 29) & 1) == 0 )
            goto LABEL_62;
          goto LABEL_237;
        }
        v43 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v139 = sub_F6AC00(v43);
        if ( v139 && (v49 = *(_QWORD *)(v139 + 32), (*(_BYTE *)(v49 + 29) & 1) != 0) )
        {
LABEL_237:
          if ( sub_179AC50(v49, v8, v45, v46, v47, v48) )
            return;
LABEL_62:
          if ( v42 )
            goto LABEL_63;
        }
        else
        {
LABEL_63:
          if ( (*(_WORD *)v42 & 0x1FF) == 0x30 )
          {
            v50 = *(_QWORD *)(v42 + 16);
            if ( (v50 & 4) != 0 )
            {
              if ( *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
              {
                *(_QWORD *)v160 = *(_QWORD *)(a2 + 48);
                v43 = *(_QWORD *)(sub_C1BEF0((__int64)v160, v8, v45, v46) & 0xFFFFFFFFFFFFFFF0LL);
                v51 = *(_QWORD *)(v42 + 16);
                if ( (v51 & 4) != 0 )
                  v52 = *(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFF8LL) + 40);
                else
                  v52 = v51 & 0xFFFFFFFFFFFFFFF8LL;
                v42 = sub_BFB970(v52);
              }
            }
          }
        }
      }
      else
      {
        v43 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v140 = sub_F6AC00(v43);
        if ( v140 )
        {
          v49 = *(_QWORD *)(v140 + 32);
          if ( (*(_BYTE *)(v49 + 29) & 1) != 0 )
            goto LABEL_237;
        }
      }
      if ( sub_F62670(v43, nullptr, v45, v46, v47, v48) || (*(_BYTE *)(v43 + 17) & 4) != 0 )
        return;
      v55 = sub_ED7E80(v43, 0, v53, v54);
      v57 = (unsigned int)*(unsigned __int8 *)(v55 + 16) - 47;
      if ( (unsigned int)v57 <= 1 || (v55 = sub_179AC20(v55, 0, v57, v56)) != 0 )
      {
        v58 = sub_F60F10(v55, 0, v57, v56, v35, v36);
        v61 = (__int64)v58;
        if ( (*((_BYTE *)v58 + 29) & 1) != 0 && sub_179AC50((__int64)v58, 0, v59, v60, v35, v36) )
          return;
        if ( (*(_BYTE *)(v61 + 28) & 0x7Fu) - 59 <= 2 )
        {
          v62 = *(_QWORD *)(v61 + 104);
          sub_7052B0((__int64 *)(v62 + 96), v62, v59, v60, v35, v36);
          if ( (*(_BYTE *)(*(_QWORD *)(v61 + 128) + 5LL) & 0x10) == 0
            && ((*(_BYTE *)(v61 + 29) & 1) == 0 || !sub_179AE00(v61, v62, v63, v64, v35, v36)) )
          {
            return;
          }
          if ( v42 )
          {
            v65 = sub_BFB840(v42);
            v67 = (*(_WORD *)v65 & 0x1FFu) - 113;
            if ( (unsigned int)v67 <= 1
              && (*(_QWORD *)v65 & 0x80000LL) == 0
              && *(char *)(*(_QWORD *)(v65 + 16) + 82LL) >= 0
              && ((*(_BYTE *)(v61 + 29) & 1) == 0 || !sub_179AE00(v61, v62, v67, v66, v35, v36))
              && ((*(_DWORD *)sub_B73640((__int64)v7) & 0x20000) != 0 || !sub_B7C110((__int64)v7)) )
            {
              return;
            }
            if ( (*(_DWORD *)v42 & 0x10000) != 0 )
            {
              v141 = sub_B8E970(v61 + 64);
              if ( v141 )
              {
                if ( (*(_BYTE *)(v141 + 28) & 0x7F) == 0x26 )
                {
LABEL_271:
                  if ( *(char *)(v141 + 82) >= 0 )
                    return;
                  while ( 1 )
                  {
                    v143 = *(_QWORD *)(v141 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v141 = v143;
                    if ( !v143 )
                      break;
                    if ( (*(_BYTE *)(v143 + 28) & 0x7F) == 0x26 )
                      goto LABEL_271;
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v142 = *(_QWORD *)(v141 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v141 = v142;
                    if ( !v142 )
                      break;
                    if ( (*(_BYTE *)(v142 + 28) & 0x7F) == 0x26 )
                      goto LABEL_271;
                  }
                }
              }
            }
            if ( (*(_WORD *)v42 & 0x1FF) == 0x5F )
              return;
          }
        }
      }
      v68 = v7[28] & 0x7F;
      v40 = v68;
      if ( (unsigned int)v68 - 64 <= 2 )
      {
LABEL_87:
        v69 = *(_DWORD *)(a1 + 2792);
        v152 = v7;
        if ( !v69 )
        {
          v70 = *(unsigned int *)(a1 + 2816);
          v71 = *(_QWORD **)(a1 + 2808);
          v72 = &v71[v70];
          v73 = (8 * v70) >> 3;
          v74 = (8 * v70) >> 5;
          if ( !v74 )
          {
            v75 = *(_QWORD **)(a1 + 2808);
            goto LABEL_101;
          }
          if ( v7 == (_BYTE *)*v71 )
          {
            v75 = *(_QWORD **)(a1 + 2808);
            goto LABEL_135;
          }
          v75 = v71 + 1;
          if ( v7 == (_BYTE *)v71[1] )
            goto LABEL_135;
          v75 = v71 + 2;
          if ( v7 == (_BYTE *)v71[2] )
            goto LABEL_135;
          v75 = v71 + 3;
          v74 = (__int64)&v71[4 * v74];
          if ( v7 == (_BYTE *)v71[3] )
            goto LABEL_135;
          while ( 1 )
          {
            v75 = v71 + 4;
            if ( v71 + 4 == (_QWORD *)v74 )
              break;
            if ( v7 == (_BYTE *)v71[4] )
              goto LABEL_135;
            if ( v7 == (_BYTE *)v71[5] )
            {
              v75 = v71 + 5;
              goto LABEL_135;
            }
            if ( v7 == (_BYTE *)v71[6] )
            {
              v75 = v71 + 6;
              goto LABEL_135;
            }
            if ( v7 == (_BYTE *)v71[7] )
            {
              v75 = v71 + 7;
              goto LABEL_135;
            }
            v71 += 4;
          }
          v73 = ((__int64)v72 - v74) >> 3;
LABEL_101:
          if ( v73 != 2 )
          {
            if ( v73 != 3 )
            {
              if ( v73 != 1 )
                goto LABEL_104;
LABEL_169:
              if ( v7 == (_BYTE *)*v75 )
                goto LABEL_135;
              goto LABEL_104;
            }
            if ( v7 == (_BYTE *)*v75 )
              goto LABEL_135;
            ++v75;
          }
          if ( v7 != (_BYTE *)*v75 )
          {
            ++v75;
            goto LABEL_169;
          }
LABEL_135:
          if ( v72 != v75 )
            return;
LABEL_104:
          if ( v70 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2820) )
          {
            sub_2237220(a1 + 2808, a1 + 2824, v70 + 1, 8);
            v72 = (_QWORD *)(*(_QWORD *)(a1 + 2808) + 8LL * *(unsigned int *)(a1 + 2816));
          }
          *v72 = v7;
          v76 = (unsigned int)(*(_DWORD *)(a1 + 2816) + 1);
          *(_DWORD *)(a1 + 2816) = v76;
          if ( (unsigned int)v76 <= 4 )
            return;
          v77 = *(__int64 **)(a1 + 2808);
          v78 = &v77[v76];
          while ( 2 )
          {
            v83 = *(unsigned int *)(a1 + 2800);
            if ( !(_DWORD)v83 )
            {
              *(_QWORD *)v160 = 0;
              goto LABEL_112;
            }
            v74 = *v77;
            v79 = *(_QWORD *)(a1 + 2784);
            v80 = (v83 - 1) & (((unsigned int)*v77 >> 9) ^ ((unsigned int)*v77 >> 4));
            v81 = (__int64 *)(v79 + 8LL * v80);
            v82 = *v81;
            if ( *v77 == *v81 )
            {
LABEL_109:
              sub_17AD1A0((__m128 *)v160, v81, (_QWORD *)(v79 + 8 * v83), a1 + 2784, 1);
              if ( v78 == ++v77 )
                return;
              continue;
            }
            break;
          }
          v128 = 1;
          v129 = nullptr;
          if ( v82 != -4096 )
          {
            while ( 1 )
            {
              if ( v82 == -8192 && !v129 )
                v129 = v81;
              v80 = (v83 - 1) & (v128 + v80);
              v81 = (__int64 *)(v79 + 8LL * v80);
              v82 = *v81;
              if ( v74 == *v81 )
                goto LABEL_109;
              if ( v82 == -4096 )
              {
                if ( v129 )
                  v81 = v129;
                break;
              }
              ++v128;
            }
          }
          v130 = *(_DWORD *)(a1 + 2792);
          v73 = (unsigned int)(3 * v83);
          *(_QWORD *)v160 = v81;
          v85 = v130 + 1;
          v36 = (unsigned int)(4 * v85);
          if ( (unsigned int)v36 < (unsigned int)v73 )
          {
            v73 = (unsigned int)(v83 - *(_DWORD *)(a1 + 2796) - v85);
            v36 = (unsigned int)v83 >> 3;
            if ( (unsigned int)v73 <= (unsigned int)v36 )
            {
              v84 = v83;
LABEL_113:
              sub_17E0E10(a1 + 2784, v84, v83, v74, v73, v36);
              sub_17AC650((__int64 *)(a1 + 2784), v77, v160);
              v74 = *v77;
              v79 = *(_QWORD *)(a1 + 2784);
              v83 = *(unsigned int *)(a1 + 2800);
              v81 = *(__int64 **)v160;
              v85 = *(_DWORD *)(a1 + 2792) + 1;
            }
            v86 = *v81 == -4096;
            *(_DWORD *)(a1 + 2792) = v85;
            if ( !v86 )
              --*(_DWORD *)(a1 + 2796);
            *v81 = v74;
            goto LABEL_109;
          }
LABEL_112:
          v84 = 2 * v83;
          goto LABEL_113;
        }
        v92 = *(unsigned int *)(a1 + 2800);
        v93 = (__int64 *)(a1 + 2784);
        if ( (_DWORD)v92 )
        {
          v35 = *(_QWORD *)(a1 + 2784);
          v94 = (v92 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
          v95 = (_QWORD *)(v35 + 8LL * v94);
          v96 = (_BYTE *)*v95;
          if ( v7 == (_BYTE *)*v95 )
          {
LABEL_140:
            sub_17AD1A0((__m128 *)v160, v95, (_QWORD *)(v35 + 8 * v92), (__int64)v93, 1);
            return;
          }
          v118 = 1;
          v119 = nullptr;
          if ( v96 != (_BYTE *)-4096LL )
          {
            while ( 1 )
            {
              if ( v96 == (_BYTE *)-8192LL && !v119 )
                v119 = v95;
              v94 = (v92 - 1) & (v118 + v94);
              v95 = (_QWORD *)(v35 + 8LL * v94);
              v96 = (_BYTE *)*v95;
              if ( v7 == (_BYTE *)*v95 )
                goto LABEL_140;
              if ( v96 == (_BYTE *)-4096LL )
              {
                if ( v119 )
                  v95 = v119;
                break;
              }
              ++v118;
            }
          }
          v120 = v69 + 1;
          v40 = (unsigned int)(3 * v92);
          *(_QWORD *)v160 = v95;
          if ( 4 * v120 < (unsigned int)v40 )
          {
            v121 = (unsigned int)(v92 - *(_DWORD *)(a1 + 2796) - v120);
            if ( (unsigned int)v121 > (unsigned int)v92 >> 3 )
            {
LABEL_205:
              v86 = *v95 == -4096;
              *(_DWORD *)(a1 + 2792) = v120;
              if ( !v86 )
                --*(_DWORD *)(a1 + 2796);
              *v95 = v7;
              sub_17AD1A0((__m128 *)v160, v95, (_QWORD *)(v35 + 8 * v92), (__int64)v93, 1);
              v122 = *(unsigned int *)(a1 + 2816);
              v123 = (__int64)v152;
              if ( v122 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2820) )
              {
                sub_2237220(a1 + 2808, a1 + 2824, v122 + 1, 8);
                v122 = *(unsigned int *)(a1 + 2816);
              }
              *(_QWORD *)(*(_QWORD *)(a1 + 2808) + 8 * v122) = v123;
              ++*(_DWORD *)(a1 + 2816);
              return;
            }
            v144 = (__int64 *)(a1 + 2784);
            sub_17E0E10(a1 + 2784, v92, v121, (__int64)v93, v35, v36);
LABEL_228:
            sub_17AC650(v144, (__int64 *)&v152, v160);
            v7 = v152;
            v35 = *(_QWORD *)(a1 + 2784);
            v92 = *(unsigned int *)(a1 + 2800);
            v120 = *(_DWORD *)(a1 + 2792) + 1;
            v95 = *(_QWORD **)v160;
            v93 = v144;
            goto LABEL_205;
          }
        }
        else
        {
          *(_QWORD *)v160 = 0;
        }
        v144 = (__int64 *)(a1 + 2784);
        sub_17E0E10(a1 + 2784, 2 * v92, v40, (__int64)v93, v35, v36);
        goto LABEL_228;
      }
      v153 = 0;
      v155 = 0;
      v152 = nullptr;
      v154 = 0;
      v156 = v158;
      v157 = 0;
      v158[0] = 0;
      v159 = 0;
      if ( v68 != 78 )
      {
        if ( (unsigned int)v68 - 40 <= 6 )
          goto LABEL_18;
LABEL_137:
        v20 = 7538;
        goto LABEL_22;
      }
    }
    v97 = *(_QWORD *)(a1 + 248);
    v98 = *(__int64 **)(v97 + 2312);
    v99 = *(_QWORD *)(v97 + 2320);
    *(double *)a5.m128i_i64 = (*(double (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 16LL))(v7);
    v101 = sub_13DC8D0(v100, 62, v98, v99, 0, a5, a6);
    if ( v101 )
    {
      *(_QWORD *)v160 = __PAIR64__(v101, (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 16LL))(v7));
      *(_QWORD *)&v160[12] = 0;
      v161 = 0;
      v162[0] = v163;
      v162[1] = nullptr;
      v163[0] = 0;
      v164 = 0;
      v160[8] = 0;
      v152 = *(_BYTE **)v160;
      v153 = 0;
      v154 = 0;
      v155 = 0;
      sub_A0AAD0((__int64)&v156, v162);
      v159 = v164;
      if ( v162[0] != v163 )
        operator delete(v162[0]);
    }
    v68 = v7[28] & 0x7F;
    if ( (unsigned int)v68 - 40 <= 6 )
    {
LABEL_18:
      if ( v68 == 43 )
        goto LABEL_137;
      v20 = 7523;
      if ( (v7[97] & 2) != 0 )
        goto LABEL_22;
    }
    if ( v68 != 78 )
      goto LABEL_137;
    v20 = 7526;
LABEL_22:
    v21 = *((_DWORD *)v7 + 6);
    sub_168B9B0((__int64)&v148, a1 + 8, v20);
    sub_AE9DF0(&v148, (__int64)v7, 0xAu);
    if ( (_DWORD)v152 && HIDWORD(v152) )
    {
      v22 = v148;
      if ( v148 )
      {
        v23 = *((unsigned int *)v148 + 134);
        v24 = *((_BYTE **)v148 + 66);
        v25 = *((unsigned int *)v148 + 135);
        v26 = v23 + 1;
        v27 = (unsigned __int64)&v24[64 * v23];
      }
      else
      {
        v116 = v149;
        v117 = *(_DWORD *)(v149 + 14976);
        if ( v117 )
        {
          v131 = (unsigned int)(v117 - 1);
          *(_DWORD *)(v149 + 14976) = v131;
          v22 = *(_BYTE **)(v116 + 8 * v131 + 14848);
          v132 = *((unsigned int *)v22 + 134);
          *v22 = 0;
          v133 = *((_BYTE **)v22 + 66);
          *((_DWORD *)v22 + 106) = 0;
          v134 = &v133[64 * v132];
          if ( v133 != v134 )
          {
            do
            {
              while ( 1 )
              {
                v134 -= 64;
                v135 = *((_BYTE **)v134 + 3);
                if ( v135 == v134 + 40 )
                  break;
                operator delete(v135);
                if ( v133 == v134 )
                  goto LABEL_222;
              }
            }
            while ( v133 != v134 );
LABEL_222:
            v133 = *((_BYTE **)v22 + 66);
          }
          *((_DWORD *)v22 + 134) = 0;
          v25 = *((unsigned int *)v22 + 135);
          v24 = v133;
        }
        else
        {
          v25 = 6;
          v22 = (_BYTE *)operator new(0x3A0u);
          *v22 = 0;
          *((_QWORD *)v22 + 12) = v22 + 112;
          *((_QWORD *)v22 + 16) = v22 + 144;
          *((_QWORD *)v22 + 20) = v22 + 176;
          *((_QWORD *)v22 + 24) = v22 + 208;
          *((_QWORD *)v22 + 28) = v22 + 240;
          *((_QWORD *)v22 + 32) = v22 + 272;
          *((_QWORD *)v22 + 36) = v22 + 304;
          *((_QWORD *)v22 + 40) = v22 + 336;
          *((_QWORD *)v22 + 44) = v22 + 368;
          *((_QWORD *)v22 + 48) = v22 + 400;
          *((_QWORD *)v22 + 52) = v22 + 432;
          *((_QWORD *)v22 + 13) = 0;
          v22[112] = 0;
          *((_QWORD *)v22 + 17) = 0;
          v22[144] = 0;
          *((_QWORD *)v22 + 21) = 0;
          v22[176] = 0;
          *((_QWORD *)v22 + 25) = 0;
          v22[208] = 0;
          *((_QWORD *)v22 + 29) = 0;
          v22[240] = 0;
          *((_QWORD *)v22 + 33) = 0;
          v22[272] = 0;
          *((_QWORD *)v22 + 37) = 0;
          v22[304] = 0;
          *((_QWORD *)v22 + 41) = 0;
          v22[336] = 0;
          *((_QWORD *)v22 + 45) = 0;
          v22[368] = 0;
          *((_QWORD *)v22 + 49) = 0;
          v22[400] = 0;
          *((_QWORD *)v22 + 53) = 0x800000000LL;
          v24 = v22 + 544;
          *((_QWORD *)v22 + 66) = v22 + 544;
          *((_QWORD *)v22 + 67) = 0x600000000LL;
        }
        v148 = v22;
        v27 = (unsigned __int64)v24;
        v26 = 1;
      }
      v28 = (__int64 *)&v152;
      if ( v26 > v25 )
      {
        v124 = v22 + 544;
        if ( v24 > (_BYTE *)&v152 || v27 <= (unsigned __int64)&v152 )
        {
          v144 = (__int64 *)(v22 + 528);
          v136 = sub_2237400(v22 + 528, v22 + 544, v26, 64, v160);
          sub_9EF810((__int64 *)v22 + 66, v136);
          v137 = *((_BYTE **)v22 + 66);
          v138 = *(_DWORD *)v160;
          if ( v137 == v124 )
          {
            *((_QWORD *)v22 + 66) = v136;
          }
          else
          {
            v144 = *(__int64 **)v160;
            free(v137);
            *((_QWORD *)v22 + 66) = v136;
            v138 = (int)v144;
          }
          *((_DWORD *)v22 + 135) = v138;
          v28 = (__int64 *)&v152;
          v27 = ((unsigned __int64)*((unsigned int *)v22 + 134) << 6) + v136;
        }
        else
        {
          v147 = v22 + 528;
          v144 = (__int64 *)((char *)&v152 - v24);
          v125 = sub_2237400(v22 + 528, v22 + 544, v26, 64, v160);
          sub_9EF810((__int64 *)v22 + 66, v125);
          v126 = *((_BYTE **)v22 + 66);
          v127 = *(_DWORD *)v160;
          if ( v126 == v124 )
          {
            *((_QWORD *)v22 + 66) = v125;
            *((_DWORD *)v22 + 135) = v127;
          }
          else
          {
            v147 = *(_BYTE **)v160;
            free(v126);
            *((_QWORD *)v22 + 66) = v125;
            *((_DWORD *)v22 + 135) = (_DWORD)v147;
          }
          v28 = (__int64 *)((char *)v144 + v125);
          v27 = ((unsigned __int64)*((unsigned int *)v22 + 134) << 6) + v125;
        }
      }
      *(_QWORD *)v27 = *v28;
      *(_DWORD *)(v27 + 8) = *((_DWORD *)v28 + 2);
      *(_QWORD *)(v27 + 12) = *(__int64 *)((char *)v28 + 12);
      *(_DWORD *)(v27 + 20) = *((_DWORD *)v28 + 5);
      v29 = (void *)(v27 + 40);
      *(_QWORD *)(v27 + 24) = v27 + 40;
      v30 = (_BYTE *)v28[3];
      v31 = (__int64 *)v28[4];
      if ( &v30[(_QWORD)v31] && !v30 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v31 > 0xF )
      {
        if ( (__int64)v31 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v147 = (_BYTE *)v28[3];
        v144 = v31;
        v29 = (void *)operator new((unsigned __int64)v31 + 1);
        v31 = v144;
        v30 = v147;
        *(_QWORD *)(v27 + 24) = v29;
        *(_QWORD *)(v27 + 40) = v144;
        goto LABEL_172;
      }
      if ( v31 == (__int64 *)((char *)&dword_0 + 1) )
      {
        *(_BYTE *)(v27 + 40) = *v30;
        goto LABEL_32;
      }
      if ( v31 )
      {
LABEL_172:
        v144 = v31;
        memcpy(v29, v30, (size_t)v31);
        v29 = *(void **)(v27 + 24);
        v31 = v144;
      }
LABEL_32:
      *(_QWORD *)(v27 + 32) = v31;
      *((_BYTE *)v31 + (_QWORD)v29) = 0;
      *(_BYTE *)(v27 + 56) = *((_BYTE *)v28 + 56);
      ++*((_DWORD *)v22 + 134);
    }
    *(_DWORD *)v160 = v21;
    *(_DWORD *)&v160[4] = v21;
    v160[8] = 1;
    sub_AEC610((__int64 *)&v148, (__int64 *)v160);
    sub_1582CA0((__int64)&v150, &v148);
    v32 = _mm_load_si128(&v150);
    v150.m128i_i64[0] = 0;
    *(_DWORD *)&v160[16] = v151;
    *(__m128i *)v160 = v32;
    v145(v146, v21, v160);
    if ( *(_QWORD *)v160 && *(_QWORD *)&v160[8] )
      sub_1580C40(*(unsigned __int64 *)&v160[8], *(unsigned __int64 *)v160);
    if ( v150.m128i_i64[0] && v150.m128i_i64[1] )
      sub_1580C40(v150.m128i_u64[1], v150.m128i_u64[0]);
    if ( v148 && v149 )
      sub_1580C40(v149, (unsigned __int64)v148);
    if ( v156 != v158 )
      operator delete(v156);
    return;
  }
  v102 = sub_B8C3D0(a2, v8, v33, v34, v35, v36);
  v103 = *v102;
  v104 = *v102 + 8LL * *((unsigned int *)v102 + 2);
  if ( *v102 >= v104 )
  {
    if ( v103 != v104 )
    {
      if ( *(_WORD *)(*(_QWORD *)v104 + 36LL) == 389 )
        return;
      for ( i = (__int64 *)(v104 + 8); ; ++i )
      {
        v104 = (unsigned __int64)i;
        if ( (__int64 *)v103 == i )
          break;
        v115 = *i;
        if ( *(_WORD *)(v115 + 36) == 389 )
          return;
      }
    }
  }
  else
  {
    v105 = (__int64 *)*v102;
    while ( 1 )
    {
      v103 = *v105;
      if ( *(_WORD *)(*v105 + 36) == 389 )
        break;
      if ( (__int64 *)v104 == ++v105 )
        goto LABEL_151;
    }
    if ( (__int64 *)v104 != v105 )
      return;
  }
LABEL_151:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_50;
  v106 = sub_B8C3D0(a2, v8, v103, v104, v35, v36);
  v107 = *v106;
  v108 = *v106 + 8LL * *((unsigned int *)v106 + 2);
  if ( *v106 >= v108 )
  {
    if ( v107 != v108 )
    {
      while ( *(_WORD *)(*(_QWORD *)v108 + 36LL) != 312 )
      {
        v108 += 8LL;
        if ( v107 == v108 )
          goto LABEL_156;
      }
      return;
    }
  }
  else
  {
    v109 = (__int64 *)*v106;
    while ( 1 )
    {
      v107 = *v109;
      if ( *(_WORD *)(*v109 + 36) == 312 )
        break;
      if ( (__int64 *)v108 == ++v109 )
        goto LABEL_156;
    }
    if ( (__int64 *)v108 != v109 )
      return;
  }
LABEL_156:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_50;
  v110 = sub_B8C3D0(a2, v8, v107, v108, v35, v36);
  v111 = *v110;
  v112 = *v110 + 8LL * *((unsigned int *)v110 + 2);
  if ( *v110 >= v112 )
  {
    if ( v111 == v112 )
      goto LABEL_50;
    while ( *(_WORD *)(*(_QWORD *)v112 + 36LL) != 174 )
    {
      v112 += 8LL;
      if ( v111 == v112 )
        goto LABEL_50;
    }
  }
  else
  {
    v113 = *v110;
    while ( *(_WORD *)(*(_QWORD *)v113 + 36LL) != 174 )
    {
      v113 += 8LL;
      if ( v112 == v113 )
        goto LABEL_50;
    }
    if ( v112 == v113 )
      goto LABEL_50;
  }
}
