unsigned __int64 __fastcall sub_EE4ED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r13
  unsigned __int64 result; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  unsigned __int64 v20; // rbx
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // r12
  unsigned int v44; // esi
  __int64 v45; // rbx
  __int64 v46; // rdi
  unsigned int v47; // edx
  __int64 *v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rbp
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  unsigned __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int v60; // r14d
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r12
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 *v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  char v70; // al
  unsigned int v71; // esi
  __int64 v72; // rcx
  unsigned int v73; // edx
  __int64 *v74; // rax
  __int64 v75; // r10
  unsigned __int64 v76; // rbp
  __int64 v77; // rax
  __int64 v78; // r14
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rbp
  __int64 v81; // rax
  signed __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdi
  __int64 v89; // r14
  __int64 v90; // r14
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdi
  __int64 v96; // rax
  char v97; // al
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rbp
  __int64 v104; // rax
  __int64 v105; // rcx
  int v106; // eax
  __int64 v107; // rdi
  unsigned __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int64 v110; // rdx
  __int64 v111; // rbp
  __int64 v112; // rax
  __int64 v113; // rbp
  __int64 v114; // rbx
  unsigned __int64 v115; // r12
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // r14
  unsigned __int64 v119; // rax
  __int64 v120; // rax
  int v121; // r11d
  __int64 *v122; // r10
  int v123; // ecx
  __int64 v124; // rdi
  bool v125; // zf
  int v126; // eax
  int v127; // r11d
  int v128; // eax
  bool v129; // [rsp+0h] [rbp-88h]
  __int64 v130; // [rsp+0h] [rbp-88h]
  __int64 v131; // [rsp+0h] [rbp-88h]
  __int64 v132; // [rsp+0h] [rbp-88h]
  __int64 v133; // [rsp+8h] [rbp-80h]
  unsigned int v134; // [rsp+8h] [rbp-80h]
  __int64 v135; // [rsp+8h] [rbp-80h]
  __int64 v136; // [rsp+10h] [rbp-78h]
  __int64 v137; // [rsp+18h] [rbp-70h]
  __int64 *v138; // [rsp+20h] [rbp-68h]
  __int64 v139; // [rsp+38h] [rbp-50h]
  unsigned __int64 v140; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v141[8]; // [rsp+48h] [rbp-40h] BYREF

  *(_BYTE *)(a1 + 316) &= ~2u;
  v8 = sub_B7E900(a2, a2, a3, a4, a5, a6);
  result = a1 + 120;
  v136 = a1 + 120;
  if ( v8 )
  {
    v137 = a1 + 136;
    v138 = (__int64 *)(a1 + 336);
LABEL_3:
    if ( (*(_BYTE *)(v8 + 68) & 1) == 0 )
    {
      *(_BYTE *)(a1 + 316) &= ~2u;
      v133 = sub_EE4C90(a1, v8, v6, v7);
      v12 = v11;
      v13 = v133;
      if ( *(_QWORD *)(a1 + 40) < v11 )
        *(_QWORD *)(a1 + 40) = v11;
      v14 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL));
      v129 = sub_B78240(v8)
          && (v83 = *(_QWORD *)(v14 + 104),
              sub_7052B0((__int64 *)(v83 + 96), v83, v15, v16, v17, v18),
              (*(_BYTE *)(*(_QWORD *)(v14 + 128) + 1LL) & 2) != 0)
          && sub_B7E900(v14, v83, v15, v16, v17, v18) == 0;
      v19 = *(_BYTE *)(a1 + 316);
      if ( (v19 & 0x40) == 0 )
      {
        v20 = 0;
        if ( (v19 & 1) == 0 )
        {
          v21 = *(__int64 **)(a1 + 8);
          if ( v21 )
          {
            if ( !v129 )
              v20 = v12
                  * ((*(_QWORD *)(a1 + 32) - (unsigned __int64)(*(_QWORD *)(a1 + 32) != 0)) / v12
                   + (*(_QWORD *)(a1 + 32) != 0));
            while ( 1 )
            {
              if ( (unsigned __int8)sub_EE2300(v21, v8, v20) )
                goto LABEL_61;
              v43 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
                v43 = *(_QWORD *)v43;
              if ( (*(_BYTE *)(v43 + 8) & 0x7Fu) - 58 > 3 || v43 == 64 )
                goto LABEL_26;
              sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 40) + 96LL), *(_QWORD *)(v43 + 40), v39, v40, v41, v42);
              v26 = *(_QWORD *)(v43 + 64);
              v27 = (*(_BYTE *)(v26 + 24) & 1) != 0 ? sub_B96980(v26) : *(_QWORD *)(v26 + 24);
              sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 40) + 96LL), *(_QWORD *)(v43 + 40), v22, v23, v24, v25);
              v28 = v27 + 24LL * *(unsigned int *)(*(_QWORD *)(v43 + 64) + 16LL);
              sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 40) + 96LL), *(_QWORD *)(v43 + 40), v29, v30, v31, v32);
              v37 = *(_QWORD *)(v43 + 64);
              if ( (*(_BYTE *)(v37 + 24) & 1) != 0 )
              {
                if ( sub_B96980(v37) != v28 )
                  break;
              }
              else if ( *(_QWORD *)(v37 + 24) != v28 )
              {
                break;
              }
              sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 40) + 96LL), *(_QWORD *)(v43 + 40), v33, v34, v35, v36);
              v88 = *(_QWORD *)(v43 + 64);
              v89 = (*(_BYTE *)(v88 + 32) & 1) != 0 ? sub_B969C0(v88) : *(_QWORD *)(v88 + 32);
              sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 40) + 96LL), *(_QWORD *)(v43 + 40), v84, v85, v86, v87);
              v90 = v89 + 24LL * *(unsigned int *)(*(_QWORD *)(v43 + 64) + 20LL);
              sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 40) + 96LL), *(_QWORD *)(v43 + 40), v91, v92, v93, v94);
              v95 = *(_QWORD *)(v43 + 64);
              v96 = (*(_BYTE *)(v95 + 32) & 1) != 0 ? sub_B969C0(v95) : *(_QWORD *)(v95 + 32);
              if ( v96 != v90 )
                break;
              v20 += v12;
