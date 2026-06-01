// Alternative name is '_ZN9CoinParamC2ESsSsdddb'
__int64 __fastcall CoinParam::CoinParam(
        __int64 a1,
        const std::string *a2,
        const std::string *a3,
        char a4,
        double a5,
        double a6,
        double a7)
{
  std::string *v9; // rdi

  v9 = (std::string *)(a1 + 16);
  *((_DWORD *)v9 - 2) = 3;
  *((_QWORD *)v9 - 2) = &off_4D1B28;
  std::string::string(v9, a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(double *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 32) = 0;
  *(double *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(double *)(a1 + 56) = a7;
  *(_QWORD *)(a1 + 80) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = -1;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  std::string::string((std::string *)(a1 + 136), a3);
  *(_BYTE *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 144) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  return CoinParam::processName((CoinParam *)a1);
}

