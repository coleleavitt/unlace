__int64 __fastcall sub_D0CC00(const __m128i *a1, void (*****a2)(void), __int64 a3)
{
  __int64 v5; // rax
  char *v6; // rbx
  void (****v7)(void); // rdx
  void (***v8)(void); // r12
  char v9; // al
  __int64 v10; // rbp
  int v11; // r15d
  __int64 v12; // rax
  int v13; // ecx
  __int64 *v14; // rax
  __int64 v15; // r10
  _DWORD *v16; // rax
  __int64 *v17; // r8
  char v18; // cl
  void (***v19)(void); // rdi
  void (**v20)(void); // rdx
  __int64 v21; // rax
  int v22; // edx
  void **v23; // rax
  void (****v24)(void); // r14
  unsigned int v25; // edx
  unsigned int v26; // ebp
  __int64 v27; // r13
  unsigned int v29; // ecx
  __int64 v30; // rsi
  char *v31; // rax
  char v32; // di
  char *v33; // r8
  __int64 v34; // rcx
  int v35; // r11d
  _DWORD *v36; // r9
  unsigned int v37; // ecx
  void (**v38)(void); // r11
  int v39; // edx
  _DWORD *v40; // rax
  __int64 v41; // r8
  char v42; // di
  int v43; // edx
  __int64 v44; // r9
  __int64 v45; // rsi
  char *v46; // rcx
  char *v47; // rax
  char *i; // r9
  __int64 v49; // rsi
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 *v54; // rcx
  unsigned int v55; // ecx
  __int64 v56; // rax
  void (***v57)(void); // r8
  int v58; // ecx
  void (***v59)(void); // rax
  __int64 v60; // rdi
  void (****v61)(void); // rax
  __int64 v62; // rcx
  _DWORD *v63; // rcx
  __int64 v64; // rbp
  _QWORD *v65; // rdi
  __int64 v66; // rax
  char v67; // al
  __int64 v68; // rax
  unsigned int v69; // ecx
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rax
  void (*v73)(void); // rdx
  _DWORD *v74; // rdx
  unsigned int v75; // eax
  __int64 v76; // rdx
  int v77; // eax
  void (***v78)(void); // rdx
  unsigned int v79; // edx
  size_t v80; // rsi
  unsigned int *v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rax
  unsigned int v86; // ecx
  size_t v87; // rsi
  unsigned int *v88; // rax
  _QWORD *v89; // rax
  __int64 j; // rax
  unsigned int v91; // edx
  unsigned int v92; // eax
  unsigned int *v93; // rax
  __int64 v94; // rax
  int v95; // ecx
  _QWORD *v96; // rax
  __m128i *v97; // rax
  __m128i v98; // xmm0
  void (****v99)(void); // rcx
  __int64 v100; // rax
  void (****v101)(void); // rcx
  void (***v102)(void); // rdi
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  char **v106; // r13
  __int64 v107; // rdx
  char **v108; // r13
  __int64 v109; // rdx
  char **exception; // r13
  __int64 v111; // rdx
  char **v112; // r13
  __int64 v113; // rdx
  int v114[2]; // [rsp+8h] [rbp-F0h]
  __int64 *v115; // [rsp+8h] [rbp-F0h]
  int v116[2]; // [rsp+8h] [rbp-F0h]
  void (****v117)(void); // [rsp+8h] [rbp-F0h]
  int v119; // [rsp+18h] [rbp-E0h]
  unsigned int v120; // [rsp+1Ch] [rbp-DCh]
  char *ptrb; // [rsp+28h] [rbp-D0h]
  char *ptr; // [rsp+28h] [rbp-D0h]
  unsigned int ptrc; // [rsp+28h] [rbp-D0h]
  void (****ptra)(void); // [rsp+28h] [rbp-D0h]
  void (**v125)(void); // [rsp+30h] [rbp-C8h]
  __int64 v126; // [rsp+30h] [rbp-C8h]
  __int64 v127; // [rsp+38h] [rbp-C0h]
  __int64 v128; // [rsp+38h] [rbp-C0h]
  __int64 v129; // [rsp+38h] [rbp-C0h]
  __int64 v130; // [rsp+38h] [rbp-C0h]
  void (****v131)(void); // [rsp+38h] [rbp-C0h]
  void (****v132)(void); // [rsp+38h] [rbp-C0h]
  __int64 v133; // [rsp+38h] [rbp-C0h]
  __int64 v134; // [rsp+38h] [rbp-C0h]
  __int64 v135; // [rsp+38h] [rbp-C0h]
  char *v136; // [rsp+38h] [rbp-C0h]
  __int64 v137; // [rsp+38h] [rbp-C0h]
  int v138[2]; // [rsp+40h] [rbp-B8h]
  int v139[2]; // [rsp+40h] [rbp-B8h]
  int v140[2]; // [rsp+40h] [rbp-B8h]
  int v141[2]; // [rsp+40h] [rbp-B8h]
  int v142[2]; // [rsp+40h] [rbp-B8h]
  int v143[2]; // [rsp+40h] [rbp-B8h]
  int v144[2]; // [rsp+40h] [rbp-B8h]
  unsigned int v145; // [rsp+48h] [rbp-B0h]
  unsigned int v146; // [rsp+48h] [rbp-B0h]
  int v147[2]; // [rsp+48h] [rbp-B0h]
  unsigned int v148; // [rsp+48h] [rbp-B0h]
  int v149[2]; // [rsp+48h] [rbp-B0h]
  unsigned __int8 v150; // [rsp+52h] [rbp-A6h]
  __int64 v151; // [rsp+58h] [rbp-A0h]
  void (**v152)(void); // [rsp+60h] [rbp-98h]
  __int64 v153; // [rsp+60h] [rbp-98h]
  void (**v154)(void); // [rsp+68h] [rbp-90h]
  char v155[8]; // [rsp+78h] [rbp-80h] BYREF
  char *v156; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v157; // [rsp+88h] [rbp-70h]
  __int64 v158; // [rsp+8Ch] [rbp-6Ch]
  __int64 v159[11]; // [rsp+A0h] [rbp-58h] BYREF

  sub_EE4F60("occf");
  v150 = *((_BYTE *)*a2 + 123) & 4;
  sub_EE4940(&v155, "occf", *a2);
  a1->m128i_i64[1] = 0;
  v5 = sub_186B270(0xC0u);
  *(_BYTE *)(v5 + 16) &= 0xFCu;
  v6 = (char *)v5;
  *(_BYTE *)(v5 + 40) &= 0xFCu;
  *(_BYTE *)(v5 + 64) &= 0xFCu;
  *(_BYTE *)(v5 + 88) &= 0xFCu;
  *(_BYTE *)(v5 + 112) &= 0xFCu;
  *(_BYTE *)(v5 + 136) &= 0xFCu;
  *(_BYTE *)(v5 + 160) &= 0xFCu;
  *(_BYTE *)(v5 + 184) &= 0xFCu;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_QWORD *)(v5 + 104) = 0;
  *(_QWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 128) = 0;
  *(_QWORD *)(v5 + 144) = 0;
  *(_QWORD *)(v5 + 152) = 0;
  *(_QWORD *)(v5 + 168) = 0;
  *(_QWORD *)(v5 + 176) = 0;
  v158 = 0;
  v7 = *a2;
  v8 = (*a2)[9];
  if ( !v8 )
    goto LABEL_33;
  v9 = *((_BYTE *)v8 + 3) >> 6;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
