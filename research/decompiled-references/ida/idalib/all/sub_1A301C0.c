void __fastcall sub_1A301C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int16 v27; // ax
  __int64 v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // r13
  __int64 *v31; // rsi
  char v32; // al
  __int64 *v33; // rbp
  int v34; // eax
  __int64 v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned __int64 v38; // r14
  __int64 v39; // rbp
  __int64 v40; // rbx
  _BOOL8 v41; // r13
  unsigned int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rdx
  int v47; // eax
  void *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r13
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rsi
  __int64 v56; // rdi
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // r14
  unsigned __int64 v63; // rbp
  unsigned __int64 v64; // rbx
  unsigned int v65; // eax
  __int64 v66; // r9
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 *v73; // rax
  __int64 *v74; // rax
  __int64 *v75; // rax
  __int64 *v76; // rax
  __int64 v77; // rax
  __int64 (__fastcall *v78)(__int64); // rax
  unsigned __int64 v79; // rax
  int v80; // r13d
  char v81; // bp
  char v82; // al
  _QWORD *v83; // rdi
  unsigned __int64 v84; // r13
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __m128i *v90; // rbp
  unsigned __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rsi
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  _QWORD *v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 (__fastcall *v105)(__int64); // rax
  unsigned __int64 v106; // rax
  int v107; // eax
  char v108; // bl
  int v109; // r13d
  bool v110; // al
  char v111; // bl
  unsigned __int64 v112; // r9
  unsigned __int64 v113; // r14
  __int64 v114; // rdx
  __int64 v115; // rcx
  int v116; // eax
  __int64 v117; // rbx
  __int64 v118; // rbp
  __int64 v119; // r13
  __int64 v120; // rdi
  unsigned __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  unsigned __int64 v127; // rax
  __int64 v128; // rsi
  unsigned __int64 v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  bool v134; // zf
  __int64 v135; // rbx
  unsigned __int64 v136; // r14
  unsigned __int64 v137; // [rsp+8h] [rbp-190h]
  char v138; // [rsp+8h] [rbp-190h]
  __int64 v139; // [rsp+8h] [rbp-190h]
  char v140; // [rsp+8h] [rbp-190h]
  _BOOL8 v141; // [rsp+10h] [rbp-188h]
  int v142; // [rsp+10h] [rbp-188h]
  __int64 v143; // [rsp+18h] [rbp-180h]
  unsigned __int64 v144; // [rsp+18h] [rbp-180h]
  __int64 v145; // [rsp+18h] [rbp-180h]
  unsigned __int64 v146; // [rsp+20h] [rbp-178h]
  __int64 v147; // [rsp+20h] [rbp-178h]
  unsigned __int64 v148; // [rsp+28h] [rbp-170h]
  __int64 v149; // [rsp+30h] [rbp-168h]
  unsigned __int64 v151; // [rsp+40h] [rbp-158h]
  __int64 v152; // [rsp+40h] [rbp-158h]
  int v153; // [rsp+48h] [rbp-150h]
  int v154; // [rsp+4Ch] [rbp-14Ch]
  int v155; // [rsp+4Ch] [rbp-14Ch]
  __int64 *v157; // [rsp+58h] [rbp-140h]
  __int64 v158; // [rsp+68h] [rbp-130h]
  __int64 v159; // [rsp+70h] [rbp-128h]
  unsigned __int64 v160; // [rsp+78h] [rbp-120h]
  __int64 v161; // [rsp+80h] [rbp-118h] BYREF
  int v162; // [rsp+88h] [rbp-110h]
  __int64 v163; // [rsp+90h] [rbp-108h] BYREF
  int v164; // [rsp+98h] [rbp-100h]
  __int64 *v165; // [rsp+A0h] [rbp-F8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v167; // [rsp+B8h] [rbp-E0h]
  _BYTE v168[32]; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i v169; // [rsp+E0h] [rbp-B8h] BYREF
  int v170; // [rsp+F0h] [rbp-A8h]
  int v171; // [rsp+F8h] [rbp-A0h]
  __int64 v172; // [rsp+100h] [rbp-98h]
  __int64 v173; // [rsp+108h] [rbp-90h]
  __int64 v174; // [rsp+110h] [rbp-88h]
  __int64 v175; // [rsp+118h] [rbp-80h]
  __int64 v176; // [rsp+120h] [rbp-78h]
  __int64 v177; // [rsp+128h] [rbp-70h]
  int v178; // [rsp+130h] [rbp-68h]
  __int64 v179; // [rsp+138h] [rbp-60h]
  __int64 v180; // [rsp+140h] [rbp-58h]
  __int64 v181; // [rsp+148h] [rbp-50h]
  __int64 v182; // [rsp+150h] [rbp-48h]

  v7 = *(__int64 **)(a4 + 120);
  v153 = a2;
  v10 = 8LL * (unsigned int)sub_B76070(a4, a2, a3, a4);
  v13 = &v7[(unsigned __int64)v10 / 8];
  v14 = v10 >> 3;
  v15 = v10 >> 5;
  if ( !v15 )
  {
LABEL_33:
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
          goto LABEL_36;
        goto LABEL_100;
      }
      if ( (*(_BYTE *)(*v7 + 29) & 1) != 0 && sub_1A2C9A0(*v7, a2, v8, v9, v11, v12) )
        goto LABEL_13;
      ++v7;
    }
    if ( (*(_BYTE *)(*v7 + 29) & 1) != 0 && sub_1A2C9A0(*v7, a2, v8, v9, v11, v12) )
      goto LABEL_13;
    ++v7;
