__int64 __fastcall CoinIndexedVector::scan(CoinIndexedVector *this, int a2, int a3, double a4)
{
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  double v13; // xmm1_8
  int v14; // r9d

  result = 0;
  if ( *((_DWORD *)this + 5) <= a3 )
    a3 = *((_DWORD *)this + 5);
  v5 = *(_QWORD *)this;
  if ( a2 < 0 )
    a2 = 0;
  v6 = 4LL * *((int *)this + 4);
  if ( a2 < a3 )
  {
    v7 = a2;
    v8 = *((_QWORD *)this + 1);
    v9 = (unsigned int)(a3 + ~a2);
    v10 = v7 + 1;
    v11 = v7 + 1 + v9;
    while ( 1 )
    {
      v13 = *(double *)(v8 + 8 * v7);
      v14 = v7;
      if ( v13 == 0.0 )
        goto LABEL_8;
      if ( fabs(v13) >= a4 )
        break;
      *(_QWORD *)(v8 + 8 * v7) = 0;
      v7 = v10;
      if ( v10 == v11 )
      {
LABEL_13:
        *((_DWORD *)this + 4) += result;
        return result;
      }
LABEL_9:
      ++v10;
    }
    v12 = (int)result;
    result = (unsigned int)(result + 1);
    *(_DWORD *)(v5 + 4 * v12 + v6) = v14;
LABEL_8:
    v7 = v10;
    if ( v10 == v11 )
      goto LABEL_13;
    goto LABEL_9;
  }
  *((_DWORD *)this + 4) = *((_DWORD *)this + 4);
  return 0;
}