LABEL_20:
              v21 = *(__int64 **)(a1 + 8);
            }
            if ( !v20 )
            {
              v38 = *(_QWORD *)(a1 + 32);
              if ( v38 )
              {
                v20 = v12 * ((v38 - 1) / v12 + 1);
                goto LABEL_20;
              }
            }
LABEL_26:
            v20 += v12;
            goto LABEL_20;
          }
          v20 = v12
              * ((*(_QWORD *)(a1 + 16) - (unsigned __int64)(*(_QWORD *)(a1 + 16) != 0)) / v12
               + (*(_QWORD *)(a1 + 16) != 0));
LABEL_61:
          v13 = v20 + v133;
        }
LABEL_31:
        v51 = sub_A98060(*(_QWORD *)a1, *(_QWORD *)(a1 + 32));
        v52 = *(unsigned int *)(a1 + 312);
        v53 = v51;
        v54 = sub_A98060(*(_QWORD *)a1, v20);
        v55 = *(_QWORD *)a1;
        if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x32 )
        {
          if ( *(_DWORD *)(v8 + 24) )
          {
            v56 = v53 - v52;
            if ( (*(_BYTE *)(a1 + 316) & 1) == 0 && v56 < v54 )
            {
              sub_ED7B40(v55, v54, v56, v8);
              v55 = *(_QWORD *)a1;
            }
          }
        }
        *(_DWORD *)(a1 + 312) = 0;
        v57 = sub_A98060(v55, v20);
        v7 = *(unsigned int *)(a1 + 128);
        if ( v7 + 1 > *(unsigned int *)(a1 + 132) )
        {
          v135 = v57;
          sub_2237220(v136, v137, v7 + 1, 8);
          v7 = *(unsigned int *)(a1 + 128);
          v57 = v135;
        }
        v6 = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(v6 + 8 * v7) = v57;
        ++*(_DWORD *)(a1 + 128);
        if ( !v129 && *(_QWORD *)(a1 + 32) < v13 )
          *(_QWORD *)(a1 + 32) = v13;
        if ( *(_QWORD *)(a1 + 16) < v13 )
          *(_QWORD *)(a1 + 16) = v13;
        goto LABEL_44;
      }
      v44 = *(_DWORD *)(a1 + 352);
      v45 = *(_QWORD *)a1;
      v140 = v8;
      if ( v44 )
      {
        v17 = v44 - 1;
        v46 = *(_QWORD *)(a1 + 336);
        v47 = v17 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
        v48 = (__int64 *)(v46 + 16LL * v47);
        v49 = *v48;
        if ( *v48 == v8 )
        {
LABEL_29:
          v50 = v48[1];
LABEL_30:
          v20 = sub_A97FF0(v45, v50);
          v13 = v20 + v133;
          goto LABEL_31;
        }
        v121 = 1;
        v122 = nullptr;
        if ( v49 != -4096 )
        {
          while ( 1 )
          {
            if ( !v122 && v49 == -8192 )
              v122 = v48;
            v18 = (unsigned int)(v121 + 1);
            v47 = v17 & (v121 + v47);
            v48 = (__int64 *)(v46 + 16LL * v47);
            v49 = *v48;
            if ( *v48 == v8 )
              goto LABEL_29;
            if ( v49 == -4096 )
              break;
            ++v121;
          }
          if ( v122 )
            v48 = v122;
        }
        v123 = *(_DWORD *)(a1 + 344);
        v141[0] = v48;
        v15 = (unsigned int)(v123 + 1);
        v16 = 3 * v44;
        if ( 4 * (int)v15 < (unsigned int)v16 )
        {
          v124 = v8;
          v16 = v44 - *(_DWORD *)(a1 + 348) - (unsigned int)v15;
          v17 = v44 >> 3;
          if ( (unsigned int)v16 > (unsigned int)v17 )
          {
LABEL_111:
            v125 = *v48 == -4096;
            *(_DWORD *)(a1 + 344) = v15;
            if ( !v125 )
              --*(_DWORD *)(a1 + 348);
            *v48 = v124;
            v50 = 0;
            v48[1] = 0;
            goto LABEL_30;
          }
LABEL_116:
          sub_7057C0((__int64)v138, v44, v15, v16, v17, v18);
          sub_ED83C0(v138, (__int64 *)&v140, v141);
          v124 = v140;
          LODWORD(v15) = *(_DWORD *)(a1 + 344) + 1;
          v48 = (__int64 *)v141[0];
          goto LABEL_111;
        }
      }
      else
      {
        v141[0] = 0;
      }
      v44 *= 2;
      goto LABEL_116;
    }
    v60 = sub_B78170(v8);
    if ( v60 )
    {
      v61 = sub_EE4C90(a1, v8, v58, v59);
      v63 = v62;
      v64 = v61;
      v65 = sub_A98060(*(_QWORD *)a1, v61);
      v69 = v60;
      if ( v60 > v65 )
        v60 = sub_A98060(*(_QWORD *)a1, v64);
      v70 = *(_BYTE *)(a1 + 316);
      if ( (v70 & 0x40) != 0 )
      {
        v71 = *(_DWORD *)(a1 + 352);
        *(_QWORD *)(a1 + 64) = v64;
        *(_BYTE *)(a1 + 316) = v70 | 2;
        v140 = v8;
        if ( v71 )
        {
          v72 = *(_QWORD *)(a1 + 336);
          v73 = (v71 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
          v74 = (__int64 *)(v72 + 16LL * v73);
          v75 = *v74;
          if ( *v74 == v8 )
          {
LABEL_52:
            v76 = v74[1];
LABEL_53:
            v77 = *(unsigned int *)(a1 + 128);
            if ( v77 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 132) )
            {
              sub_2237220(v136, v137, v77 + 1, 8);
              v77 = *(unsigned int *)(a1 + 128);
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v77) = v76;
            v78 = *(_QWORD *)a1;
            ++*(_DWORD *)(a1 + 128);
            v79 = sub_A98060(v78, v63);
            v80 = v79 * (v76 / v79);
            v81 = sub_A98060(*(_QWORD *)a1, v64);
            v82 = sub_A97FF0(v78, v81 + v80);
            if ( *(_QWORD *)(a1 + 16) < v82 )
              *(_QWORD *)(a1 + 16) = v82;
            if ( *(_QWORD *)(a1 + 40) < v63 )
              *(_QWORD *)(a1 + 40) = v63;
            goto LABEL_59;
          }
          v127 = 1;
          v67 = nullptr;
          if ( v75 == -4096 )
            goto LABEL_124;
          while ( 1 )
          {
            if ( v75 == -8192 && !v67 )
              v67 = v74;
            v68 = (unsigned int)(v127 + 1);
            v73 = (v71 - 1) & (v127 + v73);
            v74 = (__int64 *)(v72 + 16LL * v73);
            v75 = *v74;
            if ( *v74 == v8 )
              goto LABEL_52;
            if ( v75 == -4096 )
              break;
            ++v127;
          }
          if ( !v67 )
LABEL_124:
            v67 = v74;
          v128 = *(_DWORD *)(a1 + 344);
          v69 = 3 * v71;
          v141[0] = v67;
          v126 = v128 + 1;
          v66 = (unsigned int)(4 * v126);
          if ( (unsigned int)v66 < (unsigned int)v69 )
          {
            v66 = v8;
            v69 = v71 - *(_DWORD *)(a1 + 348) - v126;
            if ( (unsigned int)v69 > v71 >> 3 )
              goto LABEL_120;
            goto LABEL_119;
          }
        }
        else
        {
          v141[0] = 0;
        }
        v71 *= 2;
LABEL_119:
        sub_7057C0((__int64)v138, v71, v69, v66, (__int64)v67, v68);
        sub_ED83C0(v138, (__int64 *)&v140, v141);
        v66 = v140;
        v67 = (__int64 *)v141[0];
        v126 = *(_DWORD *)(a1 + 344) + 1;
LABEL_120:
        v125 = *v67 == -4096;
        *(_DWORD *)(a1 + 344) = v126;
        if ( !v125 )
          --*(_DWORD *)(a1 + 348);
        *v67 = v66;
        v76 = 0;
        v67[1] = 0;
        goto LABEL_53;
      }
      v100 = *(_QWORD *)a1;
      if ( (v70 & 1) == 0 )
      {
        if ( (v70 & 2) != 0 && *(_QWORD *)(a1 + 64) == v64 && *(_DWORD *)(a1 + 312) >= v60 )
        {
          v120 = sub_A98060(v100, *(_QWORD *)(a1 + 16));
          sub_9B9C90(v136, v120 - *(unsigned int *)(a1 + 312));
          *(_DWORD *)(a1 + 312) -= v60;
          goto LABEL_44;
        }
        v101 = *(_QWORD *)(a1 + 16);
        v102 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 64) = v64;
        *(_BYTE *)(a1 + 316) |= 2u;
        v103 = v63 * ((v101 - (unsigned __int64)(v101 != 0)) / v63 + (v101 != 0));
        v130 = sub_A98060(v100, v102);
        v134 = *(_DWORD *)(a1 + 312);
        v104 = sub_A98060(*(_QWORD *)a1, v103);
        v105 = *(unsigned int *)(a1 + 128);
        if ( v105 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 132) )
        {
          v139 = v104;
          sub_2237220(v136, v137, v105 + 1, 8);
          v105 = *(unsigned int *)(a1 + 128);
          v104 = v139;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v105) = v104;
        ++*(_DWORD *)(a1 + 128);
        *(_QWORD *)(a1 + 16) = v103 + v64;
        if ( v63 > *(_QWORD *)(a1 + 40) )
          *(_QWORD *)(a1 + 40) = v63;
        v106 = sub_A98060(*(_QWORD *)a1, v64);
        v107 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 312) = v106 - v60;
        v108 = sub_A98060(v107, v103);
        v6 = *(_BYTE *)(v8 + 28) & 0x7F;
        if ( (_BYTE)v6 != 50 )
        {
          v7 = *(unsigned int *)(v8 + 24);
          if ( (_DWORD)v7 )
          {
            v7 = v130 - v134;
            v6 = v7;
            if ( (*(_BYTE *)(a1 + 316) & 1) == 0 && v7 < v108 )
            {
              sub_ED7B40(*(_QWORD *)a1, v108, v7, v8);
              *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 16);
              goto LABEL_44;
            }
          }
        }
