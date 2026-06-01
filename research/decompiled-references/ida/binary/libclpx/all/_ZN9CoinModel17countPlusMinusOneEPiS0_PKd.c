__int64 __fastcall CoinModel::countPlusMinusOne(CoinModel *this, int *s, void *a3, const double *a4)
{
  int v8; // ecx
  int v9; // edx
  int v10; // esi
  int v11; // edi
  __int64 v12; // rax
  int v13; // esi
  int v14; // r8d
  __int64 v15; // rcx
  double v16; // xmm0_8

  if ( *((_DWORD *)this + 176) == 3 )
    CoinModel::badType(this);
  memset(s, 0, 4LL * *((int *)this + 3));
  memset(a3, 0, 4LL * *((int *)this + 3));
  v8 = *((_DWORD *)this + 27);
  v9 = *((_DWORD *)this + 3);
  v10 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 176) = 2;
  CoinModel::resize(this, v10, v9, v8);
  v11 = *((_DWORD *)this + 27);
  if ( v11 > 0 )
  {
    v12 = *((_QWORD *)this + 37);
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *(int *)(v12 + 4);
        if ( (int)v15 >= 0 )
        {
          v16 = *(double *)(v12 + 8);
          if ( *(int *)v12 < 0 )
          {
            v16 = a4[(int)v16];
            if ( v16 == -1.23456787654321e-97 )
            {
              *s = -1;
              return 1;
            }
          }
          if ( v16 != 0.0 )
            break;
        }
LABEL_7:
        ++v13;
        v12 += 16;
        if ( v13 >= v11 )
          goto LABEL_14;
      }
      ++v14;
      if ( v16 == 1.0 )
      {
        ++s[v15];
        v11 = *((_DWORD *)this + 27);
        goto LABEL_7;
      }
      if ( v16 != -1.0 )
      {
        *s = -1;
        return 0;
      }
      ++*((_DWORD *)a3 + v15);
      ++v13;
      v12 += 16;
      v11 = *((_DWORD *)this + 27);
      if ( v13 >= v11 )
        goto LABEL_14;
    }
  }
  v14 = 0;
LABEL_14:
  if ( *s >= 0 )
    s[*((int *)this + 3)] = v14;
  return 0;
}

