__int64 __fastcall CoinIndexedVector::scanAndPack(CoinIndexedVector *this, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // r11
  int v5; // ecx
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r9
  double v12; // xmm0_8
  int v13; // esi
  __int64 v14; // rcx
  int v15; // ecx

  result = 0;
  if ( *((_DWORD *)this + 5) <= a3 )
    a3 = *((_DWORD *)this + 5);
  v4 = *(_QWORD *)this;
  if ( a2 < 0 )
    a2 = 0;
  v5 = *((_DWORD *)this + 4);
  v6 = 4LL * v5;
  if ( a2 >= a3 )
  {
    *((_BYTE *)this + 28) = 1;
    *((_DWORD *)this + 4) = v5;
    return 0;
  }
  else
  {
    v7 = a2;
    v8 = *((_QWORD *)this + 1);
    v9 = (unsigned int)(~a2 + a3);
    v10 = a2 + 1LL;
    v11 = v10 + v9;
    while ( 1 )
    {
      v12 = *(double *)(v8 + 8 * v7);
      v13 = v7;
      *(_QWORD *)(v8 + 8 * v7) = 0;
      if ( v12 != 0.0 )
      {
        v14 = (int)result;
        result = (unsigned int)(result + 1);
        *(double *)(v8 + 8 * v14) = v12;
        *(_DWORD *)(v4 + 4 * v14 + v6) = v13;
      }
      v7 = v10;
      if ( v11 == v10 )
        break;
      ++v10;
    }
    v15 = *((_DWORD *)this + 4);
    *((_BYTE *)this + 28) = 1;
    *((_DWORD *)this + 4) = result + v15;
  }
  return result;
}

