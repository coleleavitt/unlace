void __fastcall CoinDenseVector<float>::gutsOfSetVector(__int64 a1, int a2, unsigned __int64 a3)
{
  _DWORD *v3; // r8
  _DWORD *v4; // rdx
  unsigned int v5; // edi
  __int128 *v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rdi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdi
  _DWORD *v12; // rcx
  int *v13; // rax
  int v14; // xmm0_4

  if ( a2 )
  {
    CoinDenseVector<float>::resize(0.0);
    v3 = *(_DWORD **)(a1 + 8);
    v4 = (_DWORD *)a3;
    *(_DWORD *)a1 = a2;
    if ( (_DWORD *)a3 != v3 )
    {
      v5 = a2 / 8;
      if ( a2 / 8 > 0 )
      {
        if ( ((unsigned __int64)v3 >= a3 + 32 || a3 >= (unsigned __int64)(v3 + 8)) && v5 > 1 )
        {
          v6 = (__int128 *)a3;
          v7 = v3;
          v8 = v5 - 1;
          do
          {
            v9 = *v6;
            v6 += 2;
            v7 += 8;
            v10 = *(v6 - 1);
            *((_OWORD *)v7 - 2) = v9;
            *((_OWORD *)v7 - 1) = v10;
          }
          while ( v6 != (__int128 *)(a3 + 32 + 32 * v8) );
        }
        else
        {
          v12 = v3;
          v13 = (int *)a3;
          v8 = v5 - 1;
          do
          {
            v14 = *v13;
            v13 += 8;
            v12 += 8;
            *(v12 - 8) = v14;
            *(v12 - 7) = *(v13 - 7);
            *(v12 - 6) = *(v13 - 6);
            *(v12 - 5) = *(v13 - 5);
            *(v12 - 4) = *(v13 - 4);
            *(v12 - 3) = *(v13 - 3);
            *(v12 - 2) = *(v13 - 2);
            *(v12 - 1) = *(v13 - 1);
          }
          while ( (int *)(a3 + 32 * (v8 + 1)) != v13 );
        }
        v11 = 32 * ((int)v8 + 1LL);
        v4 = (_DWORD *)(v11 + a3);
        v3 = (_DWORD *)((char *)v3 + v11);
      }
      switch ( a2 % 8 )
      {
        case 1:
          goto LABEL_16;
        case 2:
          goto LABEL_15;
        case 3:
          goto LABEL_14;
        case 4:
          goto LABEL_13;
        case 5:
          goto LABEL_12;
        case 6:
          goto LABEL_11;
        case 7:
          v3[6] = v4[6];
LABEL_11:
          v3[5] = v4[5];
LABEL_12:
          v3[4] = v4[4];
LABEL_13:
          v3[3] = v4[3];
LABEL_14:
          v3[2] = v4[2];
LABEL_15:
          v3[1] = v4[1];
LABEL_16:
          *v3 = *v4;
          break;
        default:
          return;
      }
    }
  }
}

