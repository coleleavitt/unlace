void __fastcall CoinDenseVector<double>::gutsOfSetConstant(__int64 a1, int a2, double a3)
{
  int v4; // eax
  double *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  double *v8; // rax
  int v9; // edx
  double *v10; // rcx

  if ( a2 )
  {
    CoinDenseVector<double>::resize(0.0);
    v4 = a2 + 7;
    *(_DWORD *)a1 = a2;
    v5 = *(double **)(a1 + 8);
    if ( a2 >= 0 )
      v4 = a2;
    v6 = v4 >> 3;
    if ( v6 > 0 )
    {
      v7 = (unsigned int)(v6 - 1);
      v8 = *(double **)(a1 + 8);
      v9 = v7;
      v10 = &v5[8 * v7 + 8];
      do
      {
        *v8 = a3;
        v8 += 8;
        *(v8 - 7) = a3;
        *(v8 - 6) = a3;
        *(v8 - 5) = a3;
        *(v8 - 4) = a3;
        *(v8 - 3) = a3;
        *(v8 - 2) = a3;
        *(v8 - 1) = a3;
      }
      while ( v8 != v10 );
      v5 += 8 * v9 + 8;
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_15;
      case 2:
        goto LABEL_14;
      case 3:
        goto LABEL_13;
      case 4:
        goto LABEL_12;
      case 5:
        goto LABEL_11;
      case 6:
        goto LABEL_10;
      case 7:
        v5[6] = a3;
LABEL_10:
        v5[5] = a3;
LABEL_11:
        v5[4] = a3;
LABEL_12:
        v5[3] = a3;
LABEL_13:
        v5[2] = a3;
LABEL_14:
        v5[1] = a3;
LABEL_15:
        *v5 = a3;
        break;
      default:
        return;
    }
  }
}

