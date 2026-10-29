__int64 __fastcall CoinSimpFactorization::xLeqb(CoinSimpFactorization *this, double *a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rcx
  double v5; // xmm1_8
  int *v6; // rdx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // r9
  int *v13; // r8
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  double *v17; // rbp
  __int64 v18; // rdi
  __int64 i; // rdx
  __int64 v20; // rcx

  result = (unsigned int)(*((_DWORD *)this + 10) - 1);
  if ( (int)result >= 0 )
  {
    v3 = *((_QWORD *)this + 53);
    v4 = 4LL * (int)result;
    v5 = a2[*(int *)(v3 + v4)];
    v6 = (int *)(v3 + v4 - 4);
    if ( v5 == 0.0 )
    {
      while ( 1 )
      {
        result = (unsigned int)(result - 1);
        if ( (_DWORD)result == -1 )
          break;
        v7 = *v6--;
        v5 = a2[v7];
        if ( v5 != 0.0 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v8 = *((_DWORD *)this + 142);
      if ( v8 <= (int)result )
      {
        v9 = *((_QWORD *)this + 28);
        v10 = *((_QWORD *)this + 31);
        v11 = *((_QWORD *)this + 29);
        v12 = *((_QWORD *)this + 30);
        v13 = (int *)(v3 + 4LL * (int)result);
        v14 = (__int64)&v13[-(unsigned int)(result - v8) - 1];
        while ( 1 )
        {
          v15 = *v13;
          v16 = *(int *)(v9 + 4 * v15);
          v17 = &a2[v15];
          result = v10 + 4 * v16;
          v18 = result + 4LL * *(int *)(v11 + 4 * v15);
          for ( i = v12 + 8 * v16; v18 != result; v5 = v5 - a2[v20] * *(double *)(i - 8) )
          {
            v20 = *(int *)result;
            result += 4;
            i += 8;
          }
          --v13;
          *v17 = v5;
          if ( (int *)v14 == v13 )
            break;
          v5 = a2[*v13];
        }
      }
    }
  }
  return result;
}

