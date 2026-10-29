__int64 __fastcall ClpPlusMinusOneMatrix::transposeTimes2(
        ClpPlusMinusOneMatrix *this,
        const ClpSimplex *a2,
        const CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        const CoinIndexedVector *a5,
        CoinIndexedVector *a6,
        double a7,
        double a8,
        double a9,
        double *a10,
        double *a11,
        unsigned int *a12,
        double *a13)
{
  __int64 v13; // r8
  __int64 v14; // r9
  double v15; // xmm7_8
  char v16; // al
  double v17; // xmm8_8
  int v18; // r15d
  int v19; // r12d
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // xmm3_8
  __int64 v25; // rdx
  __int64 v26; // r11
  double v27; // xmm3_8
  int v28; // ebx
  int v29; // r9d
  int v30; // r12d
  __int64 v31; // r12
  int *v32; // rax
  unsigned __int64 v33; // r12
  __int64 v34; // r10
  int v35; // r10d
  __int64 v36; // r13
  int *v37; // rax
  unsigned __int64 v38; // r12
  __int64 v39; // r11
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v43; // rdx
  __int64 v44; // r11
  double v45; // xmm3_8
  int v46; // ebx
  int v47; // ecx
  int v48; // r12d
  __int64 v49; // r12
  int *v50; // rax
  unsigned __int64 v51; // r12
  __int64 v52; // r10
  int v53; // r10d
  __int64 v54; // r13
  int *v55; // rax
  __int64 v56; // r12
  __int64 v57; // r11
  __int64 v58; // r12
  double v59; // xmm4_8
  int *v60; // rax
  unsigned __int64 v61; // rbx
  __int64 v62; // r11
  __int64 v63; // r11
  int *v64; // rax
  __int64 v65; // r10
  __int64 v66; // r9
  double *v67; // rax
  double v68; // xmm5_8
  double v69; // xmm10_8
  double v70; // xmm4_8
  double v71; // xmm4_8
  unsigned int v72; // eax
  __int64 v73; // rax
  __int64 v74; // r12
  double v75; // xmm4_8
  int *v76; // rax
  unsigned __int64 v77; // rbx
  __int64 v78; // r11
  __int64 v79; // r11
  int *v80; // rax
  __int64 v81; // r10
  __int64 v82; // rcx
  double *v83; // rax
  double v84; // xmm5_8
  double v85; // xmm10_8
  double v86; // xmm4_8
  double v87; // xmm4_8
  unsigned int v88; // eax
  __int64 v91; // [rsp+10h] [rbp-50h]
  __int64 v92; // [rsp+18h] [rbp-48h]
  int v93; // [rsp+20h] [rbp-40h]
  int v94; // [rsp+20h] [rbp-40h]
  int v95; // [rsp+24h] [rbp-3Ch]

  v13 = *((_QWORD *)a5 + 1);
  v92 = *((_QWORD *)a4 + 1);
  v14 = *((_QWORD *)a3 + 1);
  v91 = *(_QWORD *)a4;
  v15 = *((double *)a2 + 88);
  v16 = *((_BYTE *)a3 + 28);
  v17 = 1.0;
  if ( a9 == 0.0 )
  {
    v18 = *((_DWORD *)this + 33);
    if ( v16 )
    {
LABEL_3:
      v19 = *((_DWORD *)a3 + 4);
      v20 = *(_QWORD *)a3;
      v21 = *((_QWORD *)a6 + 1);
      if ( v19 > 0 )
      {
        v22 = 0;
        do
        {
          v23 = *(int *)(v20 + 4 * v22);
          v24 = *(_QWORD *)(v14 + 8 * v22++);
          *(_QWORD *)(v21 + 8 * v23) = v24;
        }
        while ( (unsigned int)(v19 - 1) + 1LL != v22 );
        if ( v18 <= 0 )
        {
          v93 = 0;
LABEL_19:
          v40 = 0;
          do
          {
            v41 = *(int *)(v20 + 4 * v40++);
            *(_QWORD *)(v21 + 8 * v41) = 0;
          }
          while ( v19 > (int)v40 );
LABEL_21:
          *((_DWORD *)a4 + 4) = v93;
          *((_DWORD *)a6 + 4) = 0;
          *((_BYTE *)a6 + 28) = 0;
LABEL_22:
          *((_BYTE *)a4 + 28) = 1;
          return 0;
        }
LABEL_7:
        v25 = 0;
        v93 = 0;
        v95 = v19;
        do
        {
          if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v25) & 3) != 1 )
          {
            v26 = *((_QWORD *)this + 13);
            v27 = 0.0;
            v28 = *(_DWORD *)(v26 + 4 * v25);
            v29 = *(_DWORD *)(*((_QWORD *)this + 14) + 4 * v25);
            v30 = v28;
            if ( v28 < v29 )
            {
              v31 = *((_QWORD *)this + 15);
              v27 = 0.0;
              v32 = (int *)(v31 + 4LL * v28);
              v33 = v31 + 4 * (v28 + (unsigned __int64)(unsigned int)(v29 - 1 - v28)) + 4;
              do
              {
                v34 = *v32++;
                v27 = v27 - *(double *)(v21 + 8 * v34);
              }
              while ( (int *)v33 != v32 );
              v30 = *(_DWORD *)(*((_QWORD *)this + 14) + 4 * v25);
            }
            v35 = *(_DWORD *)(v26 + 4 * v25 + 4);
            if ( v35 > v30 )
            {
              v36 = *((_QWORD *)this + 15);
              v37 = (int *)(v36 + 4LL * v30);
              v38 = v36 + 4 * (v30 + (unsigned __int64)(unsigned int)(v35 - 1 - v30)) + 4;
              do
              {
                v39 = *v37++;
                v27 = v27 + *(double *)(v21 + 8 * v39);
              }
              while ( (int *)v38 != v37 );
            }
            if ( fabs(v27) > v15 )
            {
              if ( v28 >= v29 )
              {
                v29 = v28;
                v59 = 0.0;
              }
              else
              {
                v58 = *((_QWORD *)this + 15);
                v59 = 0.0;
                v60 = (int *)(v58 + 4LL * v28);
                v61 = v58 + 4 * (v28 + (unsigned __int64)(unsigned int)(v29 - 1 - v28)) + 4;
                do
                {
                  v62 = *v60++;
                  v59 = v59 + *(double *)(v13 + 8 * v62);
                }
                while ( (int *)v61 != v60 );
              }
              if ( v35 > v29 )
              {
                v63 = *((_QWORD *)this + 15);
                v64 = (int *)(v63 + 4LL * v29);
                v65 = v63 + 4 * ((unsigned int)(v35 - 1 - v29) + (__int64)v29) + 4;
                do
                {
                  v66 = *v64++;
                  v59 = v59 - *(double *)(v13 + 8 * v66);
                }
                while ( (int *)v65 != v64 );
              }
              v67 = a13;
              v68 = v17 * v27;
              v70 = v59 * (v17 * v27) + a8 * (v68 * v68) + a13[v25];
              if ( v70 < 0.0001 )
              {
                v69 = v68 * v68;
                if ( a7 < 0.0 )
                {
                  v70 = fmax(0.0001, v69 + 1.0);
                }
                else
                {
                  v71 = v69 * a7;
                  v72 = a12[(int)v25 >> 5];
                  if ( _bittest((const int *)&v72, v25) )
                    v71 = v71 + 1.0;
                  v70 = fmax(v71, 0.0001);
                  v67 = a13;
                }
              }
              v67[v25] = v70;
              if ( a9 != 0.0 )
              {
                v73 = v93;
                *(double *)(v92 + 8LL * v93++) = v27;
                *(_DWORD *)(v91 + 4 * v73) = v25;
                v18 = *((_DWORD *)this + 33);
              }
            }
          }
          ++v25;
        }
        while ( (int)v25 < v18 );
        v19 = v95;
        if ( v95 <= 0 )
          goto LABEL_21;
        goto LABEL_19;
      }
      if ( v18 > 0 )
        goto LABEL_7;
      goto LABEL_68;
    }
  }
  else
  {
    v17 = a9;
    v18 = *((_DWORD *)this + 33);
    if ( v16 )
      goto LABEL_3;
  }
  v43 = 0;
  v94 = 0;
  if ( v18 > 0 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v43) & 3) != 1 )
      {
        v44 = *((_QWORD *)this + 13);
        v45 = 0.0;
        v46 = *(_DWORD *)(v44 + 4 * v43);
        v47 = *(_DWORD *)(*((_QWORD *)this + 14) + 4 * v43);
        v48 = v46;
        if ( v46 < v47 )
        {
          v49 = *((_QWORD *)this + 15);
          v45 = 0.0;
          v50 = (int *)(v49 + 4LL * v46);
          v51 = v49 + 4 * (v46 + (unsigned __int64)(unsigned int)(v47 - 1 - v46)) + 4;
          do
          {
            v52 = *v50++;
            v45 = v45 - *(double *)(v14 + 8 * v52);
          }
          while ( (int *)v51 != v50 );
          v48 = *(_DWORD *)(*((_QWORD *)this + 14) + 4 * v43);
        }
        v53 = *(_DWORD *)(v44 + 4 * v43 + 4);
        if ( v53 > v48 )
        {
          v54 = *((_QWORD *)this + 15);
          v55 = (int *)(v54 + 4LL * v48);
          v56 = v54 + 4 * ((unsigned int)(v53 - 1 - v48) + (__int64)v48) + 4;
          do
          {
            v57 = *v55++;
            v45 = v45 + *(double *)(v14 + 8 * v57);
          }
          while ( (int *)v56 != v55 );
        }
        if ( fabs(v45) > v15 )
        {
          if ( v46 >= v47 )
          {
            v47 = v46;
            v75 = 0.0;
          }
          else
          {
            v74 = *((_QWORD *)this + 15);
            v75 = 0.0;
            v76 = (int *)(v74 + 4LL * v46);
            v77 = v74 + 4 * (v46 + (unsigned __int64)(unsigned int)(v47 - 1 - v46)) + 4;
            do
            {
              v78 = *v76++;
              v75 = v75 + *(double *)(v13 + 8 * v78);
            }
            while ( (int *)v77 != v76 );
          }
          if ( v53 > v47 )
          {
            v79 = *((_QWORD *)this + 15);
            v80 = (int *)(v79 + 4LL * v47);
            v81 = v79 + 4 * ((unsigned int)(v53 - 1 - v47) + (__int64)v47) + 4;
            do
            {
              v82 = *v80++;
              v75 = v75 - *(double *)(v13 + 8 * v82);
            }
            while ( (int *)v81 != v80 );
          }
          v83 = a13;
          v84 = v17 * v45;
          v86 = v75 * (v17 * v45) + v84 * v84 * a8 + a13[v43];
          if ( v86 < 0.0001 )
          {
            v85 = v84 * v84;
            if ( a7 < 0.0 )
            {
              v86 = fmax(0.0001, v85 + 1.0);
            }
            else
            {
              v87 = v85 * a7;
              v88 = a12[(int)v43 >> 5];
              if ( _bittest((const int *)&v88, v43) )
                v87 = v87 + 1.0;
              v86 = fmax(v87, 0.0001);
              v83 = a13;
            }
          }
          v83[v43] = v86;
          if ( a9 != 0.0 )
          {
            *(double *)(v92 + 8 * v43) = v45;
            *(_DWORD *)(v91 + 4LL * v94) = v43;
            v18 = *((_DWORD *)this + 33);
            ++v94;
          }
        }
      }
      ++v43;
    }
    while ( (int)v43 < v18 );
    *((_DWORD *)a4 + 4) = v94;
    if ( !v94 )
      *((_BYTE *)a4 + 28) = 0;
    *((_DWORD *)a6 + 4) = 0;
    *((_BYTE *)a6 + 28) = 0;
    return 0;
  }
LABEL_68:
  *((_DWORD *)a4 + 4) = 0;
  *((_BYTE *)a4 + 28) = 0;
  *((_DWORD *)a6 + 4) = 0;
  *((_BYTE *)a6 + 28) = 0;
  if ( v16 )
    goto LABEL_22;
  return 0;
}

