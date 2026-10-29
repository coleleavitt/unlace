__int64 __fastcall CoinFactorization::getColumnSpaceIterateR(CoinFactorization *this, int a2, double a3, int a4)
{
  CoinFactorization *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rdx
  bool v8; // cc
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rsi
  _DWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  int v23; // eax
  int v24; // r13d
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rbx
  unsigned __int64 v28; // r12
  int v29; // edx
  __int64 v30; // xmm1_8
  int v31; // esi
  int v32; // r11d
  __int64 v33; // rcx
  int v34; // r8d
  unsigned int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // r9
  unsigned int v41; // ebx
  __int128 v42; // xmm2
  int v43; // esi
  int v44; // r13d
  unsigned int v45; // r11d
  int v46; // edx
  int v47; // r8d
  __int64 v48; // rdx
  int v49; // edi
  __int64 v50; // xmm1_8
  int v51; // r8d
  int v52; // ecx
  int v53; // r13d
  __int64 v54; // xmm1_8
  int v55; // ecx
  int v56; // esi
  int v57; // ecx
  __int64 v58; // rdx
  int v59; // eax
  __int64 result; // rax
  int v61; // r10d
  int v62; // edi
  __int64 v63; // r13
  int *v64; // rdx
  int v65; // ebx
  int v66; // eax
  int v67; // ebx
  int v68; // edx
  __int64 v69; // rbx
  __int64 v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // r15
  __int64 v73; // r9
  __int64 v74; // rcx
  int v75; // edi
  unsigned int v76; // edx
  __int64 v77; // xmm1_8
  int v78; // r8d
  int v79; // r9d
  __int64 v80; // xmm1_8
  __int64 v81; // xmm1_8
  __int64 v82; // rsi
  int v83; // r11d
  unsigned int v84; // r9d
  __int64 v85; // r8
  __int64 v86; // r12
  __int64 v87; // rcx
  unsigned int v88; // esi
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int128 v91; // xmm1
  int v92; // edi
  int v93; // eax
  __int64 v94; // xmm1_8
  int v95; // ecx
  int v96; // edx
  int v97; // esi
  __int64 v98; // xmm1_8
  int v99; // edx
  int v100; // ecx
  int v101; // esi
  __int64 v102; // xmm1_8
  int v103; // edx
  int v104; // ecx
  int v105; // esi
  __int64 v106; // xmm1_8
  int v107; // edx
  int v108; // ecx
  int v109; // eax
  __int64 v110; // xmm1_8
  int v111; // edi
  __int64 v112; // xmm1_8
  __int64 v113; // rax
  __int64 v114; // rsi
  __int64 v115; // rax
  __int64 v116; // xmm1_8
  __int64 v117; // rdx
  int v118; // ecx
  __int64 v119; // [rsp+0h] [rbp-B0h]
  __int64 v120; // [rsp+8h] [rbp-A8h]
  int v121; // [rsp+8h] [rbp-A8h]
  __int64 v122; // [rsp+18h] [rbp-98h]
  __int64 v123; // [rsp+20h] [rbp-90h]
  __int64 v124; // [rsp+28h] [rbp-88h]
  __int64 v125; // [rsp+30h] [rbp-80h]
  int v126; // [rsp+38h] [rbp-78h]
  int v127; // [rsp+3Ch] [rbp-74h]
  __int64 v128; // [rsp+40h] [rbp-70h]
  int *v129; // [rsp+48h] [rbp-68h]
  __int64 v130; // [rsp+58h] [rbp-58h]
  int *v131; // [rsp+60h] [rbp-50h]
  __int64 v132; // [rsp+68h] [rbp-48h]

  v5 = this;
  v6 = *((int *)this + 199);
  v7 = 0;
  v8 = *((_DWORD *)this + 206) <= -2;
  v9 = *((int *)this + 16);
  v122 = *((_QWORD *)this + 100);
  v10 = v122 + 8 * v6;
  v11 = *((_DWORD *)this + 199);
  v125 = v6;
  v119 = *((_QWORD *)this + 101);
  v12 = v119 + 4 * v6;
  v13 = *((_QWORD *)this + 102);
  v14 = *((_QWORD *)this + 32);
  if ( v8 )
    v13 = 0;
  v15 = v13 + 4 * v9 + 4;
  v123 = v15;
  if ( *((int *)v5 + 66) <= -2 )
    v14 = 0;
  v130 = 4LL * a2;
  v128 = v14;
  v16 = *((_QWORD *)v5 + 44);
  v131 = (int *)(v130 + v14);
  if ( *((int *)v5 + 90) <= -2 )
    v16 = 0;
  v124 = v16;
  v127 = *v131;
  if ( *((int *)v5 + 96) > -2 )
    v7 = *((_QWORD *)v5 + 47);
  v132 = v7;
  v17 = *((int *)v5 + 13);
  v18 = (_DWORD *)(v15 + 4 * v17);
  if ( v11 - *v18 > *v131 )
    goto LABEL_10;
  v61 = 0;
  v62 = *(_DWORD *)(v124 + 4 * v17);
  if ( (_DWORD)v17 == v62 )
  {
    v114 = v15;
  }
  else
  {
    v129 = (int *)v5;
    do
    {
      v63 = v62;
      v64 = (int *)(v123 + 4LL * v62);
      v65 = *(_DWORD *)(v128 + 4LL * v62);
      v66 = *v64;
      *v64 = v61;
      v67 = v66 + v65;
      v126 = v67;
      if ( v66 < v67 )
      {
        v68 = v67;
        v69 = v66;
        v121 = v68 - v66;
        v70 = v125 + v61;
        v71 = v125 + v66;
        v72 = 8 * v70;
        v73 = v70 + (unsigned int)(v68 - v66);
        v74 = 4 * v70;
        if ( (unsigned int)(v68 - v66) > 0xE
          && (4 * (v66 + v125 + 4) <= v74 || 4 * (v61 + v125 + 4) <= 4 * v71)
          && (8 * (v61 + v125 + 4) <= 8 * v71 || 8 * (v66 + v125 + 4) <= v72)
          && (v119 + 4 * v73 <= (unsigned __int64)(v122 + v72) || v122 + 8 * v73 <= (unsigned __int64)(v74 + v119)) )
        {
          v75 = v61;
          v76 = -(int)((unsigned __int64)(v119 + 4 * v71) >> 2) & 3;
          if ( v76 )
          {
            v77 = *(_QWORD *)(v10 + 8LL * v66);
            v78 = v66 + 1;
            *(_DWORD *)(v12 + 4LL * v61) = *(_DWORD *)(v12 + 4LL * v66);
            *(_QWORD *)(v10 + 8LL * v61) = v77;
            v75 = v61 + 1;
            if ( v76 == 1
              || (v79 = *(_DWORD *)(v12 + 4LL * v78),
                  v80 = *(_QWORD *)(v10 + 8LL * v78),
                  v78 = v66 + 2,
                  *(_DWORD *)(v12 + 4LL * v75) = v79,
                  *(_QWORD *)(v10 + 8LL * v75) = v80,
                  v75 = v61 + 2,
                  v76 == 2) )
            {
              v66 = v78;
            }
            else
            {
              v66 += 3;
              v81 = *(_QWORD *)(v10 + 8LL * v78);
              *(_DWORD *)(v12 + 4LL * v75) = *(_DWORD *)(v12 + 4LL * v78);
              *(_QWORD *)(v10 + 8LL * v75) = v81;
              v75 = v61 + 3;
            }
          }
          v82 = v76 + v71;
          v83 = v121 - v76;
          v84 = (v121 - v76) >> 2;
          v85 = v119 + 4 * v82;
          v86 = v119 + v74 + 4LL * v76;
          v87 = v122 + 8 * v82;
          v88 = 0;
          v89 = v122 + v72 + 8LL * v76;
          v90 = 0;
          do
          {
            ++v88;
            *(__m128i *)(v86 + v90) = _mm_load_si128((const __m128i *)(v85 + v90));
            v91 = *(_OWORD *)(v87 + 2 * v90 + 16);
            *(_OWORD *)(v89 + 2 * v90) = *(_OWORD *)(v87 + 2 * v90);
            *(_OWORD *)(v89 + 2 * v90 + 16) = v91;
            v90 += 16;
          }
          while ( v84 > v88 );
          v92 = (v83 & 0xFFFFFFFC) + v75;
          v93 = (v83 & 0xFFFFFFFC) + v66;
          if ( v83 != (v83 & 0xFFFFFFFC) )
          {
            v94 = *(_QWORD *)(v10 + 8LL * v93);
            v95 = v92 + 1;
            *(_DWORD *)(v12 + 4LL * v92) = *(_DWORD *)(v12 + 4LL * v93);
            *(_QWORD *)(v10 + 8LL * v92) = v94;
            v96 = v93 + 1;
            if ( v126 > v93 + 1 )
            {
              v97 = *(_DWORD *)(v12 + 4LL * v96);
              v98 = *(_QWORD *)(v10 + 8LL * v96);
              v99 = v93 + 2;
              *(_DWORD *)(v12 + 4LL * v95) = v97;
              *(_QWORD *)(v10 + 8LL * v95) = v98;
              v100 = v92 + 2;
              if ( v126 > v93 + 2 )
              {
                v101 = *(_DWORD *)(v12 + 4LL * v99);
                v102 = *(_QWORD *)(v10 + 8LL * v99);
                v103 = v93 + 3;
                *(_DWORD *)(v12 + 4LL * v100) = v101;
                *(_QWORD *)(v10 + 8LL * v100) = v102;
                v104 = v92 + 3;
                if ( v126 > v93 + 3 )
                {
                  v105 = *(_DWORD *)(v12 + 4LL * v103);
                  v106 = *(_QWORD *)(v10 + 8LL * v103);
                  v107 = v93 + 4;
                  *(_DWORD *)(v12 + 4LL * v104) = v105;
                  *(_QWORD *)(v10 + 8LL * v104) = v106;
                  v108 = v92 + 4;
                  if ( v126 > v93 + 4 )
                  {
                    v109 = v93 + 5;
                    v110 = *(_QWORD *)(v10 + 8LL * v107);
                    v111 = v92 + 5;
                    *(_DWORD *)(v12 + 4LL * v108) = *(_DWORD *)(v12 + 4LL * v107);
                    *(_QWORD *)(v10 + 8LL * v108) = v110;
                    if ( v126 > v109 )
                    {
                      v112 = *(_QWORD *)(v10 + 8LL * v109);
                      *(_DWORD *)(v12 + 4LL * v111) = *(_DWORD *)(v12 + 4LL * v109);
                      *(_QWORD *)(v10 + 8LL * v111) = v112;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v115 = 0;
          do
          {
            v116 = *(_QWORD *)(v10 + 8 * v69 + 2 * v115);
            *(_DWORD *)(v12 + 4LL * v61 + v115) = *(_DWORD *)(v12 + 4 * v69 + v115);
            *(_QWORD *)(v10 + 8LL * v61 + 2 * v115) = v116;
            v115 += 4;
          }
          while ( v115 != 4LL * (unsigned int)(v121 - 1) + 4 );
        }
        v61 += v121;
      }
      v62 = *(_DWORD *)(v124 + 4 * v63);
      v113 = v129[13];
    }
    while ( (_DWORD)v113 != v62 );
    v114 = v123;
    v5 = (CoinFactorization *)v129;
    v18 = (_DWORD *)(v123 + 4 * v113);
  }
  ++*((_DWORD *)v5 + 230);
  *v18 = v61;
  result = 0;
  if ( *((_DWORD *)v5 + 199) - *(_DWORD *)(v114 + 4LL * *((int *)v5 + 13)) > v127 )
  {
LABEL_10:
    v19 = *(int *)(v130 + v124);
    v20 = *(int *)(v130 + v132);
    *(_DWORD *)(v124 + 4 * v20) = v19;
    *(_DWORD *)(v132 + 4 * v19) = v20;
    v21 = *((int *)v5 + 13);
    v22 = *(int *)(v132 + 4 * v21);
    v23 = *(_DWORD *)(v123 + 4 * v21);
    *(_DWORD *)(v124 + 4 * v22) = a2;
    *(_DWORD *)(v132 + 4LL * *((int *)v5 + 13)) = a2;
    *(_DWORD *)(v130 + v132) = v22;
    *(_DWORD *)(v130 + v124) = *((_DWORD *)v5 + 13);
    v24 = *(_DWORD *)(v123 + v130);
    *(_DWORD *)(v123 + v130) = v23;
    if ( v127 > 0 )
    {
      v25 = v125 + v23;
      v26 = v125 + v24;
      v27 = 8 * v25;
      v120 = 4 * v25;
      if ( (unsigned int)v127 > 0xC
        && (8 * v26 >= 8 * (v23 + v125 + 4) || 8 * v25 >= 8 * (v24 + v125 + 4))
        && (4 * v26 >= 4 * (v23 + v125 + 4) || 4 * v25 >= 4 * (v24 + v125 + 4))
        && (v119 + v120 >= (unsigned __int64)(v122 + 8 * (v25 + v127))
         || v27 + v122 >= (unsigned __int64)(v119 + 4 * (v25 + v127))) )
      {
        v28 = ((unsigned __int64)(v122 + 8 * v26) >> 3) & 1;
        if ( (_DWORD)v28 )
        {
          v29 = *(_DWORD *)(v12 + 4LL * v24);
          v30 = *(_QWORD *)(v10 + 8LL * v24);
          v31 = v23 + 1;
          ++v24;
          v32 = 1;
          *(_QWORD *)(v10 + 8LL * v23) = v30;
          *(_DWORD *)(v12 + 4LL * v23) = v29;
        }
        else
        {
          v31 = v23;
          v32 = 0;
        }
        v33 = (((unsigned __int64)(v122 + 8 * v26) >> 3) & 1) + v26;
        v34 = v127 - v28;
        v35 = (unsigned int)(v127 - v28) >> 2;
        v36 = v122 + 8 * v33;
        v37 = v122 + v27 + 8LL * (unsigned int)v28;
        v38 = v119 + 4 * v33;
        v39 = v119 + v120 + 4LL * (unsigned int)v28;
        v40 = 0;
        v41 = 0;
        do
        {
          ++v41;
          v42 = *(_OWORD *)(v36 + 2 * v40);
          *(_OWORD *)(v37 + 2 * v40 + 16) = *(_OWORD *)(v36 + 2 * v40 + 16);
          *(_OWORD *)(v37 + 2 * v40) = v42;
          *(__m128i *)(v39 + v40) = _mm_loadu_si128((const __m128i *)(v38 + v40));
          v40 += 16;
        }
        while ( v35 > v41 );
        v43 = (v34 & 0xFFFFFFFC) + v31;
        v44 = (v34 & 0xFFFFFFFC) + v24;
        v45 = (v34 & 0xFFFFFFFC) + v32;
        if ( v34 != (v34 & 0xFFFFFFFC) )
        {
          v46 = *(_DWORD *)(v12 + 4LL * v44);
          v47 = v44 + 1;
          *(_QWORD *)(v10 + 8LL * v43) = *(_QWORD *)(v10 + 8LL * v44);
          *(_DWORD *)(v12 + 4LL * v43) = v46;
          if ( (int)(v45 + 1) < v127 )
          {
            v48 = v43 + 1;
            v49 = v43 + 2;
            v50 = *(_QWORD *)(v10 + 8LL * v47);
            v51 = *(_DWORD *)(v12 + 4LL * v47);
            v52 = v44 + 2;
            *(_QWORD *)(v10 + 8 * v48) = v50;
            *(_DWORD *)(v12 + 4 * v48) = v51;
            if ( v127 > (int)(v45 + 2) )
            {
              v53 = v44 + 3;
              v54 = *(_QWORD *)(v10 + 8LL * v52);
              v55 = *(_DWORD *)(v12 + 4LL * v52);
              v56 = v43 + 3;
              *(_QWORD *)(v10 + 8LL * v49) = v54;
              *(_DWORD *)(v12 + 4LL * v49) = v55;
              if ( v127 > (int)(v45 + 3) )
              {
                v57 = *(_DWORD *)(v12 + 4LL * v53);
                *(_QWORD *)(v10 + 8LL * v56) = *(_QWORD *)(v10 + 8LL * v53);
                *(_DWORD *)(v12 + 4LL * v56) = v57;
              }
            }
          }
        }
      }
      else
      {
        v117 = 0;
        do
        {
          v118 = *(_DWORD *)(v12 + 4LL * v24 + v117);
          *(_QWORD *)(v10 + 8LL * v23 + 2 * v117) = *(_QWORD *)(v10 + 8LL * v24 + 2 * v117);
          *(_DWORD *)(v12 + 4LL * v23 + v117) = v118;
          v117 += 4;
        }
        while ( v117 != 4LL * (unsigned int)(v127 - 1) + 4 );
      }
      v23 += v127;
    }
    v58 = v23;
    v59 = v23 + 5;
    *(double *)(v10 + 8 * v58) = a3;
    *(_DWORD *)(v12 + 4 * v58) = a4;
    ++*v131;
    if ( *((_DWORD *)v5 + 199) <= v59 )
      v59 = *((_DWORD *)v5 + 199);
    *(_DWORD *)(v123 + 4LL * *((int *)v5 + 13)) = v59;
    return 1;
  }
  return result;
}

