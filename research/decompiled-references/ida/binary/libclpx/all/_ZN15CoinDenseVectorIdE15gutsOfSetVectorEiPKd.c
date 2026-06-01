void __fastcall CoinDenseVector<double>::gutsOfSetVector(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx
  __int64 *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // xmm0_8
  __int64 v9; // rax

  if ( a2 )
  {
    CoinDenseVector<double>::resize(0.0);
    v4 = *(_QWORD **)(a1 + 8);
    v5 = a3;
    *(_DWORD *)a1 = a2;
    if ( a3 != v4 )
    {
      if ( a2 / 8 > 0 )
      {
        v6 = a3;
        v7 = v4;
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
        while ( v7 != &v4[8 * (unsigned int)(a2 / 8 - 1) + 8] );
        v9 = (a2 / 8 - 1 + 1LL) << 6;
        v5 = (_QWORD *)((char *)a3 + v9);
        v4 = (_QWORD *)((char *)v4 + v9);
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
          v4[6] = v5[6];
LABEL_9:
          v4[5] = v5[5];
LABEL_10:
          v4[4] = v5[4];
LABEL_11:
          v4[3] = v5[3];
LABEL_12:
          v4[2] = v5[2];
LABEL_13:
          v4[1] = v5[1];
LABEL_14:
          *v4 = *v5;
          break;
        default:
          return;
      }
    }
  }
}

