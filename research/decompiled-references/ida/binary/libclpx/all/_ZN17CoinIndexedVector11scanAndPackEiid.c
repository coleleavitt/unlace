__int64 __fastcall CoinIndexedVector::scanAndPack(CoinIndexedVector *this, int a2, int a3, double a4)
{
  __int64 result; // rax
  __int64 v5; // r11
  int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r9
  double v13; // xmm1_8
  __int64 v14; // rsi
  int v15; // ecx

  result = 0;
  if ( *((_DWORD *)this + 5) <= a3 )
    a3 = *((_DWORD *)this + 5);
  v5 = *(_QWORD *)this;
  if ( a2 < 0 )
    a2 = 0;
  v6 = *((_DWORD *)this + 4);
  v7 = 4LL * v6;
  if ( a2 >= a3 )
  {
    *((_BYTE *)this + 28) = 1;
    *((_DWORD *)this + 4) = v6;
    return 0;
  }
  else
  {
    v8 = a2;
    v9 = *((_QWORD *)this + 1);
    v10 = (unsigned int)(~a2 + a3);
    v11 = a2 + 1LL;
    v12 = v11 + v10;
    while ( 1 )
    {
      v13 = *(double *)(v9 + 8 * v8);
      *(_QWORD *)(v9 + 8 * v8) = 0;
      if ( fabs(v13) >= a4 )
      {
        v14 = (int)result;
        result = (unsigned int)(result + 1);
        *(double *)(v9 + 8 * v14) = v13;
        *(_DWORD *)(v5 + 4 * v14 + v7) = v8;
      }
      v8 = v11;
      if ( v12 == v11 )
        break;
      ++v11;
    }
    v15 = *((_DWORD *)this + 4);
    *((_BYTE *)this + 28) = 1;
    *((_DWORD *)this + 4) = result + v15;
  }
  return result;
}

