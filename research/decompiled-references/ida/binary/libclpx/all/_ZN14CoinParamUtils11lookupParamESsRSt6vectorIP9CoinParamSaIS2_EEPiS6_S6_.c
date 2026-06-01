__int64 __fastcall CoinParamUtils::lookupParam(std::string *this, int a2, _DWORD *a3, _DWORD *a4, int *a5)
{
  __int64 v5; // r9
  __int64 v6; // r15
  int v8; // r12d
  __int64 v9; // r13
  int v10; // ebx
  int v11; // r8d
  int v12; // r9d
  int matched; // r14d
  int v14; // eax
  int v15; // edx
  unsigned int v16; // r12d
  std::ostream *v17; // r13
  _BYTE *v18; // r14
  char v19; // si
  std::ostream *v20; // rax
  int v21; // edx
  std::ostream *v22; // r14
  __int64 v23; // rax
  char v24; // si
  std::ostream *v25; // rax
  __int64 (__fastcall *v27)(__int64, unsigned int); // rax
  int v28; // edx
  int v29; // edx
  __int64 (__fastcall *v30)(__int64, unsigned int); // rdx
  int v31; // [rsp+0h] [rbp-78h]
  __int64 v32; // [rsp+8h] [rbp-70h]
  int v33; // [rsp+10h] [rbp-68h]
  int *v34; // [rsp+10h] [rbp-68h]
  __int64 v35; // [rsp+10h] [rbp-68h]
  int v36; // [rsp+18h] [rbp-60h]
  _DWORD *v37; // [rsp+18h] [rbp-60h]
  int v38; // [rsp+20h] [rbp-58h]
  int v39; // [rsp+28h] [rbp-50h]
  unsigned int v40; // [rsp+30h] [rbp-48h] BYREF
  int v41; // [rsp+34h] [rbp-44h] BYREF
  _QWORD v42[8]; // [rsp+38h] [rbp-40h] BYREF

  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(*(_QWORD *)this - 24LL);
  if ( !v6 )
    return (unsigned int)-3;
  v36 = (int)a4;
  v33 = (int)a3;
  v8 = *(_QWORD *)(*(_QWORD *)this - 24LL);
  if ( (int)v6 - 1 < 0 )
  {
    v10 = 0;
    if ( (_DWORD)v6 )
      goto LABEL_16;
    v10 = -3;
  }
  else
  {
    v9 = (int)v6 - 1;
    v10 = 0;
    while ( 1 )
    {
      if ( *(int *)(v5 - 8) >= 0 )
      {
        std::string::_M_leak_hard(this);
        v5 = *(_QWORD *)this;
      }
      if ( *(_BYTE *)(v5 + v9) != 63 )
        break;
      ++v10;
      --v9;
      if ( (_DWORD)v6 == v10 )
        goto LABEL_45;
    }
    if ( (_DWORD)v6 != v10 )
      goto LABEL_15;
LABEL_45:
    if ( v10 == 2 )
    {
      v8 = 1;
      v10 = 1;
      goto LABEL_16;
    }
    if ( v10 == 3 || v10 == 1 )
    {
      v8 = v10;
      v10 = 0;
      goto LABEL_16;
    }
    v10 -= 3;
  }
LABEL_15:
  v8 = v6 - v10;
LABEL_16:
  std::string::string((std::string *)v42, this, 0, v8);
  std::string::swap(this, (std::string *)v42);
  if ( (_UNKNOWN *)(v42[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v29 = _InterlockedExchangeAdd((volatile signed __int32 *)(v42[0] - 8LL), 0xFFFFFFFF);
    }
    else
    {
      v29 = *(_DWORD *)(v42[0] - 8LL);
      *(_DWORD *)(v42[0] - 8LL) = v29 - 1;
    }
    if ( v29 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  if ( a5 )
    *a5 = v10;
  std::string::string((std::string *)v42, this);
  matched = CoinParamUtils::matchParam(
              a2,
              (int)v42,
              (int)&v40,
              (int)&v41,
              v11,
              v12,
              v31,
              a2,
              v33,
              v36,
              v38,
              v39,
              0xFFFFFFFFLL);
  if ( (_UNKNOWN *)(v42[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(v42[0] - 8LL), 0xFFFFFFFF);
    }
    else
    {
      v28 = *(_DWORD *)(v42[0] - 8LL);
      *(_DWORD *)(v42[0] - 8LL) = v28 - 1;
    }
    if ( v28 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  if ( v34 )
    *v34 = matched;
  v14 = v41;
  if ( v37 )
    *v37 = v41;
  v15 = matched + v14;
  if ( v10 > 0 )
  {
    if ( !v15 )
      return (unsigned int)-1;
    v16 = -1;
    if ( matched != 1 )
    {
LABEL_27:
      if ( v15 != 1 )
      {
        if ( matched <= 1 )
          goto LABEL_29;
        goto LABEL_41;
      }
      goto LABEL_55;
    }
    goto LABEL_54;
  }
  if ( !v15 )
    return (unsigned int)-3;
  if ( matched <= 1 )
  {
    if ( matched != 1 )
    {
      v16 = -2;
      goto LABEL_27;
    }
    if ( !(v10 | v14) )
      return v40;
    v16 = -2;
LABEL_54:
    if ( v15 != 1 )
      goto LABEL_29;
    goto LABEL_55;
  }
  v16 = -4;
  if ( v15 != 1 )
  {
LABEL_41:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v22 = (std::ostream *)std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v23 = *(_QWORD *)((char *)v22 + *(_QWORD *)(*(_QWORD *)v22 - 24LL) + 240);
    if ( !v23 )
      goto LABEL_78;
    if ( *(_BYTE *)(v23 + 56) )
    {
      v24 = *(_BYTE *)(v23 + 67);
    }
    else
    {
      v35 = *(_QWORD *)((char *)v22 + *(_QWORD *)(*(_QWORD *)v22 - 24LL) + 240);
      std::ctype<char>::_M_widen_init();
      v24 = 10;
      v30 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v35 + 48LL);
      if ( v30 != std::ctype<char>::do_widen )
        v24 = v30(v35, 10u);
    }
    v25 = (std::ostream *)std::ostream::put(v22, v24);
    std::ostream::flush(v25);
LABEL_29:
    std::__ostream_insert<char,std::char_traits<char>>();
    v17 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v18 = *(_BYTE **)((char *)v17 + *(_QWORD *)(*(_QWORD *)v17 - 24LL) + 240);
    if ( v18 )
    {
      if ( v18[56] )
      {
        v19 = v18[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v19 = 10;
        v27 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v18 + 48LL);
        if ( v27 != std::ctype<char>::do_widen )
          v19 = v27((__int64)v18, 10u);
      }
      v20 = (std::ostream *)std::ostream::put(v17, v19);
      std::ostream::flush(v20);
      std::string::string((std::string *)v42, this);
      CoinParamUtils::shortOrHelpMany(v32, v42, (unsigned int)v10);
      goto LABEL_33;
    }
LABEL_78:
    std::__throw_bad_cast();
  }
LABEL_55:
  std::string::string((std::string *)v42, this);
  CoinParamUtils::shortOrHelpOne();
LABEL_33:
  if ( (_UNKNOWN *)(v42[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v42[0] - 8LL), 0xFFFFFFFF);
    }
    else
    {
      v21 = *(_DWORD *)(v42[0] - 8LL);
      *(_DWORD *)(v42[0] - 8LL) = v21 - 1;
    }
    if ( v21 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  return v16;
}

