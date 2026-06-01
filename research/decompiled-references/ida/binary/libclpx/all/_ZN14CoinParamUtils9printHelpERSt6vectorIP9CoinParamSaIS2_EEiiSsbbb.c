__int64 __fastcall CoinParamUtils::printHelp(
        _QWORD *a1,
        int a2,
        int a3,
        _QWORD *a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        char a7)
{
  int v7; // r15d
  char v8; // r12
  __int64 v9; // r13
  int v10; // ebp
  _BYTE *v11; // rbp
  char v12; // si
  std::ostream *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  _BYTE *v16; // r12
  char v17; // si
  std::ostream *v18; // rax
  _BYTE *v19; // r13
  __int64 v20; // r12
  char v21; // si
  std::ostream *v22; // rax
  __int64 v23; // rax
  char v24; // si
  std::ostream *v25; // rax
  __int64 v26; // rax
  char v27; // si
  std::ostream *v28; // rax
  std::ostream *v29; // rbp
  _BYTE *v30; // r13
  char v31; // si
  std::ostream *v32; // rax
  __int64 v33; // rbp
  __int64 (__fastcall *v34)(__int64, unsigned int); // rax
  __int64 v35; // r12
  char v36; // si
  std::ostream *v37; // rax
  __int64 v38; // rbp
  __int64 (__fastcall *v39)(__int64, unsigned int); // rax
  char v40; // si
  std::ostream *v41; // rax
  char v43; // si
  std::ostream *v44; // rax
  __int64 (__fastcall *v45)(__int64, unsigned int); // rax
  __int64 (__fastcall *v46)(__int64, unsigned int); // rax
  __int64 (__fastcall *v47)(__int64, unsigned int); // rax
  int v48; // edx
  __int64 (__fastcall *v49)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v50)(__int64, unsigned int); // rax
  __int64 (__fastcall *v51)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v52)(__int64, unsigned int); // rax
  int v53; // edx
  int v54; // edx
  int v55; // edx
  int v56; // edx
  char v58; // [rsp+18h] [rbp-70h]
  int v59; // [rsp+20h] [rbp-68h]
  __int64 v60; // [rsp+20h] [rbp-68h]
  __int64 v61; // [rsp+20h] [rbp-68h]
  int v62; // [rsp+34h] [rbp-54h]
  CoinParamUtils *v63[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = a2;
  v8 = a5 | a6;
  if ( a5 | a6 )
  {
    v19 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
    if ( !a5 )
    {
      if ( a2 <= a3 )
      {
        v20 = 8LL * a2;
        while ( 1 )
        {
          v33 = *(_QWORD *)(*a1 + v20);
          if ( v33 && (*(_BYTE *)(v33 + 152) || a7) )
          {
            if ( !v19 )
              goto LABEL_106;
            if ( v19[56] )
            {
              v21 = v19[67];
            }
            else
            {
              std::ctype<char>::_M_widen_init();
              v21 = 10;
              v34 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 48LL);
              if ( v34 != std::ctype<char>::do_widen )
                v21 = v34((__int64)v19, 10u);
            }
            v22 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v21);
            std::ostream::flush(v22);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            CoinParam::matchName((CoinParam *)v63);
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( (_UNKNOWN *)((char *)v63[0] - 24) != &std::string::_Rep::_S_empty_rep_storage )
            {
              if ( &_pthread_key_create )
              {
                v55 = _InterlockedExchangeAdd((volatile signed __int32 *)v63[0] - 2, 0xFFFFFFFF);
              }
              else
              {
                v55 = *((_DWORD *)v63[0] - 2);
                *((_DWORD *)v63[0] - 2) = v55 - 1;
              }
              if ( v55 <= 0 )
                std::string::_Rep::_M_destroy();
            }
            v23 = *(_QWORD *)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
            if ( !v23 )
              goto LABEL_106;
            if ( *(_BYTE *)(v23 + 56) )
            {
              v24 = *(_BYTE *)(v23 + 67);
            }
            else
            {
              v60 = *(_QWORD *)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
              std::ctype<char>::_M_widen_init();
              v24 = 10;
              v49 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v60 + 48LL);
              if ( v49 != std::ctype<char>::do_widen )
                v24 = v49(v60, 10u);
            }
            v25 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v24);
            std::ostream::flush(v25);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v26 = *(_QWORD *)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
            if ( !v26 )
              goto LABEL_106;
            if ( *(_BYTE *)(v26 + 56) )
            {
              v27 = *(_BYTE *)(v26 + 67);
            }
            else
            {
              v61 = *(_QWORD *)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
              std::ctype<char>::_M_widen_init();
              v27 = 10;
              v51 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v61 + 48LL);
              if ( v51 != std::ctype<char>::do_widen )
                v27 = v51(v61, 10u);
            }
            v28 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v27);
            std::ostream::flush(v28);
            std::string::string((std::string *)v63, (const std::string *)(v33 + 144));
            CoinParamUtils::printIt(v63[0], (const char *)(v33 + 144));
            if ( (_UNKNOWN *)((char *)v63[0] - 24) != &std::string::_Rep::_S_empty_rep_storage )
            {
              if ( &_pthread_key_create )
              {
                v56 = _InterlockedExchangeAdd((volatile signed __int32 *)v63[0] - 2, 0xFFFFFFFF);
              }
              else
              {
                v56 = *((_DWORD *)v63[0] - 2);
                *((_DWORD *)v63[0] - 2) = v56 - 1;
              }
              if ( v56 <= 0 )
                std::string::_Rep::_M_destroy();
            }
            v29 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v30 = *(_BYTE **)((char *)v29 + *(_QWORD *)(*(_QWORD *)v29 - 24LL) + 240);
            if ( !v30 )
              goto LABEL_106;
            if ( v30[56] )
            {
              v31 = v30[67];
            }
            else
            {
              std::ctype<char>::_M_widen_init();
              v31 = 10;
              v50 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v30 + 48LL);
              if ( v50 != std::ctype<char>::do_widen )
                v31 = v50((__int64)v30, 10u);
            }
            v32 = (std::ostream *)std::ostream::put(v29, v31);
            std::ostream::flush(v32);
            v19 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
          }
          ++v7;
          v20 += 8;
          if ( a3 < v7 )
            goto LABEL_58;
        }
      }
      goto LABEL_58;
    }
    if ( a2 <= a3 )
    {
      v35 = 8LL * a2;
      while ( 1 )
      {
        v38 = *(_QWORD *)(*a1 + v35);
        if ( v38 && (*(_BYTE *)(v38 + 152) || a7) )
        {
          if ( !v19 )
            goto LABEL_106;
          if ( v19[56] )
          {
            v36 = v19[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v36 = 10;
            v39 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 48LL);
            if ( v39 != std::ctype<char>::do_widen )
              v36 = v39((__int64)v19, 10u);
          }
          v37 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v36);
          std::ostream::flush(v37);
          std::__ostream_insert<char,std::char_traits<char>>();
          CoinParam::matchName((CoinParam *)v63);
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( (_UNKNOWN *)((char *)v63[0] - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v54 = _InterlockedExchangeAdd((volatile signed __int32 *)v63[0] - 2, 0xFFFFFFFF);
            }
            else
            {
              v54 = *((_DWORD *)v63[0] - 2);
              *((_DWORD *)v63[0] - 2) = v54 - 1;
            }
            if ( v54 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          std::string::string((std::string *)v63, (const std::string *)(v38 + 136));
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( (_UNKNOWN *)((char *)v63[0] - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v53 = _InterlockedExchangeAdd((volatile signed __int32 *)v63[0] - 2, 0xFFFFFFFF);
            }
            else
            {
              v53 = *((_DWORD *)v63[0] - 2);
              *((_DWORD *)v63[0] - 2) = v53 - 1;
            }
            if ( v53 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          v19 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
        }
        ++v7;
        v35 += 8;
        if ( a3 < v7 )
          goto LABEL_62;
      }
    }
    goto LABEL_62;
  }
  if ( a2 > a3 )
  {
    v19 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
    goto LABEL_58;
  }
  v9 = 8LL * a2;
  v10 = 0;
  v62 = *(_DWORD *)(*a4 - 24LL);
  do
  {
    v14 = *(_QWORD *)(*a1 + v9);
    if ( v14 )
    {
      v58 = *(_BYTE *)(v14 + 152) | a7;
      if ( v58 )
      {
        CoinParam::matchName((CoinParam *)v63);
        v15 = *((_QWORD *)v63[0] - 3);
        v59 = v15;
        if ( !v8 )
        {
          v16 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
          if ( !v16 )
            std::__throw_bad_cast();
          if ( v16[56] )
          {
            v17 = v16[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v17 = 10;
            v47 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v16 + 48LL);
            if ( v47 != std::ctype<char>::do_widen )
              v17 = v47((__int64)v16, 10u);
          }
          v18 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v17);
          std::ostream::flush(v18);
          std::__ostream_insert<char,std::char_traits<char>>();
          v10 += v62;
          LODWORD(v15) = v59;
        }
        v10 += v15 + 2;
        if ( v10 > 80 )
        {
          v11 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
          if ( !v11 )
            std::__throw_bad_cast();
          if ( v11[56] )
          {
            v12 = v11[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v12 = 10;
            v46 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v11 + 48LL);
            if ( v46 != std::ctype<char>::do_widen )
              v12 = v46((__int64)v11, 10u);
          }
          v13 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v12);
          std::ostream::flush(v13);
          std::__ostream_insert<char,std::char_traits<char>>();
          v10 = v62 + 2 + v59;
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( (_UNKNOWN *)((char *)v63[0] - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v48 = _InterlockedExchangeAdd((volatile signed __int32 *)v63[0] - 2, 0xFFFFFFFF);
          }
          else
          {
            v48 = *((_DWORD *)v63[0] - 2);
            *((_DWORD *)v63[0] - 2) = v48 - 1;
          }
          if ( v48 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        v8 = v58;
      }
    }
    ++v7;
    v9 += 8;
  }
  while ( a3 >= v7 );
  v19 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( v8 )
  {
LABEL_62:
    if ( !v19 )
LABEL_106:
      std::__throw_bad_cast();
    if ( v19[56] )
    {
      v43 = v19[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v43 = 10;
      v52 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 48LL);
      if ( v52 != std::ctype<char>::do_widen )
        v43 = v52((__int64)v19, 10u);
    }
    v44 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v43);
    std::ostream::flush(v44);
    v19 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  }
LABEL_58:
  if ( !v19 )
    goto LABEL_106;
  if ( v19[56] )
  {
    v40 = v19[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v40 = 10;
    v45 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 48LL);
    if ( v45 != std::ctype<char>::do_widen )
      v40 = v45((__int64)v19, 10u);
  }
  v41 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v40);
  return std::ostream::flush(v41);
}

