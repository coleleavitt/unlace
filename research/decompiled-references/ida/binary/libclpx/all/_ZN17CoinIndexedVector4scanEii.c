__int64 __fastcall CoinIndexedVector::scan(CoinIndexedVector *this, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // esi
  __int64 v12; // rcx

  result = 0;
  if ( *((_DWORD *)this + 5) <= a3 )
    a3 = *((_DWORD *)this + 5);
  v4 = *(_QWORD *)this;
  if ( a2 < 0 )
    a2 = 0;
  v5 = 4LL * *((int *)this + 4);
  if ( a2 >= a3 )
  {
    *((_DWORD *)this + 4) = *((_DWORD *)this + 4);
    return 0;
  }
  else
  {
    v6 = a2;
    v7 = *((_QWORD *)this + 1);
    v8 = (unsigned int)(~a2 + a3);
    v9 = a2 + 1LL;
    v10 = v9 + v8;
    while ( 1 )
    {
      v11 = v6;
      if ( *(double *)(v7 + 8 * v6) != 0.0 )
      {
        v12 = (int)result;
        result = (unsigned int)(result + 1);
        *(_DWORD *)(v4 + 4 * v12 + v5) = v11;
      }
      v6 = v9;
      if ( v10 == v9 )
        break;
      ++v9;
    }
    *((_DWORD *)this + 4) += result;
  }
  return result;
}