LABEL_59:
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 16);
        goto LABEL_44;
      }
      *(_QWORD *)(a1 + 64) = v64;
      *(_BYTE *)(a1 + 316) = v70 | 2;
      v109 = sub_A98060(v100, 0);
      v7 = *(unsigned int *)(a1 + 128);
      if ( v7 + 1 > *(unsigned int *)(a1 + 132) )
      {
        v131 = v109;
        sub_2237220(v136, v137, v7 + 1, 8);
        v7 = *(unsigned int *)(a1 + 128);
        v109 = v131;
      }
      v6 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(v6 + 8 * v7) = v109;
      ++*(_DWORD *)(a1 + 128);
      if ( *(_QWORD *)(a1 + 16) >= v64 )
        goto LABEL_59;
LABEL_93:
      *(_QWORD *)(a1 + 16) = v64;
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 16);
      goto LABEL_44;
    }
    v97 = *(_BYTE *)(a1 + 316);
    if ( (v97 & 2) == 0 )
    {
      v98 = 0;
      if ( (v97 & 1) == 0 )
        v98 = *(_QWORD *)(a1 + 16);
      v99 = sub_A98060(*(_QWORD *)a1, v98);
      v7 = *(unsigned int *)(a1 + 128);
      if ( v7 + 1 > *(unsigned int *)(a1 + 132) )
      {
        v132 = v99;
        sub_2237220(v136, v137, v7 + 1, 8);
        v7 = *(unsigned int *)(a1 + 128);
        v99 = v132;
      }
      v6 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(v6 + 8 * v7) = v99;
      ++*(_DWORD *)(a1 + 128);
      goto LABEL_44;
    }
    *(_BYTE *)(a1 + 316) = v97 & 0xFD;
    v64 = sub_EE4C90(a1, v8, v58, v59);
    v111 = v110;
    if ( (*(_BYTE *)(a1 + 316) & 1) != 0 )
    {
      v112 = sub_A98060(*(_QWORD *)a1, 0);
      v7 = *(unsigned int *)(a1 + 128);
      v113 = v112;
      if ( v7 + 1 > *(unsigned int *)(a1 + 132) )
      {
        sub_2237220(v136, v137, v7 + 1, 8);
        v7 = *(unsigned int *)(a1 + 128);
      }
      v6 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(v6 + 8 * v7) = v113;
      ++*(_DWORD *)(a1 + 128);
      if ( *(_QWORD *)(a1 + 16) >= v64 )
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 16);
        goto LABEL_44;
      }
      goto LABEL_93;
    }
    v114 = v110
         * ((*(_QWORD *)(a1 + 16) - (unsigned __int64)(*(_QWORD *)(a1 + 16) != 0)) / v110 + (*(_QWORD *)(a1 + 16) != 0));
    v115 = sub_A98060(*(_QWORD *)a1, *(_QWORD *)(a1 + 32)) - *(unsigned int *)(a1 + 312);
    v116 = sub_A98060(*(_QWORD *)a1, v114);
    v117 = *(unsigned int *)(a1 + 128);
    v118 = v116;
    if ( v117 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 132) )
    {
      sub_2237220(v136, v137, v117 + 1, 8);
      v117 = *(unsigned int *)(a1 + 128);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v117) = v118;
    *(_DWORD *)(a1 + 312) = 0;
    ++*(_DWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 16) = v114;
    if ( v111 > *(_QWORD *)(a1 + 40) )
      *(_QWORD *)(a1 + 40) = v111;
    v119 = sub_A98060(*(_QWORD *)a1, v114);
    sub_ED7E40(*(_QWORD *)a1, *(_BYTE *)(a1 + 316) & 1, v119, v115, v8);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 16);
LABEL_44:
    while ( 1 )
    {
      result = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v8 = result;
      if ( !result )
        break;
      if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_3;
    }
  }
  return result;
}
