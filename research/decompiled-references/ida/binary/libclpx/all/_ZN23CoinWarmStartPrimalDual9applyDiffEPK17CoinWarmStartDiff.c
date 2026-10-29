void *__fastcall CoinWarmStartPrimalDual::applyDiff(__int64 a1, const void *a2)
{
  char *v3; // rbx
  void *result; // rax
  int v5; // edx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // xmm0_8
  void *exception; // r13
  __int64 v13; // [rsp+10h] [rbp-58h]
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]

  if ( !a2
    || (v3 = (char *)__dynamic_cast(
                       a2,
                       (const struct __class_type_info *)&`typeinfo for'CoinWarmStartDiff,
                       (const struct __class_type_info *)&`typeinfo for'CoinWarmStartPrimalDualDiff,
                       -1)) == nullptr )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_283B80(v13 - 24);
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_283B80(v14 - 24);
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_283B80(v15 - 24);
LABEL_14:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  CoinWarmStartVector<double>::applyDiff();
  result = __dynamic_cast(
             v3 + 40,
             (const struct __class_type_info *)&`typeinfo for'CoinWarmStartDiff,
             (const struct __class_type_info *)&`typeinfo for'CoinWarmStartVectorDiff<double>,
             -1);
  if ( !result )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v16 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_283B80(v16 - 24);
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_283B80(v15 - 24);
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_283B80(v14 - 24);
    goto LABEL_14;
  }
  v5 = *((_DWORD *)result + 2);
  v6 = *((_QWORD *)result + 2);
  v7 = *((_QWORD *)result + 3);
  v8 = *(_QWORD *)(a1 + 48);
  if ( v5 > 0 )
  {
    result = nullptr;
    v9 = (unsigned int)(v5 - 1) + 1LL;
    do
    {
      v10 = *(unsigned int *)(v6 + 4LL * (_QWORD)result);
      v11 = *(_QWORD *)(v7 + 8LL * (_QWORD)result);
      result = (char *)result + 1;
      *(_QWORD *)(v8 + 8 * v10) = v11;
    }
    while ( (void *)v9 != result );
  }
  return result;
}

