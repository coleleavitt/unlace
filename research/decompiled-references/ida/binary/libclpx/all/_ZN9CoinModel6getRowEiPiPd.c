__int64 __fastcall CoinModel::getRow(CoinModel *this, int a2, int *a3, double *a4)
{
  unsigned int v4; // r15d
  int v6; // ebx
  __int64 v7; // r13
  int v8; // edx
  char v9; // r14
  double v10; // xmm0_8
  __int64 v11; // r13
  int v12; // edx
  int v13; // edx
  _BYTE v16[4]; // [rsp+20h] [rbp-78h] BYREF
  int v17; // [rsp+24h] [rbp-74h]
  double v18; // [rsp+28h] [rbp-70h]
  _BYTE v19[88]; // [rsp+40h] [rbp-58h] BYREF

  if ( !*((_DWORD *)this + 81) )
  {
    CoinModelHash2::setNumberItems((CoinModel *)((char *)this + 312), *((_DWORD *)this + 27));
    CoinModelHash2::resize((CoinModel *)((char *)this + 312));
  }
  v4 = 0;
  if ( *((_DWORD *)this + 2) > a2 )
  {
    CoinModel::firstInRow((CoinModel *)v16, (int)this);
    v6 = v17;
    if ( v17 >= 0 )
    {
      if ( a4 )
      {
        v7 = 1;
        v8 = -1;
        v9 = 1;
        if ( a3 )
        {
          while ( 1 )
          {
            if ( v8 > v6 )
              v9 = 0;
            v10 = v18;
            v4 = v7;
            a3[v7 - 1] = v6;
            a4[v7 - 1] = v10;
            CoinModel::next((CoinModel *)v19, this);
            CoinModelLink::operator=(v16, v19);
            ++v7;
            CoinModelLink::~CoinModelLink((CoinModelLink *)v19);
            v8 = v6;
            if ( v17 < 0 )
              break;
            v6 = v17;
          }
        }
        else
        {
          while ( 1 )
          {
            if ( v8 > v6 )
              v9 = 0;
            v4 = v7;
            a4[v7 - 1] = v18;
            CoinModel::next((CoinModel *)v19, this);
            CoinModelLink::operator=(v16, v19);
            ++v7;
            CoinModelLink::~CoinModelLink((CoinModelLink *)v19);
            v8 = v6;
            if ( v17 < 0 )
              break;
            v6 = v17;
          }
        }
      }
      else if ( a3 )
      {
        v11 = 1;
        v12 = -1;
        v9 = 1;
        while ( 1 )
        {
          if ( v12 > v6 )
            v9 = 0;
          v4 = v11;
          a3[v11 - 1] = v6;
          CoinModel::next((CoinModel *)v19, this);
          CoinModelLink::operator=(v16, v19);
          ++v11;
          CoinModelLink::~CoinModelLink((CoinModelLink *)v19);
          v12 = v6;
          if ( v17 < 0 )
            break;
          v6 = v17;
        }
      }
      else
      {
        v13 = -1;
        v9 = 1;
        while ( 1 )
        {
          if ( v13 > v6 )
            v9 = 0;
          ++v4;
          CoinModel::next((CoinModel *)v19, this);
          CoinModelLink::operator=(v16, v19);
          CoinModelLink::~CoinModelLink((CoinModelLink *)v19);
          v13 = v6;
          if ( v17 < 0 )
            break;
          v6 = v17;
        }
      }
      if ( !v9 )
        CoinSort_2<int,double>(a3, &a3[v4], a4);
    }
    CoinModelLink::~CoinModelLink((CoinModelLink *)v16);
  }
  return v4;
}

