__int64 __fastcall CoinWarmStartDual::generateDiff(__int64 a1, const void *a2)
{
  __int64 v2; // rbx
  const void *Diff; // rax
  const void *v4; // rbp
  _DWORD *v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  void *exception; // r13
  __int64 v13; // [rsp+10h] [rbp-58h]
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h]

  if ( !a2
    || !__dynamic_cast(
          a2,
          (const struct __class_type_info *)&`typeinfo for'CoinWarmStart,
          (const struct __class_type_info *)&`typeinfo for'CoinWarmStartDual,
          -1) )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_281C70(v13 - 24);
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_281C70(v14 - 24);
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_281C70(v15 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v2 = operator new(0x28u);
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)v2 = off_4D2680;
  *(_QWORD *)(v2 + 8) = &off_4D2628;
  Diff = (const void *)CoinWarmStartVector<double>::generateDiff();
  v4 = Diff;
  if ( !Diff )
    BUG();
  v5 = __dynamic_cast(
         Diff,
         (const struct __class_type_info *)&`typeinfo for'CoinWarmStartDiff,
         (const struct __class_type_info *)&`typeinfo for'CoinWarmStartVectorDiff<double>,
         -1);
  if ( v5 != (_DWORD *)(v2 + 8) )
  {
    v6 = *(_DWORD *)(v2 + 16);
    *(_DWORD *)(v2 + 16) = v5[2];
    v7 = *((_QWORD *)v5 + 2);
    v5[2] = v6;
    v8 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 24) = v7;
    v9 = *((_QWORD *)v5 + 3);
    *((_QWORD *)v5 + 2) = v8;
    v10 = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 32) = v9;
    *((_QWORD *)v5 + 3) = v10;
  }
  (*(void (__fastcall **)(const void *))(*(_QWORD *)v4 + 8LL))(v4);
  return *(_QWORD *)(*(_QWORD *)v2 - 40LL) + v2;
}

