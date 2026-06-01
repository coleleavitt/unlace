__int64 __fastcall sub_AFB440(__int64 a1, unsigned int a2)
{
  unsigned int **v2; // r15
  unsigned int *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // rax
  _QWORD *v12; // rdx
  unsigned int *v13; // rcx
  unsigned __int64 v14; // xmm0_8
  __int64 v15; // rax
  unsigned __int64 *v16; // rax
  __int64 v17; // rax
  bool v18; // zf
  _DWORD *v19; // r15
  _QWORD *v20; // r13
  unsigned int *v21; // rbx
  unsigned int *v22; // r14
  __int64 v23; // rdi
  unsigned int *v24; // rax
  __int64 v25; // rsi
  unsigned int v26; // ecx
  __int64 v27; // rbp
  int v28; // edx
  __int64 v29; // r8
  char *v30; // r8
  char v31; // al
  _QWORD *v32; // rdx
  __int64 v33; // rax
  unsigned int *v34; // rax
  __int64 v35; // r8
  __int64 v36; // rax
  _DWORD *v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // rsi
  __int64 v40; // rdx
  int v41; // r12d
  unsigned int *v42; // rsi
  __int64 v43; // rcx
  unsigned int v44; // r11d
  __int64 *v45; // rdx
  __int64 v46; // r10
  _DWORD *v47; // r9
  unsigned int *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  _QWORD *v52; // rbx
  __int64 v53; // r13
  __int64 v54; // rbp
  __m128i v55; // xmm0
  _DWORD *v56; // rdx
  _QWORD *v57; // rbx
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  _DWORD *v60; // rbx
  unsigned int *v61; // rcx
  unsigned __int64 v62; // xmm0_8
  __int64 v63; // rax
  unsigned __int64 *v64; // rax
  _QWORD *v65; // rax
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
  int *v81; // rbp
  __int64 v82; // rax
  __int64 v83; // r8
  __int64 v84; // rbp
  __int64 v85; // r9
  unsigned int *v86; // rdi
  int v87; // edx
  unsigned int v88; // eax
  __int64 v89; // rsi
  int v90; // edx
  unsigned int v91; // ecx
  __int64 *v92; // rdi
  __int64 v93; // r12
  _DWORD *v94; // r11
  unsigned int *v95; // r9
  unsigned int *v96; // r10
  __int64 v97; // r15
  __int64 v98; // rax
  __int64 v99; // rsi
  int v100; // r9d
  int v101; // r8d
  __int64 *v102; // rdx
  unsigned int v103; // edi
  __int64 v104; // rbx
  unsigned int v105; // edx
  __int64 v106; // r14
  int v107; // ebp
  __int64 v108; // rsi
  __int64 v109; // r11
  unsigned int *v110; // r10
  _DWORD *v111; // rdx
  unsigned int v112; // eax
  int v113; // r8d
  unsigned int v114; // r12d
  size_t v115; // rsi
  unsigned int *v116; // rax
  _QWORD *v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rcx
  unsigned int v120; // r12d
  size_t v121; // rsi
  unsigned int *v122; // rax
  __int64 v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // rcx
  _QWORD *v126; // r15
  unsigned int *v127; // rax
  unsigned int *v128; // rsi
  __int64 v129; // rdx
  __int64 v130; // rax
  _QWORD *v131; // rax
  unsigned int v132; // r12d
  unsigned int v133; // ecx
  unsigned int *v134; // rax
  unsigned int *v135; // rbx
  __int64 v136; // rax
  _QWORD *v137; // rax
  unsigned int *v138; // rbx
  char **exception; // rbp
  __int64 v140; // rdx
  __int64 v141; // rdx
  _QWORD *v142; // [rsp+0h] [rbp-A8h]
  _DWORD *v143; // [rsp+8h] [rbp-A0h]
  __int64 v144; // [rsp+10h] [rbp-98h]
  int v145; // [rsp+1Ch] [rbp-8Ch]
  __int64 v146; // [rsp+20h] [rbp-88h]
  __int64 v147; // [rsp+28h] [rbp-80h]
  __int64 v148; // [rsp+30h] [rbp-78h]
  unsigned int **v149; // [rsp+38h] [rbp-70h]
  unsigned int v150; // [rsp+4Ch] [rbp-5Ch] BYREF
  __int64 v151[11]; // [rsp+50h] [rbp-58h] BYREF

  v2 = (unsigned int **)a1;
  v4 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 32LL * a2);
  v5 = *(_QWORD *)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *v4;
  LODWORD(v142) = v4[1];
  v6 = (unsigned int)v142;
  v9 = 4 * v6;
  *(_DWORD *)(v5 + 4 * v8) = 0;
  v10 = v4[2] + *(_DWORD *)(v7 + 4 * v8) - *(_DWORD *)(v7 + 4 * v6);
  v150 = v6;
  v11 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v5 + 4 * v6) = v10;
  *(_BYTE *)(v11 + v6) = 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v6) = a2;
  sub_AF0D60((_QWORD *)(a1 + 96), &v150);
  v12 = *(_QWORD **)(a1 + 32);
  v13 = (unsigned int *)(4 * v6 + *(_QWORD *)(a1 + 24));
  v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v142), _mm_cvtsi32_si128(*v13)).m128i_u64[0];
  if ( v12 )
  {
    v15 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v12 - 2) )
    {
      v132 = (unsigned int)(3 * v15 + 1) >> 1;
      v133 = 8 * v132 + 8;
      if ( 8 * (int)v15 + 8 >= v133 || (unsigned int)v15 >= v132 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v151, "Overflow encountered when expanding vector", v140);
        goto LABEL_100;
      }
      v142 = (_QWORD *)v14;
      v134 = (unsigned int *)sub_186B300(v12 - 1, v133);
      v135 = (unsigned int *)(*(_QWORD *)(a1 + 24) + v9);
      v12 = v134 + 2;
      *v134 = v132;
      v136 = v134[1];
      v13 = v135;
      *(_QWORD *)(a1 + 32) = v12;
      v16 = &v12[v136];
    }
    else
    {
      v16 = &v12[v15];
    }
  }
  else
  {
    v142 = (_QWORD *)v14;
    v137 = (_QWORD *)sub_186B270(0x18u);
    v138 = (unsigned int *)(*(_QWORD *)(a1 + 24) + v9);
    *v137 = 2;
    v13 = v138;
    v12 = v137 + 1;
    *(_QWORD *)(a1 + 32) = v137 + 1;
    v16 = v137 + 1;
  }
  *v16 = v14;
  v17 = *(_QWORD *)(a1 + 80);
  ++*((_DWORD *)v12 - 1);
  *v13 += v10;
  ++*(_DWORD *)a1;
  v18 = *(_BYTE *)(v17 + v8) == 0;
  v149 = (unsigned int **)(a1 + 112);
  if ( !v18 )
    goto LABEL_34;
  v142 = (_QWORD *)a1;
  v19 = (_DWORD *)v8;
  while ( 1 )
  {
    v20 = v142;
    v21 = *(unsigned int **)(v142[6] + 8 * v6);
    if ( v21 )
    {
      v22 = &v21[*(v21 - 1)];
      if ( v22 != v21 )
      {
        while ( 1 )
        {
          v23 = *v21;
          v24 = (unsigned int *)(v20[5] + 32 * v23);
          if ( !*((_BYTE *)v24 + 24) )
            goto LABEL_9;
          v25 = v24[1];
          v26 = v24[1];
          v27 = 4 * v25;
          v28 = v24[2] + *(_DWORD *)(v20[3] + 4LL * *v24) - *(_DWORD *)(v20[3] + 4 * v25);
          if ( v28 >= 0 )
            goto LABEL_9;
          v29 = v20[10];
          v150 = v24[1];
          v30 = (char *)(v25 + v29);
          v31 = *v30;
          if ( *v30 == 1 )
          {
            v81 = (int *)(v20[9] + v27);
            if ( v28 < *v81 )
            {
              v82 = v20[11];
              v83 = v20[14];
              *v81 = v28;
              v84 = v20[15];
              *(_DWORD *)(v82 + 4 * v25) = v23;
              v85 = *(unsigned int *)(v84 + 4 * v25);
              v86 = (unsigned int *)(v83 + 4 * v85);
              v87 = *(_DWORD *)(v84 + 4 * v25);
              v88 = v87;
              v89 = *v86;
              v90 = v87 >> 1;
              v91 = *v86;
              if ( v90 )
              {
                v92 = (__int64 *)v20[13];
                v143 = v19;
                LODWORD(v144) = v89;
                v93 = *v92;
                v94 = (_DWORD *)(*v92 + 4 * v89);
                while ( 1 )
                {
                  v95 = (unsigned int *)(v83 + 4 * v85);
                  v96 = (unsigned int *)(v83 + 4LL * (unsigned int)v90);
                  v97 = *v96;
                  if ( *v94 >= *(_DWORD *)(v93 + 4 * v97) )
                  {
                    v19 = v143;
                    v91 = v144;
                    v86 = v95;
                    goto LABEL_59;
                  }
                  *v95 = v97;
                  *(_DWORD *)(v84 + 4 * v97) = v88;
                  v88 = v90;
                  v90 >>= 1;
                  if ( !v90 )
                    break;
                  v85 = v88;
                }
                v19 = v143;
                v91 = v144;
                v86 = v96;
                v88 = 1;
              }
LABEL_59:
              *v86 = v91;
              *(_DWORD *)(v84 + 4 * v89) = v88;
            }
            goto LABEL_9;
          }
          if ( v31 == 2 )
          {
LABEL_9:
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
            *(_DWORD *)(v20[9] + 4 * v25) = v28;
            *v30 = 1;
            v32 = (_QWORD *)v20[12];
            *(_DWORD *)(v20[11] + 4 * v25) = v23;
            if ( v32 )
            {
              v33 = *((unsigned int *)v32 - 1);
              if ( (_DWORD)v33 == *((_DWORD *)v32 - 2) )
              {
                v120 = (unsigned int)(3 * v33 + 1) >> 1;
                v121 = 4 * v120 + 8;
                if ( 4 * (int)v33 + 8 >= (unsigned int)v121 || (unsigned int)v33 >= v120 )
                  goto LABEL_101;
                LODWORD(v143) = v26;
                v122 = (unsigned int *)sub_186B300(v32 - 1, v121);
                v26 = (unsigned int)v143;
                v32 = v122 + 2;
                *v122 = v120;
                v123 = v122[1];
                v20[12] = v32;
                v34 = (unsigned int *)v32 + v123;
              }
              else
              {
                v34 = (unsigned int *)v32 + v33;
              }
            }
            else
            {
              LODWORD(v143) = v25;
              v131 = (_QWORD *)sub_186B270(0x10u);
              v26 = (unsigned int)v143;
              v32 = v131 + 1;
              *v131 = 2;
              v20[12] = v131 + 1;
              v34 = (unsigned int *)(v131 + 1);
            }
            *v34 = v26;
            v35 = v20[15];
            v36 = v20[14];
            ++*((_DWORD *)v32 - 1);
            v37 = (_DWORD *)(v35 + v27);
            if ( !v36 )
            {
              *v37 = 0;
              v41 = 0;
              v39 = 0;
              LODWORD(v38) = 0;
LABEL_76:
              v144 = v39;
              LODWORD(v143) = v26;
              sub_313C10(v149);
              v36 = v20[14];
              v35 = v20[15];
              v39 = v144;
              v26 = (unsigned int)v143;
              v40 = *(unsigned int *)(v36 - 4);
              goto LABEL_20;
            }
            v38 = *(unsigned int *)(v36 - 4);
            *v37 = v38;
            v39 = 4 * v38;
            v40 = *(unsigned int *)(v36 - 4);
            v41 = (int)v38 >> 1;
            if ( (_DWORD)v40 == *(_DWORD *)(v36 - 8) )
              goto LABEL_76;
LABEL_20:
            v42 = (unsigned int *)(v36 + v39);
            *(_DWORD *)(v36 + 4 * v40) = v26;
            ++*(_DWORD *)(v36 - 4);
            v43 = *v42;
            v44 = *v42;
            if ( v41 )
            {
              v45 = (__int64 *)v20[13];
              v143 = v19;
              v144 = v43;
              v46 = *v45;
              v47 = (_DWORD *)(*v45 + 4 * v43);
              do
              {
                v48 = (unsigned int *)(v36 + 4LL * (unsigned int)v41);
                v42 = (unsigned int *)(v36 + 4LL * (unsigned int)v38);
                v49 = *v48;
                if ( *v47 >= *(_DWORD *)(v46 + 4 * v49) )
                {
                  v19 = v143;
                  v43 = v144;
                  goto LABEL_25;
                }
                *v42 = v49;
                *(_DWORD *)(v35 + 4 * v49) = v38;
                LODWORD(v38) = v41;
                v41 >>= 1;
              }
              while ( v41 );
              v19 = v143;
              v43 = v144;
              v42 = v48;
              LODWORD(v38) = 1;
            }
LABEL_25:
            ++v21;
            *v42 = v44;
            *(_DWORD *)(v35 + 4 * v43) = v38;
            if ( v22 == v21 )
              break;
          }
        }
      }
    }
    v50 = v142[14];
    v51 = *(_DWORD *)(v50 - 4);
    if ( v51 == 1 )
      break;
    v52 = v142;
    v6 = *(unsigned int *)(v50 + 4);
    v53 = v142[15];
    v54 = 4 * v6;
    v55 = (__m128i)*(unsigned int *)(v50 + 4);
    v56 = (_DWORD *)(v53 + 4 * v6);
    if ( v51 == 2 )
    {
      *v56 = 0;
      --*(_DWORD *)(v50 - 4);
    }
    else
    {
      v98 = *(unsigned int *)(v50 + 4LL * (unsigned int)(v51 - 1));
      *(_DWORD *)(v50 + 4) = v98;
      *(_DWORD *)(v53 + 4 * v98) = 1;
      *v56 = 0;
      v99 = *(unsigned int *)(v50 + 4);
      v100 = *(_DWORD *)(v50 - 4) - 1;
      *(_DWORD *)(v50 - 4) = v100;
      v101 = v99;
      if ( v100 <= 2 )
      {
        v111 = (_DWORD *)(v50 + 4);
        v103 = 1;
      }
      else
      {
        v102 = (__int64 *)v52[13];
        v144 = (__int64)v19;
        v103 = 1;
        v145 = v99;
        v104 = *v102;
        v146 = 4 * v6;
        v105 = 2;
        v147 = v99;
        v148 = v6;
        v143 = (_DWORD *)(v104 + 4 * v99);
        while ( 1 )
        {
          v112 = v105 + 1;
          v110 = (unsigned int *)(v50 + 4LL * v105);
          v108 = *v110;
          v109 = 4 * v108;
          v113 = *(_DWORD *)(v104 + 4 * v108);
          if ( v100 <= (int)(v105 + 1)
            || (v106 = *(unsigned int *)(v50 + 4LL * v112), v107 = *(_DWORD *)(v104 + 4 * v106), v107 >= v113) )
          {
            v112 = v105;
            v111 = (_DWORD *)(v50 + 4LL * v103);
            if ( *v143 <= v113 )
            {
LABEL_69:
              v19 = (_DWORD *)v144;
              v101 = v145;
              v54 = v146;
              v99 = v147;
              v6 = v148;
              goto LABEL_70;
            }
          }
          else
          {
            LODWORD(v108) = *(_DWORD *)(v50 + 4LL * v112);
            v109 = 4 * v106;
            v110 = (unsigned int *)(v50 + 4LL * v112);
            v111 = (_DWORD *)(v50 + 4LL * v103);
            if ( *v143 <= v107 )
              goto LABEL_69;
          }
          *v111 = v108;
          v105 = 2 * v112;
          *(_DWORD *)(v53 + v109) = v103;
          if ( v100 <= (int)(2 * v112) )
            break;
          v103 = v112;
        }
        v19 = (_DWORD *)v144;
        v101 = v145;
        v111 = v110;
        v103 = v112;
        v54 = v146;
        v99 = v147;
        v6 = v148;
      }
LABEL_70:
      *v111 = v101;
      *(_DWORD *)(v53 + 4 * v99) = v103;
    }
    v57 = v142;
    *(_BYTE *)(v142[10] + v6) = 2;
    v58 = v57;
    v59 = (_QWORD *)v57[4];
    v60 = (_DWORD *)(v54 + v57[9]);
    v61 = (unsigned int *)(v54 + v58[3]);
    v62 = _mm_unpacklo_epi32(v55, _mm_cvtsi32_si128(*v61)).m128i_u64[0];
    if ( !v59 )
    {
      v143 = (_DWORD *)v62;
      v124 = (_QWORD *)sub_186B270(0x18u);
      v62 = (unsigned __int64)v143;
      v59 = v124 + 1;
      *v124 = 2;
      v125 = v142[3];
      v142[4] = v124 + 1;
      v64 = v124 + 1;
      v61 = (unsigned int *)(v54 + v125);
      goto LABEL_32;
    }
    v63 = *((unsigned int *)v59 - 1);
    if ( (_DWORD)v63 == *((_DWORD *)v59 - 2) )
    {
      v114 = (unsigned int)(3 * v63 + 1) >> 1;
      v115 = 8 * v114 + 8;
      if ( 8 * (int)v63 + 8 < (unsigned int)v115 && (unsigned int)v63 < v114 )
      {
        v143 = (_DWORD *)v62;
        v116 = (unsigned int *)sub_186B300(v59 - 1, v115);
        v117 = v142;
        v62 = (unsigned __int64)v143;
        v59 = v116 + 2;
        *v116 = v114;
        v118 = v116[1];
        v119 = v117[3];
        v117[4] = v59;
        v64 = &v59[v118];
        v61 = (unsigned int *)(v54 + v119);
        goto LABEL_32;
      }
LABEL_101:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_140FB4(v151, "Overflow encountered when expanding vector", v141);
LABEL_100:
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v151);
      sub_233E40((__int64)v151);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v64 = &v59[v63];
LABEL_32:
    *v64 = v62;
    ++*((_DWORD *)v59 - 1);
    *v61 += *v60;
    v65 = v142;
    ++*(_DWORD *)v142;
    if ( *((_BYTE *)v19 + v65[10]) )
    {
      v2 = (unsigned int **)v142;
LABEL_34:
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
          goto LABEL_45;
        do
        {
          v74 = *v72++;
          *((_BYTE *)v2[10] + v74) = 0;
        }
        while ( v72 != v73 );
        v73 = v2[12];
        if ( v73 )
LABEL_45:
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
  }
  v126 = v142;
  v127 = (unsigned int *)v142[12];
  if ( v127 )
  {
    v128 = &v127[*(v127 - 1)];
    if ( v127 == v128 )
      goto LABEL_87;
    do
    {
      v129 = *v127++;
      *(_BYTE *)(v126[10] + v129) = 0;
    }
    while ( v127 != v128 );
    v128 = (unsigned int *)v126[12];
    if ( v128 )
LABEL_87:
      *(v128 - 1) = 0;
  }
  v130 = v126[4];
  if ( v130 )
    *(_DWORD *)(v130 - 4) = 0;
  return 1;
}

