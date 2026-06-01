double __fastcall CoinPackedMatrix::getCoefficient(CoinPackedMatrix *this, int a2, int a3)
{
  int v3; // eax
  double result; // xmm0_8
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx

  if ( !*((_BYTE *)this + 8) )
  {
    v3 = a2;
    a2 = a3;
    a3 = v3;
  }
  if ( a3 < 0 )
    return 0.0;
  result = 0.0;
  if ( *((_DWORD *)this + 16) > a3 && a2 >= 0 && *((_DWORD *)this + 17) > a2 )
  {
    v5 = *(int *)(*((_QWORD *)this + 6) + 4LL * a3);
    v6 = *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * a3);
    if ( (int)v5 < (int)v5 + v6 )
    {
      v7 = *((_QWORD *)this + 5);
      if ( a2 != *(_DWORD *)(v7 + 4 * v5) )
      {
        v8 = ++v5 + (unsigned int)(v6 - 1);
        while ( v8 != v5 )
        {
          if ( *(_DWORD *)(v7 + 4 * (v5 + 1) - 4) == a2 )
            return *(double *)(*((_QWORD *)this + 4) + 8 * v5);
          ++v5;
        }
        return 0.0;
      }
      return *(double *)(*((_QWORD *)this + 4) + 8 * v5);
    }
  }
  return result;
}

