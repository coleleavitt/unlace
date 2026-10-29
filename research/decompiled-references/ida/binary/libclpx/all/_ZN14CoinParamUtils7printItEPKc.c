__int64 __fastcall CoinParamUtils::printIt(CoinParamUtils *this, const char *a2)
{
  CoinParamUtils *v2; // rbx
  __int64 result; // rax
  int v4; // edx
  CoinParamUtils *v5; // r12
  __int64 v6; // rcx
  int *v7; // rdx
  int v8; // ecx
  _BYTE *v9; // rbx
  char v10; // si
  std::ostream *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  _BYTE *v14; // r14
  char v15; // si
  std::ostream *v16; // rax
  __int64 (__fastcall *v17)(__int64, unsigned int); // rax
  __int64 (__fastcall *v18)(__int64, unsigned int); // rax
  _BYTE v19[152]; // [rsp+0h] [rbp-98h] BYREF

  v2 = this;
  result = strlen((const char *)this);
  if ( (int)result > 0 )
  {
    v4 = 0;
    v5 = (CoinParamUtils *)((char *)this + (unsigned int)(result - 1) + 1);
    do
    {
      result = *(unsigned __int8 *)v2;
      if ( (_BYTE)result == 10 )
        goto LABEL_36;
      if ( v4 <= 64 )
      {
        v6 = v4;
        goto LABEL_24;
      }
      if ( (_BYTE)result == 32 || (v6 = v4, (_BYTE)result == 9) )
      {
LABEL_36:
        do
        {
LABEL_16:
          v19[v4] = 0;
          v12 = (int *)v19;
          do
            v13 = *v12++;
          while ( (~v13 & (v13 - 16843009) & 0x80808080) == 0 );
          std::__ostream_insert<char,std::char_traits<char>>();
          v14 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
          if ( !v14 )
            goto LABEL_33;
          if ( v14[56] )
          {
            v15 = v14[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v15 = 10;
            v17 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v14 + 48LL);
            if ( v17 != std::ctype<char>::do_widen )
              v15 = v17((__int64)v14, 10u);
          }
          v2 = (CoinParamUtils *)((char *)v2 + 1);
          v16 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v15);
          result = std::ostream::flush(v16);
          if ( v2 == v5 )
            return result;
          result = *(unsigned __int8 *)v2;
          v4 = 0;
        }
        while ( (_BYTE)result == 10 );
        v6 = 0;
LABEL_24:
        while ( !(_DWORD)v6 && (_BYTE)result == 32 )
        {
          v2 = (CoinParamUtils *)((char *)v2 + 1);
          if ( v2 == v5 )
            return result;
          result = *(unsigned __int8 *)v2;
          v4 = 0;
          if ( (_BYTE)result == 10 )
            goto LABEL_16;
        }
      }
      v2 = (CoinParamUtils *)((char *)v2 + 1);
      v4 = v6 + 1;
      v19[v6] = result;
    }
    while ( v5 != v2 );
    v19[v4] = 0;
    v7 = (int *)v19;
    do
      v8 = *v7++;
    while ( (~v8 & (v8 - 16843009) & 0x80808080) == 0 );
    std::__ostream_insert<char,std::char_traits<char>>();
    v9 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
    if ( !v9 )
LABEL_33:
      std::__throw_bad_cast();
    if ( v9[56] )
    {
      v10 = v9[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v10 = 10;
      v18 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v9 + 48LL);
      if ( v18 != std::ctype<char>::do_widen )
        v10 = v18((__int64)v9, 10u);
    }
    v11 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v10);
    return std::ostream::flush(v11);
  }
  return result;
}

