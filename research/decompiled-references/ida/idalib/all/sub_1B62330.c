__int64 __fastcall sub_1B62330(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128i a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rax
  void **v14; // rdi
  unsigned int v15; // edx
  _QWORD *v16; // rsi
  unsigned int i; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rcx
  int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 *v26; // r13
  _QWORD *v27; // r14
  __int64 v28; // rdi
  unsigned int v29; // ecx
  __int64 *v30; // rsi
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  void **v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  int v39; // ebx
  __int64 *v40; // rsi
  __int64 v41; // r14
  unsigned int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 *v47; // rbp
  __int64 v48; // r13
  __int64 v49; // r15
  __int64 v50; // rbx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r13
  __int64 v57; // rbx
  int v58; // eax
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  _BYTE *v61; // rdi
  __int64 *v62; // rsi
  unsigned int v63; // eax
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  char v66; // bl
  void *v67; // rdx
  __int64 v68; // rcx
  unsigned __int64 v69; // r12
  __int64 v70; // r13
  __int64 *v71; // r14
  __int64 v72; // rcx
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  unsigned __int64 v76; // rax
  char *v77; // rax
  int v78; // esi
  int v79; // r9d
  __int64 v80; // r10
  unsigned __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // rdx
  unsigned int v89; // eax
  unsigned int v90; // r11d
  void *v91; // r8
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 *v97; // rbx
  unsigned __int64 v98; // rbx
  __int64 *v99; // rax
  int v100; // esi
  int v101; // esi
  void **v102; // rdi
  bool v103; // zf
  int v104; // r9d
  _DWORD **v105; // [rsp+0h] [rbp-258h]
  unsigned __int64 v106; // [rsp+0h] [rbp-258h]
  _QWORD *v107; // [rsp+8h] [rbp-250h]
  _DWORD *v108; // [rsp+10h] [rbp-248h]
  unsigned __int64 v109; // [rsp+18h] [rbp-240h]
  __int64 *v110; // [rsp+18h] [rbp-240h]
  unsigned __int64 v111; // [rsp+18h] [rbp-240h]
  __int64 v112; // [rsp+20h] [rbp-238h]
  __int64 v114; // [rsp+30h] [rbp-228h]
  __int64 v115; // [rsp+38h] [rbp-220h]
  __int64 v117; // [rsp+50h] [rbp-208h]
  __int64 v118; // [rsp+58h] [rbp-200h]
  __int64 v119; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v121; // [rsp+B8h] [rbp-1A0h]
  __int64 v122; // [rsp+C8h] [rbp-190h] BYREF
  __m128 v123; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v124; // [rsp+E0h] [rbp-178h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-170h]
  unsigned int v126; // [rsp+F0h] [rbp-168h]
  __m128i v127; // [rsp+100h] [rbp-158h] BYREF
  __int64 v128; // [rsp+110h] [rbp-148h]
  void *ptr; // [rsp+120h] [rbp-138h] BYREF
  __int64 v130; // [rsp+128h] [rbp-130h]
  _BYTE v131[32]; // [rsp+130h] [rbp-128h] BYREF
  __m128 v132; // [rsp+150h] [rbp-108h] BYREF
  void *v133[2]; // [rsp+160h] [rbp-F8h]
  __int128 v134; // [rsp+170h] [rbp-E8h]
  void *v135; // [rsp+180h] [rbp-D8h] BYREF
  __int64 v136; // [rsp+188h] [rbp-D0h]
  _QWORD v137[8]; // [rsp+190h] [rbp-C8h] BYREF
  void *v138[2]; // [rsp+1D0h] [rbp-88h] BYREF
  void *v139[2]; // [rsp+1E0h] [rbp-78h] BYREF
  __int128 v140; // [rsp+1F0h] [rbp-68h]

  result = *(unsigned int *)(a3 + 8);
  if ( (int)result <= 0 )
    return result;
  v118 = 8LL * (unsigned int)(result - 1) + 8;
  v114 = 0;
  do
  {
    v10 = *(_QWORD *)(*(_QWORD *)a3 + v114);
    v117 = v10;
    if ( *(_DWORD *)(v10 + 8) != 55 )
      goto LABEL_48;
    ptr = v131;
    v130 = 0x400000000LL;
    v112 = v10 + 8LL * *(unsigned int *)(v10 + 16) + 152;
    if ( v112 == v10 + 152 )
      goto LABEL_48;
    v107 = (_QWORD *)(v10 + 8LL * *(unsigned int *)(v10 + 16) + 152);
    v105 = (_DWORD **)(v10 + 152);
    while ( 2 )
    {
      if ( *v107 )
        goto LABEL_6;
      v108 = *v105;
      if ( ((**v105 >> 14) & 0xD) != 0 )
        goto LABEL_6;
      v11 = *(_QWORD *)&byte_8[*((_QWORD *)v108 + 1) & 0xFFFFFFFFFFFFFFF0LL];
      v12 = v11 | *((_QWORD *)v108 + 1);
      v11 &= 0xFFFFFFFFFFFFFFF8LL;
      v115 = v11 | v12 & 7;
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v13 + 16) != 13 || ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) != 0x1FA )
        goto LABEL_11;
      v92 = sub_BFBAE0((unsigned __int64)v108);
      v93 = sub_C03930(*(_QWORD *)(v92 + 24), v10) & 0xFFFFFFFFFFFFFFF0LL;
      v96 = *(_QWORD *)v93;
      v97 = (__int64 *)v93;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v93 + 16LL) - 2) > 4u )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v96 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
          goto LABEL_93;
        v96 = sub_F63050(v96, v10, v94, v95);
        if ( !v96 )
        {
          v96 = *v97;
LABEL_93:
          v115 = sub_F68450(v96, v10, v94, v95, a8);
          goto LABEL_11;
        }
      }
      v115 = *(_QWORD *)(v96 + 32);
