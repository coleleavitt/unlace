__int64 __fastcall sub_8BC080(unsigned int **a1, unsigned int a2)
{
  unsigned int **v2; // r15
  __int64 v4; // rcx
  unsigned int *v5; // rsi
  unsigned int *v6; // rdx
  unsigned int *v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // ebp
  unsigned int *v12; // rdx
  unsigned int *v13; // rdx
  unsigned int *v14; // rdx
  unsigned int *v15; // rcx
  unsigned __int64 v16; // xmm0_8
  __int64 v17; // rax
  unsigned __int64 *v18; // rax
  unsigned int *v19; // rax
  __int64 v20; // rbx
  unsigned int *v21; // rbx
  unsigned int *v22; // r14
  unsigned int v23; // esi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ebp
  __int64 v27; // r12
  int v28; // edx
  unsigned int *v29; // rdi
  char *v30; // rdi
  char v31; // al
  unsigned int *v32; // rax
  __int64 v33; // rdx
  int *v34; // r12
  unsigned int *v35; // rax
  int v36; // ebp
  unsigned int *v37; // rsi
  unsigned int **v38; // rdi
  unsigned int *v39; // rdi
  __int64 v40; // r8
  unsigned int *v41; // r11
  unsigned int *v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // r13
  int v45; // eax
  unsigned int *v46; // rdx
  __int64 v47; // r10
  _DWORD *v48; // r12
  unsigned int *v49; // r8
  __int64 v50; // rdx
  unsigned int *v51; // rcx
  int v52; // eax
  unsigned int *v53; // r13
  __int64 v54; // rbp
  __m128i v55; // xmm0
  unsigned int *v56; // rdx
  unsigned int *v57; // rdx
  unsigned int *v58; // rcx
  int *v59; // rbx
  unsigned __int64 v60; // xmm0_8
  __int64 v61; // rax
  unsigned __int64 *v62; // rax
  int v63; // eax
  __int64 v64; // rbx
  unsigned int *v65; // rax
  unsigned int *v66; // rax
  unsigned int *v67; // rdi
  size_t v68; // rdx
  unsigned int *v69; // rax
  int v70; // ecx
  unsigned int *v71; // rdx
  unsigned int *v72; // rax
  unsigned int *v73; // rsi
  __int64 v74; // rdx
  unsigned int *v75; // rsi
  unsigned int *v76; // rax
  unsigned int *v77; // rdi
  __int64 v78; // rdx
  unsigned int v79; // ecx
  int *v81; // r12
  unsigned int *v82; // rax
  unsigned int *v83; // rbp
  unsigned int *v84; // r8
  __int64 v85; // r9
  unsigned int *v86; // rdi
  int v87; // eax
  unsigned __int64 v88; // rsi
  int v89; // edx
  unsigned int v90; // r13d
  unsigned int *v91; // rcx
  __int64 v92; // r12
  _DWORD *v93; // r11
  unsigned int *v94; // r9
  unsigned int *v95; // r10
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rsi
  int v99; // r9d
  unsigned int v100; // r8d
  unsigned int *v101; // rdx
  unsigned int v102; // edi
  __int64 v103; // rbx
  unsigned int v104; // edx
  __int64 v105; // r14
  int v106; // ebp
  __int64 v107; // rsi
  __int64 v108; // r11
  unsigned int *v109; // r10
  unsigned int *v110; // rdx
  unsigned int v111; // eax
  int v112; // r8d
  unsigned int v113; // r13d
  size_t v114; // rsi
  unsigned int *v115; // rax
  unsigned int *v116; // rcx
  __int64 v117; // rax
  _QWORD *v118; // rax
  unsigned int *v119; // rcx
  unsigned int *v120; // rax
  unsigned int *v121; // rsi
  __int64 v122; // rdx
  unsigned int *v123; // rax
  unsigned int v124; // r12d
  unsigned int v125; // ecx
  unsigned int *v126; // rax
  unsigned int *v127; // rbx
  __int64 v128; // rax
  _QWORD *v129; // rax
  unsigned int *v130; // rbx
  char **exception; // rbp
  __int64 v132; // rdx
  __int64 v133; // rdx
  _DWORD *v134; // [rsp+0h] [rbp-B8h]
  __int64 v135; // [rsp+8h] [rbp-B0h]
  unsigned int v136; // [rsp+14h] [rbp-A4h]
  __int64 v137; // [rsp+18h] [rbp-A0h]
  unsigned int **v138; // [rsp+20h] [rbp-98h]
  __int64 v139; // [rsp+28h] [rbp-90h]
  __int64 v140; // [rsp+30h] [rbp-88h]
  __int64 *v141; // [rsp+38h] [rbp-80h]
  unsigned int **v142; // [rsp+40h] [rbp-78h]
  unsigned int **v143; // [rsp+48h] [rbp-70h]
  unsigned int v144; // [rsp+5Ch] [rbp-5Ch] BYREF
  __int64 v145[11]; // [rsp+60h] [rbp-58h] BYREF

  v2 = a1;
  v4 = 3LL * a2;
  v5 = a1[3];
  v6 = &a1[5][2 * v4];
  v7 = a1[9];
  v8 = v6[1];
  v9 = *v6;
  v7[v9] = 0;
  v10 = v8;
  v11 = v6[2] + v5[v9] - v5[v8];
  LODWORD(v134) = v8;
  v12 = v2[10];
  v7[v8] = v11;
  v135 = v9;
  *((_BYTE *)v12 + v8) = 2;
  v13 = v2[11];
  v144 = v8;
  v13[v8] = a2;
  v143 = v2 + 12;
  sub_893BD0(v2 + 12, &v144);
  v14 = v2[4];
  v15 = &v2[3][v8];
  v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v134), _mm_cvtsi32_si128(*v15)).m128i_u64[0];
  if ( v14 )
  {
    v17 = *(v14 - 1);
    if ( (_DWORD)v17 == *(v14 - 2) )
    {
      v124 = (unsigned int)(3 * v17 + 1) >> 1;
      v125 = 8 * v124 + 8;
      if ( 8 * (int)v17 + 8 >= v125 || (unsigned int)v17 >= v124 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v145, "Overflow encountered when expanding vector", v133);
        goto LABEL_93;
      }
      v134 = (_DWORD *)v16;
      v126 = (unsigned int *)sub_186B300(v14 - 2, v125);
      v127 = &v2[3][v10];
      v14 = v126 + 2;
      *v126 = v124;
      v128 = v126[1];
      v15 = v127;
      v2[4] = v14;
      v18 = (unsigned __int64 *)&v14[2 * v128];
    }
    else
    {
      v18 = (unsigned __int64 *)&v14[2 * v17];
    }
  }
  else
  {
    v134 = (_DWORD *)v16;
    v129 = (_QWORD *)sub_186B270(0x18u);
    v130 = &v2[3][v10];
    *v129 = 2;
    v15 = v130;
    v14 = (unsigned int *)(v129 + 1);
    v2[4] = (unsigned int *)(v129 + 1);
    v18 = v129 + 1;
  }
  *v18 = v16;
  v19 = v2[10];
  v141 = v145;
  v142 = v2 + 14;
  v20 = v135;
  ++*(v14 - 1);
  *v15 += v11;
  ++*(_DWORD *)v2;
  if ( *((_BYTE *)v19 + v20) )
  {
LABEL_31:
    v66 = v2[14];
    if ( !v66 || *(v66 - 1) != 1 )
    {
      v67 = v2[15];
      if ( v67 )
        v68 = 4LL * *(v67 - 1);
      else
        v68 = 0;
      memset(v67, 0, v68);
      v69 = v2[14];
      if ( !v69 || (v70 = *(v69 - 2), *(v69 - 1) = 0, v71 = v69, !v70) )
      {
        sub_313C10(v2 + 14);
        v69 = v2[14];
        v71 = &v69[*(v69 - 1)];
      }
      *v71 = -1;
      ++*(v69 - 1);
    }
    v72 = v2[12];
    if ( v72 )
    {
      v73 = &v72[*(v72 - 1)];
      if ( v72 == v73 )
        goto LABEL_42;
      do
      {
        v74 = *v72++;
        *((_BYTE *)v2[10] + v74) = 0;
      }
      while ( v72 != v73 );
      v73 = v2[12];
      if ( v73 )
LABEL_42:
        *(v73 - 1) = 0;
    }
    v75 = v2[4];
    if ( v75 )
    {
      v76 = &v75[2 * *(v75 - 1)];
      if ( v75 != v76 )
      {
        v77 = v2[3];
        do
        {
          v78 = *(v76 - 2);
          v79 = *(v76 - 1);
          v76 -= 2;
          v77[v78] = v79;
        }
        while ( v75 != v76 );
      }
      *(v75 - 1) = 0;
    }
    return 0;
  }
  while ( 1 )
  {
    v21 = *(unsigned int **)&v2[6][2 * v8];
    if ( v21 )
    {
      v22 = &v21[*(v21 - 1)];
      if ( v22 != v21 )
      {
        while ( 1 )
        {
          v23 = *v21;
          v24 = &v2[5][6 * *v21];
          if ( !*((_BYTE *)v24 + 20) )
            goto LABEL_8;
          v25 = v24[1];
          v26 = v24[1];
          v27 = v25;
          v28 = v24[2] + v2[3][*v24] - v2[3][v25];
          if ( v28 >= 0 )
            goto LABEL_8;
          v29 = v2[10];
          v144 = v24[1];
          v30 = (char *)v29 + v25;
          v31 = *v30;
          if ( *v30 == 1 )
          {
            v81 = (int *)&v2[9][v27];
            if ( v28 < *v81 )
            {
              v82 = v2[11];
              v83 = v2[15];
              *v81 = v28;
              v84 = v2[14];
              v82[v25] = v23;
              v85 = v83[v25];
              v86 = &v84[v85];
              v87 = v83[v25];
              v88 = *v86;
              v89 = v87 >> 1;
              v90 = *v86;
              if ( v87 >> 1 )
              {
                v91 = v2[13];
                v134 = (_DWORD *)*v86;
                v92 = *(_QWORD *)v91;
                v93 = (_DWORD *)(*(_QWORD *)v91 + 4 * v88);
                while ( 1 )
                {
                  v94 = &v84[v85];
                  v95 = &v84[v89];
                  v96 = *v95;
                  if ( *v93 >= *(_DWORD *)(v92 + 4 * v96) )
                  {
                    v88 = (unsigned __int64)v134;
                    v86 = v94;
                    goto LABEL_57;
                  }
                  *v94 = v96;
                  v83[v96] = v87;
                  v87 = v89;
                  v89 >>= 1;
                  if ( !v89 )
                    break;
                  v85 = (unsigned int)v87;
                }
                v88 = (unsigned __int64)v134;
                v86 = v95;
                v87 = 1;
              }
LABEL_57:
              *v86 = v90;
              v83[v88] = v87;
            }
            goto LABEL_8;
          }
          if ( v31 == 2 )
          {
LABEL_8:
            if ( v22 == ++v21 )
              break;
          }
          else
          {
            if ( v31 )
            {
              sub_1872CE0("");
              sub_1873130(114, 418);
            }
            v2[9][v25] = v28;
            *v30 = 1;
            v2[11][v25] = v23;
            v32 = v2[12];
            if ( !v32 || (v33 = *(v32 - 1), (_DWORD)v33 == *(v32 - 2)) )
            {
              sub_313C10(v143);
              v32 = v2[12];
              v33 = *(v32 - 1);
            }
            v32[v33] = v26;
            v34 = (int *)&v2[15][v27];
            ++*(v32 - 1);
            v35 = v2[14];
            LODWORD(v145[0]) = v26;
            if ( v35 )
            {
              v36 = *(v35 - 1);
              v37 = (unsigned int *)v141;
              v38 = v142;
              *v34 = v36;
              sub_893BD0(v38, v37);
              v39 = v2[14];
              v40 = (unsigned int)v36;
              v41 = v2[15];
              v42 = &v39[v36];
              v43 = *v42;
              v44 = v43;
              v45 = v36 >> 1;
              if ( v36 >> 1 )
              {
                v46 = v2[13];
                LODWORD(v134) = *v42;
                v47 = *(_QWORD *)v46;
                v48 = (_DWORD *)(*(_QWORD *)v46 + v44 * 4);
                while ( 1 )
                {
                  v49 = &v39[v40];
                  v42 = &v39[v45];
                  v50 = *v42;
                  if ( *v48 >= *(_DWORD *)(v47 + 4 * v50) )
                  {
                    LODWORD(v43) = (_DWORD)v134;
                    v42 = v49;
                    goto LABEL_23;
                  }
                  *v49 = v50;
                  v41[v50] = v36;
                  v36 = v45;
                  v45 >>= 1;
                  if ( !v45 )
                    break;
                  v40 = (unsigned int)v36;
                }
                LODWORD(v43) = (_DWORD)v134;
                v36 = 1;
              }
            }
            else
            {
              *v34 = 0;
              v36 = 0;
              sub_893BD0(v2 + 14, (unsigned int *)v145);
              v42 = v2[14];
              v41 = v2[15];
              v43 = *v42;
              v44 = v43;
            }
LABEL_23:
            ++v21;
            *v42 = v43;
            v41[v44] = v36;
            if ( v22 == v21 )
              break;
          }
        }
      }
    }
    v51 = v2[14];
    v52 = *(v51 - 1);
    if ( v52 == 1 )
      break;
    v8 = v51[1];
    v53 = v2[15];
    v54 = 4 * v8;
    v55 = (__m128i)v51[1];
    v56 = &v53[v8];
    if ( v52 == 2 )
    {
      *v56 = 0;
      --*(v51 - 1);
    }
    else
    {
      v97 = v51[v52 - 1];
      v51[1] = v97;
      v53[v97] = 1;
      *v56 = 0;
      v98 = v51[1];
      v99 = *(v51 - 1) - 1;
      *(v51 - 1) = v99;
      v100 = v98;
      if ( v99 <= 2 )
      {
        v110 = v51 + 1;
        v102 = 1;
      }
      else
      {
        v101 = v2[13];
        v136 = v98;
        v102 = 1;
        v137 = 4 * v8;
        v103 = *(_QWORD *)v101;
        v138 = v2;
        v104 = 2;
        v139 = v98;
        v140 = v8;
        v134 = (_DWORD *)(v103 + 4 * v98);
        while ( 1 )
        {
          v111 = v104 + 1;
          v109 = &v51[v104];
          v107 = *v109;
          v108 = v107;
          v112 = *(_DWORD *)(v103 + 4 * v107);
          if ( v99 <= (int)(v104 + 1) || (v105 = v51[v111], v106 = *(_DWORD *)(v103 + 4 * v105), v106 >= v112) )
          {
            v111 = v104;
            v110 = &v51[v102];
            if ( *v134 <= v112 )
            {
LABEL_66:
              v100 = v136;
              v54 = v137;
              v2 = v138;
              v98 = v139;
              v8 = v140;
              goto LABEL_67;
            }
          }
          else
          {
            LODWORD(v107) = v51[v111];
            v108 = v105;
            v109 = &v51[v111];
            v110 = &v51[v102];
            if ( *v134 <= v106 )
              goto LABEL_66;
          }
          *v110 = v107;
          v104 = 2 * v111;
          v53[v108] = v102;
          if ( v99 <= (int)(2 * v111) )
            break;
          v102 = v111;
        }
        v100 = v136;
        v54 = v137;
        v110 = v109;
        v102 = v111;
        v2 = v138;
        v98 = v139;
        v8 = v140;
      }
LABEL_67:
      *v110 = v100;
      v53[v98] = v102;
    }
    *((_BYTE *)v2[10] + v8) = 2;
    v57 = v2[4];
    v58 = (unsigned int *)((char *)v2[3] + v54);
    v59 = (int *)((char *)v2[9] + v54);
    v60 = _mm_unpacklo_epi32(v55, _mm_cvtsi32_si128(*v58)).m128i_u64[0];
    if ( !v57 )
    {
      v134 = (_DWORD *)v60;
      v118 = (_QWORD *)sub_186B270(0x18u);
      v119 = v2[3];
      v60 = (unsigned __int64)v134;
      v57 = (unsigned int *)(v118 + 1);
      *v118 = 2;
      v2[4] = (unsigned int *)(v118 + 1);
      v58 = (unsigned int *)((char *)v119 + v54);
      v62 = v118 + 1;
      goto LABEL_30;
    }
    v61 = *(v57 - 1);
    if ( (_DWORD)v61 == *(v57 - 2) )
    {
      v113 = (unsigned int)(3 * v61 + 1) >> 1;
      v114 = 8 * v113 + 8;
      if ( 8 * (int)v61 + 8 < (unsigned int)v114 && (unsigned int)v61 < v113 )
      {
        v134 = (_DWORD *)v60;
        v115 = (unsigned int *)sub_186B300(v57 - 2, v114);
        v116 = v2[3];
        v60 = (unsigned __int64)v134;
        v57 = v115 + 2;
        *v115 = v113;
        v117 = v115[1];
        v2[4] = v57;
        v58 = (unsigned int *)((char *)v116 + v54);
        v62 = (unsigned __int64 *)&v57[2 * v117];
        goto LABEL_30;
      }
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_12D192(v145, "Overflow encountered when expanding vector", v132);
LABEL_93:
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v145);
      sub_233E40((__int64)v145);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v62 = (unsigned __int64 *)&v57[2 * v61];
LABEL_30:
    *v62 = v60;
    ++*(v57 - 1);
    v63 = *v59;
    v64 = v135;
    *v58 += v63;
    v65 = v2[10];
    ++*(_DWORD *)v2;
    if ( *((_BYTE *)v65 + v64) )
      goto LABEL_31;
  }
  v120 = v2[12];
  if ( v120 )
  {
    v121 = &v120[*(v120 - 1)];
    if ( v120 == v121 )
      goto LABEL_80;
    do
    {
      v122 = *v120++;
      *((_BYTE *)v2[10] + v122) = 0;
    }
    while ( v120 != v121 );
    v121 = v2[12];
    if ( v121 )
LABEL_80:
      *(v121 - 1) = 0;
  }
  v123 = v2[4];
  if ( v123 )
    *(v123 - 1) = 0;
  return 1;
}