LABEL_100:
    if ( (*(_BYTE *)(*v7 + 29) & 1) != 0 && sub_1A2C9A0(*v7, a2, v8, v9, v11, v12) )
      goto LABEL_13;
    goto LABEL_36;
  }
  v16 = &v7[4 * v15];
  while ( 1 )
  {
    if ( (*(_BYTE *)(*v7 + 29) & 1) != 0 )
    {
      v21 = sub_B8C3D0(*v7, a2, v8, v9, v11, v12);
      v8 = *v21;
      v9 = *v21 + 8LL * *((unsigned int *)v21 + 2);
      if ( *v21 < v9 )
      {
        v22 = (__int64 *)*v21;
        while ( 1 )
        {
          v8 = *v22;
          if ( *(_WORD *)(*v22 + 36) == 102 )
            break;
          if ( (__int64 *)v9 == ++v22 )
            goto LABEL_3;
        }
        if ( (__int64 *)v9 != v22 )
          goto LABEL_13;
        goto LABEL_3;
      }
      if ( v8 != v9 )
        break;
    }
LABEL_3:
    v17 = v7[1];
    v18 = v7 + 1;
    if ( (*(_BYTE *)(v17 + 29) & 1) != 0 )
    {
      v75 = sub_B8C3D0(v17, a2, v8, v9, v11, v12);
      v8 = *v75;
      v9 = *v75 + 8LL * *((unsigned int *)v75 + 2);
      if ( *v75 >= v9 )
      {
        if ( v8 != v9 )
        {
          while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 102 )
          {
            v9 += 8LL;
            if ( v8 == v9 )
              goto LABEL_4;
          }
          goto LABEL_25;
        }
      }
      else
      {
        v76 = (__int64 *)*v75;
        while ( 1 )
        {
          v8 = *v76;
          if ( *(_WORD *)(*v76 + 36) == 102 )
            break;
          if ( (__int64 *)v9 == ++v76 )
            goto LABEL_4;
        }
        if ( (__int64 *)v9 != v76 )
          goto LABEL_25;
      }
    }
LABEL_4:
    v19 = v7[2];
    v18 = v7 + 2;
    if ( (*(_BYTE *)(v19 + 29) & 1) != 0 )
    {
      v73 = sub_B8C3D0(v19, a2, v8, v9, v11, v12);
      v8 = *v73;
      v9 = *v73 + 8LL * *((unsigned int *)v73 + 2);
      if ( *v73 >= v9 )
      {
        if ( v8 != v9 )
        {
          while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 102 )
          {
            v9 += 8LL;
            if ( v8 == v9 )
              goto LABEL_5;
          }
LABEL_25:
          v7 = v18;
          goto LABEL_13;
        }
      }
      else
      {
        v74 = (__int64 *)*v73;
        while ( 1 )
        {
          v8 = *v74;
          if ( *(_WORD *)(*v74 + 36) == 102 )
            break;
          if ( (__int64 *)v9 == ++v74 )
            goto LABEL_5;
        }
        if ( (__int64 *)v9 != v74 )
          goto LABEL_25;
      }
    }
