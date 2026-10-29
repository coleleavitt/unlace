void __fastcall CoinPackedMatrix::setDimensions(CoinPackedMatrix *this, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ebx
  const int *v6; // rax
  int *v7; // r12
  const int *v8; // rcx
  __int64 v9; // rdx
  const int *v10; // rdx
  void *exception; // r13
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h]

  v3 = *((_DWORD *)this + 16);
  if ( *((_BYTE *)this + 8) )
  {
    if ( a2 < 0 )
    {
      a2 = *((_DWORD *)this + 17);
    }
    else if ( a2 < *((_DWORD *)this + 17) )
    {
      goto LABEL_31;
    }
    if ( a3 < 0 )
    {
      a3 = *((_DWORD *)this + 16);
      goto LABEL_6;
    }
    if ( a3 >= v3 )
    {
LABEL_6:
      v4 = a2;
      v5 = a3 - v3;
      goto LABEL_11;
    }
LABEL_31:
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v12 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v12 - 24);
    if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v13 - 24);
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v14 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  if ( a2 < 0 )
  {
    a2 = *((_DWORD *)this + 16);
    v4 = *((_DWORD *)this + 17);
    if ( a3 < 0 )
      goto LABEL_10;
    goto LABEL_27;
  }
  if ( a2 < v3 )
    goto LABEL_31;
  v4 = *((_DWORD *)this + 17);
  if ( a3 >= 0 )
  {
LABEL_27:
    if ( a3 < v4 )
      goto LABEL_31;
    v4 = a3;
  }
LABEL_10:
  v5 = a2 - v3;
LABEL_11:
  *((_DWORD *)this + 17) = v4;
  if ( v5 )
  {
    v6 = (const int *)operator new[](4LL * v5);
    v7 = (int *)v6;
    if ( v5 >> 3 )
    {
      v8 = v6;
      v9 = (unsigned int)((v5 >> 3) - 1);
      do
      {
        *(_OWORD *)v8 = 0;
        v8 += 8;
        *((_OWORD *)v8 - 1) = 0;
      }
      while ( &v6[8 * v9 + 8] != v8 );
      v10 = &v6[8 * (int)v9 + 8];
    }
    else
    {
      v10 = v6;
    }
    switch ( v5 & 7 )
    {
      case 0:
        goto LABEL_24;
      case 1:
        goto LABEL_23;
      case 2:
        goto LABEL_22;
      case 3:
        goto LABEL_21;
      case 4:
        goto LABEL_20;
      case 5:
        goto LABEL_19;
      case 6:
        goto LABEL_18;
      case 7:
        *((_DWORD *)v10 + 6) = 0;
LABEL_18:
        *((_DWORD *)v10 + 5) = 0;
LABEL_19:
        *((_DWORD *)v10 + 4) = 0;
LABEL_20:
        *((_DWORD *)v10 + 3) = 0;
LABEL_21:
        *((_DWORD *)v10 + 2) = 0;
LABEL_22:
        *((_DWORD *)v10 + 1) = 0;
LABEL_23:
        *v10 = 0;
LABEL_24:
        CoinPackedMatrix::resizeForAddingMajorVectors(this, v5, v6);
        operator delete[](v7);
        *((_DWORD *)this + 16) += v5;
        break;
    }
  }
}

