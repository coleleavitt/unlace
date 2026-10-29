__int64 __fastcall CoinSimpFactorization::copyUbyColumns(void **this)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rdi
  int v9; // edx
  int v10; // esi
  int v11; // ecx
  int *v12; // r13
  _DWORD *v13; // rcx
  int i; // r12d
  int v15; // edi
  int v16; // edx
  __int64 v17; // r11
  double *v18; // r8
  __int64 v19; // rbp
  double v20; // xmm0_8
  __int64 v21; // r9
  int v22; // esi
  __int64 v23; // r9
  _DWORD *v24; // rsi

  memset(*(this + 42), 0, 4LL * *((int *)this + 10));
  v2 = *((int *)this + 10);
  if ( (int)v2 <= 0 )
  {
    v4 = (__int64)*(this + 46);
  }
  else
  {
    v3 = (__int64)*(this + 45);
    v4 = (__int64)*(this + 46);
    v5 = 1;
    do
    {
      v6 = v5;
      *(_DWORD *)(v3 + 4 * v5 - 4) = v5 - 2;
      *(_DWORD *)(v4 + 4 * v5 - 4) = v5;
      ++v5;
      v2 = *((int *)this + 10);
    }
    while ( (int)v2 > v6 );
  }
  *(_DWORD *)(v4 + 4 * v2 - 4) = -1;
  result = *((unsigned int *)this + 10);
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = result - 1;
  if ( (int)result <= 0 )
  {
    v10 = *((_DWORD *)this + 9);
    v9 = 0;
  }
  else
  {
    v8 = (__int64)*(this + 41);
    result = 1;
    v9 = 0;
    do
    {
      *(_DWORD *)(v8 + 4 * result - 4) = v9;
      v10 = *((_DWORD *)this + 9);
      v11 = result++;
      v9 += v10;
    }
    while ( *((_DWORD *)this + 10) > v11 );
  }
  *((_DWORD *)this + 97) = v9;
  if ( v10 > 0 )
  {
    v12 = (int *)*(this + 33);
    v13 = *(this + 34);
    for ( i = 0; i < v10; ++i )
    {
      v15 = *v12;
      v16 = *v12 + *v13;
      if ( *v12 < v16 )
      {
        v17 = (__int64)*(this + 35);
        v18 = (double *)(v17 + 8LL * v15);
        v19 = 4LL * v15;
        do
        {
          v20 = *v18;
          if ( *((double *)this + 2) > fabs(*v18) )
          {
            --v16;
            --*v13;
            if ( v16 > v15 )
            {
              v21 = (__int64)*(this + 36);
              result = v16;
              while ( 1 )
              {
                v20 = *(double *)(v17 + 8 * result);
                v22 = *(_DWORD *)(v21 + 4 * result);
                *v18 = v20;
                *(_DWORD *)(v21 + v19) = v22;
                if ( *((double *)this + 2) <= fabs(v20) )
                  break;
                --v16;
                --*v13;
                --result;
                if ( v16 == v15 )
                  goto LABEL_18;
              }
            }
          }
          if ( v16 == v15 )
            break;
          ++v15;
          ++v18;
          v23 = *(int *)((char *)*(this + 36) + v19);
          v19 += 4;
          v24 = (char *)*(this + 42) + 4 * v23;
          result = *((_DWORD *)*(this + 41) + v23) + *v24;
          *((double *)*(this + 43) + (int)result) = v20;
          *((_DWORD *)*(this + 44) + (int)result) = i;
          ++*v24;
        }
        while ( v15 < v16 );
LABEL_18:
        v10 = *((_DWORD *)this + 9);
      }
      ++v12;
      ++v13;
    }
  }
  return result;
}

