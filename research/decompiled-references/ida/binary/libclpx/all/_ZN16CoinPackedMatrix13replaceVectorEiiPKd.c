void __fastcall CoinPackedMatrix::replaceVector(CoinPackedMatrix *this, int a2, int a3, double *a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  double *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // xmm0_8
  __int64 v9; // rax

  if ( a2 >= 0 && *((_DWORD *)this + 16) > a2 )
  {
    v4 = *((_QWORD *)this + 7);
    if ( *(_DWORD *)(v4 + 4LL * a2) <= a3 )
      a3 = *(_DWORD *)(v4 + 4LL * a2);
    v5 = *((_QWORD *)this + 4) + 8LL * *(int *)(*((_QWORD *)this + 6) + 4LL * a2);
    if ( a3 && (double *)v5 != a4 )
    {
      if ( a3 >> 3 > 0 )
      {
        v6 = a4;
        v7 = v5;
        do
        {
          v8 = *(_QWORD *)v6;
          v7 += 64;
          v6 += 8;
          *(_QWORD *)(v7 - 64) = v8;
          *(double *)(v7 - 56) = *(v6 - 7);
          *(double *)(v7 - 48) = *(v6 - 6);
          *(double *)(v7 - 40) = *(v6 - 5);
          *(double *)(v7 - 32) = *(v6 - 4);
          *(double *)(v7 - 24) = *(v6 - 3);
          *(double *)(v7 - 16) = *(v6 - 2);
          *(double *)(v7 - 8) = *(v6 - 1);
        }
        while ( v7 != v5 + (((unsigned int)((a3 >> 3) - 1) + 1LL) << 6) );
        v9 = ((a3 >> 3) - 1 + 1LL) << 6;
        a4 = (double *)((char *)a4 + v9);
        v5 += v9;
      }
      switch ( a3 % 8 )
      {
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_17;
        case 3:
          goto LABEL_16;
        case 4:
          goto LABEL_15;
        case 5:
          goto LABEL_14;
        case 6:
          goto LABEL_13;
        case 7:
          *(double *)(v5 + 48) = a4[6];
LABEL_13:
          *(double *)(v5 + 40) = a4[5];
LABEL_14:
          *(double *)(v5 + 32) = a4[4];
LABEL_15:
          *(double *)(v5 + 24) = a4[3];
LABEL_16:
          *(double *)(v5 + 16) = a4[2];
LABEL_17:
          *(double *)(v5 + 8) = a4[1];
LABEL_18:
          *(double *)v5 = *a4;
          break;
        default:
          return;
      }
    }
  }
}

