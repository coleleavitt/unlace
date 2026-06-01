__int64 __fastcall CoinWarmStartPrimalDual::generateDiff(__int64 a1, const void *a2)
{
  __int64 v2; // rbx
  const void *Diff; // rax
  const void *v4; // r15
  _DWORD *v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  const void *v11; // rax
  const void *v12; // rbp
  _DWORD *v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  void *exception; // r13
  __int64 v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-48h]

  if ( !a2
    || !__dynamic_cast(
          a2,
          (const struct __class_type_info *)&`typeinfo for'CoinWarmStart,
          (const struct __class_type_info *)&`typeinfo for'CoinWarmStartPrimalDual,
          -1) )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v21 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_283B80(v21 - 24);
    if ( (_UNKNOWN *)(v22 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_283B80(v22 - 24);
    if ( (_UNKNOWN *)(v23 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_283B80(v23 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v2 = operator new(0x48u);
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)v2 = off_4D2798;
  *(_QWORD *)(v2 + 8) = &off_4D2628;
  *(_QWORD *)(v2 + 40) = &off_4D2628;
  Diff = (const void *)CoinWarmStartVector<double>::generateDiff();
  v4 = Diff;
  if ( !Diff )
    goto LABEL_10;
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
  v11 = (const void *)CoinWarmStartVector<double>::generateDiff();
  v12 = v11;
  if ( !v11 )
LABEL_10:
    BUG();
  v13 = __dynamic_cast(
          v11,
          (const struct __class_type_info *)&`typeinfo for'CoinWarmStartDiff,
          (const struct __class_type_info *)&`typeinfo for'CoinWarmStartVectorDiff<double>,
          -1);
  if ( v13 != (_DWORD *)(v2 + 40) )
  {
    v14 = *(_DWORD *)(v2 + 48);
    *(_DWORD *)(v2 + 48) = v13[2];
    v15 = *((_QWORD *)v13 + 2);
    v13[2] = v14;
    v16 = *(_QWORD *)(v2 + 56);
    *(_QWORD *)(v2 + 56) = v15;
    v17 = *((_QWORD *)v13 + 3);
    *((_QWORD *)v13 + 2) = v16;
    v18 = *(_QWORD *)(v2 + 64);
    *(_QWORD *)(v2 + 64) = v17;
    *((_QWORD *)v13 + 3) = v18;
  }
  (*(void (__fastcall **)(const void *))(*(_QWORD *)v12 + 8LL))(v12);
  return *(_QWORD *)(*(_QWORD *)v2 - 40LL) + v2;
}

