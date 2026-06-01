void __fastcall sub_BA34D0(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rbx
  char **v4; // rbx
  char **exception; // rbx
  char **v6; // rbx
  __int64 v7; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  char *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  char *v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // edx
  unsigned int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r13
  __int64 v31; // r11
  char **v32; // rbx
  char **v33; // rbp
  char *v34; // rbx
  bool v35; // r13
  int *v36; // r14
  __int64 v37; // rax
  int v38; // esi
  _DWORD *v39; // rcx
  unsigned int v40; // r9d
  __int64 v41; // r10
  unsigned int v42; // r15d
  unsigned int v43; // edx
  unsigned int v44; // ebx
  size_t v45; // rsi
  unsigned int *v46; // rax
  char *v47; // rdx
  char *v48; // rdi
  __int64 v49; // rdx
  char *v50; // rsi
  char v51; // cl
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r15
  __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 *v65; // rax
  int v66; // edx
  char v67; // al
  __int64 *v68; // rax
  int v69; // edx
  unsigned __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  _QWORD *v74; // rcx
  __int64 *v75; // rsi
  int v76; // edi
  __int64 *v77; // rsi
  int v78; // edi
  _QWORD *v79; // r12
  char *v80; // rax
  char *v81; // rax
  _QWORD *v82; // rax
  unsigned int v83; // ebp
  unsigned int v84; // edx
  unsigned int *v85; // rcx
  __int64 v86; // rsi
  int v87; // eax
  unsigned int v88; // ecx
  unsigned int v89; // r9d
  int v90; // eax
  unsigned int v91; // edi
  unsigned int v92; // ecx
  __int64 v93; // rax
  unsigned int v94; // edx
  unsigned int v95; // ebp
  unsigned int v96; // ecx
  unsigned int *v97; // rax
  __int64 v98; // rcx
  _QWORD *v99; // rax
  _QWORD *v100; // rdx
  __int64 v101; // rdx
  unsigned int v102; // ecx
  __int64 v103; // rsi
  int v104; // edx
  unsigned int v105; // edx
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  unsigned int v108; // edx
  __int64 v109; // rsi
  int v110; // edx
  _QWORD *v111; // rsi
  _QWORD *v112; // rdx
  unsigned int v113; // r8d
  size_t v114; // rsi
  __int64 v115; // rax
  _DWORD *v116; // rdx
  __int64 v117; // rsi
  _QWORD *v118; // rax
  char **v119; // [rsp+0h] [rbp-D8h]
  __int64 v120; // [rsp+0h] [rbp-D8h]
  __int64 v121; // [rsp+0h] [rbp-D8h]
  __int64 v122; // [rsp+8h] [rbp-D0h]
  __int64 v123; // [rsp+10h] [rbp-C8h]
  __int64 v124; // [rsp+18h] [rbp-C0h]
  __int64 v125; // [rsp+18h] [rbp-C0h]
  __int64 v126; // [rsp+18h] [rbp-C0h]
  __int64 v127; // [rsp+18h] [rbp-C0h]
  __int64 v128; // [rsp+18h] [rbp-C0h]
  __int64 v129; // [rsp+18h] [rbp-C0h]
  char *v130; // [rsp+20h] [rbp-B8h]
  unsigned int v131; // [rsp+20h] [rbp-B8h]
  unsigned int v132; // [rsp+20h] [rbp-B8h]
  unsigned int v133; // [rsp+20h] [rbp-B8h]
  unsigned int v134; // [rsp+2Ch] [rbp-ACh]
  __int64 v135; // [rsp+30h] [rbp-A8h]
  __int64 v136; // [rsp+38h] [rbp-A0h]
  __int64 v137; // [rsp+40h] [rbp-98h]
  char *v138; // [rsp+48h] [rbp-90h]
  char *v139; // [rsp+50h] [rbp-88h]
  unsigned int v140; // [rsp+58h] [rbp-80h]
  unsigned int v141; // [rsp+5Ch] [rbp-7Ch]
  __int64 v142; // [rsp+68h] [rbp-70h] BYREF
  __int64 v143; // [rsp+78h] [rbp-60h] BYREF
  char *v144[11]; // [rsp+80h] [rbp-58h] BYREF

  v142 = a2;
  if ( !a3 )
    return;
  v7 = *(_QWORD *)(a1 + 98928);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v10 = *(unsigned __int64 *)((char *)&stru_18260.r_offset + a1);
  if ( v10 && (v11 = *(_DWORD *)(v10 - 4)) != 0 )
  {
    v12 = (unsigned int)(v11 - 1);
    v13 = *(char **)(v10 + 8 * v12);
    *(_DWORD *)(v10 - 4) = v12;
    v138 = v13;
    if ( *(_QWORD *)v13 )
      *(_DWORD *)(*(_QWORD *)v13 - 4LL) = 0;
  }
  else
  {
    v80 = (char *)sub_186B270(8u);
    v10 = *(unsigned __int64 *)((char *)&stru_18260.r_offset + a1);
    v138 = v80;
    *(_QWORD *)v80 = 0;
    if ( !v10 )
    {
LABEL_92:
      v81 = (char *)sub_186B270(8u);
      v10 = *(unsigned __int64 *)((char *)&stru_18260.r_offset + a1);
      v139 = v81;
      *(_QWORD *)v81 = 0;
      if ( !v10 )
        goto LABEL_93;
      goto LABEL_11;
    }
  }
  v14 = *(_DWORD *)(v10 - 4);
  if ( !v14 )
    goto LABEL_92;
  v15 = (unsigned int)(v14 - 1);
  v16 = *(char **)(v10 + 8 * v15);
  *(_DWORD *)(v10 - 4) = v15;
  v139 = v16;
  if ( *(_QWORD *)v16 )
    *(_DWORD *)(*(_QWORD *)v16 - 4LL) = 0;
LABEL_11:
  v17 = *(_DWORD *)(v10 - 4);
  if ( v17 )
  {
    v18 = (unsigned int)(v17 - 1);
    v19 = *(_QWORD **)(v10 + 8 * v18);
    *(_DWORD *)(v10 - 4) = v18;
    if ( *v19 )
      *(_DWORD *)(*v19 - 4LL) = 0;
    goto LABEL_14;
  }
LABEL_93:
  v82 = (_QWORD *)sub_186B270(8u);
  *v82 = 0;
  v19 = v82;
LABEL_14:
  *(_QWORD *)(a3 + 56) = v19;
  sub_B9CC80(v19, &v142);
  v20 = *(_QWORD **)(a1 + 98928);
  if ( v20 )
  {
    v21 = *((unsigned int *)v20 - 1);
    if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
    {
      v83 = (unsigned int)(3 * v21 + 1) >> 1;
      v84 = 8 * v83 + 8;
      if ( 8 * (int)v21 + 8 >= v84 || (unsigned int)v21 >= v83 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2(v144);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v144);
        sub_233E40((__int64)v144);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v85 = (unsigned int *)sub_186B300(v20 - 1, v84);
      v20 = v85 + 2;
      v86 = v85[1];
      *(_QWORD *)(a1 + 98928) = v85 + 2;
      *v85 = v83;
      v22 = v86 + 1;
      *(_QWORD *)&v85[2 * v86 + 2] = a3;
      v85[1] = v86 + 1;
    }
    else
    {
      v22 = v21 + 1;
      v20[v21] = a3;
      *((_DWORD *)v20 - 1) = v21 + 1;
    }
  }
  else
  {
    v112 = (_QWORD *)sub_186B270(0x18u);
    v20 = v112 + 1;
    v112[1] = a3;
    *v112 = 0x100000002LL;
    v22 = 1;
    *(_QWORD *)(a1 + 98928) = v20;
  }
  v23 = 0;
  if ( v22 )
  {
    while ( 1 )
    {
      v24 = v23++;
      v25 = v20[v24];
      v26 = *(__int64 **)(v25 + 56);
      v27 = *v26;
      if ( *v26 )
      {
        v28 = *(unsigned int *)(v27 - 4);
        if ( v27 != v27 + 8 * v28 )
          break;
      }
LABEL_77:
      v70 = *(unsigned __int64 *)((char *)&stru_18260.r_offset + a1);
      if ( v70 )
      {
        v71 = *(_DWORD *)(v70 - 4);
        if ( v71 == *(_DWORD *)(v70 - 8) )
        {
          v95 = (3 * v71 + 1) >> 1;
          v96 = 8 * v95 + 8;
          if ( 8 * v71 + 8 >= v96 || v71 >= v95 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_151CF2(v144);
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v144);
            sub_233E40((__int64)v144);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v120 = v25;
          v97 = (unsigned int *)sub_186B300((void *)(v70 - 8), v96);
          v25 = v120;
          v98 = v97[1];
          v70 = (unsigned __int64)(v97 + 2);
          *v97 = v95;
          *(unsigned __int64 *)((char *)&stru_18260.r_offset + a1) = (unsigned __int64)(v97 + 2);
          LODWORD(v97) = v98;
          v74 = (_QWORD *)(v70 + 8 * v98);
          v73 = (_DWORD)v97 + 1;
        }
        else
        {
          v72 = v71;
          v73 = v71 + 1;
          v74 = (_QWORD *)(v70 + 8 * v72);
        }
      }
      else
      {
        v121 = v25;
        v99 = (_QWORD *)sub_186B270(0x18u);
        v25 = v121;
        v100 = v99;
        *v99 = 2;
        v73 = 1;
        v70 = (unsigned __int64)(v100 + 1);
        *(unsigned __int64 *)((char *)&stru_18260.r_offset + a1) = v70;
        v74 = (_QWORD *)v70;
      }
      *v74 = v26;
      *(_DWORD *)(v70 - 4) = v73;
      *(_QWORD *)(v25 + 56) = 0;
      v75 = *(__int64 **)v138;
      if ( *(_QWORD *)v138 )
        v76 = *((_DWORD *)v75 - 1);
      else
        v76 = 0;
      sub_B397E0(v76, v75);
      v77 = *(__int64 **)v139;
      if ( *(_QWORD *)v139 )
        v78 = *((_DWORD *)v77 - 1);
      else
        v78 = 0;
      sub_B39810(v78, v77);
      if ( *(_QWORD *)v138 )
        *(_DWORD *)(*(_QWORD *)v138 - 4LL) = 0;
      if ( *(_QWORD *)v139 )
      {
        *(_DWORD *)(*(_QWORD *)v139 - 4LL) = 0;
        v20 = *(_QWORD **)(a1 + 98928);
        if ( !v20 )
          goto LABEL_89;
      }
      else
      {
        v20 = *(_QWORD **)(a1 + 98928);
        if ( !v20 )
          goto LABEL_89;
      }
      if ( v23 >= *((_DWORD *)v20 - 1) )
        goto LABEL_89;
    }
    v141 = v23;
    v29 = v25;
    v30 = *v26;
    v135 = v27 + 8 * v28;
LABEL_22:
    while ( 1 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)v30 + 8LL);
      if ( !*(_BYTE *)(a1 + 24) || (*(_QWORD *)(v31 + 104) & *(_QWORD *)(v29 + 32)) != 0 )
      {
        v32 = *(char ***)(v31 + 56);
        if ( v32 )
        {
          v119 = &v32[*((unsigned int *)v32 - 1)];
          if ( v119 != v32 )
            break;
        }
      }
      v30 += 8;
      if ( v135 == v30 )
        goto LABEL_76;
    }
    v122 = v29;
    v33 = *(char ***)(v31 + 56);
    v137 = *(_QWORD *)(*(_QWORD *)v30 + 8LL);
    v136 = v30;
