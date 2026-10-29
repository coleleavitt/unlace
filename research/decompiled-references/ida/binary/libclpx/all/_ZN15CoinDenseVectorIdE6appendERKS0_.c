__int64 __fastcall CoinDenseVector<double>::append(int *a1, __int64 a2)
{
  __int64 v3; // rbp
  int v4; // ebx
  __int64 result; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  __int64 *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // xmm0_8
  __int64 v11; // rax

  v3 = *a1;
  v4 = *(_DWORD *)a2;
  CoinDenseVector<double>::resize(0.0);
  result = *((_QWORD *)a1 + 1);
  v6 = *(_QWORD **)(a2 + 8);
  v7 = (_QWORD *)(result + 8 * v3);
  if ( v4 && v7 != v6 )
  {
    if ( v4 / 8 > 0 )
    {
      v8 = *(__int64 **)(a2 + 8);
      v9 = (_QWORD *)(result + 8 * v3);
      do
      {
        v10 = *v8;
        v9 += 8;
        v8 += 8;
        *(v9 - 8) = v10;
        *(v9 - 7) = *(v8 - 7);
        *(v9 - 6) = *(v8 - 6);
        *(v9 - 5) = *(v8 - 5);
        *(v9 - 4) = *(v8 - 4);
        *(v9 - 3) = *(v8 - 3);
        *(v9 - 2) = *(v8 - 2);
        *(v9 - 1) = *(v8 - 1);
      }
      while ( v9 != &v7[8 * (unsigned int)(v4 / 8 - 1) + 8] );
      v11 = (v4 / 8 - 1 + 1LL) << 6;
      v6 = (_QWORD *)((char *)v6 + v11);
      v7 = (_QWORD *)((char *)v7 + v11);
    }
    result = (unsigned int)(v4 >> 31) >> 29;
    switch ( v4 % 8 )
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
        v7[6] = v6[6];
LABEL_9:
        v7[5] = v6[5];
LABEL_10:
        v7[4] = v6[4];
LABEL_11:
        v7[3] = v6[3];
LABEL_12:
        v7[2] = v6[2];
LABEL_13:
        v7[1] = v6[1];
LABEL_14:
        *v7 = *v6;
        break;
      default:
        return result;
    }
  }
  return result;
}

