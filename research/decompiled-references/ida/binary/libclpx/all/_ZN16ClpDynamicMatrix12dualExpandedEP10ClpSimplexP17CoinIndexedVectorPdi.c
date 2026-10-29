void __fastcall ClpDynamicMatrix::dualExpanded(
        ClpDynamicMatrix *this,
        ClpSimplex *a2,
        CoinIndexedVector *a3,
        double *a4,
        int a5)
{
  double v5; // xmm0_8
  int v6; // eax
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  double v14; // xmm4_8
  __int64 v15; // r10
  double v16; // xmm3_8
  double v17; // xmm3_8
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rbp
  int v22; // eax
  double v23; // xmm2_8
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // r11
  char v27; // si
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // ecx
  double v31; // xmm1_8
  __int64 v32; // r8
  __int64 v33; // r15
  __int64 v34; // r9
  __int64 v35; // rax
  double v36; // xmm0_8
  double v37; // xmm1_8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  double v44; // xmm0_8
  char v45; // al
  double v46; // xmm0_8
  double v47; // xmm0_8

  if ( a5 == 2 )
  {
    v6 = *((_DWORD *)this + 66) + *((_DWORD *)this + 51);
    v7 = *((_QWORD *)a2 + 157);
    v8 = *((_DWORD *)a2 + 27);
    if ( v6 > 0 )
    {
      v9 = (unsigned int)(v6 - 1);
      v10 = 0;
      v11 = v9 + 1;
      do
      {
        v12 = *(int *)(v7 + 4 * v10);
        if ( v8 > (int)v12 )
          *(_DWORD *)(*((_QWORD *)this + 21) + 4 * v12) = v10;
        ++v10;
      }
      while ( v11 != v10 );
    }
    if ( *((int *)this + 70) >= 0 && *((double *)this + 36) != *(double *)(*((_QWORD *)this + 30) + 904LL) )
    {
      *((_DWORD *)this + 68) = 1;
      *((_QWORD *)this + 15) = 0x4059000000000000LL;
      *((_QWORD *)this + 17) = 0x4059000000000000LL;
      return;
    }
    v13 = *((_DWORD *)this + 50);
    v14 = *((double *)a2 + 3);
    v15 = *((_QWORD *)a2 + 16);
    v16 = fmin(0.01, *((double *)a2 + 96));
    *((_QWORD *)this + 15) = 0;
    *((_DWORD *)this + 68) = 0;
    *((_QWORD *)this + 17) = 0;
    v17 = v16 + v14 - v14;
    if ( v13 <= 0 )
    {
      *((_QWORD *)this + 36) = 0xBFF0000000000000LL;
      return;
    }
    v18 = *((_QWORD *)this + 23);
    v19 = *((_QWORD *)this + 39);
    v20 = (unsigned int)(v13 - 1) + 1LL;
    v21 = 0;
    while ( 1 )
    {
      v22 = *(_DWORD *)(v18 + 4 * v21);
      if ( v22 >= 0 )
      {
        v23 = *(double *)(v15 + 8LL * (*((_DWORD *)this + 66) + v22));
        goto LABEL_16;
      }
      v23 = 0.0;
      v38 = *(int *)(*((_QWORD *)this + 22) + 4 * v21);
      if ( (int)v38 < *((_DWORD *)this + 75) )
      {
        v39 = *((_QWORD *)this + 41);
        v23 = *(double *)(*((_QWORD *)this + 44) + 8 * v38);
        v40 = *(int *)(v39 + 4 * v38);
        v41 = *(_DWORD *)(v39 + 4 * v38 + 4);
        if ( (int)v40 < v41 )
        {
          v42 = (unsigned int)(v41 - v40 - 1) + 1LL;
          v43 = 0;
          do
          {
            v44 = *(double *)(v15 + 8LL * *(int *)(*((_QWORD *)this + 42) + 4 * v40 + 4 * v43))
                * *(double *)(*((_QWORD *)this + 43) + 8 * v40 + 8 * v43);
            ++v43;
            v23 = v23 - v44;
          }
          while ( v42 != v43 );
        }
        v45 = *(_BYTE *)(*((_QWORD *)this + 29) + v21) & 7;
        if ( v45 == 3 )
        {
          v46 = -v23;
          if ( -v23 <= v14 )
            goto LABEL_16;
        }
        else
        {
          if ( v45 != 2 || v23 <= v14 )
            goto LABEL_16;
          v46 = v23;
        }
        v47 = v46 - v14;
        if ( v47 > 0.0 )
        {
          *((double *)this + 15) = *((double *)this + 15) + v47;
          if ( v47 > v17 )
            *((double *)this + 17) = v47 + *((double *)this + 17);
          ++*((_DWORD *)this + 68);
        }
      }
LABEL_16:
      v24 = *(int *)(v19 + 4 * v21);
      if ( (int)v24 >= 0 )
      {
        v25 = *((_QWORD *)this + 46);
        v26 = *((_QWORD *)this + 40);
        do
        {
          v27 = *(_BYTE *)(v25 + v24) & 7;
          if ( v27 != 1 )
          {
            v28 = *((_QWORD *)this + 41);
            v29 = *(int *)(v28 + 4 * v24);
            v30 = *(_DWORD *)(v28 + 4 * v24 + 4);
            v31 = *(double *)(*((_QWORD *)this + 44) + 8 * v24) - v23;
            if ( (int)v29 < v30 )
            {
              v32 = (unsigned int)(v30 - v29 - 1) + 1LL;
              v33 = *((_QWORD *)this + 42) + 4 * v29;
              v34 = *((_QWORD *)this + 43) + 8 * v29;
              v35 = 0;
              do
              {
                v36 = *(double *)(v15 + 8LL * *(int *)(v33 + 4 * v35)) * *(double *)(v34 + 8 * v35);
                ++v35;
                v31 = v31 - v36;
              }
              while ( v35 != v32 );
            }
            if ( v27 == 3 )
            {
              if ( -v14 > v31 )
              {
                v37 = -v31 - v14;
                goto LABEL_29;
              }
            }
            else if ( v27 == 2 && v31 > v14 )
            {
              v37 = v31 - v14;
LABEL_29:
              if ( v37 > 0.0 )
              {
                *((double *)this + 15) = *((double *)this + 15) + v37;
                if ( v37 > v17 )
                  *((double *)this + 17) = v37 + *((double *)this + 17);
                ++*((_DWORD *)this + 68);
              }
            }
          }
          v24 = *(int *)(v26 + 4 * v24);
        }
        while ( (int)v24 >= 0 );
      }
      if ( v20 == ++v21 )
      {
        *((_QWORD *)this + 36) = 0xBFF0000000000000LL;
        return;
      }
    }
  }
  if ( a5 == 3 )
  {
    v5 = *((double *)a2 + 111) + *((double *)this + 15);
    *((_DWORD *)a2 + 306) += *((_DWORD *)this + 68);
    *((double *)a2 + 111) = v5;
    *((double *)a2 + 114) = *((double *)a2 + 114) + *((double *)this + 17);
  }
}

