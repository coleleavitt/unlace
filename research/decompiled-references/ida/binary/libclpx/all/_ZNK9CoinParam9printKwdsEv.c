__int64 __fastcall CoinParam::printKwds(CoinParam *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebp
  __int64 v3; // rcx
  char v4; // si
  std::ostream *v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  char **v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 *v11; // rax
  _QWORD *v12; // rax
  _BYTE *v13; // r15
  __int64 (__fastcall *v14)(__int64, unsigned int); // rax
  _BYTE *v15; // rbx
  char v16; // si
  std::ostream *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  char **v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 *v23; // rax
  _QWORD *v24; // rax
  std::ostream *v25; // rbp
  _BYTE *v26; // r12
  char v27; // si
  std::ostream *v28; // rax
  __int64 result; // rax
  int v30; // edx
  __int64 (__fastcall *v31)(__int64, unsigned int); // rax
  __int64 (__fastcall *v32)(__int64, unsigned int); // rax
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // edx
  int v43; // edx
  __int64 v44; // [rsp+30h] [rbp-68h] BYREF
  __int64 v45; // [rsp+38h] [rbp-60h] BYREF
  char *v46; // [rsp+40h] [rbp-58h] BYREF
  __int64 v47; // [rsp+48h] [rbp-50h] BYREF
  __int64 v48; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v49[8]; // [rsp+58h] [rbp-40h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = *((_QWORD *)this + 11);
  if ( *((_QWORD *)this + 12) != v1 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      std::string::string((std::string *)&v44, (const std::string *)(v1 + 8 * v3));
      v6 = std::string::find((std::string *)&v44, 33, 0);
      v7 = v6;
      if ( v6 != -1 )
      {
        if ( (unsigned __int64)(v6 + 1) > *(_QWORD *)(v44 - 24) )
          std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
        std::string::string((std::string *)&v47, (const std::string *)&v44, v6 + 1, 0xFFFFFFFFFFFFFFFFLL);
        std::string::string((std::string *)&v45, (const std::string *)&v44, 0, v7);
        v8 = (char **)std::string::append((std::string *)&v45, "(", 1u);
        v46 = *v8;
        *v8 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
        v9 = *((_QWORD *)v46 - 3);
        v10 = v9 + *(_QWORD *)(v47 - 24);
        if ( v10 > *((_QWORD *)v46 - 2) && v10 <= *(_QWORD *)(v47 - 16) )
          v11 = (__int64 *)std::string::insert((std::string *)&v47, 0, v46, v9);
        else
          v11 = (__int64 *)std::string::append((std::string *)&v46, (const std::string *)&v47);
        v48 = *v11;
        *v11 = (__int64)&std::string::_Rep::_S_empty_rep_storage + 24;
        v12 = (_QWORD *)std::string::append((std::string *)&v48, ")", 1u);
        v49[0] = *v12;
        *v12 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
        std::string::swap((std::string *)&v44, (std::string *)v49);
        if ( (_UNKNOWN *)(v49[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v36 = _InterlockedExchangeAdd((volatile signed __int32 *)(v49[0] - 8LL), 0xFFFFFFFF);
          }
          else
          {
            v36 = *(_DWORD *)(v49[0] - 8LL);
            *(_DWORD *)(v49[0] - 8LL) = v36 - 1;
          }
          if ( v36 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v48 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v35 = _InterlockedExchangeAdd((volatile signed __int32 *)(v48 - 8), 0xFFFFFFFF);
          }
          else
          {
            v35 = *(_DWORD *)(v48 - 8);
            *(_DWORD *)(v48 - 8) = v35 - 1;
          }
          if ( v35 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( v46 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v34 = _InterlockedExchangeAdd((volatile signed __int32 *)v46 - 2, 0xFFFFFFFF);
          }
          else
          {
            v34 = *((_DWORD *)v46 - 2);
            *((_DWORD *)v46 - 2) = v34 - 1;
          }
          if ( v34 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v45 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(v45 - 8), 0xFFFFFFFF);
          }
          else
          {
            v33 = *(_DWORD *)(v45 - 8);
            *(_DWORD *)(v45 - 8) = v33 - 1;
          }
          if ( v33 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v47 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v37 = _InterlockedExchangeAdd((volatile signed __int32 *)(v47 - 8), 0xFFFFFFFF);
          }
          else
          {
            v37 = *(_DWORD *)(v47 - 8);
            *(_DWORD *)(v47 - 8) = v37 - 1;
          }
          if ( v37 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
      if ( v2 == 5 * (v2 / 5) )
      {
        v13 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
        if ( !v13 )
          std::__throw_bad_cast();
        if ( v13[56] )
        {
          v4 = v13[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v4 = 10;
          v14 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13 + 48LL);
          if ( v14 != std::ctype<char>::do_widen )
            v4 = v14((__int64)v13, 10u);
        }
        v5 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v4);
        std::ostream::flush(v5);
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (_UNKNOWN *)(v44 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(v44 - 8), 0xFFFFFFFF);
        }
        else
        {
          v30 = *(_DWORD *)(v44 - 8);
          *(_DWORD *)(v44 - 8) = v30 - 1;
        }
        if ( v30 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      v1 = *((_QWORD *)this + 11);
      v3 = ++v2;
    }
    while ( v2 < (unsigned __int64)((*((_QWORD *)this + 12) - v1) >> 3) );
  }
  v15 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( !v15 )
    std::__throw_bad_cast();
  if ( v15[56] )
  {
    v16 = v15[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v16 = 10;
    v31 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v15 + 48LL);
    if ( v31 != std::ctype<char>::do_widen )
      v16 = v31((__int64)v15, 10u);
  }
  v17 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v16);
  std::ostream::flush(v17);
  std::string::string((std::string *)&v44, (const std::string *)(*((_QWORD *)this + 11) + 8LL * *((int *)this + 28)));
  v18 = std::string::find((std::string *)&v44, 33, 0);
  v19 = v18;
  if ( v18 != -1 )
  {
    if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(v44 - 24) )
      std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
    std::string::string((std::string *)&v47, (const std::string *)&v44, v18 + 1, 0xFFFFFFFFFFFFFFFFLL);
    std::string::string((std::string *)&v45, (const std::string *)&v44, 0, v19);
    v20 = (char **)std::string::append((std::string *)&v45, "(", 1u);
    v46 = *v20;
    *v20 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    v21 = *((_QWORD *)v46 - 3);
    v22 = v21 + *(_QWORD *)(v47 - 24);
    if ( v22 > *((_QWORD *)v46 - 2) && v22 <= *(_QWORD *)(v47 - 16) )
      v23 = (__int64 *)std::string::insert((std::string *)&v47, 0, v46, v21);
    else
      v23 = (__int64 *)std::string::append((std::string *)&v46, (const std::string *)&v47);
    v48 = *v23;
    *v23 = (__int64)&std::string::_Rep::_S_empty_rep_storage + 24;
    v24 = (_QWORD *)std::string::append((std::string *)&v48, ")", 1u);
    v49[0] = *v24;
    *v24 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::string::swap((std::string *)&v44, (std::string *)v49);
    if ( (_UNKNOWN *)(v49[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v41 = _InterlockedExchangeAdd((volatile signed __int32 *)(v49[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v41 = *(_DWORD *)(v49[0] - 8LL);
        *(_DWORD *)(v49[0] - 8LL) = v41 - 1;
      }
      if ( v41 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v48 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v42 = _InterlockedExchangeAdd((volatile signed __int32 *)(v48 - 8), 0xFFFFFFFF);
      }
      else
      {
        v42 = *(_DWORD *)(v48 - 8);
        *(_DWORD *)(v48 - 8) = v42 - 1;
      }
      if ( v42 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( v46 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v43 = _InterlockedExchangeAdd((volatile signed __int32 *)v46 - 2, 0xFFFFFFFF);
      }
      else
      {
        v43 = *((_DWORD *)v46 - 2);
        *((_DWORD *)v46 - 2) = v43 - 1;
      }
      if ( v43 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v45 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v39 = _InterlockedExchangeAdd((volatile signed __int32 *)(v45 - 8), 0xFFFFFFFF);
      }
      else
      {
        v39 = *(_DWORD *)(v45 - 8);
        *(_DWORD *)(v45 - 8) = v39 - 1;
      }
      if ( v39 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v47 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v40 = _InterlockedExchangeAdd((volatile signed __int32 *)(v47 - 8), 0xFFFFFFFF);
      }
      else
      {
        v40 = *(_DWORD *)(v47 - 8);
        *(_DWORD *)(v47 - 8) = v40 - 1;
      }
      if ( v40 <= 0 )
        std::string::_Rep::_M_destroy();
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v25 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v26 = *(_BYTE **)((char *)v25 + *(_QWORD *)(*(_QWORD *)v25 - 24LL) + 240);
  if ( !v26 )
    std::__throw_bad_cast();
  if ( v26[56] )
  {
    v27 = v26[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v27 = 10;
    v32 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v26 + 48LL);
    if ( v32 != std::ctype<char>::do_widen )
      v27 = v32((__int64)v26, 10u);
  }
  v28 = (std::ostream *)std::ostream::put(v25, v27);
  std::ostream::flush(v28);
  result = v44;
  if ( (_UNKNOWN *)(v44 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v38 = _InterlockedExchangeAdd((volatile signed __int32 *)(v44 - 8), 0xFFFFFFFF);
    }
    else
    {
      v38 = *(_DWORD *)(v44 - 8);
      *(_DWORD *)(v44 - 8) = v38 - 1;
    }
    if ( v38 <= 0 )
      return std::string::_Rep::_M_destroy();
  }
  return result;
}

