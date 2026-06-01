__int64 __fastcall CoinPackedMatrix::appendMinorFast(
        CoinPackedMatrix *this,
        int a2,
        const int *a3,
        const int *a4,
        const double *a5)
{
  int v6; // edi
  _DWORD *v7; // rax
  int v8; // esi
  int v9; // edi
  const int *v10; // rax
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r10
  int v14; // edx
  __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ebp
  int v21; // r11d
  const int *v22; // rdi
  const int *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // r11
  __int64 v28; // r10
  __int64 v29; // rax
  const int *v30; // r9
  char *v31; // r8
  __int64 v32; // rdx
  int *v33; // rsi
  int v34; // r12d
  int v35; // ecx
  __int64 result; // rax
  __m128d v37; // xmm1
  double v38; // xmm2_8
  _DWORD *v39; // r8
  int v40; // ecx
  int *v41; // rdi
  __int64 v42; // rsi
  double v43; // xmm0_8
  __m128d v44; // xmm3
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // rdi
  __int64 v50; // r14
  __int64 v51; // r11
  int v52; // edx
  __int64 v53; // rax
  int v54; // edx
  int v55; // ecx
  __int64 v56; // rsi
  __int64 v57; // r9
  __int64 v58; // r10
  __int64 v59; // r8
  __int64 v60; // rdi
  _QWORD *v61; // rbp
  _DWORD *v62; // rbx
  unsigned __int64 v63; // r13
  unsigned __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // xmm0_8
  int v67; // r10d
  int v68; // esi
  int v69; // ebx
  int v70; // ebx
  int v71; // esi
  int v72; // r10d
  __int64 v73; // rsi
  unsigned int v74; // r13d
  unsigned int v75; // ebx
  __int64 v76; // rax
  __int64 v77; // rbp
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // r9
  __int64 v81; // rsi
  __int64 v82; // r9
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  int v85; // ecx
  int v86; // edx
  int v87; // r9d
  int v88; // eax
  int v89; // r9d
  int v90; // esi
  __int64 v91; // xmm0_8
  int v92; // eax
  int v93; // esi
  int v94; // r9d
  __int64 v95; // xmm0_8
  int v96; // eax
  int v97; // r9d
  int v98; // esi
  __int64 v99; // xmm0_8
  int v100; // eax
  int v101; // esi
  int v102; // edx
  int v103; // r9d
  int v104; // ecx
  int v105; // eax
  __int64 v106; // rdi
  unsigned __int64 v107; // rax
  int v108; // esi
  int v109; // esi
  unsigned __int64 v110; // rdx
  __int64 v111; // xmm0_8
  void *v112; // rdi
  void *v113; // rdi
  void *v114; // rdi
  const int *v115; // [rsp+0h] [rbp-B8h]
  unsigned int v116; // [rsp+0h] [rbp-B8h]
  __int64 v117; // [rsp+0h] [rbp-B8h]
  __int64 v118; // [rsp+0h] [rbp-B8h]
  __int64 v119; // [rsp+0h] [rbp-B8h]
  __int64 v120; // [rsp+8h] [rbp-B0h]
  _DWORD *v121; // [rsp+10h] [rbp-A8h]
  __int64 v122; // [rsp+18h] [rbp-A0h]
  __int64 v123; // [rsp+20h] [rbp-98h]
  __int64 v124; // [rsp+28h] [rbp-90h]
  _DWORD *v125; // [rsp+30h] [rbp-88h]
  __int64 v126; // [rsp+38h] [rbp-80h]
  __int64 v127; // [rsp+40h] [rbp-78h]
  int v128; // [rsp+50h] [rbp-68h]
  __int64 v133; // [rsp+78h] [rbp-40h]

  v6 = *((_DWORD *)this + 19) + 1;
  if ( (unsigned __int64)v6 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_74;
  v7 = (_DWORD *)operator new[](4LL * v6);
  v8 = *((_DWORD *)this + 19);
  v121 = v7;
  if ( v8 )
    sub_223D80(v7, v8);
  v9 = a3[a2];
  if ( v9 > 0 )
  {
    v10 = a4;
    do
    {
      v11 = *v10++;
      ++v121[v11];
    }
    while ( v10 != &a4[v9 - 1 + 1] );
  }
  v12 = *((_DWORD *)this + 18);
  v13 = *((int *)this + 16);
  v14 = *((_DWORD *)this + 20);
  v15 = 4 * v13;
  if ( v12 + v9 <= v14 )
  {
    v16 = *((_QWORD *)this + 6);
    if ( (int)v13 - 1 < 0 )
    {
LABEL_14:
      operator delete[](v121);
      goto LABEL_15;
    }
    v17 = *((_QWORD *)this + 7);
    v18 = *(_DWORD *)(v16 + v15 - 4);
    if ( *(_DWORD *)(v16 + 4 * v13) >= v121[v13 - 1] + v18 + *(_DWORD *)(v17 + 4 * v13 - 4) )
    {
      v19 = v15 - 4;
      while ( v19 != 4 * ((int)v13 - 1 - (unsigned __int64)(unsigned int)(v13 - 1)) )
      {
        v20 = *(_DWORD *)(v16 + v19 - 4);
        v21 = *(_DWORD *)((char *)v121 + v19 - 4) + v20 + *(_DWORD *)(v17 + v19 - 4);
        v19 -= 4;
        if ( v21 > v18 )
          goto LABEL_23;
        v18 = v20;
      }
      goto LABEL_14;
    }
  }
LABEL_23:
  v37.m128d_f64[0] = 0.0;
  v38 = (double)(v14 - v12 - v9) / (double)(int)v13 - 0.01;
  if ( v38 <= 0.0 )
  {
    if ( (int)v13 > 0 )
    {
      v106 = *((_QWORD *)this + 7);
      v40 = 0;
      v107 = 0;
      do
      {
        v108 = v121[v107 / 4];
        v121[v107 / 4] = v40;
        v109 = *(_DWORD *)(v106 + v107) + v108;
        v107 += 4LL;
        v40 += v109;
      }
      while ( v107 != 4LL * (unsigned int)(v13 - 1) + 4 );
      goto LABEL_31;
    }
LABEL_73:
    v40 = 0;
    goto LABEL_31;
  }
  if ( (int)v13 <= 0 )
    goto LABEL_73;
  v39 = *((_DWORD **)this + 7);
  v40 = 0;
  v41 = v121;
  v42 = (__int64)&v121[(unsigned int)(v13 - 1) + 1];
  do
  {
    while ( 1 )
    {
      v37.m128d_f64[0] = v37.m128d_f64[0] + v38;
      v46 = *v41;
      *v41 = v40;
      if ( v37.m128d_f64[0] >= 1.0 )
        break;
      v47 = *v39 + v46;
      ++v41;
      ++v39;
      v40 += v47;
      if ( v41 == (int *)v42 )
        goto LABEL_31;
    }
    v43 = v37.m128d_f64[0];
    if ( fabs(v37.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v44 = 0;
      v44.m128d_f64[0] = (double)(int)v37.m128d_f64[0];
      *(_QWORD *)&v43 = COERCE_UNSIGNED_INT64(
                          v44.m128d_f64[0]
                        - COERCE_DOUBLE(
                            COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v44, v37).m128d_f64[0]))
                          & 0x3FF0000000000000LL))
                      | *(_QWORD *)&v37.m128d_f64[0] & 0x8000000000000000LL;
    }
    v45 = *v39 + v46;
    ++v41;
    ++v39;
    v37.m128d_f64[0] = v37.m128d_f64[0] - v43;
    v40 += (int)v43 + v45;
  }
  while ( v41 != (int *)v42 );
