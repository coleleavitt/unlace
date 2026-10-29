CoinIndexedVector *__fastcall ClpPackedMatrix3::transposeTimes(
        ClpPackedMatrix3 *this,
        const ClpSimplex *a2,
        const double *a3,
        CoinIndexedVector *a4)
{
  int *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  double v8; // xmm2_8
  int v9; // r15d
  int *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rdx
  double v13; // xmm1_8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdx
  double v18; // xmm0_8
  double v19; // xmm0_8
  int v20; // ebx
  __int64 v21; // r11
  unsigned __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  double v30; // xmm0_8
  int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // r10d
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rbp
  int *v38; // rdi
  int v39; // ebx
  __int64 v40; // r11
  int *v41; // r9
  __int64 v42; // r8
  int *v43; // rsi
  double v44; // xmm1_8
  int *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  double v48; // xmm0_8
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r11
  int *v54; // r9
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // r8
  double v58; // xmm1_8
  int *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  double v62; // xmm0_8
  int v63; // edx
  __int64 v64; // rax
  CoinIndexedVector *result; // rax
  int *v66; // [rsp+0h] [rbp-B0h]
  int v67; // [rsp+Ch] [rbp-A4h]
  __int64 v68; // [rsp+10h] [rbp-A0h]
  __int64 v69; // [rsp+18h] [rbp-98h]
  __int64 v70; // [rsp+20h] [rbp-90h]
  __int64 v71; // [rsp+28h] [rbp-88h]
  int *v72; // [rsp+30h] [rbp-80h]
  __int64 v73; // [rsp+38h] [rbp-78h]
  __int64 v74; // [rsp+40h] [rbp-70h]
  int v75; // [rsp+48h] [rbp-68h]
  int v76; // [rsp+4Ch] [rbp-64h]
  int *v77; // [rsp+50h] [rbp-60h]
  __int64 v79; // [rsp+60h] [rbp-50h]
  __int64 v80; // [rsp+68h] [rbp-48h]
  __int64 v81; // [rsp+70h] [rbp-40h]

  v5 = *((int **)this + 9);
  v6 = *(_QWORD *)a4;
  v7 = *((_QWORD *)a4 + 1);
  v8 = *((double *)a2 + 88);
  v9 = v5[2];
  if ( v9 )
  {
    v10 = *((int **)this + 5);
    v11 = v10[1];
    v12 = *v10;
    if ( (int)v11 <= (int)v12 )
    {
      v19 = 0.0;
      v13 = 0.0;
      if ( v9 > 1 )
        goto LABEL_8;
    }
    else
    {
      v13 = 0.0;
      v14 = (unsigned int)(v11 - 1 - v12) + 1LL;
      v15 = *((_QWORD *)this + 6) + 4 * v12;
      v16 = *((_QWORD *)this + 7) + 8 * v12;
      v17 = 0;
      do
      {
        v18 = a3[*(int *)(v15 + 4 * v17)] * *(double *)(v16 + 8 * v17);
        ++v17;
        v13 = v13 + v18;
      }
      while ( v14 != v17 );
      v19 = fabs(v13);
      if ( v9 > 1 )
      {
LABEL_8:
        v20 = v5[2];
        v21 = 4LL * (unsigned int)(v9 - 2) + 4;
        v22 = 0;
        v9 = 0;
        do
        {
          v23 = v10[v22 / 4 + 2];
          if ( fabs(v13) > v8 )
          {
            v24 = *((_QWORD *)this + 4);
            v25 = v9++;
            *(double *)(v7 + 8 * v25) = v13;
            *(_DWORD *)(v6 + 4 * v25) = *(_DWORD *)(v24 + v22);
          }
          if ( v23 <= (int)v11 )
          {
            v19 = 0.0;
            v13 = 0.0;
          }
          else
          {
            v13 = 0.0;
            v26 = (unsigned int)(v23 - v11 - 1) + 1LL;
            v27 = *((_QWORD *)this + 6) + 4 * v11;
            v28 = *((_QWORD *)this + 7) + 8 * v11;
            v29 = 0;
            do
            {
              v30 = a3[*(int *)(v27 + 4 * v29)] * *(double *)(v28 + 8 * v29);
              ++v29;
              v13 = v13 + v30;
            }
            while ( v26 != v29 );
            v19 = fabs(v13);
          }
          v22 += 4LL;
          v11 = v23;
        }
        while ( v21 != v22 );
        v31 = v20 - 1;
LABEL_17:
        if ( v19 <= v8 )
        {
          if ( *((int *)this + 2) <= 0 )
            goto LABEL_42;
          v79 = *((_QWORD *)this + 4);
        }
        else
        {
          v32 = v9;
          *(double *)(v7 + 8LL * v9++) = v13;
          v79 = *((_QWORD *)this + 4);
          *(_DWORD *)(v6 + 4 * v32) = *(_DWORD *)(v79 + 4LL * v31);
          if ( *((int *)this + 2) <= 0 )
          {
            *((_DWORD *)a4 + 4) = v9;
            return a4;
          }
        }
LABEL_19:
        v77 = v5;
        v75 = 0;
        v80 = *((_QWORD *)this + 6);
        v81 = *((_QWORD *)this + 7);
        do
        {
          v33 = *v77;
          v34 = v77[8];
          v72 = (int *)(v80 + 4 * v33);
          v35 = v81 + 8 * v33;
          v73 = v35;
          v74 = v79 + 4LL * v77[2];
          v76 = v77[7] & 3;
          v67 = v77[7] >> 2;
          if ( v67 > 0 )
          {
            v36 = (unsigned int)(v34 - 1);
            v37 = v35;
            v38 = v72;
            v39 = 0;
            v40 = v74 + -16 * v36 - (_QWORD)v72;
            v71 = 16 * v36 + 16;
            v70 = 16LL * (_DWORD)v36;
            v69 = 32LL * (_DWORD)v36 + 32;
            v68 = v70 + 16;
            do
            {
              v41 = v38 + 4;
              v66 = v38;
              v42 = v37;
              v43 = (int *)((char *)v38 + v71);
              do
              {
                if ( v34 <= 0 )
                {
                  v48 = 0.0;
                  v44 = 0.0;
                }
                else
                {
                  v44 = 0.0;
                  v45 = v38;
                  v46 = v42;
                  do
                  {
                    v47 = *v45;
                    v45 += 4;
                    v46 += 32;
                    v44 = v44 + a3[v47] * *(double *)(v46 - 32);
                  }
                  while ( v43 != v45 );
                  v48 = fabs(v44);
                }
                ++v38;
                v42 += 8;
                if ( v48 > v8 )
                {
                  v49 = *(int *)((char *)v43 + v40 - 16);
                  v50 = v9++;
                  *(double *)(v7 + 8 * v50) = v44;
                  *(_DWORD *)(v6 + 4 * v50) = v49;
                }
                ++v43;
              }
              while ( v38 != v41 );
              v37 += v69;
              ++v39;
              v40 -= v70;
              v38 = (int *)((char *)v66 + v68);
            }
            while ( v67 != v39 );
            v51 = (unsigned int)(v67 - 1) + 1LL;
            v72 = (int *)((char *)v72 + v51 * v68);
            v74 += 16 * v51;
            v73 += v51 * v69;
          }
          if ( v76 )
          {
            v52 = (unsigned int)(v34 - 1);
            v53 = v73;
            v54 = v72;
            v55 = (__int64)&v72[4 * v52 + 4];
            v56 = (__int64)&v72[4 * v52 + 5 + (unsigned int)(v76 - 1)];
            v57 = v74 + -16 * v52 - (_QWORD)v72;
            do
            {
              if ( v34 <= 0 )
              {
                v62 = 0.0;
                v58 = 0.0;
              }
              else
              {
                v58 = 0.0;
                v59 = v54;
                v60 = v53;
                do
                {
                  v61 = *v59;
                  v59 += 4;
                  v60 += 32;
                  v58 = v58 + a3[v61] * *(double *)(v60 - 32);
                }
                while ( v59 != (int *)v55 );
                v62 = fabs(v58);
              }
              ++v54;
              v53 += 8;
              if ( v62 > v8 )
              {
                v63 = *(_DWORD *)(v57 + v55 - 16);
                v64 = v9++;
                *(double *)(v7 + 8 * v64) = v58;
                *(_DWORD *)(v6 + 4 * v64) = v63;
              }
              v55 += 4;
            }
            while ( v56 != v55 );
          }
          ++v75;
          v77 += 10;
        }
        while ( *((_DWORD *)this + 2) > v75 );
LABEL_42:
        result = a4;
        *((_DWORD *)a4 + 4) = v9;
        if ( v9 )
          return result;
        goto LABEL_43;
      }
    }
    v31 = 0;
    v9 = 0;
    goto LABEL_17;
  }
  if ( *((int *)this + 2) > 0 )
  {
    v79 = *((_QWORD *)this + 4);
    goto LABEL_19;
  }
  result = a4;
  *((_DWORD *)a4 + 4) = 0;
LABEL_43:
  *((_BYTE *)result + 28) = 0;
  return result;
}

