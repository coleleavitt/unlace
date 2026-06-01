_BYTE *__fastcall CoinPrePostsolveMatrix::setStructuralStatus(CoinPrePostsolveMatrix *this, const char *a2, int a3)
{
  _BYTE *result; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edi
  char v9; // cl
  __int64 v10; // rcx
  void *exception; // r13
  int v12; // [rsp+Ch] [rbp-6Ch]
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]

  if ( a3 < 0 )
  {
    result = *((_BYTE **)this + 24);
    a3 = *(_DWORD *)this;
    if ( result )
      goto LABEL_4;
    goto LABEL_10;
  }
  if ( *((_DWORD *)this + 3) < a3 )
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
  result = *((_BYTE **)this + 24);
  if ( !result )
  {
LABEL_10:
    v12 = a3;
    result = (_BYTE *)operator new[](*((_DWORD *)this + 3) + *((_DWORD *)this + 4));
    v10 = *((int *)this + 3);
    *((_QWORD *)this + 24) = result;
    a3 = v12;
    *((_QWORD *)this + 25) = &result[v10];
  }
LABEL_4:
  if ( a3 > 0 )
  {
    v5 = (unsigned int)(a3 - 1);
    v6 = 0;
    v7 = v5 + 1;
    while ( 1 )
    {
      result += v6;
      v8 = a2[(int)v6 >> 2];
      v9 = 2 * v6++;
      *result = (v8 >> (v9 & 6)) & 3 | *result & 0xF8;
      if ( v7 == v6 )
        break;
      result = *((_BYTE **)this + 24);
    }
  }
  return result;
}

