__int64 __fastcall CoinPackedVectorBase::denseVector(CoinPackedVectorBase *this, int a2)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // xmm0_8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  void *exception; // r13
  __int64 v13; // [rsp+10h] [rbp-58h]
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h]

  if ( (int)CoinPackedVectorBase::getMaxIndex(this) >= a2 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_238D20(v13 - 24);
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_238D20(v14 - 24);
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_238D20(v15 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v2 = operator new[](8LL * a2);
  if ( a2 )
  {
    if ( a2 / 8 <= 0 )
    {
      v11 = (_QWORD *)v2;
    }
    else
    {
      v10 = (_QWORD *)v2;
      do
      {
        *v10 = 0;
        v10[1] = 0;
        v10 += 8;
        *(v10 - 6) = 0;
        *(v10 - 5) = 0;
        *(v10 - 4) = 0;
        *(v10 - 3) = 0;
        *(v10 - 2) = 0;
        *(v10 - 1) = 0;
      }
      while ( v10 != (_QWORD *)(v2 + (((unsigned int)(a2 / 8 - 1) + 1LL) << 6)) );
      v11 = (_QWORD *)(v2 + ((a2 / 8 - 1 + 1LL) << 6));
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_19;
      case 2:
        goto LABEL_18;
      case 3:
        goto LABEL_17;
      case 4:
        goto LABEL_16;
      case 5:
        goto LABEL_15;
      case 6:
        goto LABEL_14;
      case 7:
        v11[6] = 0;
LABEL_14:
        v11[5] = 0;
LABEL_15:
        v11[4] = 0;
LABEL_16:
        v11[3] = 0;
LABEL_17:
        v11[2] = 0;
LABEL_18:
        v11[1] = 0;
LABEL_19:
        *v11 = 0;
        break;
      default:
        break;
    }
  }
  v3 = (**(__int64 (__fastcall ***)(CoinPackedVectorBase *))this)(this);
  v4 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 8LL))(this);
  v5 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
  if ( v3 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = *(int *)(v4 + 4 * v6);
      v8 = *(_QWORD *)(v5 + 8 * v6++);
      *(_QWORD *)(v2 + 8 * v7) = v8;
    }
    while ( (unsigned int)(v3 - 1) + 1LL != v6 );
  }
  return v2;
}

