__int64 __fastcall ClpPlusMinusOneMatrix::partialPricing(
        ClpPlusMinusOneMatrix *this,
        ClpSimplex *a2,
        double a3,
        double a4,
        int *a5,
        int *a6)
{
  int v6; // r10d
  int v7; // r8d
  __int64 v8; // r15
  __int64 v9; // rdx
  int v10; // r11d
  int v11; // eax
  double v12; // xmm1_8
  double v13; // xmm2_8
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int8 v17; // r8
  __int64 v18; // r12
  double v19; // xmm0_8
  int v20; // ebp
  int v21; // r11d
  int *v22; // r8
  unsigned __int64 v23; // rbp
  __int64 v24; // rbx
  int v25; // ebx
  __int64 v26; // rbp
  int *v27; // r8
  __int64 v28; // rbx
  __int64 v29; // r11
  double v30; // xmm0_8
  double v31; // xmm0_8
  int v32; // r8d
  int v33; // r8d
  __int64 v34; // rbx
  double v35; // xmm0_8
  int v36; // r10d
  int v37; // r11d
  __int64 v38; // r12
  int *v39; // rdx
  unsigned __int64 v40; // r10
  __int64 v41; // rsi
  int v42; // esi
  __int64 v43; // r10
  int *v44; // rdx
  unsigned __int64 v45; // r10
  __int64 v46; // rsi
  int v47; // r11d
  int v48; // ebx
  __int64 v49; // rbp
  int *v50; // r8
  __int64 v51; // rbx
  __int64 v52; // r11
  double v53; // xmm0_8
  __int64 v54; // r12
  int v55; // ebp
  int *v56; // r8
  unsigned __int64 v57; // rbp
  __int64 v58; // rbx
  __int64 v59; // r12
  int v60; // ebp
  int v61; // r11d
  int *v62; // r8
  unsigned __int64 v63; // rbp
  __int64 v64; // rbx
  int v65; // ebx
  __int64 v66; // rbp
  int *v67; // r8
  __int64 v68; // rbx
  __int64 v69; // r11
  unsigned __int64 v70; // [rsp+0h] [rbp-50h]
  int v72; // [rsp+10h] [rbp-40h]
  int v73; // [rsp+14h] [rbp-3Ch]
  __int64 v74; // [rsp+18h] [rbp-38h]

  v6 = *((_DWORD *)this + 11);
  *a6 = v6;
  v7 = *((_DWORD *)this + 33);
  v8 = *((_QWORD *)a2 + 129);
  v9 = *a5;
  v74 = *((_QWORD *)a2 + 147);
  v73 = v9;
  v10 = (int)(a3 * (double)v7);
  v11 = (int)(a4 * (double)v7 + 1.0);
  v12 = *((double *)a2 + 109);
  v13 = v12;
  if ( v11 <= v7 )
    v7 = v11;
  result = *((_QWORD *)a2 + 16);
  if ( (int)v9 >= 0 )
    v13 = fabs(*(double *)(*((_QWORD *)a2 + 147) + 8 * v9));
  v72 = *((_DWORD *)a2 + 290);
  if ( v7 > v10 )
  {
    v15 = v10;
    v16 = 4LL * v10 + 4;
    v70 = 4 * (v10 + (unsigned __int64)(unsigned int)(~v10 + v7) + 2);
    while ( 1 )
    {
      if ( v72 == (_DWORD)v15 )
        goto LABEL_21;
      v17 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v15) & 7;
      if ( v17 == 2 )
      {
        v59 = *((_QWORD *)this + 13);
        v31 = *(double *)(v8 + 8 * v15);
        v60 = *(_DWORD *)(v59 + v16 - 4);
        v61 = *(_DWORD *)(*((_QWORD *)this + 14) + v16 - 4);
        if ( v60 >= v61 )
        {
          v61 = *(_DWORD *)(v59 + v16 - 4);
        }
        else
        {
          v62 = (int *)(*((_QWORD *)this + 15) + 4LL * v60);
          v63 = *((_QWORD *)this + 15) + 4 * (v60 + (unsigned __int64)(unsigned int)(v61 - 1 - v60)) + 4;
          do
          {
            v64 = *v62++;
            v31 = v31 - *(double *)(result + 8 * v64);
          }
          while ( (int *)v63 != v62 );
        }
        v65 = *(_DWORD *)(v59 + v16);
        if ( v65 > v61 )
        {
          v66 = *((_QWORD *)this + 15);
          v67 = (int *)(v66 + 4LL * v61);
          v68 = v66 + 4 * ((unsigned int)(v65 - 1 - v61) + (__int64)v61) + 4;
          do
          {
            v69 = *v67++;
            v31 = v31 + *(double *)(result + 8 * v69);
          }
          while ( (int *)v68 != v67 );
        }
      }
      else
      {
        if ( v17 <= 2u )
        {
          if ( !v17 )
            goto LABEL_12;
          goto LABEL_21;
        }
        if ( v17 != 3 )
        {
          if ( v17 != 4 )
            goto LABEL_21;
LABEL_12:
          v18 = *((_QWORD *)this + 13);
          v19 = *(double *)(v8 + 8 * v15);
          v20 = *(_DWORD *)(v18 + v16 - 4);
          v21 = *(_DWORD *)(*((_QWORD *)this + 14) + v16 - 4);
          if ( v20 >= v21 )
          {
            v21 = *(_DWORD *)(v18 + v16 - 4);
          }
          else
          {
            v22 = (int *)(*((_QWORD *)this + 15) + 4LL * v20);
            v23 = *((_QWORD *)this + 15) + 4 * (v20 + (unsigned __int64)(unsigned int)(v21 - 1 - v20)) + 4;
            do
            {
              v24 = *v22++;
              v19 = v19 - *(double *)(result + 8 * v24);
            }
            while ( (int *)v23 != v22 );
          }
          v25 = *(_DWORD *)(v18 + v16);
          if ( v25 > v21 )
          {
            v26 = *((_QWORD *)this + 15);
            v27 = (int *)(v26 + 4LL * v21);
            v28 = v26 + 4 * ((unsigned int)(v25 - 1 - v21) + (__int64)v21) + 4;
            do
            {
              v29 = *v27++;
              v19 = v19 + *(double *)(result + 8 * v29);
            }
            while ( (int *)v28 != v27 );
          }
          v30 = fabs(v19);
          if ( v30 <= v12 * 100.0 )
            goto LABEL_21;
          v31 = v30 * 10.0;
          v32 = v6 - 1;
          *a6 = v6 - 1;
          if ( v31 > v13 )
          {
LABEL_39:
            if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v15) & 0x40) != 0 )
            {
              *a6 = v6;
            }
            else
            {
              v13 = v31;
              *a5 = v15;
              v6 = *a6;
            }
            goto LABEL_21;
          }
LABEL_20:
          v6 = v32;
          goto LABEL_21;
        }
        v54 = *((_QWORD *)this + 13);
        v53 = *(double *)(v8 + 8 * v15);
        v55 = *(_DWORD *)(v54 + v16 - 4);
        v47 = *(_DWORD *)(*((_QWORD *)this + 14) + v16 - 4);
        if ( v55 >= v47 )
        {
          v47 = *(_DWORD *)(v54 + v16 - 4);
        }
        else
        {
          v56 = (int *)(*((_QWORD *)this + 15) + 4LL * v55);
          v57 = *((_QWORD *)this + 15) + 4 * (v55 + (unsigned __int64)(unsigned int)(v47 - 1 - v55)) + 4;
          do
          {
            v58 = *v56++;
            v53 = v53 - *(double *)(result + 8 * v58);
          }
          while ( (int *)v57 != v56 );
        }
        v48 = *(_DWORD *)(v54 + v16);
        if ( v48 > v47 )
        {
          v49 = *((_QWORD *)this + 15);
          v50 = (int *)(v49 + 4LL * v47);
          v51 = v49 + 4 * ((unsigned int)(v48 - 1 - v47) + (__int64)v47) + 4;
          do
          {
            v52 = *v50++;
            v53 = v53 + *(double *)(result + 8 * v52);
          }
          while ( (int *)v51 != v50 );
        }
        v31 = -v53;
      }
      if ( v31 > v12 )
      {
        v32 = v6 - 1;
        *a6 = v6 - 1;
        if ( v31 > v13 )
          goto LABEL_39;
        goto LABEL_20;
      }