LABEL_27:
    while ( 2 )
    {
      v34 = *v33;
      if ( ((*v33)[44] & 0x10) != 0 )
        goto LABEL_74;
      v35 = 0;
      v36 = *(int **)(*(_QWORD *)v34 + 16LL);
      v37 = *((_QWORD *)v36 + 3);
      if ( v37 )
        v35 = (*(_BYTE *)(v37 + 17) & 4) != 0;
      v38 = *v36;
      v39 = *(_DWORD **)(a1 + 88);
      v123 = *((_QWORD *)v34 + 1);
      v40 = *v36 + 0x80000000;
      v143 = v123;
      v124 = *((_QWORD *)v34 + 3);
      if ( v39 )
      {
        v41 = (unsigned int)*(v39 - 1);
        if ( v40 < (unsigned int)v41 )
        {
LABEL_40:
          v49 = v40;
          v50 = (char *)v39 + v40;
          v51 = *v50;
          if ( *v50 == -1 )
          {
            v87 = (14 - v40) ^ (v40 >> 13);
            v88 = (3 - v40 - v87) ^ (v87 << 8);
            v89 = (v40 - v87 - v88) ^ (v88 >> 13);
            v90 = (v87 - v88 - v89) ^ (v89 >> 12);
            v91 = (v88 - v89 - v90) ^ (v90 << 16);
            v92 = (v89 - v90 - v91) ^ (v91 >> 5);
            *v50 = ((v92 - ((v90 - v91 - v92) ^ (v92 >> 3)) - (v91 - v92 - ((v90 - v91 - v92) ^ (v92 >> 3))))
                  ^ (((v91 - v92 - ((v90 - v91 - v92) ^ (v92 >> 3))) ^ (((v90 - v91 - v92) ^ (v92 >> 3)) << 10)) >> 15))
                 & 0x3F;
            v51 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + v49);
          }
          if ( (*(_QWORD *)(v122 + 32) & (1LL << v51)) == 0 || (v34[44] & 1) != 0 )
            goto LABEL_74;
          if ( v34 != (char *)v124 )
          {
            v52 = *(_QWORD *)(v124 + 8);
            v53 = *(_QWORD *)(v123 + 8);
            if ( v52 == v53 )
              goto LABEL_74;
            v54 = *(unsigned __int64 *)((char *)&stru_18290.r_offset + a1);
            if ( v54 == v52 )
            {
              if ( *(_QWORD *)(a1 + 98968) == v53 )
              {
                if ( ++v33 == v119 )
                  goto LABEL_75;
                continue;
              }
            }
            else if ( v54 == v53 && v52 == *(_QWORD *)(a1 + 98968) )
            {
              if ( ++v33 == v119 )
                goto LABEL_75;
              continue;
            }
          }
          v55 = *(_QWORD *)(a1 + 8);
          v125 = *(_QWORD *)v34;
          if ( (unsigned int)sub_8E7030(v55)
            && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v55 + 7488) + 56LL))(
                  *(_QWORD *)(v55 + 7488),
                  v125) )
          {
            goto LABEL_74;
          }
          v56 = v122;
          while ( 1 )
          {
            if ( *(int **)v56 != v36 )
              goto LABEL_51;
            v57 = *(unsigned __int16 *)(v56 + 8);
            if ( v35 )
            {
              if ( (v34[44] & 8) != 0 )
              {
                while ( 1 )
                {
                  v56 = *(_QWORD *)(v56 + 40);
                  if ( !v56 )
                    goto LABEL_68;
                  if ( v36 != *(int **)v56 )
                    goto LABEL_51;
                }
              }
              v94 = *(_DWORD *)(*(_QWORD *)v34 + 24LL);
              if ( (unsigned int)v57 >= v94 )
                goto LABEL_110;
LABEL_109:
              if ( *(unsigned __int16 *)(v56 + 10) >= v94 )
              {
LABEL_110:
                while ( 1 )
                {
                  v56 = *(_QWORD *)(v56 + 40);
                  if ( !v56 )
                    break;
                  if ( v36 != *(int **)v56 )
                    goto LABEL_51;
                  v57 = *(unsigned __int16 *)(v56 + 8);
                  v94 = *(_DWORD *)(*(_QWORD *)v34 + 24LL);
                  if ( (unsigned int)v57 < v94 )
                    goto LABEL_109;
                }
LABEL_68:
                v34[44] |= 1u;
                v65 = *(__int64 **)v138;
                if ( !*(_QWORD *)v138 || (v66 = *((_DWORD *)v65 - 1), v66 == *((_DWORD *)v65 - 2)) )
                {
                  sub_BA8230(v138);
                  v65 = *(__int64 **)v138;
                  v66 = *(_DWORD *)(*(_QWORD *)v138 - 4LL);
                }
                v65[v66] = (__int64)v34;
                *((_DWORD *)v65 - 1) = v66 + 1;
                v67 = *(_BYTE *)(v123 + 44);
                if ( (v67 & 2) == 0 )
                {
                  *(_BYTE *)(v123 + 44) = v67 | 2;
                  v68 = *(__int64 **)v139;
                  if ( !*(_QWORD *)v139 || (v69 = *((_DWORD *)v68 - 1), v69 == *((_DWORD *)v68 - 2)) )
                  {
                    sub_BA8230(v139);
                    v68 = *(__int64 **)v139;
                    v69 = *(_DWORD *)(*(_QWORD *)v139 - 4LL);
                  }
                  v68[v69] = v123;
                  *((_DWORD *)v68 - 1) = v69 + 1;
                }
LABEL_74:
                if ( ++v33 == v119 )
                {
LABEL_75:
                  v29 = v122;
                  v30 = v136 + 8;
                  if ( v135 == v136 + 8 )
                  {
LABEL_76:
                    v23 = v141;
                    v26 = *(__int64 **)(v29 + 56);
                    v25 = v29;
                    goto LABEL_77;
                  }
                  goto LABEL_22;
                }
                goto LABEL_27;
              }
            }
            if ( v137 != *(_QWORD *)(*(_QWORD *)&v34[8 * v57 + 112] + 8LL) )
              goto LABEL_51;
            v58 = *(_QWORD *)(v56 + 16);
            if ( !v58
              || (v59 = *(_QWORD *)(v58 + 8),
                  v60 = *(_QWORD *)(*(_QWORD *)&v34[8 * *(unsigned __int16 *)(v56 + 10) + 112] + 8LL),
                  v59 == v60) )
            {
LABEL_60:
              v62 = *(_QWORD *)(v56 + 24);
              if ( v62 )
              {
                v63 = *(_QWORD *)(v62 + 40);
                if ( !v63 || !*(_DWORD *)(v63 - 4) )
                {
                  v101 = *(_QWORD *)(a1 + 520);
                  if ( !v101 || (v102 = *(_DWORD *)(v101 - 4), v102 == *(_DWORD *)(v101 - 8)) )
                  {
                    v127 = *(_QWORD *)(v56 + 24);
                    sub_B9B4D0((unsigned int **)(a1 + 520));
                    v101 = *(_QWORD *)(a1 + 520);
                    v62 = v127;
                    v102 = *(_DWORD *)(v101 - 4);
                  }
                  *(_QWORD *)(v101 + 8LL * v102) = v62;
                  *(_DWORD *)(v101 - 4) = v102 + 1;
                }
                v144[0] = v34;
                sub_B9CC80((_QWORD *)(v62 + 40), v144);
              }
              v64 = *(_QWORD *)(v56 + 48);
              if ( !v64 )
                goto LABEL_51;
              if ( !*(_QWORD *)(v64 + 56) )
              {
                v103 = *(unsigned __int64 *)((char *)&stru_18260.r_offset + a1);
                if ( v103 && (v104 = *(_DWORD *)(v103 - 4)) != 0 )
                {
                  v105 = v104 - 1;
                  v106 = *(_QWORD **)(v103 + 8LL * v105);
                  *(_DWORD *)(v103 - 4) = v105;
                  if ( *v106 )
                    *(_DWORD *)(*v106 - 4LL) = 0;
                }
                else
                {
                  v126 = *(_QWORD *)(v56 + 48);
                  v106 = (_QWORD *)sub_186B270(8u);
                  v64 = v126;
                  *v106 = 0;
                }
                *(_QWORD *)(v64 + 56) = v106;
                v107 = *(_QWORD **)(a1 + 98928);
                if ( v107 )
                {
                  v108 = *((_DWORD *)v107 - 1);
                  if ( v108 == *((_DWORD *)v107 - 2) )
                  {
                    v113 = (3 * v108 + 1) >> 1;
                    v114 = 8 * v113 + 8;
                    if ( 8 * v108 + 8 >= (unsigned int)v114 || v108 >= v113 )
                    {
                      v6 = (char **)__cxa_allocate_exception(0x28u);
                      sub_151CF2(v144);
                      *v6 = (char *)off_1C63128;
                      sub_2333C0(v6 + 1, v144);
                      sub_233E40((__int64)v144);
                      __cxa_throw(
                        v6,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v133 = (3 * v108 + 1) >> 1;
                    v128 = v64;
                    v115 = sub_186B300(v107 - 1, v114);
                    v64 = v128;
                    v116 = (_DWORD *)v115;
                    v107 = (_QWORD *)(v115 + 8);
                    v117 = (unsigned int)v116[1];
                    *v116 = v133;
                    *(_QWORD *)(a1 + 98928) = v107;
                    LODWORD(v116) = v117;
                    v111 = &v107[v117];
                    v110 = (_DWORD)v116 + 1;
                  }
                  else
                  {
                    v109 = v108;
                    v110 = v108 + 1;
                    v111 = &v107[v109];
                  }
                }
                else
                {
                  v129 = v64;
                  v118 = (_QWORD *)sub_186B270(0x18u);
                  v64 = v129;
                  v110 = 1;
                  *v118 = 2;
                  v107 = v118 + 1;
                  *(_QWORD *)(a1 + 98928) = v107;
                  v111 = v107;
                }
                *v111 = v64;
                *((_DWORD *)v107 - 1) = v110;
              }
              if ( (*(_BYTE *)(v123 + 44) & 2) != 0 )
                goto LABEL_51;
              sub_B9CC80(*(_QWORD **)(v64 + 56), &v143);
              v56 = *(_QWORD *)(v56 + 40);
              if ( !v56 )
                goto LABEL_68;
            }
            else
            {
              v61 = *(unsigned __int64 *)((char *)&stru_18290.r_offset + a1);
              if ( v59 == v61 )
              {
                if ( v60 == *(_QWORD *)(a1 + 98968) )
                  goto LABEL_60;
              }
              else if ( v60 == v61 && v59 == *(_QWORD *)(a1 + 98968) )
              {
                goto LABEL_60;
              }
LABEL_51:
              v56 = *(_QWORD *)(v56 + 40);
              if ( !v56 )
                goto LABEL_68;
            }
          }
        }
        v42 = v38 - 0x7FFFFFFF;
        if ( (unsigned int)v41 >= v38 - 0x7FFFFFFF )
        {
          *(v39 - 1) = v42;
          goto LABEL_40;
        }
        v43 = *(v39 - 2);
        if ( v43 < v42 )
          goto LABEL_34;
        *(v39 - 1) = v42;
        v48 = (char *)v39 + v41;
        v47 = (char *)v39 + v42;
      }
      else
      {
        v42 = v38 - 0x7FFFFFFF;
        if ( v38 == 0x7FFFFFFF )
          goto LABEL_40;
        v132 = v40;
        v93 = sub_186B270(0xAu);
        v43 = 2;
        LODWORD(v41) = 0;
        v39 = (_DWORD *)(v93 + 8);
        v40 = v132;
        *(_QWORD *)v93 = 2;
        *(_QWORD *)(a1 + 88) = v93 + 8;
        if ( v42 > 2 )
        {
LABEL_34:
          v130 = v34;
          v134 = v40;
          v140 = v41;
          do
          {
            v44 = (3 * v43 + 1) >> 1;
            v45 = v44 + 8;
            if ( v43 + 8 >= (unsigned int)v45 || v43 >= v44 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_151CF2(v144);
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v144);
              sub_233E40((__int64)v144);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v46 = (unsigned int *)sub_186B300(v39 - 2, v45);
            v43 = v44;
            v39 = v46 + 2;
            *v46 = v44;
            *(_QWORD *)(a1 + 88) = v46 + 2;
          }
          while ( v44 < v42 );
          v34 = v130;
          v46[1] = v42;
          v40 = v134;
          v47 = (char *)v39 + v42;
          v48 = (char *)v39 + v140;
          if ( v140 == v42 )
            goto LABEL_40;
          break;
        }
        *(_DWORD *)(v93 + 4) = v42;
        v48 = (char *)(v93 + 8);
        v47 = (char *)v39 + v42;
      }
      break;
    }
    v131 = v40;
    memset(v48, 255, v47 - v48);
    v39 = *(_DWORD **)(a1 + 88);
    v40 = v131;
    goto LABEL_40;
  }
LABEL_89:
  v79 = (_QWORD *)(a1 + 98912);
  v144[0] = v138;
  sub_B9B550(v79, v144);
  v144[0] = v139;
  sub_B9B550(v79, v144);
}

