int *__fastcall CoinIndexedVector::swap(CoinIndexedVector *this, int a2, int a3)
{
  int v3; // eax
  int *v4; // rcx
  int *result; // rax
  int v6; // esi
  void *exception; // r14
  __int64 v8; // [rsp+10h] [rbp-58h]
  __int64 v9; // [rsp+18h] [rbp-50h]
  __int64 v10; // [rsp+20h] [rbp-48h]

  v3 = *((_DWORD *)this + 4);
  if ( v3 <= a2 || a2 < 0 || v3 <= a3 || a3 < 0 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v8 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v8 - 24);
    if ( (_UNKNOWN *)(v9 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v9 - 24);
    if ( (_UNKNOWN *)(v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v10 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v4 = (int *)(*(_QWORD *)this + 4LL * a2);
  result = (int *)(*(_QWORD *)this + 4LL * a3);
  v6 = *v4;
  *v4 = *result;
  *result = v6;
  return result;
}

