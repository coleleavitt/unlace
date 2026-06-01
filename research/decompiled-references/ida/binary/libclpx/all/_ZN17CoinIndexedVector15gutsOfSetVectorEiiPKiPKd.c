__int64 __fastcall CoinIndexedVector::gutsOfSetVector(
        CoinIndexedVector *this,
        int a2,
        int a3,
        const int *a4,
        const double *a5)
{
  __int64 result; // rax
  __int64 v10; // rdi
  const int *v11; // rcx
  int v12; // r9d
  char v13; // r10
  const int *v14; // r8
  double v15; // xmm0_8
  double *v16; // rdx
  int v17; // esi
  double v18; // xmm1_8
  __int64 v19; // rdx
  int v20; // edx
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  double *v25; // rdx
  void *exception; // r13
  __int64 v27; // [rsp+10h] [rbp-58h]
  __int64 v28; // [rsp+18h] [rbp-50h]
  __int64 v29; // [rsp+20h] [rbp-48h]

  result = CoinIndexedVector::reserve(this, a2);
  *((_DWORD *)this + 4) = 0;
  if ( a3 <= 0 )
    return result;
  v10 = *((_QWORD *)this + 1);
  v11 = a4;
  v12 = 0;
  v13 = 0;
  v14 = &a4[a3 - 1 + 1];
  do
  {
    while ( 1 )
    {
      result = *v11;
      v16 = (double *)(v10 + 8 * result);
      v17 = *v11;
      v18 = a5[result];
      if ( *v16 != 0.0 )
      {
        v15 = *v16 + v18;
        ++v12;
        *v16 = v15;
        if ( fabs(v15) < 1.0e-50 )
          v13 = 1;
        goto LABEL_5;
      }
      if ( fabs(v18) >= 1.0e-50 )
        break;
LABEL_5:
      if ( v14 == ++v11 )
        goto LABEL_9;
    }
    result = *((int *)this + 4);
    *v16 = v18;
    v19 = *(_QWORD *)this;
    ++v11;
    *((_DWORD *)this + 4) = result + 1;
    *(_DWORD *)(v19 + 4 * result) = v17;
  }
  while ( v14 != v11 );
LABEL_9:
  if ( v13 )
  {
    v20 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = 0;
    if ( v20 > 0 )
    {
      v21 = *(_QWORD *)this;
      result = *(_QWORD *)this;
      v22 = *(_QWORD *)this + 4LL * (unsigned int)(v20 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v24 = *(int *)result;
          v25 = (double *)(v10 + 8 * v24);
          if ( fabs(*v25) < 1.0e-50 )
            break;
          v23 = *((int *)this + 4);
          result += 4;
          *((_DWORD *)this + 4) = v23 + 1;
          *(_DWORD *)(v21 + 4 * v23) = v24;
          if ( v22 == result )
            goto LABEL_15;
        }
        result += 4;
        *v25 = 0.0;
      }
      while ( v22 != result );
    }
  }
LABEL_15:
  if ( v12 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v27 - 24);
    if ( (_UNKNOWN *)(v28 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v28 - 24);
    if ( (_UNKNOWN *)(v29 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v29 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  return result;
}

