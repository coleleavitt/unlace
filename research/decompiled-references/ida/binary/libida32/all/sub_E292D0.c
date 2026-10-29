void __fastcall sub_E292D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned __int64 v6; // rbx
  char v8; // r13
  __int64 v11; // r12
  unsigned __int8 v12; // al
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // r8
  char *v16; // r9
  unsigned __int8 v17; // al
  bool v18; // al
  __int64 v19; // rdx
  bool v20; // al
  __int64 v21; // rdi
  _BYTE *v22; // rax
  unsigned int v23; // eax
  int v24; // r13d
  bool v25; // al
  unsigned __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  _BYTE *v32; // rax
  __int64 v33; // rax
  void *v34; // r15
  unsigned __int64 v35; // r13
  __int64 v36; // r14
  __int64 v37; // r13
  unsigned __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rax
  void *v41; // rdi
  int v42; // edx
  unsigned __int64 v43; // rax
  size_t v44; // rdx
  _BYTE *v45; // rax
  unsigned __int64 v46; // r14
  __int64 v47; // r15
  char v48; // al
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rax
  const char *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  __int64 v62; // rsi
  unsigned __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned __int64 v72; // rsi
  __int64 *v73; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 *v77; // rsi
  __int64 *v78; // rax
  bool v79; // r15
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  unsigned __int64 v82; // rax
  _QWORD *v83; // rcx
  __int64 v84; // rdi
  unsigned int *v85; // rax
  __int64 v86; // r13
  size_t v87; // rax
  __int64 *v88; // rcx
  __int64 **v89; // rax
  int v90; // eax
  size_t v91; // rax
  _DWORD *v92; // rcx
  __int64 **v93; // rax
  unsigned __int8 v94; // al
  unsigned __int64 v95; // rax
  int v96; // eax
  char v97; // al
  __int64 v98; // rdi
  _BYTE *v99; // rax
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // r12
  unsigned __int8 v103; // al
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  __int64 v106; // rdi
  _BYTE *v107; // rax
  __int64 v108; // rdi
  _WORD *v109; // rdx
  __int64 v110; // rdi
  _BYTE *v111; // rax
  int v112; // eax
  unsigned int v113; // eax
  __int64 v114; // rdi
  _BYTE *v115; // rax
  __int64 v116; // rax
  unsigned __int8 v117; // al
  unsigned __int64 v118; // rcx
  __int64 v119; // rdx
  size_t v120; // rax
  unsigned int v121; // r13d
  __int64 v122; // rdi
  _BYTE *v123; // rax
  void *v124; // r12
  __int64 v125; // rax
  __int64 v126; // [rsp+0h] [rbp-D8h]
  __int64 v127; // [rsp+0h] [rbp-D8h]
  char *v128; // [rsp+0h] [rbp-D8h]
  __int64 v129; // [rsp+0h] [rbp-D8h]
  __int64 v130; // [rsp+0h] [rbp-D8h]
  __int16 v131; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v132; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v133; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v134; // [rsp+0h] [rbp-D8h]
  __int64 v135; // [rsp+8h] [rbp-D0h]
  __int64 v136; // [rsp+8h] [rbp-D0h]
  __int64 *v137; // [rsp+8h] [rbp-D0h]
  __int64 (__fastcall **v138)(); // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v139[24]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v140; // [rsp+30h] [rbp-A8h]
  char v141; // [rsp+38h] [rbp-A0h]
  int v142; // [rsp+3Ch] [rbp-9Ch]
  void **p_ptr; // [rsp+40h] [rbp-98h]
  void *ptr; // [rsp+50h] [rbp-88h] BYREF
  __m128i si128; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v146[112]; // [rsp+68h] [rbp-70h] BYREF

  v6 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    BUG();
  v8 = a2;
  v11 = a5;
  if ( a4 && ((*(_BYTE *)(a4 + 8) & 0x7F) == 0x18 || (*(_BYTE *)(a4 + 8) & 0x7F) == 0) )
  {
    v12 = sub_B5DE30(a2 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v12 )
      goto LABEL_216;
    if ( v12 > 3u )
    {
      if ( v12 > 6u )
        goto LABEL_216;
      v13 = sub_B4EF30(a2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v13 + 36);
        v15 = 8;
        v16 = "<global>";
        if ( ((v14 - 6) & 0xFFFFFFFD) != 0 )
        {
          if ( (unsigned int)(v14 - 4) <= 1 )
          {
            v44 = *(_QWORD *)(v13 + 8);
            v16 = *(char **)v13;
            v15 = -1;
            if ( v44 )
            {
              v128 = *(char **)v13;
              v45 = memchr(*(const void **)v13, 58, v44);
              v16 = v128;
              v15 = -1;
              if ( v45 )
                v15 = v45 - v128;
            }
          }
          else
          {
            if ( v14 == 7 )
              v13 = sub_FCB100(v13);
            v16 = *(char **)v13;
            v15 = *(_QWORD *)(v13 + 8);
          }
        }
        a2 = (__int64)v16;
        sub_E1B660((__int64)a1, v16, (void *)v15, 0);
      }
    }
  }
  v17 = *(_BYTE *)(v6 + 28) & 0x7F;
  if ( (unsigned int)v17 - 34 > 5 )
  {
    v19 = 0;
    if ( v17 != 71 )
      goto LABEL_18;
    goto LABEL_14;
  }
  if ( v17 == 71 )
  {
    v18 = sub_B51380(v6);
    v19 = v6;
    if ( !v18 )
    {
LABEL_14:
      v126 = v19;
      v20 = sub_B51380(*(_QWORD *)(v6 + 48));
      v19 = v126;
      if ( !v20 )
        goto LABEL_18;
    }
LABEL_15:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x9Fu )
    {
      v21 = a1[1];
      v22 = *(_BYTE **)(v21 + 32);
      if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 24) )
      {
        a2 = 70;
        v127 = v19;
        sub_2257CD0(v21, 70);
        v19 = v127;
      }
      else
      {
        *(_QWORD *)(v21 + 32) = v22 + 1;
        *v22 = 70;
      }
    }
