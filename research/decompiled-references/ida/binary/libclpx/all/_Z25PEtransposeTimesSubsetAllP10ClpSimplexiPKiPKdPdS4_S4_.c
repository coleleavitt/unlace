double *__fastcall PEtransposeTimesSubsetAll(
        ClpSimplex *a1,
        int a2,
        const int *a3,
        const double *a4,
        double *a5,
        const double *a6,
        double *a7)
{
  __int64 v7; // rax
  __int64 (__fastcall *v12)(ClpPackedMatrix *); // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r15
  double *result; // rax
  const int *v18; // r8
  __int64 v19; // rsi
  int v20; // ecx
  int v21; // eax
  double *v22; // r9
  __int64 v23; // rax
  double v24; // xmm1_8
  __int64 v25; // r11
  double *v26; // r10
  __int64 v27; // rax
  __int64 v28; // rcx
  double v29; // xmm0_8
  double *v30; // rdi
  const int *v31; // rsi
  double v32; // xmm0_8
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // r11
  double *v37; // rbp
  __int64 v38; // rax
  double v39; // xmm1_8
  double *v40; // [rsp+0h] [rbp-48h]
  __int64 v41; // [rsp+8h] [rbp-40h]
  const int *v42; // [rsp+8h] [rbp-40h]

  v7 = *((_QWORD *)a1 + 24);
  if ( !v7 )
    BUG();
  v12 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v7;
  if ( v12 == ClpPackedMatrix::getPackedMatrix )
  {
    v13 = *(_QWORD **)(v7 + 88);
  }
  else
  {
    v42 = a3;
    v13 = (_QWORD *)v12((ClpPackedMatrix *)v7);
    a3 = v42;
  }
  v14 = v13[5];
  v15 = v13[6];
  v16 = v13[7];
  result = (double *)v13[4];
  v41 = v14;
  v40 = result;
  if ( a6 )
  {
    if ( a2 > 0 )
    {
      v18 = &a3[a2 - 1 + 1];
      do
      {
        while ( 1 )
        {
          v19 = *a3;
          v20 = *((_DWORD *)a1 + 27);
          v21 = *a3;
          v22 = &a5[v19];
          if ( (int)v19 <= v20 )
            break;
          ++a3;
          result = (double *)(v21 - v20);
          *v22 = -a4[(_QWORD)result];
          if ( v18 == a3 )
            return result;
        }
        v23 = *(int *)(v15 + 4 * v19);
        if ( (int)v23 >= (int)v23 + *(_DWORD *)(v16 + 4 * v19) )
        {
          v24 = 0.0;
        }
        else
        {
          v24 = 0.0;
          v25 = v14 + 4 * v23;
          v26 = &v40[v23];
          v27 = 0;
          do
          {
            v28 = *(int *)(v25 + 4 * v27);
            v29 = a4[v28] * v26[v27++];
            v24 = v24 + v29 * a6[v28];
          }
          while ( (unsigned int)(*(_DWORD *)(v16 + 4 * v19) - 1) + 1LL != v27 );
        }
        result = a7;
        ++a3;
        *v22 = v24 * a7[v19] + *v22;
      }
      while ( v18 != a3 );
    }
  }
  else if ( a2 > 0 )
  {
    v30 = result;
    v31 = &a3[a2 - 1 + 1];
    do
    {
      v33 = *a3;
      v34 = *((_DWORD *)a1 + 27);
      if ( (int)v33 > v34 )
      {
        v32 = -a4[*a3 - v34];
      }
      else
      {
        v35 = *(int *)(v15 + 4 * v33);
        if ( (int)v35 >= (int)v35 + *(_DWORD *)(v16 + 4 * v33) )
        {
          v32 = 0.0;
        }
        else
        {
          v32 = 0.0;
          v36 = v41 + 4 * v35;
          v37 = &v30[v35];
          v38 = 0;
          do
          {
            v39 = a4[*(int *)(v36 + 4 * v38)] * v37[v38];
            ++v38;
            v32 = v32 + v39;
          }
          while ( (unsigned int)(*(_DWORD *)(v16 + 4 * v33) - 1) + 1LL != v38 );
        }
      }
      result = &a5[v33];
      ++a3;
      *result = v32 + *result;
    }
    while ( v31 != a3 );
  }
  return result;
}

