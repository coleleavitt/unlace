int *__fastcall sub_210FB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        int a7,
        int a8,
        __int64 a9)
{
  int v9; // edx
  double *v13; // rcx
  __m128d v14; // xmm3
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // r10
  int v19; // ebx
  int v20; // ebx
  unsigned int v21; // edi
  unsigned int v22; // r9d
  int v23; // ecx
  __int64 v24; // rcx
  double *v25; // rdx
  double v26; // xmm0_8
  __int64 v27; // rdi
  double v28; // xmm0_8
  int v29; // r9d
  __int64 v30; // r11
  int v31; // r8d
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdi
  double v37; // xmm6_8
  double v38; // xmm2_8
  double v39; // xmm6_8
  int v40; // edx
  __int64 v41; // rax
  double v42; // xmm2_8
  __int64 v43; // r8
  __int64 v44; // rdi
  double *v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rdx
  double v48; // xmm6_8
  double *v49; // r8
  double *v50; // rdx
  double v51; // xmm1_8
  int v52; // eax
  __int64 v53; // r11
  unsigned __int64 v54; // rdx
  __int64 v55; // r8
  unsigned int v56; // edx
  unsigned int v57; // edi
  unsigned int v58; // r9d
  __m128d v59; // xmm2
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r11
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r11
  __m128d v66; // xmm0
  signed int v67; // ecx
  __int64 v68; // rdx
  int v69; // ecx
  int v70; // ecx
  __int64 v71; // rax
  double v72; // xmm1_8
  __int64 v73; // r9
  __int64 v74; // rdi
  double *v75; // rax
  __int64 v76; // r9
  __int64 v77; // rcx
  double v78; // xmm2_8
  double *v79; // r8
  double *v80; // rcx
  double v81; // xmm0_8
  __int64 v83; // rax
  __int64 i; // rdx
  int v86; // [rsp+Ch] [rbp-74h]
  __int64 v88; // [rsp+18h] [rbp-68h]
  __int64 v89; // [rsp+20h] [rbp-60h]
  int v90; // [rsp+30h] [rbp-50h]
  int v91; // [rsp+34h] [rbp-4Ch]
  int v92; // [rsp+38h] [rbp-48h]
  int v93; // [rsp+3Ch] [rbp-44h]

  v9 = *a6;
  if ( *a6 > a7 )
  {
    v89 = a1 - 24;
    while ( 1 )
    {
      v13 = (double *)(a5 + 8LL * v9);
      v14 = (__m128d)*(unsigned __int64 *)v13;
      v15 = *(int *)(a4 + 4LL * v9);
      if ( fabs(*v13) <= 1.0e-14 )
        break;
      v16 = *(int *)(a3 + 4LL * v9);
      v14.m128d_f64[0] = v14.m128d_f64[0] * *(double *)(a1 + 8 * v16 - 8);
      v91 = *(_DWORD *)(a3 + 4LL * v9);
      v17 = v15 + a8;
      v92 = *(_DWORD *)(a2 + 4 * v16 - 4) - (v9 + a8);
      v93 = v92 + v16;
      v88 = v92 + (int)v16;
      v18 = a1 + 8 * v88;
      *v13 = v14.m128d_f64[0];
      if ( (int)v15 + a8 < 0 )
        goto LABEL_34;
      v19 = v15;
      while ( 1 )
      {
        v24 = 8LL * v17;
        v25 = (double *)(a9 + v24);
        LODWORD(v15) = *(_DWORD *)(a4 + 4 * v15);
        v26 = *(double *)(a9 + v24) - *(double *)(v18 + v24) * v14.m128d_f64[0];
        if ( fabs(v26) > 1.0e-14 )
        {
          v27 = *(int *)(a3 + 4LL * v19);
          v28 = v26 * *(double *)(a1 + 8 * v27 - 8);
          v29 = *(_DWORD *)(a3 + 4LL * v19);
          v86 = *(_DWORD *)(a2 + 4 * v27 - 4) - v17;
          v90 = v27 + v86;
          v30 = a1 + 8LL * ((int)v27 + v86);
          v31 = v17 - 1;
          *v25 = v28;
          if ( (((_BYTE)v17 - 1) & 1) == 0 )
          {
            v31 = v17 - 2;
            *(double *)(a9 + v24 - 8) = *(double *)(a9 + v24 - 8)
                                      - (*(double *)(v30 + v24 - 8) * v28
                                       + *(double *)(v18 + v24 - 8) * v14.m128d_f64[0]);
          }
          if ( v31 >= 0 )
          {
            v32 = 8LL * v31;
            v33 = a9 + v32;
            v34 = v18 + v32 - 8;
            v35 = v30 + v32 - 8;
            v36 = a9 - 16 + v32 - 16LL * ((unsigned int)v31 >> 1);
            do
            {
              v37 = *(double *)(v34 + 8);
              v33 -= 16;
              v34 -= 16;
              v35 -= 16;
              v38 = *(double *)(v33 + 16) - v37 * v14.m128d_f64[0];
              v39 = *(double *)(v35 + 24) * v28;
              *(double *)(v33 + 8) = *(double *)(v33 + 8)
                                   - *(double *)(v34 + 16) * v14.m128d_f64[0]
                                   - *(double *)(v35 + 16) * v28;
              *(double *)(v33 + 16) = v38 - v39;
            }
            while ( v36 != v33 );
            v31 = v31 - 2 * ((unsigned int)v31 >> 1) - 2;
          }
          v40 = v90 - 1;
          if ( (v86 & 1) != 0 )
          {
            v41 = *(int *)(a2 + 4LL * v40);
            v42 = *(double *)(a1 + 8LL * v40);
            v40 = v90 - 2;
            *(double *)(a5 + 8 * v41) = *(double *)(a5 + 8 * v41) - v42 * v28;
          }
          v17 = v31 - 1;
          if ( v29 <= v40 )
          {
            v43 = 8LL * v40;
            v44 = a2 + 4LL * v40 - 4;
            v45 = (double *)(a1 + v43 - 8);
            v46 = v89 + v43 - 16LL * ((unsigned int)(v40 - v29) >> 1);
            do
            {
              v47 = *(int *)(v44 + 4);
              v48 = *v45;
              v45 -= 2;
              v44 -= 8;
              v49 = (double *)(a5 + 8 * v47);
              v50 = (double *)(a5 + 8LL * *(int *)(v44 + 8));
              v51 = *v50 - v48 * v28;
              *v49 = *v49 - v45[3] * v28;
              *v50 = v51;
            }
            while ( (double *)v46 != v45 );
          }
          goto LABEL_10;
        }
        v20 = v19 - v15;
        *v25 = 0.0;
        v21 = v17 - (v20 - 1);
        v22 = v17 - v20;
        v23 = v17 - v20;
        if ( a7 > (int)v15 )
          break;
        v17 -= v20;
        v19 = v15;
LABEL_10:
        if ( v17 < 0 )
          goto LABEL_34;
      }
      if ( v23 >= 0 )
      {
        v52 = v17 - v20;
        v53 = 8LL * v52;
        v54 = a9 + v53 - 8;
        v55 = 8 * (v88 + v52);
        if ( (v54 >= a1 + 8 * (v88 + v52 + 1) || a1 + v55 - 8 >= (unsigned __int64)(a9 + v53 + 8)) && v21 > 8 )
        {
          v56 = (v54 >> 3) & 1;
          if ( v56 )
          {
            v23 = v21 - 2;
            *(double *)(a9 + 8LL * (int)v22) = *(double *)(a9 + 8LL * (int)v22)
                                             - *(double *)(v18 + 8LL * (int)v22) * v14.m128d_f64[0];
          }
          v57 = v21 - v56;
          v58 = 0;
          v59 = _mm_unpacklo_pd(v14, v14);
          v60 = 8 * ~(unsigned __int64)v56;
          v61 = v60 + v55;
          v62 = v60 + v53;
          v63 = 0;
          v64 = a1 + v61;
          v65 = a9 + v62;
          do
          {
            ++v58;
            v66 = _mm_sub_pd(
                    _mm_shuffle_pd(*(__m128d *)(v65 + v63), *(__m128d *)(v65 + v63), 1),
                    _mm_mul_pd(_mm_shuffle_pd(*(__m128d *)(v64 + v63), *(__m128d *)(v64 + v63), 1), v59));
            *(__m128d *)(v65 + v63) = _mm_shuffle_pd(v66, v66, 1);
            v63 -= 16;
          }
          while ( v58 < v57 >> 1 );
          v67 = v23 - (v57 & 0xFFFFFFFE);
          if ( (v57 & 0xFFFFFFFE) != v57 )
          {
            v68 = v67;
            v69 = v67 - 1;
            *(double *)(a9 + 8 * v68) = *(double *)(a9 + 8 * v68) - *(double *)(v18 + 8 * v68) * v14.m128d_f64[0];
            if ( v69 != -1 )
              *(double *)(a9 + 8LL * v69) = *(double *)(a9 + 8LL * v69)
                                          - *(double *)(v18 + 8LL * v69) * v14.m128d_f64[0];
          }
        }
        else
        {
          v83 = (int)v22;
          for ( i = (int)v22 - 1LL; ; --i )
          {
            *(double *)(a9 + 8 * v83) = *(double *)(a9 + 8 * v83) - *(double *)(v18 + 8 * v83) * v14.m128d_f64[0];
            v83 = i;
            if ( (int)v22 - 1LL - v22 == i )
              break;
          }
        }
      }
LABEL_34:
      v9 = v15;
      v70 = v93 - 1;
      if ( (v92 & 1) != 0 )
      {
        v71 = *(int *)(a2 + 4LL * v70);
        v72 = *(double *)(a1 + 8LL * v70);
        v70 = v93 - 2;
        *(double *)(a5 + 8 * v71) = *(double *)(a5 + 8 * v71) - v72 * v14.m128d_f64[0];
      }
      if ( v91 > v70 )
      {
LABEL_4:
        if ( (int)v15 <= a7 )
          goto LABEL_40;
      }
      else
      {
        v73 = 8LL * v70;
        v74 = a2 + 4LL * v70 - 4;
        v75 = (double *)(a1 + v73 - 8);
        v76 = v89 + v73 - 16LL * ((unsigned int)(v70 - v91) >> 1);
        do
        {
          v77 = *(int *)(v74 + 4);
          v78 = *v75;
          v75 -= 2;
          v74 -= 8;
          v79 = (double *)(a5 + 8 * v77);
          v80 = (double *)(a5 + 8LL * *(int *)(v74 + 8));
          v81 = *v80 - v78 * v14.m128d_f64[0];
          *v79 = *v79 - v75[3] * v14.m128d_f64[0];
          *v80 = v81;
        }
        while ( (double *)v76 != v75 );
        if ( (int)v15 <= a7 )
          goto LABEL_40;
      }
    }
    *v13 = 0.0;
    v9 = v15;
    goto LABEL_4;
  }
LABEL_40:
  *a6 = v9;
  return a6;
}

