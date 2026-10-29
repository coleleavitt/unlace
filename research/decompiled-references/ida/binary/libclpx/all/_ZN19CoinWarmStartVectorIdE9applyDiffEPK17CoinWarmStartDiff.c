void *__fastcall CoinWarmStartVector<double>::applyDiff(__int64 a1, const void *a2)
{
  void *result; // rax
  int v4; // edx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // xmm0_8
  void *exception; // r13
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h]

  if ( !a2
    || (result = __dynamic_cast(
                   a2,
                   (const struct __class_type_info *)&`typeinfo for'CoinWarmStartDiff,
                   (const struct __class_type_info *)&`typeinfo for'CoinWarmStartVectorDiff<double>,
                   -1)) == nullptr )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v12 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_281C70(v12 - 24);
    if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_281C70(v13 - 24);
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_281C70(v14 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v4 = *((_DWORD *)result + 2);
  v5 = *((_QWORD *)result + 2);
  v6 = *((_QWORD *)result + 3);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v4 > 0 )
  {
    result = nullptr;
    v8 = (unsigned int)(v4 - 1) + 1LL;
    do
    {
      v9 = *(unsigned int *)(v5 + 4LL * (_QWORD)result);
      v10 = *(_QWORD *)(v6 + 8LL * (_QWORD)result);
      result = (char *)result + 1;
      *(_QWORD *)(v7 + 8 * v9) = v10;
    }
    while ( (void *)v8 != result );
  }
  return result;
}

