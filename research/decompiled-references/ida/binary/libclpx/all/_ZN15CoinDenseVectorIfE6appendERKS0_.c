__int64 __fastcall CoinDenseVector<float>::append(int *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rbp
  __int64 result; // rax
  _DWORD *v6; // rcx
  _DWORD *v7; // rsi
  unsigned int v8; // r8d
  __int128 *v9; // rax
  _DWORD *v10; // rdx
  __int64 v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // rdx
  int *v16; // rax
  int v17; // xmm0_4

  v3 = *(_DWORD *)a2;
  v4 = 4LL * *a1;
  CoinDenseVector<float>::resize(0.0);
  result = *((_QWORD *)a1 + 1);
  v6 = *(_DWORD **)(a2 + 8);
  v7 = (_DWORD *)(result + v4);
  if ( v3 && v7 != v6 )
  {
    v8 = v3 / 8;
    if ( v3 / 8 > 0 )
    {
      if ( (v7 >= v6 + 8 || (unsigned __int64)v6 >= result + v4 + 32) && v8 > 1 )
      {
        v9 = *(__int128 **)(a2 + 8);
        v10 = v7;
        v11 = v8 - 1;
        do
        {
          v12 = *v9;
          v9 += 2;
          v10 += 8;
          v13 = *(v9 - 1);
          *((_OWORD *)v10 - 2) = v12;
          *((_OWORD *)v10 - 1) = v13;
        }
        while ( v9 != (__int128 *)&v6[8 * v11 + 8] );
      }
      else
      {
        v15 = result + v4;
        v16 = *(int **)(a2 + 8);
        v11 = v8 - 1;
        do
        {
          v17 = *v16;
          v16 += 8;
          v15 += 32;
          *(_DWORD *)(v15 - 32) = v17;
          *(_DWORD *)(v15 - 28) = *(v16 - 7);
          *(_DWORD *)(v15 - 24) = *(v16 - 6);
          *(_DWORD *)(v15 - 20) = *(v16 - 5);
          *(_DWORD *)(v15 - 16) = *(v16 - 4);
          *(_DWORD *)(v15 - 12) = *(v16 - 3);
          *(_DWORD *)(v15 - 8) = *(v16 - 2);
          *(_DWORD *)(v15 - 4) = *(v16 - 1);
        }
        while ( &v6[8 * v11 + 8] != v16 );
      }
      v14 = 32 * ((int)v11 + 1LL);
      v6 = (_DWORD *)((char *)v6 + v14);
      v7 = (_DWORD *)((char *)v7 + v14);
    }
    result = (unsigned int)(v3 >> 31) >> 29;
    switch ( v3 % 8 )
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
        v7[6] = v6[6];
LABEL_11:
        v7[5] = v6[5];
LABEL_12:
        v7[4] = v6[4];
LABEL_13:
        v7[3] = v6[3];
LABEL_14:
        v7[2] = v6[2];
LABEL_15:
        v7[1] = v6[1];
LABEL_16:
        *v7 = *v6;
        break;
      default:
        return result;
    }
  }
  return result;
}

