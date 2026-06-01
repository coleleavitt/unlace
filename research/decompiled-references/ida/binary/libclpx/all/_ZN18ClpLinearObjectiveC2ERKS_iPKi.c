// Alternative name is '_ZN18ClpLinearObjectiveC1ERKS_iPKi'
void __fastcall ClpLinearObjective::ClpLinearObjective(
        ClpLinearObjective *this,
        const ClpLinearObjective *a2,
        int a3,
        const int *a4)
{
  const int *v7; // rax
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  void *exception; // r14
  __int64 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]

  ClpObjective::ClpObjective(this, a2);
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &off_4D0520;
  if ( a3 > 0 )
  {
    v7 = a4;
    v8 = 0;
    do
    {
      if ( *v7 < 0 || *v7 >= *((_DWORD *)a2 + 8) )
        ++v8;
      ++v7;
    }
    while ( &a4[a3 - 1 + 1] != v7 );
    if ( v8 )
    {
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v16 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_8A4C0(v16 - 24);
      if ( (_UNKNOWN *)(v17 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_8A4C0(v17 - 24);
      if ( (_UNKNOWN *)(v18 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_8A4C0(v18 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
    *((_DWORD *)this + 8) = a3;
    v9 = operator new[](8LL * a3);
    v10 = *((_DWORD *)this + 8);
    *((_QWORD *)this + 3) = v9;
    if ( v10 > 0 )
    {
      v11 = (unsigned int)(v10 - 1);
      v12 = *((_QWORD *)a2 + 3);
      v13 = 0;
      v14 = v11 + 1;
      do
      {
        *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v12 + 8LL * a4[v13]);
        ++v13;
      }
      while ( v14 != v13 );
    }
  }
}