LABEL_5:
    v20 = v7[3];
    v18 = v7 + 3;
    if ( (*(_BYTE *)(v20 + 29) & 1) != 0 )
    {
      v23 = sub_B8C3D0(v20, a2, v8, v9, v11, v12);
      v8 = *v23;
      v9 = *v23 + 8LL * *((unsigned int *)v23 + 2);
      if ( *v23 < v9 )
      {
        v24 = (__int64 *)*v23;
        while ( 1 )
        {
          v8 = *v24;
          if ( *(_WORD *)(*v24 + 36) == 102 )
            break;
          if ( (__int64 *)v9 == ++v24 )
            goto LABEL_6;
        }
        if ( (__int64 *)v9 != v24 )
          goto LABEL_25;
        goto LABEL_6;
      }
      if ( v8 == v9 )
        goto LABEL_6;
      if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 102 )
        goto LABEL_25;
      v9 += 8LL;
      while ( v8 != v9 )
      {
        v25 = *(_QWORD *)v9;
        v9 += 8LL;
        if ( *(_WORD *)(v25 + 36) == 102 )
          goto LABEL_25;
      }
      v7 += 4;
      if ( v16 == v7 )
      {
LABEL_32:
        v14 = v13 - v7;
        goto LABEL_33;
      }
    }
    else
    {
LABEL_6:
      v7 += 4;
      if ( v16 == v7 )
        goto LABEL_32;
    }
  }
  while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 102 )
  {
    v9 += 8LL;
    if ( v8 == v9 )
      goto LABEL_3;
  }