LABEL_4:
      if ( v9 == 2 )
        v119 = *((_DWORD *)v8 + 1) - 1;
      else
        v119 = *((_DWORD *)v8 + 1);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v8 = (void (***)(void))v8[2];
      v9 = *((_BYTE *)v8 + 3) >> 6;
    }
    while ( !v9 );
    if ( v9 != 1 )
      goto LABEL_4;
  }
  v119 = *((_DWORD *)v8 + 1) + 1;
LABEL_6:
  if ( v119 )
  {
    v120 = 8;
    v10 = 0;
    v8 = nullptr;
    v11 = 0;
    while ( 1 )
    {
      sub_EE4F40(a1->m128i_i64[0]);
      v17 = (__int64 *)*a2;
      v18 = *((_BYTE *)*a2 + 123);
      v19 = **a2;
      if ( (v18 & 0x20) != 0 )
      {
        v20 = v19[108];
        goto LABEL_19;
      }
      v21 = v17[9];
      v22 = 17;
      while ( 1 )
      {
        if ( *(char *)(v21 + 3) < 0 )
        {
          if ( *(_BYTE *)(v21 + 3) >> 6 != 2 )
          {
            v23 = (void **)(v10 + *(_QWORD *)(v21 + 16));
            goto LABEL_28;
          }
          goto LABEL_30;
        }
        if ( v11 == *(_DWORD *)(v21 + 4) )
          break;
LABEL_30:
        v21 = *(_QWORD *)(v21 + 16);
        if ( !--v22 )
        {
          v115 = (__int64 *)*a2;
          sub_233F80((__int64 *)v19 + 77, (_DWORD *)v17 + 18);
          v17 = (__int64 *)*a2;
          v23 = (void **)(v10 + *(_QWORD *)(v115[9] + 16));
          v18 = *((_BYTE *)*a2 + 123);
          goto LABEL_28;
        }
      }
      v23 = (void **)(v21 + 8);
LABEL_28:
      v20 = (void (**)(void))*v23;
LABEL_19:
      if ( (v18 & 0x10) == 0 )
      {
        v15 = 0;
        goto LABEL_13;
      }
      v12 = v17[13];
      v13 = 17;
      while ( 2 )
      {
        if ( *(char *)(v12 + 3) < 0 )
        {
          if ( *(_BYTE *)(v12 + 3) >> 6 != 2 )
          {
            v14 = (__int64 *)(v10 + *(_QWORD *)(v12 + 16));
            goto LABEL_12;
          }
LABEL_22:
          v12 = *(_QWORD *)(v12 + 16);
          if ( !--v13 )
          {
            ptrb = (char *)v20;
            *(_QWORD *)v114 = v17;
            sub_236900((_QWORD *)(*v17 + 672), v17 + 13);
            v14 = (__int64 *)(v10 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v114 + 104LL) + 16LL));
            v20 = (void (**)(void))ptrb;
            goto LABEL_12;
          }
          continue;
        }
        break;
      }
      if ( v11 != *(_DWORD *)(v12 + 4) )
        goto LABEL_22;
      v14 = (__int64 *)(v12 + 8);
