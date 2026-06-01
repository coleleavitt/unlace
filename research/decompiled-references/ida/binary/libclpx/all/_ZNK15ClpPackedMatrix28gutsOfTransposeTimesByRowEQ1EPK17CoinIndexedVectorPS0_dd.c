__int64 __fastcall ClpPackedMatrix::gutsOfTransposeTimesByRowEQ1(
        ClpPackedMatrix *this,
        double **a2,
        CoinIndexedVector *a3,
        double a4,
        double a5)
{
  _QWORD *v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdi
  double v11; // xmm1_8
  __int64 result; // rax
  int *v13; // r9
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rdi
  __int64 v17; // rbx
  int v18; // ecx
  double v19; // xmm2_8
  int v20; // r8d
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r8d

  v5 = *((_QWORD **)this + 11);
  v6 = *(_QWORD *)a3;
  v7 = *((_QWORD *)a3 + 1);
  v8 = v5[6];
  v9 = v5[5];
  v10 = v5[4];
  v11 = a5 * *a2[1];
  result = *(int *)*a2;
  v13 = (int *)(v8 + 4 * result + 4);
  v14 = *(int *)(v8 + 4 * result);
  v15 = *v13;
  if ( (int)v14 >= *v13 )
  {
    *((_DWORD *)a3 + 4) = 0;
LABEL_9:
    *((_BYTE *)a3 + 28) = 0;
    return result;
  }
  result = (int)v14 + 1;
  v16 = -8 * result + 8 * v14 + v10;
  v17 = 4 * v14 - 4 * result + v9;
  v18 = 0;
  do
  {
    while ( 1 )
    {
      v19 = *(double *)(v16 + 8 * result) * v11;
      if ( fabs(v19) <= a4 )
        break;
      v20 = *(_DWORD *)(v17 + 4 * result);
      v21 = v18++;
      *(double *)(v7 + 8 * v21) = v19;
      *(_DWORD *)(v6 + 4 * v21) = v20;
      v22 = result++;
      v15 = *v13;
      if ( v22 >= *v13 )
      {
        *((_DWORD *)a3 + 4) = v18;
        return result;
      }
    }
    v23 = result++;
  }
  while ( v23 < v15 );
  *((_DWORD *)a3 + 4) = v18;
  if ( !v18 )
    goto LABEL_9;
  return result;
}