LABEL_21:
      if ( v6 )
      {
        ++v15;
        v16 += 4;
        if ( v70 != v16 )
          continue;
      }
      v33 = *a5;
      if ( v73 != *a5 )
      {
        v34 = *((_QWORD *)this + 13);
        v35 = *(double *)(v8 + 8LL * v33);
        v36 = *(_DWORD *)(v34 + 4LL * v33);
        v37 = *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * v33);
        if ( v36 >= v37 )
        {
          v37 = *(_DWORD *)(v34 + 4LL * v33);
        }
        else
        {
          v38 = *((_QWORD *)this + 15);
          v39 = (int *)(v38 + 4LL * v36);
          v40 = v38 + 4 * (v36 + (unsigned __int64)(unsigned int)(v37 - 1 - v36)) + 4;
          do
          {
            v41 = *v39++;
            v35 = v35 - *(double *)(result + 8 * v41);
          }
          while ( (int *)v40 != v39 );
        }
        v42 = *(_DWORD *)(v34 + 4LL * v33 + 4);
        if ( v42 > v37 )
        {
          v43 = *((_QWORD *)this + 15);
          v44 = (int *)(v43 + 4LL * v37);
          v45 = v43 + 4 * (v37 + (unsigned __int64)(unsigned int)(v42 - 1 - v37)) + 4;
          do
          {
            v46 = *v44++;
            v35 = v35 + *(double *)(result + 8 * v46);
          }
          while ( (int *)v45 != v44 );
        }
        result = v74;
        *(double *)(v74 + 8LL * v33) = v35;
        *((_DWORD *)this + 12) = v33;
        v6 = *a6;
        *((double *)this + 4) = v35;
      }
      break;
    }
  }
  *((_DWORD *)this + 11) = v6;
  return result;
}