LABEL_11:
      v14 = v139;
      v137[1] = 0;
      v15 = 1;
      v16 = v137;
      v135 = v137;
      v124 = 0;
      v125 = 0;
      v126 = 0;
      v138[0] = v139;
      v139[0] = nullptr;
      LODWORD(v139[1]) = 1;
      v137[0] = v115;
      v136 = 0x400000001LL;
      v138[1] = (void *)0x400000001LL;
      for ( i = 1; ; i = (unsigned int)v138[1] )
      {
        v18 = 2LL * v15;
        v19 = v16[v18 - 2];
        v20 = v16[v18 - 1];
        LODWORD(v136) = v15 - 1;
        v21 = (__int64)&v14[2 * i - 2];
        v22 = *(_DWORD *)(v21 + 8);
        if ( !v22 )
        {
          v23 = i - 1;
          do
          {
            v24 = v23;
            LODWORD(v138[1]) = v23--;
            v21 = (__int64)&v14[2 * v24 - 2];
            v22 = *(_DWORD *)(v21 + 8);
          }
          while ( !v22 );
        }
        v25 = (unsigned int)(v22 - 1);
        *(_DWORD *)(v21 + 8) = v25;
        v26 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v27 = sub_F63240(
                  *(_QWORD *)(*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
                  (__int64)v16,
                  v25,
                  v21,
                  a8,
                  a9);
          if ( !v27 )
            goto LABEL_35;
          v28 = *v26;
          if ( v126 )
          {
            v29 = (v126 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
            v30 = (__int64 *)(v124 + 16LL * v29);
            v31 = *v30;
            if ( v28 == *v30 )
            {
LABEL_19:
              sub_1AFCF20(&v132, v30, (_QWORD *)(16LL * v126 + v124), (__int64)&v124, 1);
              v32 = v132.m128_u64[0];
              goto LABEL_20;
            }
            v78 = 1;
            if ( v31 != -4096 )
            {
              do
              {
                v79 = v78 + 1;
                v29 = (v126 - 1) & (v78 + v29);
                v30 = (__int64 *)(v124 + 16LL * v29);
                v80 = *v30;
                if ( v28 == *v30 )
                  goto LABEL_19;
                v78 = v79;
              }
              while ( v80 != -4096 );
            }
          }
          sub_1AFCF20(&v132, (_QWORD *)(v124 + 16LL * v126), (_QWORD *)(v124 + 16LL * v126), (__int64)&v124, 1);
          v32 = v132.m128_u64[0];
LABEL_20:
          v109 = v32;
          v33 = (void **)(v124 + 16LL * v126);
          sub_1AFCF20(&v132, v33, v33, (__int64)&v124, 1);
          v38 = v109;
          if ( v132.m128_u64[0] != v109 )
            goto LABEL_21;
          a4 = 0;
          v127.m128i_i64[0] = 0;
          v127.m128i_i32[2] = 0;
          v128 = 0;
          v132 = 0;
          v81 = a1[15].m128_u64[1];
          *(_OWORD *)v133 = 0;
          v134 = 0;
          v127.m128i_i64[0] = sub_6F3470(*(_QWORD *)(v81 + 17504), "default", 7u);
          v127.m128i_i32[2] = sub_C00A40((unsigned __int64)v108, (__int64)"default", v82, v83, v84);
          v85 = sub_1AE5FF0(a2);
          if ( v85 )
            v85 = *(_QWORD *)(v85 + 1008);
          v87 = sub_1B156F0((__int64)a1, v85, (__int64)&v132, &v127, v19, 0);
          if ( v87 == 1 )
          {
            if ( HIDWORD(v133[1]) )
              free(v133[0]);
            goto LABEL_35;
          }
          v88 = *v26;
          v89 = v126;
          v122 = *v26;
          if ( v126 )
          {
            v86 = v124;
            v90 = (v126 - 1) & (((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4));
            v33 = (void **)(v124 + 16LL * v90);
            v91 = *v33;
            if ( (void *)v88 == *v33 )
            {
LABEL_77:
              sub_1AFCF20(&v123, v33, (_QWORD *)(v124 + 16LL * v126), (__int64)&v124, 1);
              v38 = v123.m128_u64[0];
LABEL_78:
              v34 = HIDWORD(v133[1]);
              if ( HIDWORD(v133[1]) )
              {
                v111 = v38;
                free(v133[0]);
                v38 = v111;
              }
LABEL_21:
              if ( *(_QWORD *)(v38 + 8) )
              {
                v39 = sub_C00A40((unsigned __int64)v108, (__int64)v33, v34, v35, v36);
                v40 = (__int64 *)a1[15].m128_u64[1];
                v41 = sub_EEE9A0(24, v40, 8u);
                *(_WORD *)v41 = *(_WORD *)v41 & 0xFE00 | 0x1A;
                if ( unk_2CD7484 )
                  sub_EE9B50(26);
                *(_DWORD *)(v41 + 4) = v39;
                *(_QWORD *)(v41 + 8) = v115;
                *(_QWORD *)(v41 + 16) = v108;
                v42 = *(_DWORD *)v41 & 0xFFF001FF;
                BYTE1(v42) |= 2u;
                *(_DWORD *)v41 = v42;
                v43 = sub_B62360(v41);
                v44 = (unsigned int)(v43 << 6);
                *(_BYTE *)(v41 + 1) = ((_BYTE)v43 << 6) | *(_BYTE *)(v41 + 1) & 0x3F;
                v45 = ((unsigned __int8)v43 >> 2) & 7;
                *(_BYTE *)(v41 + 2) = v45 | *(_BYTE *)(v41 + 2) & 0xF8 | 8;
                v46 = 16LL * LODWORD(v138[1]);
                v110 = (__int64 *)((char *)v138[0] + v46);
                if ( v138[0] != (char *)v138[0] + v46 )
                {
                  v119 = v20;
                  v47 = (__int64 *)v138[0];
                  do
                  {
                    if ( *v47 )
                    {
                      v48 = *(_QWORD *)(*v47 + 48);
                      v132.m128_i32[2] = 0;
                      v132.m128_u64[0] = 0;
                      v133[0] = nullptr;
                      v49 = *v47;
                      v127.m128i_i64[0] = *v47 | (*(_BYTE *)(*v47 + 29) >> 5) & 3;
                      v50 = v127.m128i_i64[0];
                      v51 = sub_C00A40((unsigned __int64)v108, (__int64)v40, v45, v44, a8);
                      v40 = sub_19C4C50(a1, v41, 0, v51, 0, 0, a4, a5, 0, v49, v50, 0, (__int64)&v132, v48, 1, 0, 0);
                      v41 = sub_19146F0((__int64)a1, v40, v52, v53, v54, v55, a4, a5) & 0xFFFFFFFFFFFFFFFELL;
                    }
                    v47 += 2;
                  }
                  while ( v110 != v47 );
                  v20 = v119;
                }
                if ( v20 )
                {
                  v56 = *(_QWORD *)(v20 + 48);
                  v132.m128_i32[2] = 0;
                  v132.m128_u64[0] = 0;
                  v133[0] = nullptr;
                  v127.m128i_i64[0] = v20 | (*(_BYTE *)(v20 + 29) >> 5) & 3;
                  v57 = v127.m128i_i64[0];
                  v58 = sub_C00A40((unsigned __int64)v108, (__int64)v40, v45, v44, a8);
                  v41 = (__int64)sub_19C4C50(
                                   a1,
                                   v41,
                                   0,
                                   v58,
                                   0,
                                   0,
                                   a4,
                                   a5,
                                   0,
                                   v20,
                                   v57,
                                   0,
                                   (__int64)&v132,
                                   v56,
                                   1,
                                   0,
                                   0);
                }
                v59 = (unsigned int)v130;
                v60 = (unsigned int)v130 + 1LL;
                if ( v60 > HIDWORD(v130) )
                {
                  sub_2237220(&ptr, v131, v60, 8);
                  v59 = (unsigned int)v130;
                }
                *((_QWORD *)ptr + v59) = v41;
                LODWORD(v130) = v130 + 1;
                goto LABEL_35;
              }
              v66 = 1;
              v69 = sub_B7E900((__int64)v27, (__int64)v33, v34, v35, v36, v37);
              if ( v69 )
              {
LABEL_51:
                v70 = *(_QWORD *)(v69 + 48);
                v71 = (__int64 *)(v70 & 0xFFFFFFFFFFFFFFF0LL);
                if ( (v70 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                  goto LABEL_58;
                if ( (unsigned __int8)sub_F613D0(*v71, (__int64)v33, (__int64)v67, v68, a8, a9) )
                {
                  v73 = LODWORD(v138[1]);
                  if ( !v66 )
                  {
LABEL_54:
                    v67 = v138[0];
                    ++*((_DWORD *)v138[0] + 4 * v73 - 2);
                    goto LABEL_55;
                  }
                }
                else
                {
                  if ( !sub_F61420(*v71, (__int64)v33, (__int64)v67, v72, a8, a9) )
                    goto LABEL_58;
                  v73 = LODWORD(v138[1]);
                  if ( !v66 )
                    goto LABEL_54;
                }
                if ( v73 >= HIDWORD(v138[1]) )
                {
                  v67 = (void *)(v73 + 1);
                  v98 = v121 & 0xFFFFFFFF00000000LL | 1;
                  v121 = v98;
                  if ( HIDWORD(v138[1]) < v73 + 1 )
                  {
                    v33 = v139;
                    sub_2237220(v138, v139, v67, 16);
                    v73 = LODWORD(v138[1]);
                  }
                  v99 = (__int64 *)((char *)v138[0] + 16 * v73);
                  *v99 = v20;
                  v99[1] = v98;
                  ++LODWORD(v138[1]);
                }
                else
                {
                  v77 = (char *)v138[0] + 16 * v73;
                  *(_QWORD *)v77 = v20;
                  *((_DWORD *)v77 + 2) = 1;
                  ++LODWORD(v138[1]);
                }
LABEL_55:
                v74 = (unsigned int)v136;
                v68 = HIDWORD(v136);
                if ( (unsigned int)v136 >= (unsigned __int64)HIDWORD(v136) )
                {
                  v67 = (void *)((unsigned int)v136 + 1LL);
                  if ( HIDWORD(v136) < (unsigned __int64)v67 )
                  {
                    v33 = (void **)v137;
                    sub_2237220(&v135, v137, v67, 16);
                    v74 = (unsigned int)v136;
                  }
                }
                v75 = (char *)v135 + 16 * v74;
                v66 = 0;
                *v75 = v70;
                v75[1] = v69;
                LODWORD(v136) = v136 + 1;
LABEL_58:
                while ( 1 )
                {
                  v76 = *(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v69 = v76;
                  if ( !v76 )
                    break;
                  if ( (*(_BYTE *)(v76 + 28) & 0x7Fu) - 49 <= 2 )
                    goto LABEL_51;
                }
              }
LABEL_35:
              v14 = (void **)v138[0];
              goto LABEL_36;
            }
            v102 = nullptr;
            v104 = 1;
            if ( v91 != (void *)-4096LL )
            {
              while ( 1 )
              {
                if ( !v102 && v91 == (void *)-8192LL )
                  v102 = v33;
                v90 = (v126 - 1) & (v104 + v90);
                v33 = (void **)(v124 + 16LL * v90);
                v91 = *v33;
                if ( (void *)v88 == *v33 )
                  goto LABEL_77;
                if ( v91 == (void *)-4096LL )
                {
                  if ( v102 )
                    goto LABEL_102;
                  break;
                }
                ++v104;
              }
            }
            v102 = v33;
LABEL_102:
            a8 = 3 * v126;
            v123.m128_u64[0] = (unsigned __int64)v102;
            v101 = v125 + 1;
            a9 = (unsigned int)(4 * (v125 + 1));
            if ( (unsigned int)a9 < (unsigned int)a8 )
            {
              a8 = v126 - HIDWORD(v125) - v101;
              a9 = v126 >> 3;
              if ( (unsigned int)a8 > (unsigned int)a9 )
                goto LABEL_97;
              v100 = v126;
LABEL_96:
              sub_1B03490((__int64)&v124, v100, v88, v86, a8, a9);
              sub_1AF77A0(&v124, &v122, &v123);
              v88 = v122;
              v86 = v124;
              v89 = v126;
              v101 = v125 + 1;
              v102 = (void **)v123.m128_u64[0];
LABEL_97:
              v103 = (char *)*v102 + 4096 == nullptr;
              LODWORD(v125) = v101;
              if ( !v103 )
                --HIDWORD(v125);
              *v102 = (void *)v88;
              v33 = v102;
              v102[1] = (void *)(v87 & 0xFFFFFFFFFFFFFFFELL);
              sub_1AFCF20(&v123, v102, (_QWORD *)(v86 + 16LL * v89), (__int64)&v124, 1);
              v38 = v123.m128_u64[0];
              goto LABEL_78;
            }
          }
          else
          {
            v123.m128_u64[0] = 0;
          }
          v100 = 2 * v126;
          goto LABEL_96;
        }
LABEL_36:
        v15 = v136;
        if ( !(_DWORD)v136 )
          break;
        v16 = v135;
      }
      if ( v14 != v139 )
        free(v14);
      v10 = 16LL * v126;
      operator delete(v124, v10, 8);
      if ( v135 != v137 )
        free(v135);
LABEL_6:
      ++v105;
      ++v107;
      if ( (_DWORD **)v112 != v105 )
        continue;
      break;
    }
    v61 = ptr;
    if ( (_DWORD)v130 )
    {
      a4 = 0;
      v137[0] = 0;
      v62 = (__int64 *)a1[47].m128_u64[1];
      *(_OWORD *)v138 = 0;
      v63 = *(_DWORD *)(v117 + 136);
      *(_OWORD *)v139 = 0;
      v140 = 0;
      v135 = nullptr;
      LODWORD(v136) = 0;
      v132.m128_u64[0] = 0;
      v132.m128_i32[2] = 0;
      v64 = sub_1B61E10(
              v62,
              nullptr,
              v117 + 80,
              7,
              v117 + 108,
              0.0,
              a5,
              a6,
              7,
              (__int64)v138,
              (__int64)&v135,
              v63,
              1u,
              0,
              (__int64)ptr,
              (unsigned int)v130,
              (int *)&v132,
              0,
              nullptr);
      if ( v64 )
      {
        v65 = *(unsigned int *)(a3 + 8);
        if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v106 = v64;
          sub_2237220(a3, a3 + 16, v65 + 1, 8);
          v65 = *(unsigned int *)(a3 + 8);
          v64 = v106;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v65) = v64;
        ++*(_DWORD *)(a3 + 8);
      }
      if ( HIDWORD(v139[1]) )
        free(v139[0]);
      v61 = ptr;
    }
    if ( v61 != v131 )
      free(v61);
LABEL_48:
    v114 += 8;
    result = v114;
  }
  while ( v118 != v114 );
  return result;
}