LABEL_12:
      v15 = *v14;
LABEL_13:
      if ( *((_WORD *)v20 + 2) )
        goto LABEL_16;
      v16 = *((_DWORD **)v20[2] + 3);
      if ( !v16 )
        goto LABEL_16;
      if ( *v16 )
        goto LABEL_16;
      if ( v16[1] != 6 )
        goto LABEL_16;
      v29 = *((_DWORD *)v20 + 6);
      if ( !v29 )
        goto LABEL_16;
      v30 = v29;
      *(_QWORD *)v116 = v20;
      v31 = (char *)v20;
      v32 = 0;
      v33 = (char *)&v20[v29];
      while ( 2 )
      {
        v34 = *((_QWORD *)v31 + 4);
        if ( *(_WORD *)(v34 + 4) )
          goto LABEL_46;
        v35 = *(_DWORD *)(v34 + 24);
        v36 = *(_DWORD **)(*(_QWORD *)(v34 + 16) + 24LL);
        if ( v35 )
        {
          if ( !v36
            || *v36
            || v36[1] != 8
            || v35 != 1
            || (v62 = *(_QWORD *)(v34 + 32), *(_WORD *)(v62 + 4))
            || *(_DWORD *)(v62 + 24)
            || (v63 = *(_DWORD **)(*(_QWORD *)(v62 + 16) + 24LL)) != nullptr && *v63 != -1 )
          {
LABEL_46:
            if ( v32 )
              goto LABEL_54;
LABEL_47:
            v32 = 1;
          }
LABEL_48:
          v31 += 8;
          if ( v33 == v31 )
            goto LABEL_16;
          continue;
        }
        break;
      }
      if ( !v36 || *v36 == -1 )
        goto LABEL_48;
      if ( !v32 )
        goto LABEL_47;
