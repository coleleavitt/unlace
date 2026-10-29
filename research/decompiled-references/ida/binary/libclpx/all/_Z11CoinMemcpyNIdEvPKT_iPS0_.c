void __fastcall CoinMemcpyN<double>(__int64 *a1, int a2, __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // xmm0_8
  __int64 v6; // rax

  if ( a2 && a1 != a3 )
  {
    if ( a2 >> 3 > 0 )
    {
      v3 = a1;
      v4 = a3;
      do
      {
        v5 = *v3;
        v4 += 8;
        v3 += 8;
        *(v4 - 8) = v5;
        *(v4 - 7) = *(v3 - 7);
        *(v4 - 6) = *(v3 - 6);
        *(v4 - 5) = *(v3 - 5);
        *(v4 - 4) = *(v3 - 4);
        *(v4 - 3) = *(v3 - 3);
        *(v4 - 2) = *(v3 - 2);
        *(v4 - 1) = *(v3 - 1);
      }
      while ( v4 != &a3[8 * (unsigned int)((a2 >> 3) - 1) + 8] );
      v6 = ((a2 >> 3) - 1 + 1LL) << 6;
      a1 = (__int64 *)((char *)a1 + v6);
      a3 = (__int64 *)((char *)a3 + v6);
    }
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
        a3[6] = a1[6];
LABEL_9:
        a3[5] = a1[5];
LABEL_10:
        a3[4] = a1[4];
LABEL_11:
        a3[3] = a1[3];
LABEL_12:
        a3[2] = a1[2];
LABEL_13:
        a3[1] = a1[1];
LABEL_14:
        *a3 = *a1;
        break;
      default:
        return;
    }
  }
}

