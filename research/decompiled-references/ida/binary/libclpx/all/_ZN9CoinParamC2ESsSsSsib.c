// Alternative name is '_ZN9CoinParamC1ESsSsSsib'
__int64 __fastcall CoinParam::CoinParam(
        __int64 a1,
        const std::string *a2,
        const std::string *a3,
        const std::string *a4,
        int a5,
        char a6)
{
  std::string *v9; // rdi
  __int64 result; // rax
  std::string *v12; // rdi

  v9 = (std::string *)(a1 + 16);
  *((_DWORD *)v9 - 2) = 5;
  *((_QWORD *)v9 - 2) = &off_4D1B28;
  std::string::string(v9, a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 80) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = a5;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  std::string::string((std::string *)(a1 + 136), a3);
  *(_BYTE *)(a1 + 152) = a6;
  *(_QWORD *)(a1 + 144) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  result = CoinParam::processName((CoinParam *)a1);
  v12 = *(std::string **)(a1 + 96);
  if ( v12 == *(std::string **)(a1 + 104) )
    return std::vector<std::string>::_M_realloc_insert<std::string const&>();
  if ( v12 )
  {
    result = std::string::string(v12, a4);
    v12 = *(std::string **)(a1 + 96);
  }
  *(_QWORD *)(a1 + 96) = (char *)v12 + 8;
  return result;
}