LABEL_54:
      if ( v150 && !a1->m128i_i64[1] )
      {
        v136 = (char *)v20;
        v126 = v15;
        v97 = (__m128i *)sub_186B270(0x50u);
        v98 = _mm_loadl_epi64(a1);
        v99 = *a2;
        v97[1].m128i_i8[8] = 1;
        v97->m128i_i32[2] = 0;
        v97[1].m128i_i64[0] = 0;
        strcpy(&v97[3].m128i_i8[8], "occf");
        v97->m128i_i64[0] = (__int64)&off_1C60CE8;
        v97[3].m128i_i64[0] = 4;
        v97[4].m128i_i64[1] = 0;
        a1->m128i_i64[1] = (__int64)v97;
        v97[2] = _mm_unpacklo_epi64(v98, (__m128i)(unsigned __int64)&v97[3].m128i_u64[1]);
        ptra = v99;
        v100 = sub_1336AB0(v99[1], v97);
        v101 = ptra;
        v15 = v126;
        v20 = (void (**)(void))v136;
        if ( v100 )
          ++*(_DWORD *)(v100 + 8);
        v102 = ptra[1];
        if ( v102 )
        {
          if ( (*((_DWORD *)v102 + 2))-- == 1 )
          {
            *(_QWORD *)v149 = v100;
            (**v102)();
            sub_186B220(v102);
            v100 = *(_QWORD *)v149;
            v20 = (void (**)(void))v136;
            v101 = ptra;
            v15 = v126;
          }
        }
        v101[1] = (void (***)(void))v100;
        if ( !v8 )
        {
          v37 = *((_DWORD *)v20 + 6);
          if ( !v37 )
          {
            v60 = a1->m128i_i64[0];
            v117 = *a2;
            goto LABEL_82;
          }
          goto LABEL_58;
        }
LABEL_57:
        *((_DWORD *)v8 - 1) = 0;
        v37 = *((_DWORD *)v20 + 6);
        if ( v37 )
        {
LABEL_58:
          v30 = v37;
          goto LABEL_59;
        }
        v60 = a1->m128i_i64[0];
        v117 = *a2;
LABEL_157:
        v57 = v8;
        goto LABEL_81;
      }
      if ( v8 )
        goto LABEL_57;
