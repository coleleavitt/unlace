// Alternative name is '_ZN9CoinParamC2ESsSsSsb'
__int64 __fastcall CoinParam::CoinParam(
        __int64 a1,
        const std::string *a2,
        const std::string *a3,
        const std::string *a4,
        char a5)
{
  std::string *v7; // rdi

  v7 = (std::string *)(a1 + 16);
  *((_DWORD *)v7 - 2) = 4;
  *((_QWORD *)v7 - 2) = &off_4D1B28;
  std::string::string(v7, a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  std::string::string((std::string *)(a1 + 80), a4);
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  std::string::string((std::string *)(a1 + 136), a3);
  *(_BYTE *)(a1 + 152) = a5;
  *(_QWORD *)(a1 + 144) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  return CoinParam::processName((CoinParam *)a1);
}

