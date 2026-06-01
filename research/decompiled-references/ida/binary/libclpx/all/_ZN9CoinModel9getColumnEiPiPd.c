__int64 __fastcall CoinModel::getColumn(CoinModel *this, int a2, int *a3, double *a4)
{
  unsigned int v4; // r15d
  __int64 v6; // r13
  int v7; // eax
  char v8; // r14
  int v9; // ecx
  double v10; // xmm0_8
  int v11; // esi
  bool v12; // cc
  int v13; // eax
  int v14; // r13d
  int v15; // eax
  int v16; // r13d
  int v19; // [rsp+18h] [rbp-80h]
  __int64 v20; // [rsp+18h] [rbp-80h]
  int v21; // [rsp+20h] [rbp-78h] BYREF
  int v22; // [rsp+24h] [rbp-74h]
  double v23; // [rsp+28h] [rbp-70h]
  _BYTE v24[88]; // [rsp+40h] [rbp-58h] BYREF

  if ( !*((_DWORD *)this + 81) )
  {
    CoinModelHash2::setNumberItems((CoinModel *)((char *)this + 312), *((_DWORD *)this + 27));
    CoinModelHash2::resize((CoinModel *)((char *)this + 312));
  }
  v4 = 0;
  if ( *((_DWORD *)this + 3) > a2 )
  {
    CoinModel::firstInColumn((CoinModel *)&v21, (int)this);
    if ( v22 >= 0 )
    {
      if ( a4 )
      {
        v6 = 1;
        v7 = -1;
        v8 = 1;
        if ( a3 )
        {
          do
          {
            v9 = v21;
            v10 = v23;
            v4 = v6;
            a3[v6 - 1] = v21;
            v19 = v9;
            if ( v9 < v7 )
              v8 = 0;
            a4[v6 - 1] = v10;
            CoinModel::next((CoinModel *)v24, this);
            CoinModelLink::operator=(&v21, v24);
            ++v6;
            CoinModelLink::~CoinModelLink((CoinModelLink *)v24);
            v7 = v19;
          }
          while ( v22 >= 0 );
        }
        else
        {
          do
          {
            v11 = v21;
            v4 = v6;
            v12 = v7 <= v21;
            a4[v6 - 1] = v23;
            if ( !v12 )
              v8 = 0;
            CoinModel::next((CoinModel *)v24, this);
            CoinModelLink::operator=(&v21, v24);
            ++v6;
            CoinModelLink::~CoinModelLink((CoinModelLink *)v24);
            v7 = v11;
          }
          while ( v22 >= 0 );
        }
      }
      else if ( a3 )
      {
        v20 = 1;
        v13 = -1;
        v8 = 1;
        do
        {
          v14 = v21;
          if ( v13 > v21 )
            v8 = 0;
          a3[v20 - 1] = v21;
          v4 = v20;
          CoinModel::next((CoinModel *)v24, this);
          CoinModelLink::operator=(&v21, v24);
          CoinModelLink::~CoinModelLink((CoinModelLink *)v24);
          ++v20;
          v13 = v14;
        }
        while ( v22 >= 0 );
      }
      else
      {
        v15 = -1;
        v8 = 1;
        do
        {
          v16 = v21;
          if ( v15 > v21 )
            v8 = 0;
          ++v4;
          CoinModel::next((CoinModel *)v24, this);
          CoinModelLink::operator=(&v21, v24);
          CoinModelLink::~CoinModelLink((CoinModelLink *)v24);
          v15 = v16;
        }
        while ( v22 >= 0 );
      }
      if ( !v8 )
        CoinSort_2<int,double>(a3, &a3[v4], a4);
    }
    CoinModelLink::~CoinModelLink((CoinModelLink *)&v21);
  }
  return v4;
}

