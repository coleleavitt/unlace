double __fastcall ClpQuadraticObjective::objectiveValue(
        ClpQuadraticObjective *this,
        const ClpSimplex *a2,
        const double *a3)
{
  bool v3; // bp
  __int64 v4; // rcx
  int v5; // eax
  double v6; // xmm1_8
  double result; // xmm0_8
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  double v10; // xmm2_8
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  int v16; // eax
  double v17; // xmm5_8
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // ecx
  double v23; // xmm4_8
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rsi
  double v28; // xmm2_8
  double v29; // xmm3_8
  __int64 v30; // r8
  __int64 v31; // r13
  __int64 v32; // rax
  double v33; // xmm4_8
  __int64 v34; // r14
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rsi
  double v38; // xmm3_8
  double v39; // xmm2_8
  unsigned __int64 v40; // rbp
  __int64 v41; // r12
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rax
  double v47; // xmm2_8
  __int64 v48; // r8
  __int64 v49; // r14
  __int64 v50; // rax
  int v51; // ecx
  double v52; // xmm4_8
  __int64 v53; // r13
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rsi
  double v57; // xmm3_8
  double v58; // xmm2_8

  if ( a2 )
  {
    v3 = 1;
    if ( *((_QWORD *)a2 + 28) )
    {
      v4 = *((_QWORD *)a2 + 129);
      if ( v4 )
        goto LABEL_4;
    }
    else
    {
      v4 = *((_QWORD *)a2 + 129);
      v3 = *((double *)a2 + 11) != 1.0;
      if ( v4 )
      {
LABEL_4:
        v5 = *((_DWORD *)a2 + 27);
        if ( v5 > 0 )
          goto LABEL_5;
LABEL_24:
        v6 = 0.0;
        result = 0.0;
        goto LABEL_7;
      }
    }
  }
  v5 = *((_DWORD *)a2 + 27);
  v3 = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v5 <= 0 )
    goto LABEL_24;
LABEL_5:
  v6 = 0.0;
  result = 0.0;
  v8 = 8LL * (unsigned int)(v5 - 1) + 8;
  v9 = 0;
  do
  {
    v10 = *(double *)(v4 + v9) * a3[v9 / 8];
    v9 += 8LL;
    result = result + v10;
  }
  while ( v8 != v9 );
LABEL_7:
  if ( *((_DWORD *)this + 5) )
  {
    v11 = *((_QWORD **)this + 3);
    if ( v11 )
    {
      v12 = v11[5];
      v13 = v11[6];
      v14 = v11[7];
      v15 = v11[4];
      v16 = *((_DWORD *)this + 12);
      if ( v3 )
      {
        v17 = *((double *)a2 + 11);
        v18 = *((_QWORD *)a2 + 29);
        if ( v17 != 0.0 )
          v17 = 1.0 / v17;
        if ( v18 )
        {
          if ( v16 > 0 )
          {
            v19 = 0;
            v20 = (unsigned int)(v16 - 1) + 1LL;
            do
            {
              v21 = *(int *)(v13 + 4 * v19);
              v22 = *(_DWORD *)(v14 + 4 * v19);
              v23 = a3[v19];
              if ( (int)v21 < (int)v21 + v22 )
              {
                v24 = v12 + 4 * v21;
                v25 = v15 + 8 * v21;
                v26 = 0;
                do
                {
                  v27 = *(int *)(v24 + 4 * v26);
                  v28 = a3[v27];
                  v29 = *(double *)(v18 + 8 * v27) * (*(double *)(v18 + 8 * v19) * v17) * *(double *)(v25 + 8 * v26);
                  if ( (_DWORD)v27 == (_DWORD)v19 )
                    v28 = v23 * 0.5;
                  ++v26;
                  v6 = v6 + v28 * v23 * v29;
                }
                while ( (unsigned int)(v22 - 1) + 1LL != v26 );
              }
              ++v19;
            }
            while ( v20 != v19 );
          }
        }
        else if ( v16 > 0 )
        {
          v48 = 0;
          v49 = (unsigned int)(v16 - 1) + 1LL;
          do
          {
            v50 = *(int *)(v13 + 4 * v48);
            v51 = *(_DWORD *)(v14 + 4 * v48);
            v52 = a3[v48];
            if ( (int)v50 < (int)v50 + v51 )
            {
              v53 = v12 + 4 * v50;
              v54 = v15 + 8 * v50;
              v55 = 0;
              do
              {
                v56 = *(int *)(v53 + 4 * v55);
                v57 = *(double *)(v54 + 8 * v55) * v17;
                v58 = a3[v56];
                if ( (_DWORD)v56 == (_DWORD)v48 )
                  v58 = v52 * 0.5;
                ++v55;
                v6 = v6 + v58 * v52 * v57;
              }
              while ( (unsigned int)(v51 - 1) + 1LL != v55 );
            }
            ++v48;
          }
          while ( v49 != v48 );
        }
      }
      else if ( *((_BYTE *)this + 56) )
      {
        if ( v16 > 0 )
        {
          v40 = 0;
          v41 = 4LL * (unsigned int)(v16 - 1) + 4;
          do
          {
            v42 = *(int *)(v13 + v40);
            v43 = *(_DWORD *)(v14 + v40);
            if ( (int)v42 < (int)v42 + v43 )
            {
              v44 = v12 + 4 * v42;
              v45 = v15 + 8 * v42;
              v46 = 0;
              do
              {
                v47 = a3[*(int *)(v44 + 4 * v46)] * *(double *)(v45 + 8 * v46);
                ++v46;
                v6 = v6 + v47 * a3[v40 / 4];
              }
              while ( (unsigned int)(v43 - 1) + 1LL != v46 );
            }
            v40 += 4LL;
          }
          while ( v41 != v40 );
          v6 = v6 * 0.5;
        }
      }
      else if ( v16 > 0 )
      {
        v30 = 0;
        v31 = (unsigned int)(v16 - 1) + 1LL;
        do
        {
          v32 = *(int *)(v13 + 4 * v30);
          v33 = a3[v30];
          if ( (int)v32 < (int)v32 + *(_DWORD *)(v14 + 4 * v30) )
          {
            v34 = v12 + 4 * v32;
            v35 = v15 + 8 * v32;
            v36 = 0;
            do
            {
              v37 = *(int *)(v34 + 4 * v36);
              v38 = *(double *)(v35 + 8 * v36);
              v39 = a3[v37];
              if ( (_DWORD)v37 == (_DWORD)v30 )
                v39 = v33 * 0.5;
              ++v36;
              v6 = v6 + v39 * v33 * v38;
            }
            while ( (unsigned int)(*(_DWORD *)(v14 + 4 * v30) - 1) + 1LL != v36 );
          }
          ++v30;
        }
        while ( v31 != v30 );
      }
      return result + v6;
    }
  }
  return result;
}

