__int64 __fastcall ClpPackedMatrix::fillBasis(
        ClpPackedMatrix *this,
        ClpSimplex *a2,
        const int *a3,
        unsigned int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        double *a9)
{
  __int64 v9; // r11
  int v10; // r10d
  __int64 result; // rax
  int v12; // edx
  _QWORD *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rsi
  int *v17; // r12
  _DWORD *v18; // rsi
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rbp
  double v24; // xmm0_8
  __int64 v25; // rdx
  __int64 v26; // rdi
  int v27; // eax
  _QWORD *v28; // r11
  __int64 v29; // rdi
  __int64 v30; // r15
  __int64 v31; // rax
  double v32; // xmm1_8
  int v33; // esi
  __int64 v34; // rdx
  int v35; // esi
  int v36; // esi
  __int64 v37; // rbx
  __int64 v38; // r12
  unsigned __int64 v39; // rax
  double v40; // xmm0_8
  __int64 v41; // rdx
  int v42; // edi
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // esi
  int v47; // esi
  int v48; // esi
  __int64 v49; // r11
  __int64 v50; // rbp
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  double v53; // xmm0_8
  __int64 v54; // r13
  __int64 v55; // rsi
  __int64 v56; // rax
  int *v57; // r12
  double v58; // xmm2_8
  __int64 v59; // r11
  int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rbp
  double v64; // xmm0_8
  __int64 v65; // rdx
  __int64 v66; // r11
  double v67; // xmm0_8
  int v68; // eax
  int v69; // r11d
  __int64 v71; // [rsp+10h] [rbp-50h]
  __int64 v72; // [rsp+18h] [rbp-48h]
  __int64 v73; // [rsp+20h] [rbp-40h]
  __int64 v74; // [rsp+28h] [rbp-38h]

  v9 = *((_QWORD *)a2 + 26);
  v10 = *a6;
  result = *a4;
  v12 = *((_DWORD *)this + 25) & 1;
  if ( v9 )
  {
    v13 = *(_QWORD **)(v9 + 88);
    v14 = v13[7];
    v71 = v13[6];
    v73 = v13[5];
    v72 = v13[4];
    if ( v12 )
      goto LABEL_3;
LABEL_23:
    if ( (int)result > 0 )
    {
      v43 = 1;
      do
      {
        v44 = a3[v43 - 1];
        v45 = *(int *)(v71 + 4 * v44);
        v46 = *(_DWORD *)(v14 + 4 * v44);
        a8[v43 - 1] = v46;
        v47 = v45 + v46;
        if ( (int)v45 < v47 )
        {
          v48 = v47 - v45;
          v49 = v72 + 8 * v45;
          v50 = v73 + 4 * v45;
          v51 = 0;
          do
          {
            v52 = *(int *)(v50 + v51);
            v53 = *(double *)(v49 + 2 * v51);
            a5[v10 + v51 / 4] = v52;
            ++a7[v52];
            a9[v10 + v51 / 4] = v53;
            v51 += 4LL;
          }
          while ( 4LL * (unsigned int)(v48 - 1) + 4 != v51 );
          v10 += v48;
        }
        a6[v43] = v10;
        result = (unsigned int)v43++;
      }
      while ( (int)*a4 > (int)result );
    }
    return result;
  }
  v28 = *((_QWORD **)this + 11);
  v14 = v28[7];
  v73 = v28[5];
  v71 = v28[6];
  v29 = *((_QWORD *)a2 + 28);
  v72 = v28[4];
  if ( !v12 )
  {
    if ( v29 )
    {
      v74 = *((_QWORD *)a2 + 29);
      if ( (int)result > 0 )
      {
        v30 = 1;
        do
        {
          v31 = a3[v30 - 1];
          v32 = *(double *)(v74 + 8 * v31);
          v33 = *(_DWORD *)(v14 + 4 * v31);
          v34 = *(int *)(v71 + 4 * v31);
          a8[v30 - 1] = v33;
          v35 = v34 + v33;
          if ( (int)v34 < v35 )
          {
            v36 = v35 - v34;
            v37 = v72 + 8 * v34;
            v38 = v73 + 4 * v34;
            v39 = 0;
            do
            {
              v40 = *(double *)(v37 + 2 * v39);
              v41 = *(int *)(v38 + v39);
              a5[v10 + v39 / 4] = v41;
              ++a7[v41];
              a9[v10 + v39 / 4] = v40 * v32 * *(double *)(v29 + 8 * v41);
              v39 += 4LL;
            }
            while ( 4LL * (unsigned int)(v36 - 1) + 4 != v39 );
            v10 += v36;
          }
          a6[v30] = v10;
          result = (unsigned int)v30++;
        }
        while ( (int)*a4 > (int)result );
      }
      return result;
    }
    goto LABEL_23;
  }
  if ( !v29 )
  {
LABEL_3:
    if ( (int)result > 0 )
    {
      v15 = 1;
      do
      {
        v16 = 4LL * a3[v15 - 1];
        v17 = (int *)(v71 + v16);
        v18 = (_DWORD *)(v14 + v16);
        v19 = *v17;
        v20 = v19 + *v18;
        if ( (int)v19 < v20 )
        {
          v21 = (int)v19 + 1;
          v22 = v72 + -8 * v21 + 8 * v19;
          v23 = v73 + 4 * v19 - 4 * v21;
          do
          {
            while ( 1 )
            {
              v24 = *(double *)(v22 + 8 * v21);
              if ( v24 == 0.0 )
                break;
              v25 = *(int *)(v23 + 4 * v21);
              v26 = v10++;
              a5[v26] = v25;
              ++a7[v25];
              a9[v26] = v24;
              v20 = *v17 + *v18;
              LODWORD(v26) = v21++;
              if ( v20 <= (int)v26 )
                goto LABEL_9;
            }
            v42 = v21++;
          }
          while ( v20 > v42 );
        }
LABEL_9:
        v27 = v10 - a6[v15 - 1];
        a6[v15] = v10;
        a8[v15 - 1] = v27;
        result = (unsigned int)v15++;
      }
      while ( (int)*a4 > (int)result );
    }
    return result;
  }
  v54 = *((_QWORD *)a2 + 29);
  if ( (int)result > 0 )
  {
    v55 = 1;
    do
    {
      v56 = a3[v55 - 1];
      v57 = (int *)(v71 + 4 * v56);
      v58 = *(double *)(v54 + 8 * v56);
      v59 = *v57;
      v60 = v59 + *(_DWORD *)(v14 + 4 * v55 - 4);
      if ( (int)v59 < v60 )
      {
        v61 = (int)v59 + 1;
        v62 = v72 + -8 * v61 + 8 * v59;
        v63 = v73 + 4 * v59 - 4 * v61;
        do
        {
          while ( 1 )
          {
            v64 = *(double *)(v62 + 8 * v61);
            if ( v64 == 0.0 )
              break;
            v65 = *(int *)(v63 + 4 * v61);
            v66 = v10++;
            v67 = v64 * v58 * *(double *)(v29 + 8 * v65);
            a5[v66] = v65;
            ++a7[v65];
            v60 = *v57 + *(_DWORD *)(v14 + 4 * v55 - 4);
            a9[v66] = v67;
            LODWORD(v66) = v61++;
            if ( v60 <= (int)v66 )
              goto LABEL_38;
          }
          v69 = v61++;
        }
        while ( v60 > v69 );
      }
LABEL_38:
      v68 = v10 - a6[v55 - 1];
      a6[v55] = v10;
      a8[v55 - 1] = v68;
      result = (unsigned int)v55++;
    }
    while ( (int)*a4 > (int)result );
  }
  return result;
}

