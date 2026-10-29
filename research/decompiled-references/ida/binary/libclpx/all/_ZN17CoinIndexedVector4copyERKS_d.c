__int64 __fastcall CoinIndexedVector::copy(CoinIndexedVector *this, const CoinIndexedVector *a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  int i; // edx
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rdi
  double v13; // xmm1_8
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 j; // rax
  __int64 v20; // rdi
  int v21; // ecx
  double v22; // xmm1_8

  if ( *((_DWORD *)this + 5) == *((_DWORD *)a2 + 5) )
  {
    CoinIndexedVector::clear(this);
    result = *((unsigned __int8 *)a2 + 28);
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 28) = result;
    if ( (_BYTE)result )
    {
      result = *((unsigned int *)a2 + 4);
      if ( (int)result > 0 )
      {
        v5 = *(_QWORD *)a2;
        v6 = *((_QWORD *)a2 + 1);
        result = 1;
        v7 = *((_QWORD *)this + 1);
        v8 = *(_QWORD *)this;
        for ( i = 0; ; i = *((_DWORD *)this + 4) )
        {
          v11 = *(_DWORD *)(v5 + 4 * result - 4);
          v12 = i;
          v13 = *(double *)(v6 + 8 * result - 8) * a3;
          if ( fabs(v13) < 1.0e-50 )
            *(_QWORD *)(v7 + 8LL * i) = 0x2B2BFF2EE48E0530LL;
          else
            *(double *)(v7 + 8LL * i) = v13;
          *((_DWORD *)this + 4) = i + 1;
          v10 = result++;
          *(_DWORD *)(v8 + 4 * v12) = v11;
          if ( *((_DWORD *)a2 + 4) <= v10 )
            break;
        }
      }
    }
    else if ( *((int *)a2 + 4) > 0 )
    {
      v14 = *(_QWORD *)a2;
      v15 = *((_QWORD *)a2 + 1);
      v16 = 1;
      v17 = *((_QWORD *)this + 1);
      v18 = *(_QWORD *)this;
      for ( j = 0; ; j = *((int *)this + 4) )
      {
        v20 = *(int *)(v14 + 4 * v16 - 4);
        v21 = *(_DWORD *)(v14 + 4 * v16 - 4);
        v22 = *(double *)(v15 + 8 * v20) * a3;
        if ( fabs(v22) < 1.0e-50 )
        {
          *(_QWORD *)(v17 + 8 * v20) = 0x2B2BFF2EE48E0530LL;
          *((_DWORD *)this + 4) = j + 1;
          *(_DWORD *)(v18 + 4 * j) = v21;
          result = (unsigned int)v16++;
          if ( (int)result >= *((_DWORD *)a2 + 4) )
            return result;
        }
        else
        {
          *(double *)(v17 + 8 * v20) = v22;
          *((_DWORD *)this + 4) = j + 1;
          *(_DWORD *)(v18 + 4 * j) = v21;
          result = (unsigned int)v16++;
          if ( *((_DWORD *)a2 + 4) <= (int)result )
            return result;
        }
      }
    }
  }
  else
  {
    CoinIndexedVector::operator=(this);
    return CoinIndexedVector::operator*=(this, a3);
  }
  return result;
}