LABEL_31:
  if ( v14 < v40 )
    v14 = v40;
  *((_DWORD *)this + 20) = v14;
  v121[v13] = v40;
  if ( (unsigned __int64)v14 > 0x1FFFFFFFFFFFFFFELL
    || (v48 = operator new[](4LL * v14), v49 = *((int *)this + 20), v50 = v48, v133 = v48, v49 > 0xFFFFFFFFFFFFFFFLL) )
  {
LABEL_74:
    __cxa_throw_bad_array_new_length();
  }
  v51 = operator new[](8 * v49);
  v52 = *((_DWORD *)this + 16) - 1;
  v125 = *((_DWORD **)this + 6);
  if ( v52 < 0 )
  {
    if ( !*((_QWORD *)this + 6) )
      goto LABEL_65;
    v112 = *((void **)this + 6);
  }
  else
  {
    v126 = *((_QWORD *)this + 7);
    v53 = v52;
    v122 = v52 - 1LL;
    v127 = v122 - (unsigned int)v52;
    while ( 1 )
    {
      v54 = v125[v53];
      v55 = v121[v53];
      v128 = v54 + *(_DWORD *)(v126 + 4 * v53);
      if ( v54 < v128 )
      {
        v56 = v54 + 4LL;
        v57 = 4LL * v55;
        v116 = v128 - v54;
        v58 = 8 * v56;
        v59 = *((_QWORD *)this + 5);
        v60 = *((_QWORD *)this + 4);
        v56 *= 4;
        v120 = 8LL * v55;
        v61 = (_QWORD *)(v51 + v120);
        v62 = (_DWORD *)(v50 + v57);
        v63 = v60 + v58 - 32;
        v124 = v58 - 32;
        v64 = v59 + v56 - 16;
        v123 = v56 - 16;
        if ( (v51 + v120 >= (unsigned __int64)(v60 + v58) || v63 >= v51 + v120 + 32)
          && (v50 + v57 >= (unsigned __int64)(v59 + v56) || v64 >= v50 + v57 + 16)
          && v116 > 0xD )
        {
          v65 = -(int)(v64 >> 2) & 3;
          if ( v65 )
          {
            v66 = *(_QWORD *)(v60 + 8LL * v54);
            v67 = v54 + 1;
            *v62 = *(_DWORD *)(v59 + 4LL * v54);
            v68 = v55 + 1;
            *v61 = v66;
            if ( v65 == 1 )
            {
              ++v54;
              ++v55;
            }
            else
            {
              v69 = *(_DWORD *)(v59 + 4LL * v67);
              *(_QWORD *)(v51 + 8LL * v68) = *(_QWORD *)(v60 + 8LL * v67);
              *(_DWORD *)(v50 + 4LL * v68) = v69;
              v70 = v55 + 2;
              v71 = v54 + 2;
              if ( v65 == 2 )
              {
                v54 += 2;
                v55 += 2;
              }
              else
              {
                v55 += 3;
                v72 = *(_DWORD *)(v59 + 4LL * v71);
                v54 += 3;
                *(_QWORD *)(v51 + 8LL * v70) = *(_QWORD *)(v60 + 8LL * v71);
                *(_DWORD *)(v50 + 4LL * v70) = v72;
              }
            }
          }
          v73 = v65;
          v74 = 0;
          v75 = v116 - v65;
          v76 = 4LL * v65;
          v73 *= 8;
          v77 = v59 + v76 + v123;
          v78 = v50 + v57 + v76;
          v79 = v51 + v73 + v120;
          v80 = v73 + v124;
          v81 = 0;
          v82 = v60 + v80;
          do
          {
            ++v74;
            v83 = *(_OWORD *)(v82 + 2 * v81);
            *(__m128i *)(v78 + v81) = _mm_load_si128((const __m128i *)(v77 + v81));
            v84 = *(_OWORD *)(v82 + 2 * v81 + 16);
            *(_OWORD *)(v79 + 2 * v81) = v83;
            *(_OWORD *)(v79 + 2 * v81 + 16) = v84;
            v81 += 16;
          }
          while ( v75 >> 2 > v74 );
          v85 = (v75 & 0xFFFFFFFC) + v55;
          v86 = (v75 & 0xFFFFFFFC) + v54;
          if ( (v75 & 0xFFFFFFFC) != v75 )
          {
            v87 = *(_DWORD *)(v59 + 4LL * v86);
            *(_QWORD *)(v51 + 8LL * v85) = *(_QWORD *)(v60 + 8LL * v86);
            *(_DWORD *)(v50 + 4LL * v85) = v87;
            v88 = v86 + 1;
            v89 = v85 + 1;
            if ( v128 > v86 + 1 )
            {
              v90 = *(_DWORD *)(v59 + 4LL * v88);
              v91 = *(_QWORD *)(v60 + 8LL * v88);
              v92 = v86 + 2;
              *(_QWORD *)(v51 + 8LL * v89) = v91;
              *(_DWORD *)(v50 + 4LL * v89) = v90;
              v93 = v85 + 2;
              if ( v86 + 2 < v128 )
              {
                v94 = *(_DWORD *)(v59 + 4LL * v92);
                v95 = *(_QWORD *)(v60 + 8LL * v92);
                v96 = v86 + 3;
                *(_QWORD *)(v51 + 8LL * v93) = v95;
                *(_DWORD *)(v50 + 4LL * v93) = v94;
                v97 = v85 + 3;
                if ( v86 + 3 < v128 )
                {
                  v98 = *(_DWORD *)(v59 + 4LL * v96);
                  v99 = *(_QWORD *)(v60 + 8LL * v96);
                  v100 = v86 + 4;
                  *(_QWORD *)(v51 + 8LL * v97) = v99;
                  *(_DWORD *)(v50 + 4LL * v97) = v98;
                  v101 = v85 + 4;
                  if ( v128 > v86 + 4 )
                  {
                    v102 = v86 + 5;
                    v103 = *(_DWORD *)(v59 + 4LL * v100);
                    v104 = v85 + 5;
                    *(_QWORD *)(v51 + 8LL * v101) = *(_QWORD *)(v60 + 8LL * v100);
                    *(_DWORD *)(v50 + 4LL * v101) = v103;
                    if ( v102 < v128 )
                    {
                      v105 = *(_DWORD *)(v59 + 4LL * v102);
                      *(_QWORD *)(v51 + 8LL * v104) = *(_QWORD *)(v60 + 8LL * v102);
                      *(_DWORD *)(v50 + 4LL * v104) = v105;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v110 = 0;
          do
          {
            v111 = *(_QWORD *)(v63 + 2 * v110);
            v62[v110 / 4] = *(_DWORD *)(v64 + v110);
            v61[v110 / 4] = v111;
            v110 += 4LL;
          }
          while ( v110 != 4LL * (v116 - 1) + 4 );
        }
      }
      v53 = v122;
      if ( v122 == v127 )
        break;
      --v122;
    }
    v112 = v125;
  }
  v117 = v51;
  operator delete[](v112);
  v51 = v117;
LABEL_65:
  v113 = *((void **)this + 5);
  if ( v113 )
  {
    v118 = v51;
    operator delete[](v113);
    v51 = v118;
  }
  v114 = *((void **)this + 4);
  if ( v114 )
  {
    v119 = v51;
    operator delete[](v114);
    v51 = v119;
  }
  *((_QWORD *)this + 4) = v51;
  *((_QWORD *)this + 6) = v121;
  *((_QWORD *)this + 5) = v133;
LABEL_15:
  if ( a2 > 0 )
  {
    v22 = a3 + 1;
    v23 = &a3[a2 - 1 + 2];
    do
    {
      v24 = *(v22 - 1);
      if ( (int)v24 < *v22 )
      {
        v25 = *((_QWORD *)this + 4);
        v26 = *((_QWORD *)this + 6);
        v27 = *((_QWORD *)this + 7);
        v28 = *((_QWORD *)this + 5);
        v29 = (int)v24 + 1;
        v115 = v23;
        v30 = &a4[v24 - v29];
        v31 = (char *)a5 + 8 * v24 - 8 * v29;
        do
        {
          v32 = v30[v29];
          v33 = (int *)(v27 + 4 * v32);
          v34 = *v33 + *(_DWORD *)(v26 + 4 * v32);
          v35 = *v33 + 1;
          *(_QWORD *)(v25 + 8LL * v34) = *(_QWORD *)&v31[8 * v29];
          *v33 = v35;
          *(_DWORD *)(v28 + 4LL * v34) = *((_DWORD *)this + 17);
          LODWORD(v32) = v29++;
        }
        while ( *v22 > (int)v32 );
        v23 = v115;
      }
      ++v22;
      ++*((_DWORD *)this + 17);
    }
    while ( v22 != v23 );
  }
  result = (unsigned int)a3[a2];
  *((_DWORD *)this + 18) += result;
  return result;
}