LABEL_18:
    v23 = a3 & 7;
    if ( v23 == 7 )
    {
LABEL_19:
      if ( *(_DWORD *)(a3 & 0xFFFFFFFFFFFFFFF8LL) != 1 )
        return;
LABEL_20:
      v24 = -1;
LABEL_21:
      sub_E23390((__int64)a1, a3, v24);
      goto LABEL_22;
    }
    goto LABEL_28;
  }
  v25 = sub_B51380(v6);
  v19 = v6;
  if ( v25 )
    goto LABEL_15;
  v23 = a3 & 7;
  if ( v23 == 7 )
    goto LABEL_19;
LABEL_28:
  v26 = v23;
  switch ( v23 )
  {
    case 0u:
      LOBYTE(v27) = *(_BYTE *)(v6 + 28) & 0x7F;
      switch ( (_BYTE)v27 )
      {
        case 0x2E:
          v28 = v6 + 104;
          sub_971800(a1[1], "DC");
          v29 = v6 + 104 + 8LL * *(unsigned int *)(v6 + 100);
          if ( v6 + 104 != v29 )
          {
            do
            {
              while ( 1 )
              {
                v30 = *(_QWORD *)(*(_QWORD *)v28 + 40LL);
                if ( (v30 & 7) != 0 )
                  break;
                v28 += 8LL;
                sub_E15750(a1[1], v30 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v29 == v28 )
                  goto LABEL_35;
              }
              v28 += 8LL;
              sub_E15750(a1[1], 0);
            }
            while ( v29 != v28 );
          }
LABEL_35:
          v31 = a1[1];
          v32 = *(_BYTE **)(v31 + 32);
          if ( (unsigned __int64)v32 >= *(_QWORD *)(v31 + 24) )
          {
            sub_2257CD0(v31, 69);
          }
          else
          {
            *(_QWORD *)(v31 + 32) = v32 + 1;
            *v32 = 69;
          }
          goto LABEL_22;
        case 0x1F:
          p_ptr = &ptr;
          si128 = _mm_load_si128((const __m128i *)&xmmword_2384EA0);
          v138 = &off_2BC1F40;
          *(_OWORD *)&v139[8] = 0;
          ptr = v146;
          *(_DWORD *)v139 = 2;
          v141 = 0;
          v142 = 1;
          v140 = 0;
          sub_2257B70(&v138, 0, 0, 0);
          (*(void (__fastcall **)(__int64, unsigned __int64, __int64 (__fastcall ***)()))(*(_QWORD *)*a1 + 136LL))(
            *a1,
            v6,
            &v138);
          v40 = sub_2257BD0(a1[1], si128.m128i_i64[0]);
          sub_22581D0(v40, ptr, si128.m128i_i64[0]);
          v138 = (__int64 (__fastcall **)())&unk_2C4C288;
          sub_2257A60(&v138);
          v41 = ptr;
          if ( ptr == v146 )
            return;
LABEL_61:
          free(v41);
          return;
        case 0x1E:
          sub_971800(a1[1], "TA");
          ptr = *(void **)(v6 + 48);
          v43 = sub_6B4E70(&ptr);
          sub_E2FEE0(a1, v43, v6 + 64, 1, 0);
          return;
      }
      v129 = v19;
      v46 = a3 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v46 )
      {
        v47 = *a1;
        v48 = sub_B60790((_BYTE *)v6);
        v51 = v129;
        if ( v48 != 2 )
          goto LABEL_85;
        v94 = sub_B5DE30(v6);
        if ( v94 )
        {
          v51 = v129;
          if ( v94 <= 3u )
          {
            a2 = v6;
            v95 = sub_E195F0(v47, v6);
            v51 = v129;
            v96 = *(_BYTE *)(v95 + 8) & 0x7F;
            if ( !v96 || v96 == 24 )
            {
              v97 = sub_B69430(v6);
              v51 = v129;
              if ( !v97 )
              {
                v98 = a1[1];
                v99 = *(_BYTE **)(v98 + 32);
                if ( (unsigned __int64)v99 >= *(_QWORD *)(v98 + 24) )
                {
                  a2 = 76;
                  sub_2257CD0(v98, 76);
                  v51 = v129;
                }
                else
                {
                  *(_QWORD *)(v98 + 32) = v99 + 1;
                  *v99 = 76;
                }
              }
            }
LABEL_85:
            if ( !v51 )
              goto LABEL_108;
            v52 = *(_QWORD *)(*(_QWORD *)(v51 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            v53 = (unsigned int)*(unsigned __int8 *)(v52 + 16) - 25;
            if ( (unsigned int)v53 > 1 )
            {
              v130 = v51;
              v52 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(v51 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v51, v53);
              v51 = v130;
            }
            v131 = *(_WORD *)(v52 + 20) >> 2;
            if ( (*(_BYTE *)(v51 + 29) & 1) == 0 )
            {
LABEL_89:
              if ( (v131 & 0x3F) == 8 )
              {
                v54 = a1[1];
                v55 = **(unsigned int **)(v46 + 16) + 12LL;
                if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 164LL) & 4) != 0 )
                {
                  v56 = sub_2257BD0(v54, v55);
                  v57 = "__regcall4__";
                }
                else
                {
                  v56 = sub_2257BD0(v54, v55);
                  v57 = "__regcall3__";
                }
                v58 = sub_971800(v56, v57);
                goto LABEL_93;
              }
LABEL_108:
              sub_E15750(a1[1], v46);
              goto LABEL_22;
            }
            v135 = v51;
            v73 = sub_B68690(v51, a2, v51, v53, v49, v50);
            v76 = *v73;
            v77 = (__int64 *)(*v73 + 8LL * *((unsigned int *)v73 + 2));
            if ( *v73 >= (unsigned __int64)v77 )
            {
              if ( (__int64 *)v76 != v77 )
              {
                if ( *(_WORD *)(*v77 + 36) == 163 )
                  goto LABEL_147;
                v93 = (__int64 **)(v77 + 1);
                while ( 1 )
                {
                  v77 = (__int64 *)v93;
                  if ( (__int64 **)v76 == v93 )
                    break;
                  v77 = *v93++;
                  if ( *((_WORD *)v77 + 18) == 163 )
                    goto LABEL_147;
                }
              }
            }
            else
            {
              v78 = (__int64 *)*v73;
              while ( 1 )
              {
                v76 = *v78;
                if ( *(_WORD *)(*v78 + 36) == 163 )
                  break;
                if ( v77 == ++v78 )
                  goto LABEL_114;
              }
              if ( v77 != v78 )
              {
LABEL_147:
                v79 = (v8 & 7) == 1;
                if ( (*(_BYTE *)(v135 + 29) & 1) == 0 )
                  goto LABEL_119;
LABEL_115:
                v80 = sub_B68690(v135, (__int64)v77, v135, v76, v74, v75);
                v81 = (_QWORD *)*v80;
                v82 = *v80 + 8LL * *((unsigned int *)v80 + 2);
                if ( (unsigned __int64)v81 >= v82 )
                {
                  if ( v81 == (_QWORD *)v82 )
                    goto LABEL_119;
                  while ( *(_WORD *)(*(_QWORD *)v82 + 36LL) != 64 )
                  {
                    v82 += 8LL;
                    if ( v81 == (_QWORD *)v82 )
                      goto LABEL_119;
                  }
                }
                else
                {
                  v83 = v81;
                  while ( *(_WORD *)(*v83 + 36LL) != 64 )
                  {
                    if ( (_QWORD *)v82 == ++v83 )
                      goto LABEL_119;
                  }
                  if ( (_QWORD *)v82 == v83 )
                    goto LABEL_119;
                }
                v88 = (__int64 *)*v81;
                if ( *(_WORD *)(*v81 + 36LL) != 64 )
                {
                  v89 = (__int64 **)(v81 + 1);
                  do
                    v88 = *v89++;
                  while ( *((_WORD *)v88 + 18) != 64 );
                }
                if ( (*((_BYTE *)v88 + 34) & 0xF0) == 0xF0 )
                {
                  v137 = v88;
                  v90 = sub_F83A90(v88);
                  v88 = v137;
                }
                else
                {
                  v90 = *((_BYTE *)v88 + 34) >> 4;
                }
                if ( v90 == 12
                  || (v136 = *v88) != 0
                  && (v91 = j__strlen("kernel"), v92 = *(_DWORD **)(v136 + 16), v91 == *v92)
                  && (!v91 || !memcmp(v92 + 4, "kernel", v91)) )
                {
                  v84 = a1[1];
                  if ( (v8 & 7) == 1 )
                  {
                    v85 = *(unsigned int **)(v46 + 16);
                    if ( !v79 )
                    {
                      v116 = sub_2257BD0(v84, *v85 + 21LL);
                      v58 = sub_9717A0(v116, "__clang_ocl_kern_imp_", 0x15u);
                      goto LABEL_93;
                    }
                  }
                  else
                  {
                    if ( !v79 )
                      goto LABEL_89;
                    v85 = *(unsigned int **)(v46 + 16);
                  }
LABEL_121:
                  v86 = sub_2257BD0(v84, *v85 + 15LL);
                  v87 = j__strlen("__device_stub__");
                  v58 = sub_9717A0(v86, "__device_stub__", v87);
LABEL_93:
                  sub_9717A0(v58, (const void *)(*(_QWORD *)(v46 + 16) + 16LL), **(unsigned int **)(v46 + 16));
LABEL_22:
                  if ( *((_BYTE *)a1 + 18) )
                    v11 = 0;
                  sub_E17190(a1[6], a1[1], v6, v11);
                  return;
                }
LABEL_119:
                if ( !v79 )
                  goto LABEL_89;
                v84 = a1[1];
                v85 = *(unsigned int **)(v46 + 16);
                goto LABEL_121;
              }
            }
LABEL_114:
            v79 = 0;
            if ( (*(_BYTE *)(v135 + 29) & 1) == 0 )
              goto LABEL_89;
            goto LABEL_115;
          }
          if ( v94 <= 6u )
            goto LABEL_85;
        }
