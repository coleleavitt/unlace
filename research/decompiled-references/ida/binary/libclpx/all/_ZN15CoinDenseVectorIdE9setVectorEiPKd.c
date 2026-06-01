__int64 __fastcall CoinDenseVector<double>::setVector(__int64 a1, int a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // xmm0_8
  __int64 v9; // rax

  result = CoinDenseVector<double>::resize(0.0);
  v5 = *(__int64 **)(a1 + 8);
  if ( a2 && v5 != a3 )
  {
    if ( a2 >> 3 > 0 )
    {
      v6 = a3;
      v7 = *(__int64 **)(a1 + 8);
      do
      {
        v8 = *v6;
        v7 += 8;
        v6 += 8;
        *(v7 - 8) = v8;
        *(v7 - 7) = *(v6 - 7);
        *(v7 - 6) = *(v6 - 6);
        *(v7 - 5) = *(v6 - 5);
        *(v7 - 4) = *(v6 - 4);
        *(v7 - 3) = *(v6 - 3);
        *(v7 - 2) = *(v6 - 2);
        *(v7 - 1) = *(v6 - 1);
      }
      while ( v7 != &v5[8 * (unsigned int)((a2 >> 3) - 1) + 8] );
      v9 = ((a2 >> 3) - 1 + 1LL) << 6;
      a3 = (__int64 *)((char *)a3 + v9);
      v5 = (__int64 *)((char *)v5 + v9);
    }
    result = (unsigned int)(a2 >> 31) >> 29;
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_13;
      case 3:
        goto LABEL_12;
      case 4:
        goto LABEL_11;
      case 5:
        goto LABEL_10;
      case 6:
        goto LABEL_9;
      case 7:
        v5[6] = a3[6];
LABEL_9:
        v5[5] = a3[5];
LABEL_10:
        v5[4] = a3[4];
LABEL_11:
        v5[3] = a3[3];
LABEL_12:
        v5[2] = a3[2];
LABEL_13:
        v5[1] = a3[1];
LABEL_14:
        *v5 = *a3;
        break;
      default:
        return result;
    }
  }
  return result;
}

