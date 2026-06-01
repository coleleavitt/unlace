__int64 __fastcall CoinModel::whatIsSet(CoinModel *this)
{
  double *v1; // rcx
  __int64 result; // rax
  int v3; // edx
  double *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rdx
  double *v7; // rcx
  int v8; // edx
  double *v9; // rsi
  double *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  _DWORD *v13; // rdx
  int v14; // ecx
  _DWORD *v15; // rdx
  _DWORD *v16; // rcx

  v1 = *((double **)this + 16);
  result = *((_DWORD *)this + 27) != 0;
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 2);
    if ( v3 > 0 )
    {
      if ( *v1 == -1.797693134862316e308 && (v4 = *((double **)this + 17), *v4 == 1.797693134862316e308) )
      {
        v5 = 8LL * (unsigned int)(v3 - 1) + 8;
        v6 = 8;
        while ( v6 != v5 )
        {
          if ( v1[(unsigned __int64)v6 / 8] == -1.797693134862316e308 )
          {
            v6 += 8;
            if ( v4[(unsigned __int64)v6 / 8 - 1] == 1.797693134862316e308 )
              continue;
          }
          goto LABEL_33;
        }
      }
      else
      {
LABEL_33:
        result = (unsigned int)result | 2;
      }
    }
  }
  if ( *((_DWORD *)this + 40) )
    result = (unsigned int)result | 4;
  v7 = *((double **)this + 24);
  if ( v7 )
  {
    v8 = *((_DWORD *)this + 3);
    if ( v8 > 0 )
    {
      v9 = *((double **)this + 23);
      if ( *v9 == 0.0 && *v7 == 0.0 && (v10 = *((double **)this + 25), *v10 == 1.797693134862316e308) )
      {
        v11 = 8LL * (unsigned int)(v8 - 1) + 8;
        v12 = 8;
        while ( v11 != v12 )
        {
          if ( v9[(unsigned __int64)v12 / 8] == 0.0 && v7[(unsigned __int64)v12 / 8] == 0.0 )
          {
            v12 += 8;
            if ( v10[(unsigned __int64)v12 / 8 - 1] == 1.797693134862316e308 )
              continue;
          }
          goto LABEL_32;
        }
      }
      else
      {
LABEL_32:
        result = (unsigned int)result | 8;
      }
    }
  }
  if ( *((_DWORD *)this + 56) )
    result = (unsigned int)result | 0x10;
  v13 = *((_DWORD **)this + 30);
  if ( v13 )
  {
    v14 = *((_DWORD *)this + 3);
    if ( v14 > 0 )
    {
      if ( *v13 )
      {
        return (unsigned int)result | 0x20;
      }
      else
      {
        v15 = v13 + 1;
        v16 = &v15[v14 - 1];
        while ( v16 != v15 )
        {
          if ( *v15++ )
            return (unsigned int)result | 0x20;
        }
      }
    }
  }
  return result;
}