LABEL_13:
  if ( v13 == v7 )
  {
LABEL_36:
    v26 = sub_A70010(*(_QWORD *)(a1 + 248), a5);
    v27 = sub_A64670(*(_QWORD *)(a1 + 248), 0, 1, 0);
    v28 = *(_QWORD *)(a1 + 248);
    v169.m128i_i16[1] &= 0xF000u;
    v169.m128i_i16[0] = v27;
    v170 = 0;
    v172 = 0;
    v173 = 0;
    v174 = 0;
    v175 = 0;
    v176 = 0;
    v177 = 0;
    v178 = 0;
    v179 = 0;
    v180 = 0;
    v181 = 0;
    v182 = 0;
    v169.m128i_i64[1] = 1;
    v171 = 5;
    v160 = sub_A73610(v28, v26, nullptr, 0, &v169, 0);
    v158 = sub_B87AA0(
             *(_QWORD *)(a1 + 248) + 17536LL,
             *(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
           | ((unsigned __int8)v26 | (unsigned __int8)*(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
    v157 = sub_A81910(*(_QWORD **)(a1 + 248), v26, a2);
    v29 = sub_A81910(*(_QWORD **)(a1 + 248), v160, a2);
    v30 = *v29;
    v31 = v29;
    v159 = (__int64)v29;
    if ( *v29 & 7 | (*v29 >> 3) & 1 || *(_BYTE *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      BUG();
    v32 = *(_BYTE *)(v30 + 16);
    v33 = v31 + 1;
    if ( v32 == 26 )
    {
      v34 = ((*(_BYTE *)(v30 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v35 = 16;
      if ( v32 == 25 )
      {
LABEL_41:
        v36 = sub_F6C520(*(_QWORD *)(v30 + 24));
        v37 = *(_QWORD *)(v30 + 24);
        if ( !(v37 & 7 | (v37 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
        {
          v134 = (__int64 *)((char *)v33 + v35) == nullptr;
          v135 = (__int64)v33 + v35;
          v39 = *(_QWORD *)(v30 + 24);
          v136 = v36 * (!v134 + (v135 - (unsigned __int64)!v134) / v36) + 4;
          v141 = v136 != 0;
          v38 = v136 - v141;
        }
        else
        {
          v141 = 1;
          v38 = 3;
          v39 = 0;
        }
        v40 = *v157;
        if ( !(*v157 & 7 | (*v157 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
        {
          v41 = (__int64 *)((char *)v157 + 12) != nullptr;
          v137 = (unsigned __int64)v157 - v41 + 12;
        }
        else
        {
          v137 = 3;
          v41 = 1;
          v40 = 0;
        }
        v42 = sub_F6C520(*(_QWORD *)(v39 + 32));
        v146 = 0;
        if ( !(*(_QWORD *)(v39 + 32) & 7LL | (*(__int64 *)(v39 + 32) >> 3) & 1)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
        {
          v146 = v42 * (v141 + v38 / v42);
        }
        v43 = sub_F6C520(*(_QWORD *)(v40 + 32));
        v44 = *(_QWORD *)(v40 + 32);
        v148 = 0;
        v45 = v44 & 7;
        v46 = v45 | (v44 >> 3) & 1;
        if ( !v46 )
        {
          v44 &= 0xFFFFFFFFFFFFFFF0LL;
          v46 = *(_QWORD *)v44;
          if ( *(_BYTE *)(*(_QWORD *)v44 + 16LL) == 26 )
          {
            v44 = v43;
            v46 = v137 % v43;
            v148 = v43 * (v41 + v137 / v43);
          }
        }
        ptr = v168;
        v167 = 0x400000000LL;
        v47 = sub_B76070(a4, v45, v46, v44);
        if ( !v47 )
        {
LABEL_106:
          v77 = *(_QWORD *)a4;
          v161 = 0;
          v162 = 0;
          v78 = *(__int64 (__fastcall **)(__int64))(v77 + 64);
          if ( v78 == sub_6EF210 )
            v79 = sub_B7F750((_QWORD *)a4, &v163, (__int64)v48, v49, v50, v51);
          else
            v79 = v78(a4);
          v80 = sub_EEC140(v79);
          v81 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
          v82 = sub_C1BE80((int *)(a1 + 224));
          v83 = *(_QWORD **)(a1 + 248);
          v164 = v153;
          v163 = v158;
          v165 = v157;
          v84 = sub_B995D0(v83, a3, v153, &v163, v160, v159, v82, 1, 0, (v81 & 0x40) != 0, v80, (__int64)&v161);
          *(_BYTE *)(v84 + 29) = *(_BYTE *)(v84 + 29) & 0x9D | 2;
          v85 = *(_QWORD *)(a4 + 56);
          if ( (v85 & 4) != 0 )
          {
            v98 = (_QWORD *)((v85 & 0xFFFFFFFFFFFFFFF8LL) + 40);
            if ( *v98 )
              sub_B7BE40(v84, (__int64)v98);
          }
          v90 = (__m128i *)(a3 + 64);
          if ( sub_B96EF0(a3) )
          {
            v91 = sub_B77A30(a4);
            v92 = 0;
            if ( a3 )
              v92 = a3 + 64;
            v144 = sub_BBDCA0(*(_QWORD *)(a1 + 248), v92, v153, v158, *(_QWORD *)(v91 + 56), v84);
            *(_BYTE *)(v144 + 29) = *(_BYTE *)(v144 + 29) & 0x9D | 2;
            sub_B77A70(v84, v144);
            v93 = v144;
            sub_B94AD0(v90, v144, v94, v95, v96, v97);
          }
          else
          {
            v93 = v84;
            sub_B94AD0(v90, v84, v86, v87, v88, v89);
          }
          if ( (unsigned __int8)sub_B98200((_QWORD *)a4, v93) )
          {
            v99 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), "__invoke", 8u);
            v161 = 0;
            v145 = v99;
            v104 = *(_QWORD *)a4;
            v162 = 0;
            v105 = *(__int64 (__fastcall **)(__int64))(v104 + 64);
            if ( v105 == sub_6EF210 )
              v106 = sub_B7F750((_QWORD *)a4, &v163, v100, v101, v102, v103);
            else
              v106 = v105(a4);
            v107 = sub_EEC140(v106);
            v108 = *(_BYTE *)(a4 + 84);
            v109 = v107;
            v110 = sub_C1BE80((int *)(a1 + 224));
            v111 = v108 & 3;
            v112 = *(_QWORD *)(a4 + 56) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a4 + 56) & 4) != 0 )
              v112 = *(_QWORD *)(v112 + 32);
            v140 = v110;
            v147 = v112;
            v163 = v145;
            v164 = v153;
            sub_B85890(&v165, v145);
            v113 = sub_B97D00(*(_QWORD **)(a1 + 248), a3, v153, &v163, a5, v147, 2, v140, 1, v111, v109, (__int64)&v161);
            v116 = sub_B76070(a4, a3, v114, v115);
            if ( v116 )
            {
              v117 = v113 + 72;
              if ( !v113 )
                v117 = 0;
              v118 = 0;
              v119 = 8LL * (unsigned int)(v116 - 1) + 8;
              do
              {
                v120 = *(_QWORD *)((char *)ptr + v118);
                v118 += 8;
                sub_B8C080(v120, v117);
              }
              while ( v119 != v118 );
              v90 = (__m128i *)(a3 + 64);
            }
            v121 = (unsigned int)v167;
            v122 = sub_B8C330(v113);
            sub_B7C440(v113, v122, ptr, v121);
            *(_BYTE *)(v113 + 29) = *(_BYTE *)(v113 + 29) & 0x9D | 0x42;
            if ( sub_B96EF0(a3) )
            {
              v127 = sub_B77A30(a4);
              v128 = a3;
              if ( a3 )
                v128 = (__int64)v90;
              v129 = sub_BBDCA0(*(_QWORD *)(a1 + 248), v128, v153, v145, *(_QWORD *)(v127 + 56), v113);
              *(_BYTE *)(v129 + 29) = *(_BYTE *)(v129 + 29) & 0x9D | 0x42;
              sub_B77A70(v113, v129);
              sub_B94AD0(v90, v129, v130, v131, v132, v133);
            }
            else
            {
              sub_B94AD0(v90, v113, v123, v124, v125, v126);
            }
          }
          if ( ptr != v168 )
            free(ptr);
          return;
        }
        v52 = 0;
        v149 = 8LL * (unsigned int)(v47 - 1) + 8;
        while ( 1 )
        {
          v62 = *(_QWORD *)(*(_QWORD *)(a4 + 120) + v52);
          v138 = *(_BYTE *)(v62 + 96) & 7;
          v63 = *(_QWORD *)(v62 + 56) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v62 + 56) & 4) != 0 )
            v63 = *(_QWORD *)(v63 + 32);
          v143 = *(_QWORD *)(v62 + 48);
          v64 = *(_QWORD *)(v62 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v62 + 40) & 7) != 0 )
            v64 = 0;
          v142 = *(_DWORD *)(v62 + 24);
          v65 = sub_B73090(v62);
          v59 = *(_QWORD *)(a1 + 248);
          v58 = v65;
          v67 = *(_QWORD *)(*(_QWORD *)(v59 + 2264) + 80LL);
          v68 = *(_QWORD *)(v67 + 72);
          v69 = v68;
          if ( (v68 & 1) != 0 )
            break;
          v70 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v68 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          {
            v55 = 0;
            goto LABEL_61;
          }
          v71 = *(_QWORD *)(v67 + 72) & 2LL;
          v55 = (unsigned __int64)v70;
          if ( (_DWORD)v71 )
          {
            v155 = v58;
            v152 = *(_QWORD *)(*(_QWORD *)(v59 + 2264) + 80LL);
            v72 = sub_6E2500(v70, v152, v58, v71, v67, v66);
            v67 = v152;
            LODWORD(v58) = v155;
            v54 = v72 & 0xFFFFFFFFFFFFFFFELL;
            *(_QWORD *)(v152 + 72) = v54 | 1;
            v53 = v54 & 0xFFFFFFFFFFFFFFF8LL;
            v55 = v54 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v54 )
              goto LABEL_73;
            goto LABEL_56;
          }
LABEL_61:
          if ( v55 )
            v55 += 40LL;
          v60 = sub_B74530(v59, v55, v58, v142, v64, v143, v63, v138, 0);
          v49 = (unsigned int)v167;
          v61 = (unsigned int)v167 + 1LL;
          if ( v61 > HIDWORD(v167) )
          {
            v139 = v60;
            sub_2237220(&ptr, v168, v61, 8);
            v49 = (unsigned int)v167;
            v48 = ptr;
            *((_QWORD *)ptr + (unsigned int)v167) = v139;
            LODWORD(v167) = v167 + 1;
            *(_QWORD *)(v146 + v52 + 16) = v62;
            *(_QWORD *)(v148 + v52 + 16) = v62;
            v52 += 8;
            if ( v149 == v52 )
              goto LABEL_106;
          }
          else
          {
            v48 = ptr;
            *((_QWORD *)ptr + (unsigned int)v167) = v60;
            LODWORD(v167) = v167 + 1;
            *(_QWORD *)(v146 + v52 + 16) = v62;
            *(_QWORD *)(v148 + v52 + 16) = v62;
            v52 += 8;
            if ( v52 == v149 )
              goto LABEL_106;
          }
        }
        v53 = v68 & 0xFFFFFFFFFFFFFFF8LL;
        v54 = v69 & 0xFFFFFFFFFFFFFFFELL;
        v55 = v53;
        if ( !v54 )
        {
LABEL_73:
          v59 = *(_QWORD *)(a1 + 248);
          goto LABEL_61;
        }
LABEL_56:
        if ( (v54 & 4) != 0 && v53 )
        {
          v56 = *(_QWORD *)v53;
          v57 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
          if ( *(_DWORD *)(v53 + 8) != v57 )
          {
            *(_DWORD *)(v53 + 8) = v57;
            v154 = v58;
            v151 = v53;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 152LL))(v56, v67);
            LODWORD(v58) = v154;
            v53 = v151;
          }
          v55 = *(_QWORD *)(v53 + 16);
          v59 = *(_QWORD *)(a1 + 248);
          goto LABEL_61;
        }
        goto LABEL_73;
      }
      v34 = 15;
    }
    v35 = 8 * ((v34 + 8 * (unsigned int)*(unsigned __int16 *)(v30 + 22)) >> 3) + 8;
    goto LABEL_41;
  }
}
