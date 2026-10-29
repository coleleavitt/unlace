__int64 __fastcall CoinPackedVectorBase::indexSet(CoinPackedVectorBase *this, const char *a2, const char *a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rax
  std::ostream *v8; // r14
  _QWORD *v9; // r13
  __int64 v10; // r15
  int v11; // eax
  _QWORD *i; // rbx
  _QWORD *v13; // rcx
  char v14; // r10
  int v15; // edi
  _DWORD *exception; // rbp
  std::ostream *v17; // rdx
  _BYTE *v18; // r15
  char v19; // si
  std::ostream *v20; // rdi
  std::ostream *v21; // rax
  _DWORD *v22; // rbp
  _BYTE *v23; // r15
  char v24; // al
  std::ostream *v25; // rax
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  __int64 (__fastcall *v30)(__int64, unsigned int); // rax
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  std::ostream *v35; // [rsp+0h] [rbp-80h]
  std::ostream *v36; // [rsp+0h] [rbp-80h]
  std::ostream *v37; // [rsp+0h] [rbp-80h]
  __int64 v38; // [rsp+28h] [rbp-58h] BYREF
  __int64 v39; // [rsp+30h] [rbp-50h] BYREF
  __int64 v40; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v41[8]; // [rsp+40h] [rbp-40h] BYREF

  result = *((_QWORD *)this + 2);
  *((_BYTE *)this + 25) = 1;
  if ( !result )
  {
    v5 = operator new(0x30u);
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 40) = 0;
    *((_QWORD *)this + 2) = v5;
    *(_QWORD *)(v5 + 24) = v5 + 8;
    *(_QWORD *)(v5 + 32) = v5 + 8;
    v6 = (**(__int64 (__fastcall ***)(CoinPackedVectorBase *))this)(this);
    v7 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 8LL))(this);
    if ( v6 <= 0 )
      return *((_QWORD *)this + 2);
    v8 = (std::ostream *)v7;
    v35 = (std::ostream *)(v7 + 4LL * (unsigned int)(v6 - 1) + 4);
    while ( 1 )
    {
      v9 = *((_QWORD **)this + 2);
      v10 = v9[2];
      if ( !v10 )
      {
        i = v9 + 1;
        goto LABEL_24;
      }
      v11 = *(_DWORD *)v8;
      for ( i = (_QWORD *)v9[2]; ; i = v13 )
      {
        v15 = *((_DWORD *)i + 8);
        if ( v11 >= v15 )
          break;
        v13 = (_QWORD *)i[2];
        v14 = 1;
        if ( !v13 )
          goto LABEL_10;
LABEL_7:
        ;
      }
      v13 = (_QWORD *)i[3];
      v14 = 0;
      if ( v13 )
        goto LABEL_7;
LABEL_10:
      if ( !v14 )
      {
        if ( v11 <= v15 )
          goto LABEL_12;
        goto LABEL_26;
      }
LABEL_24:
      if ( (_QWORD *)v9[3] != i && *(_DWORD *)v8 <= *(_DWORD *)(std::_Rb_tree_decrement() + 32) )
      {
LABEL_12:
        *((_BYTE *)this + 25) = 0;
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(v9, v10);
        operator delete(v9);
        *((_QWORD *)this + 2) = 0;
        if ( a2 )
        {
          exception = __cxa_allocate_exception(0x30u);
          v41[0] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
          std::string::string();
          std::string::string();
          std::string::string();
          *(_QWORD *)exception = off_4D0500;
          std::string::string((std::string *)(exception + 2), (const std::string *)&v38);
          std::string::string((std::string *)(exception + 4), (const std::string *)&v39);
          std::string::string((std::string *)(exception + 6), (const std::string *)&v40);
          std::string::string((std::string *)(exception + 8), (const std::string *)v41);
          exception[10] = -1;
          if ( CoinError::printErrors_ )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v17 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
            v36 = v17;
            v18 = *(_BYTE **)((char *)v17 + *(_QWORD *)(*(_QWORD *)v17 - 24LL) + 240);
            if ( !v18 )
              std::__throw_bad_cast();
            if ( v18[56] )
            {
              v19 = v18[67];
              v20 = v17;
            }
            else
            {
              std::ctype<char>::_M_widen_init();
              v19 = 10;
              v30 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v18 + 48LL);
              if ( v30 != std::ctype<char>::do_widen )
                v19 = v30((__int64)v18, 10u);
              v20 = v36;
            }
            v21 = (std::ostream *)std::ostream::put(v20, v19);
            std::ostream::flush(v21);
          }
          if ( (_UNKNOWN *)(v38 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v29 = _InterlockedExchangeAdd((volatile signed __int32 *)(v38 - 8), 0xFFFFFFFF);
            }
            else
            {
              v29 = *(_DWORD *)(v38 - 8);
              *(_DWORD *)(v38 - 8) = v29 - 1;
            }
            if ( v29 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          if ( (_UNKNOWN *)(v39 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(v39 - 8), 0xFFFFFFFF);
            }
            else
            {
              v28 = *(_DWORD *)(v39 - 8);
              *(_DWORD *)(v39 - 8) = v28 - 1;
            }
            if ( v28 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          if ( (_UNKNOWN *)(v40 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v40 - 8), 0xFFFFFFFF);
            }
            else
            {
              v27 = *(_DWORD *)(v40 - 8);
              *(_DWORD *)(v40 - 8) = v27 - 1;
            }
            if ( v27 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          if ( (_UNKNOWN *)(v41[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(v41[0] - 8LL), 0xFFFFFFFF);
            }
            else
            {
              v26 = *(_DWORD *)(v41[0] - 8LL);
              *(_DWORD *)(v41[0] - 8LL) = v26 - 1;
            }
            if ( v26 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
        }
        v22 = __cxa_allocate_exception(0x30u);
        v41[0] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
        std::string::string();
        std::string::string();
        std::string::string();
        *(_QWORD *)v22 = off_4D0500;
        std::string::string((std::string *)(v22 + 2), (const std::string *)&v38);
        std::string::string((std::string *)(v22 + 4), (const std::string *)&v39);
        std::string::string((std::string *)(v22 + 6), (const std::string *)&v40);
        std::string::string((std::string *)(v22 + 8), (const std::string *)v41);
        v22[10] = -1;
        if ( CoinError::printErrors_ )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v37 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
          v23 = *(_BYTE **)((char *)v37 + *(_QWORD *)(*(_QWORD *)v37 - 24LL) + 240);
          if ( !v23 )
            std::__throw_bad_cast();
          if ( v23[56] )
          {
            v24 = v23[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v24 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v23 + 48LL))(v23, 10);
          }
          v25 = (std::ostream *)std::ostream::put(v37, v24);
          std::ostream::flush(v25);
        }
        if ( (_UNKNOWN *)(v38 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v38 - 8), 0xFFFFFFFF);
          }
          else
          {
            v34 = *(_DWORD *)(v38 - 8);
            *(_DWORD *)(v38 - 8) = v34 - 1;
          }
          if ( v34 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v39 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(v39 - 8), 0xFFFFFFFF);
          }
          else
          {
            v33 = *(_DWORD *)(v39 - 8);
            *(_DWORD *)(v39 - 8) = v33 - 1;
          }
          if ( v33 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v40 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(v40 - 8), 0xFFFFFFFF);
          }
          else
          {
            v32 = *(_DWORD *)(v40 - 8);
            *(_DWORD *)(v40 - 8) = v32 - 1;
          }
          if ( v32 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v41[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(v41[0] - 8LL), 0xFFFFFFFF);
          }
          else
          {
            v31 = *(_DWORD *)(v41[0] - 8LL);
            *(_DWORD *)(v41[0] - 8LL) = v31 - 1;
          }
          if ( v31 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        __cxa_throw(v22, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
      }
LABEL_26:
      if ( v9 + 1 == i )
      {
        v8 = (std::ostream *)((char *)v8 + 4);
        *(_DWORD *)(operator new(0x28u) + 32) = *((_DWORD *)v8 - 1);
        std::_Rb_tree_insert_and_rebalance();
        ++v9[5];
        if ( v35 == v8 )
          return *((_QWORD *)this + 2);
        continue;
      }
      v8 = (std::ostream *)((char *)v8 + 4);
      *(_DWORD *)(operator new(0x28u) + 32) = *((_DWORD *)v8 - 1);
      std::_Rb_tree_insert_and_rebalance();
      ++v9[5];
      if ( v8 == v35 )
        return *((_QWORD *)this + 2);
    }
  }
  return result;
}