LABEL_216:
        BUG();
      }
      if ( (_BYTE)v27 == 24 )
      {
        v59 = *(_QWORD *)(v6 + 40);
        if ( (v59 & 7) != 0 || (v59 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          sub_971800(a1[1], "12_GLOBAL__N_1");
          return;
        }
        v60 = *(_QWORD *)(v6 + 120);
        if ( (v60 & 4) != 0 )
          goto LABEL_192;
        v27 = 24;
        goto LABEL_99;
      }
      v27 = (unsigned __int8)v27;
      v64 = (unsigned int)(unsigned __int8)v27 - 40;
      if ( (unsigned int)v64 <= 6 )
      {
        v65 = sub_F3D1D0(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
                a2,
                v64,
                v26,
                a5);
        v70 = sub_B5AC50(v65, a2, v66, v67, v68, v69);
        if ( v70 )
        {
          v71 = *(_QWORD *)(v70 + 40);
          v72 = v71 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v71 & 7) != 0 )
            v72 = 0;
          sub_E15750(a1[1], v72);
        }
        return;
      }
      if ( (unsigned int)(unsigned __int8)v27 - 19 <= 4 )
        return;
      v60 = *(_QWORD *)(v6 + 120);
      if ( (v60 & 4) == 0 )
      {
LABEL_99:
        v61 = v60 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v61 )
        {
          v62 = *(_QWORD *)(v61 + 40);
          if ( (v62 & 7) != 0 )
            v63 = 0;
          else
            v63 = v62 & 0xFFFFFFFFFFFFFFF8LL;
          sub_E15750(a1[1], v63);
          sub_E17190(a1[6], a1[1], v6, 0);
          return;
        }
      }
      if ( (unsigned int)(v27 - 59) <= 2 )
      {
        v132 = v26;
        v100 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*a1 + 176))(*(_QWORD *)(*a1 + 8), v6);
        v101 = *(_QWORD *)(v6 + 128);
        v26 = v132;
        if ( v101 )
        {
          if ( (*(_BYTE *)(v101 + 10) & 0x20) != 0 )
          {
            if ( v100 )
            {
              if ( v100 != 1 )
                goto LABEL_167;
            }
            else if ( *(_DWORD *)(v101 + 108) >> 1 )
            {
LABEL_167:
              v102 = sub_B733B0(v6);
              if ( v102 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0x6Fu )
                {
                  v103 = *(_BYTE *)(v102 + 28) & 0x7F;
                  if ( ((unsigned int)v103 - 40 <= 6 || (unsigned int)v103 - 49 <= 2) && v103 != 43 )
                  {
                    v104 = *(_QWORD *)(v102 + 40);
                    if ( (v104 & 7) == 0 && (v104 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    {
                      sub_E15750(a1[1], v104 & 0xFFFFFFFFFFFFFFF8LL);
                      ptr = nullptr;
                      v105 = sub_E14E30(v102, 0, (__int64 *)&ptr);
                      if ( v105 )
                      {
                        v124 = ptr;
                        v125 = sub_E14DF0(v105);
                        sub_E2BEE0(a1, v125, v124);
                      }
                      v106 = a1[1];
                      v107 = *(_BYTE **)(v106 + 32);
                      if ( (unsigned __int64)v107 >= *(_QWORD *)(v106 + 24) )
                      {
                        sub_2257CD0(v106, 77);
                      }
                      else
                      {
                        *(_QWORD *)(v106 + 32) = v107 + 1;
                        *v107 = 77;
                      }
                    }
                  }
                }
              }
              v108 = a1[1];
              v109 = *(_WORD **)(v108 + 32);
              if ( *(_QWORD *)(v108 + 24) - (_QWORD)v109 > 1u )
              {
                *v109 = 27733;
                *(_QWORD *)(v108 + 32) += 2LL;
              }
              else
              {
                sub_22581D0(v108, "Ul", 2);
              }
              sub_E29000(a1, v6);
              v110 = a1[1];
              v111 = *(_BYTE **)(v110 + 32);
              if ( *(_BYTE **)(v110 + 24) == v111 )
              {
                sub_22581D0(v110, "E", 1);
              }
              else
              {
                *v111 = 69;
                ++*(_QWORD *)(v110 + 32);
              }
              v112 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*a1 + 176))(*(_QWORD *)(*a1 + 8), v6);
              if ( v112 )
                v113 = v112 - 1;
              else
                v113 = *(_DWORD *)(*(_QWORD *)(v6 + 128) + 108LL) >> 1;
              if ( v113 > 1 )
                sub_2257BF0(a1[1], v113 - 2);
              v114 = a1[1];
              v115 = *(_BYTE **)(v114 + 32);
              if ( (unsigned __int64)v115 >= *(_QWORD *)(v114 + 24) )
              {
                sub_2257CD0(v114, 95);
              }
              else
              {
                *(_QWORD *)(v114 + 32) = v115 + 1;
                *v115 = 95;
              }
              return;
            }
          }
        }
      }
