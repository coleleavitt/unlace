__int64 __fastcall CoinSimpFactorization::findPivot(
        CoinSimpFactorization *this,
        FactorPointers *a2,
        int *a3,
        int *a4,
        bool *a5)
{
  __int64 v5; // r13
  __int64 v6; // rax
  int v7; // eax
  __int64 result; // rax
  int v9; // eax
  int v10; // r14d
  int v11; // r15d
  int *v12; // r12
  int v13; // r13d
  __int64 v14; // rcx
  int v15; // r13d
  int v16; // edx
  __int64 v17; // [rsp+8h] [rbp-B0h]
  double v18; // [rsp+20h] [rbp-98h]
  __int64 v19; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+38h] [rbp-80h]
  int v21; // [rsp+44h] [rbp-74h]
  __int64 v22; // [rsp+48h] [rbp-70h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  __int64 v26; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+78h] [rbp-40h] BYREF
  int v28[15]; // [rsp+7Ch] [rbp-3Ch] BYREF

  v5 = *((_QWORD *)a2 + 4);
  v19 = *((_QWORD *)a2 + 1);
  v22 = *((_QWORD *)a2 + 3);
  v20 = *((_QWORD *)a2 + 5);
  v6 = *((_QWORD *)a2 + 6);
  *a4 = -1;
  *a3 = -1;
  v17 = v6;
  v7 = *(_DWORD *)(v5 + 4);
  if ( v7 == -1 )
  {
    *a5 = 0;
    v9 = *(_DWORD *)(v19 + 4);
    if ( v9 == -1 )
    {
      if ( *((int *)this + 9) <= 1 )
      {
        return 1;
      }
      else
      {
        v18 = 1.797693134862316e308;
        v21 = 1;
        v10 = 0;
        v25 = 2;
        v26 = v5;
        do
        {
          v11 = *(_DWORD *)(v26 + 4 * v25);
          if ( v11 != -1 )
          {
            while ( 1 )
            {
              v12 = (int *)(v17 + 4LL * v11);
              v13 = *v12;
              if ( !(unsigned int)CoinSimpFactorization::findShortRow(this, v11, v25, &v27, v28, a2) )
                break;
              if ( v27 == -1 )
              {
                if ( *((_BYTE *)this + 528) )
                {
                  CoinSimpFactorization::removeColumnFromActSet(this, v11, a2);
                  *v12 = v11;
                  *(_DWORD *)(v20 + 4LL * v11) = v11;
                }
              }
              else
              {
                ++v10;
                if ( v18 > (double)v21 * (double)(v28[0] - 1) )
                {
                  v18 = (double)v21 * (double)(v28[0] - 1);
                  *a3 = v27;
                  *a4 = v11;
                }
                if ( *((_DWORD *)this + 140) == v10 )
                  return 0;
              }
              v11 = v13;
              if ( v13 == -1 )
                goto LABEL_19;
            }
            *a3 = v27;
            *a4 = v11;
            return 0;
          }
LABEL_19:
          v14 = v25;
          if ( *(_DWORD *)(v19 + 4 * v25) != -1 )
          {
            v15 = *(_DWORD *)(v19 + 4 * v25);
            do
            {
              if ( !(unsigned int)CoinSimpFactorization::findShortColumn(this, v15, v25, &v27, v28, a2) )
              {
                *a3 = v15;
                *a4 = v27;
                return 0;
              }
              v16 = v27;
              if ( v27 != -1 )
              {
                ++v10;
                if ( v18 > (double)v21 * (double)(v28[0] - 1) )
                {
                  v18 = (double)v21 * (double)(v28[0] - 1);
                  *a3 = v15;
                  *a4 = v16;
                }
                if ( *((_DWORD *)this + 140) == v10 )
                  return 0;
              }
              v15 = *(_DWORD *)(v22 + 4LL * v15);
            }
            while ( v15 != -1 );
            v14 = v25;
          }
          ++v21;
          v25 = v14 + 1;
        }
        while ( *((_DWORD *)this + 9) >= (int)v14 + 1 );
        if ( *a3 == -1 )
          return 1;
        return *a4 == -1;
      }
    }
    else
    {
      *a4 = *(_DWORD *)(*((_QWORD *)this + 36) + 4LL * *(int *)(*((_QWORD *)this + 33) + 4LL * v9));
      *a3 = v9;
      return 0;
    }
  }
  else
  {
    *a3 = *(_DWORD *)(*((_QWORD *)this + 44) + 4LL * *(int *)(*((_QWORD *)this + 41) + 4LL * v7));
    *a4 = v7;
    result = *(unsigned int *)(*((_QWORD *)this + 49) + 4LL * v7);
    if ( (_DWORD)result )
      return 0;
    else
      *a5 = 0;
  }
  return result;
}