LABEL_59:
      v125 = nullptr;
      ptr = (char *)&v20[v30];
      while ( 2 )
      {
        v38 = *(void (***)(void))(*(_QWORD *)v116 + 32LL);
        if ( *((_WORD *)v38 + 2) )
        {
          v41 = *(_QWORD *)(*(_QWORD *)v116 + 32LL);
          v42 = 0;
          goto LABEL_63;
        }
        v39 = *((_DWORD *)v38 + 6);
        v40 = *((_DWORD **)v38[2] + 3);
        if ( !v39 )
        {
          if ( !v40 || *v40 == -1 )
            goto LABEL_143;
          v41 = *(_QWORD *)(*(_QWORD *)v116 + 32LL);
          v42 = 0;
LABEL_131:
          while ( v40 )
          {
            if ( *v40 )
              break;
            if ( v40[1] != 8 )
              break;
            v41 = *(_QWORD *)(v41 + 32);
            v42 ^= 1u;
            if ( *(_WORD *)(v41 + 4) )
              break;
            v40 = *(_DWORD **)(*(_QWORD *)(v41 + 16) + 24LL);
          }
LABEL_63:
          v43 = *(_DWORD *)(v41 + 12);
          v44 = 24LL * (v43 & (v120 - 1));
          v45 = 24LL * v120;
          v46 = &v6[v44];
          v47 = &v6[v45];
          if ( v44 != v45 )
          {
            for ( i = &v6[v44]; v47 != i; i += 24 )
            {
              v49 = *(_QWORD *)i;
              if ( *(_QWORD *)i > 1u )
              {
                if ( *(_DWORD *)(v49 + 12) == v43 && v49 == v41 )
                {
LABEL_109:
                  v67 = i[16];
                  if ( v42 )
                  {
                    if ( (v67 & 2) == 0 )
                    {
                      v82 = a1->m128i_i64[0];
                      i[16] = v67 | 2;
                      v152 = v38;
                      v151 = v15;
                      v131 = *a2;
                      sub_15E1A70(v82);
                      v83 = sub_15E1B70(v82);
                      sub_EDB570(v131, v83, 0, 0);
                      v38 = v152;
                      v15 = v151;
                    }
                    *(_QWORD *)v138 = v38;
                    v128 = v15;
                    v68 = sub_15E1A70(a1->m128i_i64[0]);
                    v15 = v128;
                    v38 = *(void (***)(void))v138;
                    v50 = v68;
                  }
                  else
                  {
                    if ( (v67 & 1) == 0 )
                    {
                      v84 = a1->m128i_i64[0];
                      i[16] = v67 | 1;
                      v154 = v38;
                      v153 = v15;
                      *(_QWORD *)v147 = i;
                      v132 = *a2;
                      sub_15E1A70(v84);
                      v85 = sub_15E1B70(v84);
                      sub_EDB570(v132, v85, 0, 0);
                      v38 = v154;
                      v15 = v153;
                      i = *(char **)v147;
                    }
                    v50 = *((_QWORD *)i + 1);
                  }
                  if ( v50 )
                  {
                    if ( v8 )
                    {
                      v51 = *((_DWORD *)v8 - 1);
                      if ( v51 == *((_DWORD *)v8 - 2) )
                      {
                        v69 = (3 * v51 + 1) >> 1;
                        v70 = 8 * v69 + 8;
                        if ( 8 * v51 + 8 >= (unsigned int)v70 || v51 >= v69 )
                        {
                          exception = (char **)__cxa_allocate_exception(0x28u);
                          sub_1665D8(v159, "Overflow encountered when expanding vector", v111);
                          *exception = (char *)off_1C63128;
                          sub_2333C0(exception + 1, v159);
                          sub_233E40((__int64)v159);
                          __cxa_throw(
                            exception,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v145 = (3 * v51 + 1) >> 1;
                        *(_QWORD *)v139 = v50;
                        v129 = v15;
                        v71 = (unsigned int *)sub_186B300(v8 - 1, v70);
                        v8 = (void (***)(void))(v71 + 2);
                        v15 = v129;
                        v50 = *(_QWORD *)v139;
                        *v71 = v145;
                        LODWORD(v71) = v71[1];
                        v54 = (__int64 *)&v8[(unsigned int)v71];
                        v53 = (_DWORD)v71 + 1;
                      }
                      else
                      {
LABEL_73:
                        v52 = v51;
                        v53 = v51 + 1;
                        v54 = (__int64 *)&v8[v52];
                      }
                    }
                    else
                    {
                      *(_QWORD *)v143 = v50;
                      v135 = v15;
                      v96 = (_QWORD *)sub_186B270(0x18u);
                      v15 = v135;
                      v50 = *(_QWORD *)v143;
                      *v96 = 2;
                      v8 = (void (***)(void))(v96 + 1);
                      v53 = 1;
                      v54 = (__int64 *)v8;
                    }
LABEL_74:
                    *v54 = v50;
                    *((_DWORD *)v8 - 1) = v53;
                    goto LABEL_75;
                  }
LABEL_70:
                  if ( !v125 )
                    goto LABEL_127;
                  goto LABEL_71;
                }
              }
              else if ( !v49 )
              {
                goto LABEL_70;
              }
            }
          }
          if ( v6 != v46 )
          {
            i = v6;
            while ( 1 )
            {
              v72 = *(_QWORD *)i;
              if ( *(_QWORD *)i > 1u )
              {
                if ( *(_DWORD *)(v72 + 12) == v43 && v72 == v41 )
                  goto LABEL_109;
              }
              else if ( !v72 )
              {
                if ( !v125 )
                {
LABEL_127:
                  v125 = v38;
                  goto LABEL_75;
                }
LABEL_71:
                v127 = v15;
                v156 = v6;
                v157 = v120;
                v50 = sub_D0C360(a1, &v156, v38, v150 >> 2, a2);
                v6 = v156;
                v15 = v127;
                v120 = v157;
                if ( v8 )
                {
                  v51 = *((_DWORD *)v8 - 1);
                  if ( v51 != *((_DWORD *)v8 - 2) )
                    goto LABEL_73;
                  v86 = (3 * v51 + 1) >> 1;
                  v87 = 8 * v86 + 8;
                  if ( 8 * v51 + 8 >= (unsigned int)v87 || v51 >= v86 )
                  {
                    v106 = (char **)__cxa_allocate_exception(0x28u);
                    sub_1665D8(v159, "Overflow encountered when expanding vector", v107);
                    *v106 = (char *)off_1C63128;
                    sub_2333C0(v106 + 1, v159);
                    sub_233E40((__int64)v159);
                    __cxa_throw(
                      v106,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v148 = (3 * v51 + 1) >> 1;
                  *(_QWORD *)v141 = v127;
                  v133 = v50;
                  v88 = (unsigned int *)sub_186B300(v8 - 1, v87);
                  v8 = (void (***)(void))(v88 + 2);
                  v50 = v133;
                  v15 = *(_QWORD *)v141;
                  *v88 = v148;
                  LODWORD(v88) = v88[1];
                  v54 = (__int64 *)&v8[(unsigned int)v88];
                  v53 = (_DWORD)v88 + 1;
                }
                else
                {
                  *(_QWORD *)v144 = v127;
                  v137 = v50;
                  v104 = (_QWORD *)sub_186B270(0x18u);
                  v50 = v137;
                  v15 = *(_QWORD *)v144;
                  *v104 = 2;
                  v8 = (void (***)(void))(v104 + 1);
                  v53 = 1;
                  v54 = (__int64 *)v8;
                }
                goto LABEL_74;
              }
              i += 24;
              if ( v46 == i )
                goto LABEL_70;
            }
          }
          goto LABEL_70;
        }
        v41 = *(_QWORD *)(*(_QWORD *)v116 + 32LL);
        v42 = 0;
        if ( !v40 )
          goto LABEL_63;
        if ( *v40 )
          goto LABEL_131;
        if ( v40[1] != 8 )
          goto LABEL_131;
        if ( v39 != 1 )
          goto LABEL_131;
        v73 = v38[4];
        if ( *((_WORD *)v73 + 2) )
          goto LABEL_131;
        if ( *((_DWORD *)v73 + 6) )
          goto LABEL_131;
        v74 = *(_DWORD **)(*((_QWORD *)v73 + 2) + 24LL);
        if ( v74 )
        {
          if ( *v74 != -1 )
            goto LABEL_131;
        }
LABEL_143:
        if ( v8 )
        {
          v75 = *((_DWORD *)v8 - 1);
          if ( v75 == *((_DWORD *)v8 - 2) )
          {
            v79 = (3 * v75 + 1) >> 1;
            v80 = 8 * v79 + 8;
            if ( 8 * v75 + 8 >= (unsigned int)v80 || v75 >= v79 )
            {
              v112 = (char **)__cxa_allocate_exception(0x28u);
              sub_1665D8(v159, "Overflow encountered when expanding vector", v113);
              *v112 = (char *)off_1C63128;
              sub_2333C0(v112 + 1, v159);
              sub_233E40((__int64)v159);
              __cxa_throw(v112, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v146 = (3 * v75 + 1) >> 1;
            *(_QWORD *)v140 = *(_QWORD *)(*(_QWORD *)v116 + 32LL);
            v130 = v15;
            v81 = (unsigned int *)sub_186B300(v8 - 1, v80);
            v8 = (void (***)(void))(v81 + 2);
            v15 = v130;
            v38 = *(void (***)(void))v140;
            *v81 = v146;
            LODWORD(v81) = v81[1];
            v78 = &v8[(unsigned int)v81];
            v77 = (_DWORD)v81 + 1;
          }
          else
          {
            v76 = v75;
            v77 = v75 + 1;
            v78 = &v8[v76];
          }
        }
        else
        {
          *(_QWORD *)v142 = *(_QWORD *)(*(_QWORD *)v116 + 32LL);
          v134 = v15;
          v89 = (_QWORD *)sub_186B270(0x18u);
          v8 = (void (***)(void))(v89 + 1);
          v15 = v134;
          v38 = *(void (***)(void))v142;
          *v89 = 2;
          v78 = (void (***)(void))(v89 + 1);
          v77 = 1;
        }
        *v78 = v38;
        *((_DWORD *)v8 - 1) = v77;
LABEL_75:
        *(_QWORD *)v116 += 8LL;
        if ( ptr != *(char **)v116 )
          continue;
        break;
      }
      if ( !v125 )
      {
        v60 = a1->m128i_i64[0];
        v117 = *a2;
        if ( !v8 )
          goto LABEL_82;
        goto LABEL_157;
      }
      if ( v8 )
      {
        v55 = *((_DWORD *)v8 - 1);
        if ( v55 == *((_DWORD *)v8 - 2) )
        {
          v91 = (3 * v55 + 1) >> 1;
          v92 = 8 * v91 + 8;
          if ( 8 * v55 + 8 >= v92 || v55 >= v91 )
          {
            v108 = (char **)__cxa_allocate_exception(0x28u);
            sub_1665D8(v159, "Overflow encountered when expanding vector", v109);
            *v108 = (char *)off_1C63128;
            sub_2333C0(v108 + 1, v159);
            sub_233E40((__int64)v159);
            __cxa_throw(v108, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          ptrc = (3 * v55 + 1) >> 1;
          v93 = (unsigned int *)sub_186B300(v8 - 1, v92);
          v57 = (void (***)(void))(v93 + 2);
          *v93 = ptrc;
          v94 = v93[1];
          v95 = v94;
          v59 = &v57[v94];
          v58 = v95 + 1;
        }
        else
        {
          v56 = v55;
          v57 = v8;
          v58 = v55 + 1;
          v59 = &v8[v56];
        }
      }
      else
      {
        v105 = (_QWORD *)sub_186B270(0x18u);
        v58 = 1;
        *v105 = 2;
        v57 = (void (***)(void))(v105 + 1);
        v59 = (void (***)(void))(v105 + 1);
      }
      v60 = a1->m128i_i64[0];
      *v59 = v125;
      v61 = *a2;
      *((_DWORD *)v57 - 1) = v58;
      LODWORD(v117) = (_DWORD)v61;
LABEL_81:
      v8 = v57;
LABEL_82:
      sub_15E1AF0(v60);
      sub_EDBFA0((int)v117);
LABEL_16:
      ++v11;
      v10 += 8;
      if ( v11 == v119 )
      {
        v7 = *a2;
        goto LABEL_33;
      }
    }
  }
  v8 = nullptr;
LABEL_33:
  *((_DWORD *)v7 + 30) = (*((_DWORD *)v7 + 30) + 1) & 0x3FFFFFF | (_DWORD)v7[15] & 0xFC000000;
  v24 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v24 + 8);
  v25 = *(_DWORD *)(a3 + 8);
  v26 = *(_DWORD *)(a3 + 12);
  if ( v25 >= v26 )
  {
    v64 = 2 * v26;
    v27 = sub_186B270(8 * v64);
    v25 = *(_DWORD *)(a3 + 8);
    v65 = *(_QWORD **)a3;
    if ( v25 )
    {
      if ( v25 - 1 <= 2 || (_QWORD *)v27 == v65 + 1 )
      {
        for ( j = 0; j != v25; ++j )
          *(_QWORD *)(v27 + j * 8) = v65[j];
      }
      else
      {
        v66 = 0;
        do
        {
          *(__m128i *)(v27 + v66 * 8) = _mm_loadu_si128((const __m128i *)&v65[v66]);
          v66 += 2;
        }
        while ( v66 != 2LL * (v25 >> 1) );
        if ( (v25 & 1) != 0 )
          *(_QWORD *)(v27 + 8LL * (v25 & 0xFFFFFFFE)) = v65[v25 & 0xFFFFFFFE];
      }
    }
    if ( v65 != (_QWORD *)(a3 + 16) && v65 )
    {
      sub_186B220(v65);
      v25 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v27;
    *(_DWORD *)(a3 + 12) = v64;
  }
  else
  {
    v27 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v27 + 8LL * v25) = v24;
  *(_DWORD *)(a3 + 8) = v25 + 1;
  if ( v6 )
    sub_186B220(v6);
  if ( v8 )
    sub_186B220(v8 - 1);
  return sub_EE4A00(&v155);
}

