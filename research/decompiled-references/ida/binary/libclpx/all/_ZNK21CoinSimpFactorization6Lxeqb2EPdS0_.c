__int64 __fastcall CoinSimpFactorization::Lxeqb2(CoinSimpFactorization *this, double *a2, double *a3)
{
  int v3; // ecx
  __int64 result; // rax
  __int64 v5; // r8
  int *v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rcx
  double v9; // xmm1_8
  double v10; // xmm2_8
  __int64 v11; // r8
  __int64 v12; // r11
  double *v13; // r8
  __int64 v14; // rcx
  double v15; // xmm2_8
  __int64 v16; // rcx
  double v17; // xmm3_8
  __int64 v18; // r8
  __int64 v19; // r9
  double *i; // rcx
  __int64 v21; // r8
  double v22; // xmm1_8

  v3 = *((_DWORD *)this + 142);
  result = *((unsigned int *)this + 9);
  if ( v3 < (int)result )
  {
    v5 = *((_QWORD *)this + 53);
    result = v3 + (unsigned __int64)(unsigned int)(result - 1 - v3);
    v6 = (int *)(v5 + 4LL * v3);
    v7 = v5 + 4 * result + 4;
    while ( 1 )
    {
      v8 = *v6;
      v9 = a2[v8];
      v10 = a3[v8];
      if ( v9 == 0.0 )
        break;
      v11 = *(int *)(*((_QWORD *)this + 28) + 4 * v8);
      result = *((_QWORD *)this + 31) + 4 * v11;
      v12 = result + 4LL * *(int *)(*((_QWORD *)this + 29) + 4 * v8);
      v13 = (double *)(*((_QWORD *)this + 30) + 8 * v11);
      if ( v10 == 0.0 )
      {
        while ( result != v12 )
        {
          v14 = *(int *)result;
          v15 = *v13;
          result += 4;
          ++v13;
          a2[v14] = a2[v14] - v15 * v9;
        }
        if ( ++v6 == (int *)v7 )
          return result;
      }
      else
      {
        while ( result != v12 )
        {
          v16 = *(int *)result;
          v17 = *v13;
          result += 4;
          ++v13;
          v16 *= 8;
          *(double *)((char *)a2 + v16) = *(double *)((char *)a2 + v16) - v17 * v9;
          *(double *)((char *)a3 + v16) = *(double *)((char *)a3 + v16) - *(v13 - 1) * v10;
        }
LABEL_4:
        if ( ++v6 == (int *)v7 )
          return result;
      }
    }
    if ( v10 != 0.0 )
    {
      v18 = *(int *)(*((_QWORD *)this + 28) + 4 * v8);
      result = *((_QWORD *)this + 31) + 4 * v18;
      v19 = result + 4LL * *(int *)(*((_QWORD *)this + 29) + 4 * v8);
      for ( i = (double *)(*((_QWORD *)this + 30) + 8 * v18); v19 != result; a3[v21] = a3[v21] - v22 * v10 )
      {
        v21 = *(int *)result;
        v22 = *i;
        result += 4;
        ++i;
      }
    }
    goto LABEL_4;
  }
  return result;
}

