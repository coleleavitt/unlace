__int64 __fastcall CoinPackedVector::insert(CoinPackedVector *this, int a2, double a3)
{
  char v4; // r14
  int v5; // r13d
  int v6; // esi
  int v7; // esi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  char v13; // si
  int v14; // edx
  void *exception; // r12
  __int64 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]

  v4 = *((_BYTE *)this + 24);
  v5 = *((_DWORD *)this + 12);
  if ( v4 )
  {
    v9 = CoinPackedVectorBase::indexSet(this, "insert", "CoinPackedVector");
    v10 = *(_QWORD *)(v9 + 16);
    v11 = v9;
    if ( !v10 )
    {
      v10 = v9 + 8;
      goto LABEL_24;
    }
    while ( 1 )
    {
      v14 = *(_DWORD *)(v10 + 32);
      if ( v14 > a2 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        v13 = v4;
        if ( !v12 )
          goto LABEL_13;
      }
      else
      {
        v12 = *(_QWORD *)(v10 + 24);
        v13 = 0;
        if ( !v12 )
        {
LABEL_13:
          if ( !v13 )
          {
            if ( v14 >= a2 )
              goto LABEL_15;
LABEL_22:
            if ( v10 )
            {
LABEL_23:
              *(_DWORD *)(operator new(0x28u) + 32) = a2;
              std::_Rb_tree_insert_and_rebalance();
              ++*(_QWORD *)(v11 + 40);
              break;
            }
LABEL_15:
            exception = __cxa_allocate_exception(0x30u);
            std::string::string();
            std::string::string();
            std::string::string();
            CoinError::CoinError();
            if ( (_UNKNOWN *)(v16 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              sub_5C6B8(v16 - 24);
            if ( (_UNKNOWN *)(v17 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              sub_5C6B8(v17 - 24);
            if ( (_UNKNOWN *)(v18 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              sub_5C6B8(v18 - 24);
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'CoinError,
              (void (*)(void *))CoinError::~CoinError);
          }
LABEL_24:
          if ( *(_QWORD *)(v11 + 24) == v10 )
            goto LABEL_23;
          if ( *(_DWORD *)(std::_Rb_tree_decrement() + 32) < a2 )
            goto LABEL_22;
          goto LABEL_15;
        }
      }
      v10 = v12;
    }
  }
  v6 = *((_DWORD *)this + 16);
  if ( v6 <= v5 )
  {
    v7 = 2 * v6;
    if ( v7 < 5 )
      v7 = 5;
    CoinPackedVector::reserve(this, v7);
  }
  *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * v5) = a2;
  *(double *)(*((_QWORD *)this + 5) + 8LL * v5) = a3;
  *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * v5) = v5;
  ++*((_DWORD *)this + 12);
  return v5;
}

