__int64 __fastcall CoinDenseVector<float>::setVector(__int64 a1, int a2, __int128 *a3)
{
  __int64 result; // rax
  __int128 *v7; // rsi
  unsigned int v8; // edi
  __int128 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rcx
  int *v16; // rax
  int v17; // xmm0_4

  result = CoinDenseVector<float>::resize(0.0);
  v7 = *(__int128 **)(a1 + 8);
  if ( a2 && v7 != a3 )
  {
    v8 = a2 >> 3;
    if ( a2 >> 3 > 0 )
    {
      if ( (v7 >= a3 + 2 || a3 >= v7 + 2) && v8 > 1 )
      {
        v9 = a3;
        v10 = *(_QWORD *)(a1 + 8);
        v11 = v8 - 1;
        do
        {
          v12 = *v9;
          v9 += 2;
          v10 += 32;
          v13 = *(v9 - 1);
          *(_OWORD *)(v10 - 32) = v12;
          *(_OWORD *)(v10 - 16) = v13;
        }
        while ( v9 != &a3[2 * v11 + 2] );
      }
      else
      {
        v15 = *(_QWORD *)(a1 + 8);
        v16 = (int *)a3;
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
        while ( &a3[2 * v11 + 2] != (__int128 *)v16 );
      }
      v14 = 32 * ((int)v11 + 1LL);
      a3 = (__int128 *)((char *)a3 + v14);
      v7 = (__int128 *)((char *)v7 + v14);
    }
    result = (unsigned int)(a2 >> 31) >> 29;
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
        *((_DWORD *)v7 + 6) = *((_DWORD *)a3 + 6);
LABEL_11:
        *((_DWORD *)v7 + 5) = *((_DWORD *)a3 + 5);
LABEL_12:
        *((_DWORD *)v7 + 4) = *((_DWORD *)a3 + 4);
LABEL_13:
        *((_DWORD *)v7 + 3) = *((_DWORD *)a3 + 3);
LABEL_14:
        *((_DWORD *)v7 + 2) = *((_DWORD *)a3 + 2);
LABEL_15:
        *((_DWORD *)v7 + 1) = *((_DWORD *)a3 + 1);
LABEL_16:
        *(_DWORD *)v7 = *(_DWORD *)a3;
        break;
      default:
        return result;
    }
  }
  return result;
}