LABEL_192:
      v133 = v26;
      v117 = sub_B5DE30(v6);
      if ( !v117 )
        goto LABEL_216;
      v118 = v133;
      if ( v117 > 3u )
      {
        if ( v117 <= 6u )
        {
          v121 = sub_A68030(*(_QWORD *)(*a1 + 8), v6, *(_BYTE *)(*a1 + 28));
          sub_971800(a1[1], "Ut");
          if ( v121 > 1 )
            sub_2257BD0(a1[1], v121 - 2);
          v122 = a1[1];
          v123 = *(_BYTE **)(v122 + 32);
          if ( (unsigned __int64)v123 >= *(_QWORD *)(v122 + 24) )
          {
            sub_2257CD0(v122, 95);
          }
          else
          {
            *(_QWORD *)(v122 + 32) = v123 + 1;
            *v123 = 95;
          }
          goto LABEL_22;
        }
        goto LABEL_216;
      }
      if ( !*((_BYTE *)a1 + 17) )
      {
        if ( (*(_BYTE *)(a4 + 8) & 0x7Fu) - 34 > 5 )
          v119 = 0;
        else
          v119 = a4 - 72;
        v118 = (unsigned int)sub_E1AEB0(*a1, v6, v119);
      }
      v134 = v118;
      *(__m128i *)v139 = _mm_load_si128((const __m128i *)&xmmword_2384E70);
      v138 = (__int64 (__fastcall **)())&v139[16];
      v120 = j__strlen("$_");
      sub_9FC110(&v138, "$_", &aObjcMetaclass[v120 + 15]);
      sub_E16B40((__int64 *)&ptr, v134, 0);
      sub_9FC110(&v138, ptr, (_BYTE *)ptr + si128.m128i_i64[0]);
      if ( ptr != &si128.m128i_u64[1] )
        operator delete(ptr);
      sub_2257BD0(a1[1], *(_QWORD *)v139);
      sub_22581D0(a1[1], v138, *(_QWORD *)v139);
      v41 = v138;
      if ( v138 != (__int64 (__fastcall **)())&v139[16] )
        goto LABEL_61;
      return;
    case 3u:
      v34 = nullptr;
      if ( (*(_BYTE *)(v6 + 87) & 0x20) != 0 )
      {
        v35 = *(_QWORD *)(v6 + 176);
        v36 = *(_QWORD *)(v6 + 184);
        if ( v35 )
        {
          v37 = *(_QWORD *)(sub_B68470(v36 + 72) + 16);
          if ( (v37 & 4) != 0 )
            v35 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v35 = v37 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v35 )
            v35 -= 64LL;
          v38 = sub_B53DB0(v36);
          a6 = sub_EFED60(&ptr, v38);
          v34 = ptr;
          v39 = sub_B53E10(v36);
        }
        else
        {
          v39 = 0;
        }
      }
      else
      {
        v39 = 0;
        v35 = 0;
      }
      if ( v6 == a1[3] )
        sub_E32BB0(a1, *((unsigned int *)a1 + 8), v35, a6);
      else
        sub_E32BB0(a1, 0, v35, a6);
      if ( v39 )
        sub_E2BEE0(a1, v34, v39);
      goto LABEL_22;
    case 4u:
      v33 = a1[1];
      if ( v6 != a1[3] || (v42 = *((_DWORD *)a1 + 8), v42 == 1) )
      {
        sub_971800(a1[1], "D1");
        v33 = a1[1];
      }
      else if ( v42 )
      {
        if ( v42 == 2 )
        {
          sub_971800(a1[1], "D2");
          v33 = a1[1];
        }
        else if ( v42 == 3 )
        {
          sub_971800(a1[1], "D5");
          v33 = a1[1];
        }
      }
      else
      {
        sub_971800(a1[1], "D0");
        v33 = a1[1];
      }
      if ( *((_BYTE *)a1 + 18) )
        v11 = 0;
      sub_E17190(a1[6], v33, v6, v11);
      return;
    case 5u:
      goto LABEL_20;
    case 6u:
      v24 = sub_B52330(v6, a2, v19, v23);
      if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 35 <= 3 )
        v24 -= ((unsigned __int8)sub_B744C0((_QWORD *)v6, a2) == 0) - 1;
      goto LABEL_21;
    default:
      return;
  }
}

