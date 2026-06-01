__int64 __fastcall CoinFactorization::updateColumnTransposeR(CoinFactorization *this, CoinIndexedVector *a2)
{
  __int64 result; // rax
  int v3; // ebp
  int v4; // ebp
  int v5; // eax

  result = *((unsigned int *)this + 8);
  if ( *((_DWORD *)this + 9) != (_DWORD)result )
  {
    v3 = *((_DWORD *)a2 + 4);
    if ( v3 )
    {
      if ( v3 >= 4 * *((_DWORD *)this + 262)
        && (*((_DWORD *)this + 174) || *((int *)this + 284) < -1 || !*((_QWORD *)this + 141)) )
      {
        v4 = 2 * v3;
        CoinFactorization::updateColumnTransposeRDensish(this, a2);
        v5 = *((_DWORD *)this + 8);
        if ( v4 > v5 )
          v4 = *((_DWORD *)this + 8);
        result = (unsigned int)(v5 + 1);
        *((double *)this + 122) = (double)v4 + *((double *)this + 122);
        *((_DWORD *)a2 + 4) = result;
        if ( !(_DWORD)result )
          *((_BYTE *)a2 + 28) = 0;
      }
      else
      {
        result = CoinFactorization::updateColumnTransposeRSparse(this, a2);
        *((double *)this + 122) = (double)*((int *)a2 + 4) + *((double *)this + 122);
      }
    }
  }
  return result;
}

