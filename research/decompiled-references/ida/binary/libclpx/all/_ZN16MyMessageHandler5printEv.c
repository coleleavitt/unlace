__int64 __fastcall MyMessageHandler::print(char **this)
{
  unsigned int v2; // r12d
  int v3; // r13d
  __int64 v5; // rax
  int v6; // r12d
  double *v7; // r13
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64); // rdi
  double *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  double v13; // xmm0_8
  char *v14; // rsi
  double v15; // xmm0_8
  int v16; // edx
  std::ostream *v17; // r12
  _BYTE *v18; // rbp
  char v19; // si
  std::ostream *v20; // rax
  char *v21; // rbp
  char *v22; // r8
  signed __int64 v23; // r12
  char *v24; // rcx
  signed __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  char *v28; // rdx
  char *v29; // rdi
  char *v30; // rsi
  __int64 (__fastcall *v31)(__int64, unsigned int); // rax
  char *v32; // rax
  void *v33; // rdi
  __int64 v34; // r12
  double v35; // xmm0_8
  double v36; // xmm0_8
  char *v37; // rsi
  char *v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rdx
  char *v41; // rbp
  signed __int64 v42; // r12
  char *v43; // rcx
  signed __int64 v44; // r12
  __int64 *v45; // rdx
  char *v46; // rax
  double v47; // [rsp+8h] [rbp-200h]
  __int64 v48; // [rsp+10h] [rbp-1F8h]
  double v49; // [rsp+28h] [rbp-1E0h] BYREF
  void *src[2]; // [rsp+30h] [rbp-1D8h] BYREF
  void *v51; // [rsp+40h] [rbp-1C8h]

  std::string::string((std::string *)src, (const std::string *)(this + 195));
  v2 = std::string::compare((std::string *)src, "Clp");
  if ( (char *)src[0] - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v16 = _InterlockedExchangeAdd((volatile signed __int32 *)src[0] - 2, 0xFFFFFFFF);
    }
    else
    {
      v16 = *((_DWORD *)src[0] - 2);
      *((_DWORD *)src[0] - 2) = v16 - 1;
    }
    if ( v16 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  if ( v2 )
    return (unsigned int)CoinMessageHandler::print((CoinMessageHandler *)this);
  CoinOneMessage::CoinOneMessage((CoinOneMessage *)src, (const CoinOneMessage *)(this + 16));
  v3 = (int)src[0];
  CoinOneMessage::~CoinOneMessage((CoinOneMessage *)src);
  if ( v3 != 102 )
    return (unsigned int)CoinMessageHandler::print((CoinMessageHandler *)this);
  printf("There are %d primal infeasibilities\n", *(_DWORD *)(*((_QWORD *)*(this + 200) + 165) + 112LL));
  v5 = (__int64)*(this + 200);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 1320) + 112LL) )
    return v2;
  v6 = *(_DWORD *)(v5 + 108);
  v7 = *(double **)(v5 + 1216);
  v51 = nullptr;
  *(_OWORD *)src = 0;
  v8 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64))(v5 + 160);
  if ( v8 )
  {
    v9 = (double *)(**v8)(v8, 0, 0, &v49, 0, 2);
    v5 = (__int64)*(this + 200);
  }
  else
  {
    v9 = nullptr;
  }
  v10 = *(_QWORD *)(v5 + 232);
  if ( v10 )
  {
    if ( v6 <= 0 )
    {
      v47 = 0.0;
    }
    else
    {
      v11 = (unsigned int)(v6 - 1);
      v12 = 0;
      v47 = 0.0;
      v48 = 8 * v11 + 8;
      do
      {
        v14 = (char *)src[1];
        v15 = v7[v12 / 8] * *(double *)(v10 + v12);
        v49 = v15;
        if ( src[1] == v51 )
        {
          std::vector<double>::_M_realloc_insert<double>();
        }
        else
        {
          if ( src[1] )
            *(double *)src[1] = v15;
          src[1] = v14 + 8;
        }
        v13 = v7[v12 / 8] * v9[v12 / 8] * *(double *)(v10 + v12);
        v12 += 8LL;
        v47 = v13 + v47;
      }
      while ( v48 != v12 );
    }
  }
  else if ( v6 <= 0 )
  {
    v47 = 0.0;
  }
  else
  {
    v34 = (__int64)&v7[(unsigned int)(v6 - 1) + 1];
    v47 = 0.0;
    do
    {
      v37 = (char *)src[1];
      if ( src[1] == v51 )
      {
        std::vector<double>::_M_realloc_insert<double const&>();
        v35 = *v7;
      }
      else
      {
        v35 = *v7;
        if ( src[1] )
        {
          *(double *)src[1] = v35;
          v35 = *v7;
        }
        src[1] = v37 + 8;
      }
      v36 = v35 * *v9;
      ++v7;
      ++v9;
      v47 = v36 + v47;
    }
    while ( (double *)v34 != v7 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v17 = (std::ostream *)std::ostream::_M_insert<double>();
  v18 = *(_BYTE **)((char *)v17 + *(_QWORD *)(*(_QWORD *)v17 - 24LL) + 240);
  if ( !v18 )
    std::__throw_bad_cast();
  if ( v18[56] )
  {
    v19 = v18[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v19 = 10;
    v31 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v18 + 48LL);
    if ( v31 != std::ctype<char>::do_widen )
      v19 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v31)(v18, 10, v47);
  }
  v20 = (std::ostream *)std::ostream::put(v17, v19);
  std::ostream::flush(v20);
  v21 = *(this + 203);
  if ( v21 == *(this + 204) )
  {
    v38 = *(this + 206);
    if ( v38 == *(this + 201) )
    {
      std::deque<std::vector<double>>::_M_reallocate_map(this + 201, 1, 1, v47);
      v38 = *(this + 206);
    }
    v39 = operator new(0x1F8u);
    v40 = (__int64)*(this + 206);
    *((_QWORD *)v38 - 1) = v39;
    v41 = *(char **)(v40 - 8);
    v27 = v40 - 8;
    *(this + 206) = (char *)(v40 - 8);
    v22 = v41 + 480;
    v28 = v41 + 504;
    *(this + 204) = v41;
    *(this + 205) = v41 + 504;
    *(this + 203) = v41 + 480;
    if ( v41 != (char *)-480LL )
    {
      v42 = (char *)src[1] - (char *)src[0];
      v43 = nullptr;
      *((_QWORD *)v41 + 60) = 0;
      *((_QWORD *)v41 + 61) = 0;
      *((_QWORD *)v41 + 62) = 0;
      if ( v42 >> 3 )
      {
        if ( (unsigned __int64)(v42 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v43 = (char *)operator new(v42);
      }
      *((_QWORD *)v41 + 60) = v43;
      *((_QWORD *)v41 + 61) = v43;
      *((_QWORD *)v41 + 62) = &v43[v42];
      v44 = (char *)src[1] - (char *)src[0];
      if ( src[1] != src[0] )
        v43 = (char *)memmove(v43, src[0], (char *)src[1] - (char *)src[0]);
      v27 = (__int64)*(this + 206);
      v28 = *(this + 205);
      *((_QWORD *)v41 + 61) = &v43[v44];
      v22 = *(this + 203);
    }
  }
  else
  {
    v22 = v21 - 24;
    if ( v21 != (char *)&off_18 )
    {
      v23 = (char *)src[1] - (char *)src[0];
      v24 = nullptr;
      *((_QWORD *)v21 - 3) = 0;
      *((_QWORD *)v21 - 2) = 0;
      *((_QWORD *)v21 - 1) = 0;
      if ( v23 >> 3 )
      {
        if ( (unsigned __int64)(v23 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v24 = (char *)operator new(v23);
      }
      *((_QWORD *)v21 - 3) = v24;
      *((_QWORD *)v21 - 2) = v24;
      *((_QWORD *)v21 - 1) = &v24[v23];
      v25 = (char *)src[1] - (char *)src[0];
      if ( src[1] != src[0] )
        v24 = (char *)memmove(v24, src[0], (char *)src[1] - (char *)src[0]);
      v26 = (__int64)*(this + 203);
      *((_QWORD *)v21 - 2) = &v24[v25];
      v22 = (char *)(v26 - 24);
    }
    v27 = (__int64)*(this + 206);
    v28 = *(this + 205);
    *(this + 203) = v22;
  }
  v29 = *(this + 207);
  v30 = *(this + 208);
  if ( (unsigned __int64)(21 * (((__int64)&(*(this + 210))[-v27] >> 3) - 1)
                        - 0x5555555555555555LL * ((v29 - v30) >> 3)
                        - 0x5555555555555555LL * ((v28 - v22) >> 3)) > 9 )
  {
    if ( v29 == v30 )
    {
      operator delete(v29);
      v45 = (__int64 *)(*(this + 210) - 8);
      v46 = (char *)*v45;
      *(this + 210) = (char *)v45;
      v33 = *((void **)v46 + 60);
      *(this + 208) = v46;
      *(this + 209) = v46 + 504;
      *(this + 207) = v46 + 480;
      if ( !v33 )
        goto LABEL_37;
    }
    else
    {
      v32 = v29 - 24;
      v33 = *((void **)v29 - 3);
      *(this + 207) = v32;
      if ( !v33 )
        goto LABEL_37;
    }
    operator delete(v33);
  }
LABEL_37:
  if ( src[0] )
    operator delete(src[0]);
  return 0;
}

