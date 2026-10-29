void __fastcall CoinPrePostsolveMatrix::setArtificialStatus(CoinPrePostsolveMatrix *this, const char *a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  char v6; // cl
  int v7; // edx
  _BYTE *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  void *exception; // r13
  int v12; // [rsp+Ch] [rbp-6Ch]
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]

  if ( a3 < 0 )
  {
    a3 = *((_DWORD *)this + 1);
    if ( *((_QWORD *)this + 24) )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + 4) < a3 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2407B0(v13 - 24);
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2407B0(v14 - 24);
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2407B0(v15 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  if ( !*((_QWORD *)this + 24) )
  {
LABEL_9:
    v12 = a3;
    v9 = operator new[](*((_DWORD *)this + 3) + *((_DWORD *)this + 4));
    v10 = *((int *)this + 3);
    *((_QWORD *)this + 24) = v9;
    a3 = v12;
    *((_QWORD *)this + 25) = v10 + v9;
  }
LABEL_4:
  if ( a3 > 0 )
  {
    v4 = 0;
    v5 = (unsigned int)(a3 - 1) + 1LL;
    do
    {
      v6 = (2 * v4) & 6;
      v7 = a2[(int)v4 >> 2];
      v8 = (_BYTE *)(v4 + *((_QWORD *)this + 25));
      ++v4;
      *v8 = (v7 >> v6) & 3 | *v8 & 0xF8;
    }
    while ( v5 != v4 );
  }
}

